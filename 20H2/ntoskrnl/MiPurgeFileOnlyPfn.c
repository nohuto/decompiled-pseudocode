/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x140540274
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x14053FDF0 (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x1402C9A90 (MiCheckProtoPtePageState.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     KeBugCheckEx @ 0x1403FBCA0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14053DE18 (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x14053FD9C (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x140540984 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  ULONG_PTR v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // r9
  ULONG_PTR BugCheckParameter4; // rcx
  __int64 v14; // r8
  char v15; // al
  _OWORD v16[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]
  unsigned __int8 v18; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v16, 0, sizeof(v16));
  v17 = 0LL;
  if ( qword_140C4DDC0 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C4DDC0;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v18 = 17;
  v5 = (__int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v16);
  v8 = MiCheckProtoPtePageState((ULONG_PTR)v5, (__int64)&v18);
  if ( v8 )
  {
    v9 = MiLockLeafPage(v5, 0, v6, v7);
    if ( v9 )
    {
      v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v10;
      if ( (v10 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140C4DDC0 )
      {
        if ( (v10 & 0x10) != 0 )
          v10 &= ~0x10uLL;
        else
          v10 &= ~qword_140C4DDC0;
      }
      v14 = 0xFFFFFA8000000000uLL;
      if ( v9 != 48 * ((v10 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL )
        goto LABEL_7;
      if ( (*(_DWORD *)(v9 + 16) & 0x401) != 0x400LL || (__int64 *)(*(_QWORD *)(v9 + 8) | 0x8000000000000000uLL) != v5 )
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v9 + 8), BugCheckParameter4);
      v15 = *(_BYTE *)(v9 + 34);
      if ( (v15 & 8) != 0 )
      {
LABEL_7:
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      else
      {
        if ( (v15 & 0x10) != 0 )
        {
          if ( *(char *)(v9 + 35) >= 0 )
          {
            MiPersistPage(
              (__int64)(v9 + 0x58000000000LL) / 48,
              (__int64)((unsigned __int128)((__int64)(v9 + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 3,
              0xFFFFFA8000000000uLL,
              v11);
            v15 = *(_BYTE *)(v9 + 34);
          }
          *(_BYTE *)(v9 + 34) = v15 & 0xEF;
        }
        LOBYTE(v14) = 2;
        MiDeleteTransitionPte((ULONG_PTR)v5, v9, v14, 1);
        v2 = 1;
      }
    }
  }
  if ( v18 != 17 )
    MiUnlockProtoPoolPage(v8, v18);
  return MiSubsectionProtosCreated(v4, v16, 0LL, v2);
}
