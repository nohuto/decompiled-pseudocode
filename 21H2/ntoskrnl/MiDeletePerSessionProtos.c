/*
 * XREFs of MiDeletePerSessionProtos @ 0x1402CF174
 * Callers:
 *     MiFreeSubsectionProtos @ 0x1406BCC40 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140779628 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiDeleteTransitionPte @ 0x140238830 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402397F0 (MiUnlockProtoPoolPage.c)
 *     MiLockLeafPage @ 0x140269CD0 (MiLockLeafPage.c)
 *     MiClearPfnImageVerified @ 0x1402A3214 (MiClearPfnImageVerified.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402F8260 (MiUpdateSystemProtoPtesTree.c)
 *     MiReleasePageFileSpace @ 0x140303154 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x1403182A0 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14031A100 (MiLockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140328BC0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x140329F90 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     KeSetPagePrivilege @ 0x140512E78 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(char *P)
{
  __int64 v1; // r9
  __int64 v2; // r12
  unsigned __int8 v3; // si
  ULONG_PTR v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  ULONG_PTR v12; // rbp
  __int64 v13; // rax
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  char v19; // [rsp+70h] [rbp+8h] BYREF
  ULONG_PTR v20; // [rsp+78h] [rbp+10h]

  v1 = *((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = 17;
  v4 = *((_QWORD *)P + 9);
  v18[1] = 0LL;
  v6 = *(_QWORD *)v1;
  v7 = *(_QWORD *)(v1 + 8);
  v8 = *(unsigned int *)(v1 + 44);
  v19 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *(_QWORD *)P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v18[0] = v10;
  v11 = *(_QWORD *)(qword_140C4E648 + 8 * v9);
  v20 = v4 + 8 * v8;
  if ( v4 < v20 )
  {
    do
    {
      if ( (v4 & 0xFFF) == 0 || v3 == 17 )
      {
        if ( v3 != 17 )
          MiUnlockProtoPoolPage(v2, v3);
        while ( 1 )
        {
          v2 = MiLockProtoPoolPage(v4, &v19);
          if ( v2 )
            break;
          MmAccessFault(2uLL, v4, 0, 0LL);
        }
        v3 = v19;
      }
      v12 = MiLockLeafPage((__int64 *)v4, 0, v6, v1);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12);
          KeSetPagePrivilege((__int64)(v12 + 0x58000000000LL) / 48, v18, 16LL);
          MiClearPfnImageVerified(v12, 4LL, v15);
          v10 = v18[0];
        }
        LOBYTE(v6) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12, v6, 1) == 3 )
          --v8;
      }
      else
      {
        if ( !v13 )
          break;
        if ( (v13 & 0x400) == 0 )
        {
          v16 = MiSwizzleInvalidPte(768LL);
          if ( v17 != v16 )
            MiReleasePageFileSpace(v11, v17, 1LL);
        }
      }
      v10 += 4096LL;
      v4 += 8LL;
      v18[0] = v10;
    }
    while ( v4 < v20 );
    if ( v3 != 17 )
      MiUnlockProtoPoolPage(v2, v3);
  }
  MiReturnCommit(v11, v8);
  MiUpdateSystemProtoPtesTree(P + 24, 0LL);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
