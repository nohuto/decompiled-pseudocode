/*
 * XREFs of MiTryLockProtoPoolPageAtDpc @ 0x14030FA04
 * Callers:
 *     MiCopyHeaderIfResident @ 0x14029A080 (MiCopyHeaderIfResident.c)
 *     MiCopyDataPageToImagePage @ 0x14030F138 (MiCopyDataPageToImagePage.c)
 *     MiGetPageProtection @ 0x14033BAF0 (MiGetPageProtection.c)
 *     MiCopyFileOnlyGlobalSubsectionPage @ 0x14053FFB8 (MiCopyFileOnlyGlobalSubsectionPage.c)
 * Callees:
 *     MiWriteValidPteVolatile @ 0x1402E5BC0 (MiWriteValidPteVolatile.c)
 *     MiTryLockLeafPage @ 0x14030E6C8 (MiTryLockLeafPage.c)
 *     MiAddLockedPageCharge @ 0x140325158 (MiAddLockedPageCharge.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiTryLockProtoPoolPageAtDpc(__int64 *a1, __int64 a2, __int64 *a3, __int64 *a4)
{
  volatile signed __int64 *v7; // r14
  unsigned __int64 v8; // rdi
  __int64 Flink; // rdx
  int v10; // r8d
  __int64 v11; // rdi
  int v12; // ebx
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  char v15; // cl
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r8
  volatile signed __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  *a3 = 0LL;
  v7 = (volatile signed __int64 *)((((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v21 = *v7;
  v8 = v21;
  if ( (v21 & 1) == 0 )
    return 3221435187LL;
  v10 = MiPteInShadowRange(&v21);
  if ( v10
    && (MiFlags & 0xC00000) != 0
    && KeGetCurrentThread()->ApcState.Process->AddressPolicy != 1
    && ((v8 & 0x20) == 0 || (v8 & 0x42) == 0) )
  {
    Flink = (__int64)KeGetCurrentThread()->ApcState.Process[1].ProcessListEntry.Flink;
    if ( Flink )
    {
      v17 = *(_QWORD *)(Flink + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
      Flink = v8 | 0x20;
      if ( (v17 & 0x20) == 0 )
        Flink = v8;
      v8 = Flink;
      if ( (v17 & 0x42) != 0 )
        v8 = Flink;
    }
  }
  v11 = (v8 >> 12) & 0xFFFFFFFFFLL;
  if ( ((*(_QWORD *)(48 * v11 - 0x57FFFFFFFD8LL) >> 50) & 1) == 0 )
    return 3221225557LL;
  v12 = 0;
  v13 = 48 * v11 - 0x58000000000LL;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 + 24), 0x3FuLL) )
    return 3221225557LL;
  if ( (*(_QWORD *)(v13 + 24) & 0x4000000000000000LL) != 0 )
    goto LABEL_18;
  v14 = *v7;
  v21 = v14;
  if ( (v14 & 1) == 0 || (v14 & 0x200) != 0 )
    goto LABEL_18;
  if ( v10 )
  {
    if ( (MiFlags & 0xC00000) != 0 )
    {
      Flink = (__int64)KeGetCurrentThread()->ApcState.Process;
      if ( *(_BYTE *)(Flink + 912) != 1 && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
      {
        Flink = (__int64)KeGetCurrentThread()->ApcState.Process;
        v18 = *(_QWORD *)(Flink + 1928);
        if ( v18 )
        {
          v19 = *(_QWORD *)(v18 + 8 * (((unsigned __int64)&v21 >> 3) & 0x1FF));
          v20 = v14 | 0x20;
          LOBYTE(Flink) = v19 & 0x20;
          if ( (v19 & 0x20) == 0 )
            v20 = v14;
          v14 = v20;
          if ( (v19 & 0x42) != 0 )
            v14 = v20;
        }
      }
    }
  }
  if ( v11 != ((v14 >> 12) & 0xFFFFFFFFFLL) || (*(_BYTE *)(v13 + 34) & 0x20) != 0 )
  {
LABEL_18:
    v12 = -1073741739;
  }
  else
  {
    if ( (v21 & 0x20) == 0 )
      MiWriteValidPteVolatile(v7, 1, 0);
    if ( !a4 || (v12 = MiTryLockLeafPage(a1, Flink, a4), v12 >= 0) )
    {
      MiAddLockedPageCharge(48 * v11 - 0x58000000000LL, 1LL);
      v15 = *(_BYTE *)(v13 + 34) | 0x20;
      *a3 = v13;
      *(_BYTE *)(v13 + 34) = v15;
    }
  }
  _InterlockedAnd64((volatile signed __int64 *)(v13 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return (unsigned int)v12;
}
