/*
 * XREFs of MiDeletePerSessionProtos @ 0x14024D674
 * Callers:
 *     MiFreeSubsectionProtos @ 0x14061BE10 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1407797E8 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x140220654 (MiClearPfnImageVerified.c)
 *     MiLockLeafPage @ 0x140257C70 (MiLockLeafPage.c)
 *     MmAccessFault @ 0x1402B1990 (MmAccessFault.c)
 *     MiDeleteTransitionPte @ 0x1402DD080 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402DE040 (MiUnlockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x140302FB0 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleasePageFileSpace @ 0x14030DEA4 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x140322FF0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140324E50 (MiLockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140333910 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x140334CE0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     KeSetPagePrivilege @ 0x1405130B8 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(char *P)
{
  __int64 *v1; // r9
  __int64 v2; // r12
  char v3; // si
  ULONG_PTR v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  ULONG_PTR v12; // rbp
  __int64 v13; // rax
  __int64 v15; // rax
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF
  char v17; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v18; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)*((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = 17;
  v4 = *((_QWORD *)P + 9);
  v16[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v17 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *(_QWORD *)P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v16[0] = v10;
  v11 = *(_QWORD *)(qword_140C4E688 + 8 * v9);
  v18 = v4 + 8 * v8;
  if ( v4 < v18 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
        {
          LOBYTE(v9) = v3;
          MiUnlockProtoPoolPage(v2, v9);
        }
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, &v17);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4);
        }
        v3 = v17;
      }
      v12 = MiLockLeafPage(v4, 0LL);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      v9 = v13;
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12);
          KeSetPagePrivilege((__int64)(v12 + 0x58000000000LL) / 48, v16, 16LL);
          MiClearPfnImageVerified(v12, 4);
          v10 = v16[0];
        }
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12) == 3 )
          --v8;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          v15 = MiSwizzleInvalidPte(768LL);
          if ( v9 != v15 )
            MiReleasePageFileSpace(v11, v9, 1LL);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v16[0] = v10;
    }
    while ( v4 < v18 );
    if ( v3 != 17 )
    {
      LOBYTE(v9) = v3;
      MiUnlockProtoPoolPage(v2, v9);
    }
  }
  MiReturnCommit(v11, v8, v6, v1);
  MiUpdateSystemProtoPtesTree(P + 24, 0LL);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
