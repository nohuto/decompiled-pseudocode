/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14033AA6C
 * Callers:
 *     MiCopyDataPageToImagePage @ 0x14026085C (MiCopyDataPageToImagePage.c)
 *     MiCopyHeaderIfResident @ 0x140265B30 (MiCopyHeaderIfResident.c)
 *     MiGetPageProtection @ 0x1402B25A0 (MiGetPageProtection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053A8A8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiAddLockedPageCharge @ 0x1402296A0 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWriteValidPteVolatile @ 0x140245E30 (MiWriteValidPteVolatile.c)
 *     MiTryLockLeafPage @ 0x14033AC04 (MiTryLockLeafPage.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(unsigned __int64 a1, __int64 a2, __int64 *a3, __int64 a4)
{
  volatile signed __int64 *v7; // r14
  unsigned __int64 v8; // rdi
  BOOL v9; // eax
  __int64 Flink; // rdx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ebx
  __int64 v14; // rsi
  unsigned __int64 v15; // rcx
  char v16; // cl
  __int64 v18; // rax
  __int64 v19; // rax
  volatile signed __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v7 = (volatile signed __int64 *)(((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v20 = *v7;
  v8 = v20;
  if ( (v20 & 1) == 0 )
    return 3221435187LL;
  v9 = MiPteInShadowRange((unsigned __int64)&v20);
  v11 = v9;
  if ( v9
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v18 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v20 >> 3) & 0x1FF));
      Flink = v8 | 0x20;
      if ( (v18 & 0x20) == 0 )
        Flink = v8;
      v8 = Flink;
      if ( (v18 & 0x42) != 0 )
        v8 = Flink;
    }
  }
  v12 = (v8 >> 12) & 0xFFFFFFFFFLL;
  if ( ((*(_QWORD *)(48 * v12 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
    return 3221225557LL;
  v13 = 0;
  v14 = 48 * v12 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v14 + 24) & 0x4000000000000000LL) != 0 )
    goto LABEL_18;
  v15 = *v7;
  v20 = v15;
  if ( (v15 & 1) == 0 || (v15 & 0x200) != 0 )
    goto LABEL_18;
  if ( (_DWORD)v11 )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Flink + 912) != 1 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process;
        v11 = *(_QWORD *)(Flink + 1928);
        if ( v11 )
        {
          v19 = *(_QWORD *)(v11 + 8 * (((unsigned __int64)&v20 >> 3) & 0x1FF));
          v11 = v15 | 0x20;
          LOBYTE(Flink) = v19 & 0x20;
          if ( (v19 & 0x20) == 0 )
            v11 = v15;
          v15 = v11;
          if ( (v19 & 0x42) != 0 )
            v15 = v11;
        }
      }
    }
  }
  if ( v12 != ((v15 >> 12) & 0xFFFFFFFFFLL) || (*(_BYTE *)(v14 + 34) & 0x20) != 0 )
  {
LABEL_18:
    v13 = -1073741739;
  }
  else
  {
    if ( (v20 & 0x20) == 0 )
      MiWriteValidPteVolatile(v7, 1, 0);
    if ( !a4 || (v13 = MiTryLockLeafPage(a1, Flink, a4), v13 >= 0) )
    {
      MiAddLockedPageCharge(48 * v12 - 0x58000000000LL, 1LL, v11);
      v16 = *(_BYTE *)(v14 + 34) | 0x20;
      *a3 = v14;
      *(_BYTE *)(v14 + 34) = v16;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v13;
}
