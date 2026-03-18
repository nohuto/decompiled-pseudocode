/*
 * XREFs of MiDeletePerSessionProtos @ 0x14035CCDC
 * Callers:
 *     MiFreeSubsectionProtos @ 0x14070AA50 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140766648 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x140224390 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x140229D70 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14022A960 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14022C820 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402419A0 (MiDeleteTransitionPte.c)
 *     MiReleasePageFileSpace @ 0x1402525F0 (MiReleasePageFileSpace.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402639D0 (MiUpdateSystemProtoPtesTree.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiSwizzleInvalidPte @ 0x1402B6040 (MiSwizzleInvalidPte.c)
 *     MiLockLeafPage @ 0x1402F6AF0 (MiLockLeafPage.c)
 *     MiClearPfnImageVerified @ 0x1402F7658 (MiClearPfnImageVerified.c)
 *     KeSetPagePrivilege @ 0x14050DA08 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *P)
{
  __int64 v1; // r9
  __int64 v2; // r12
  unsigned __int8 v3; // si
  unsigned __int64 v4; // rbx
  __int64 v6; // r8
  __int64 v7; // rdi
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v15; // rax
  _QWORD v16[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v17; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+10h]

  v1 = P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v16[1] = 0LL;
  v6 = *(_QWORD *)v1;
  v7 = *(_QWORD *)(v1 + 8);
  v8 = *(unsigned int *)(v1 + 44);
  v17 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v16[0] = v10;
  v11 = *(_QWORD *)(qword_140C4E448 + 8 * v9);
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
          MmAccessFault(2uLL, v4, 0, 0LL);
        }
        v3 = v17;
      }
      v12 = MiLockLeafPage((__int64 *)v4, 0, v6, v1);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      v9 = v13;
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12, v13, v6, v1);
          KeSetPagePrivilege((v12 + 0x58000000000LL) / 48, v16, 16LL);
          MiClearPfnImageVerified(v12, 4);
          v10 = v16[0];
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
          v15 = MiSwizzleInvalidPte(768LL);
          if ( v9 != v15 )
            MiReleasePageFileSpace(v11, v9);
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
  MiReturnCommit(v11, v8);
  MiUpdateSystemProtoPtesTree(P + 3, 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
