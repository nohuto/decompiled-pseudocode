/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x14053C254
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14053BDD0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x1402839B0 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402855A0 (MiCheckProtoPtePageState.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x14029A9D0 (MiDeleteTransitionPte.c)
 *     MiLockLeafPage @ 0x140352AD0 (MiLockLeafPage.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x140539DF8 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14053BD7C (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x14053C964 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r14
  ULONG_PTR v10; // rbx
  unsigned __int64 v11; // rax
  ULONG_PTR BugCheckParameter4; // rcx
  char v14; // al
  _OWORD v15[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v16; // [rsp+50h] [rbp-28h]
  char v17; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( qword_140C4DE80 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DE80;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v17 = 17;
  v5 = (__int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v15);
  v9 = MiCheckProtoPtePageState((ULONG_PTR)v5, (__int64)&v17);
  if ( v9 )
  {
    v10 = MiLockLeafPage(v5, 0, v7, v8);
    if ( v10 )
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v11;
      if ( (v11 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140C4DE80 )
      {
        if ( (v11 & 0x10) != 0 )
          v11 &= ~0x10uLL;
        else
          v11 &= ~qword_140C4DE80;
      }
      v7 = 0xFFFFFA8000000000uLL;
      v6 = 48 * ((v11 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
      if ( v10 != v6 )
        goto LABEL_7;
      if ( (*(_DWORD *)(v10 + 16) & 0x401) != 0x400LL || (__int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != v5 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v10 + 8), BugCheckParameter4);
      v14 = *(_BYTE *)(v10 + 34);
      if ( (v14 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v14 & 0x10) != 0 )
        {
          if ( *(char *)(v10 + 35) >= 0 )
          {
            MiPersistPage(
              (__int64)(v10 + 0x58000000000LL) / 48,
              (__int64)((unsigned __int128)((__int64)(v10 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
              0xFFFFFA8000000000uLL,
              v8);
            v14 = *(_BYTE *)(v10 + 34);
          }
          *(_BYTE *)(v10 + 34) = v14 & 0xEF;
        }
        LOBYTE(v7) = 2;
        MiDeleteTransitionPte((ULONG_PTR)v5, v10, v7, 1);
        v2 = 1;
      }
    }
  }
  LOBYTE(v6) = v17;
  if ( v17 != 17 )
    MiUnlockProtoPoolPage(v9, v6, v7, v8);
  return MiSubsectionProtosCreated(v4, v15, 0LL, v2);
}
