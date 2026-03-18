/*
 * XREFs of MiPurgeFileOnlyPfn @ 0x1405A0774
 * Callers:
 *     MiPurgeBadFileOnlyPages @ 0x1405A032C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiCheckProtoPtePageState @ 0x140337B00 (MiCheckProtoPtePageState.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     MiChangingSubsectionProtos @ 0x14059D69C (MiChangingSubsectionProtos.c)
 *     MiPersistPage @ 0x1405A02B8 (MiPersistPage.c)
 *     MiSubsectionProtosCreated @ 0x1405A0FD8 (MiSubsectionProtosCreated.c)
 */

__int64 __fastcall MiPurgeFileOnlyPfn(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  __int64 v3; // rbp
  __int64 v4; // rsi
  unsigned __int64 *v5; // rbp
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
  unsigned __int8 v17; // [rsp+80h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = 0;
  memset(v15, 0, sizeof(v15));
  v16 = 0LL;
  if ( qword_140C50780 && (v1 & 0x10) == 0 )
    v1 &= ~qword_140C50780;
  v3 = *(_QWORD *)(a1 + 8);
  v4 = v1 >> 16;
  v17 = 17;
  v5 = (unsigned __int64 *)(v3 | 0x8000000000000000uLL);
  MiChangingSubsectionProtos((_QWORD *)v4, 32, (__int64)v15);
  v9 = MiCheckProtoPtePageState((ULONG_PTR)v5, &v17);
  if ( v9 )
  {
    v10 = MiLockLeafPage(v5, 0LL);
    if ( v10 )
    {
      v11 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v5);
      BugCheckParameter4 = v11;
      if ( (v11 & 1) != 0 )
        goto LABEL_7;
      if ( qword_140C50780 )
      {
        if ( (v11 & 0x10) != 0 )
          v11 &= ~0x10uLL;
        else
          v11 &= ~qword_140C50780;
      }
      v7 = 0xFFFFDE0000000000uLL;
      v6 = 48 * ((v11 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( v10 != v6 )
        goto LABEL_7;
      if ( (*(_DWORD *)(v10 + 16) & 0x401) != 0x400LL
        || (unsigned __int64 *)(*(_QWORD *)(v10 + 8) | 0x8000000000000000uLL) != v5 )
      {
        KeBugCheckEx(0xDEu, 2uLL, (ULONG_PTR)v5, *(_QWORD *)(v10 + 8), BugCheckParameter4);
      }
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
            MiPersistPage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v10 + 0x220000000000LL) >> 4));
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
