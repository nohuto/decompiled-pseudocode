/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x140541FB4
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x140541B30 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402DFAC0 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14053FB58 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x140541ADC (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x1405426C4 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 *v5; // rbp
  unsigned __int64 v6; // r14
  ULONG_PTR v7; // rbx
  unsigned __int64 v8; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v11; // r8
  char v12; // al
  _OWORD v13[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  unsigned __int8 v15; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v13, 0, sizeof(v13));
  v14 = 0LL;
  if ( qword_140C4DF80 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DF80;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v15 = 17;
  v5 = (unsigned __int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v13);
  v6 = MiCheckProtoPtePageState((ULONG_PTR)v5, (__int64)&v15);
  if ( v6 )
  {
    v7 = MiLockLeafPage(v5, 0LL);
    if ( v7 )
    {
      v8 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v8;
      if ( (v8 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140C4DF80 )
      {
        if ( (v8 & 0x10) != 0 )
          v8 &= ~0x10uLL;
        else
          v8 &= ~qword_140C4DF80;
      }
      v11 = 0xFFFFFA8000000000uLL;
      if ( v7 != 48 * ((v8 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        goto LABEL_7;
      if ( (*(_DWORD *)(v7 + 16) & 0x401) != 0x400LL
        || (unsigned __int64 *)(*(_QWORD *)(v7 + 8) | 0x8000000000000000uLL) != v5 )
      {
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v7 + 8), BugCheckParameter4);
      }
      v12 = *(_BYTE *)(v7 + 34);
      if ( (v12 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v12 & 0x10) != 0 )
        {
          if ( *(char *)(v7 + 35) >= 0 )
          {
            MiPersistPage((__int64)(v7 + 0x58000000000LL) / 48);
            v12 = *(_BYTE *)(v7 + 34);
          }
          *(_BYTE *)(v7 + 34) = v12 & 0xEF;
        }
        LOBYTE(v11) = 2;
        MiDeleteTransitionPte((ULONG_PTR)v5, v7, v11, 1);
        v2 = 1;
      }
    }
  }
  if ( v15 != 17 )
    MiUnlockProtoPoolPage(v6, v15);
  return MiSubsectionProtosCreated(v4, v13, 0LL, v2);
}
