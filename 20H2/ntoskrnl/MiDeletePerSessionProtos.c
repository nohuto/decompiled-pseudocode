/*
 * XREFs of MiDeletePerSessionProtos @ 0x14032D664
 * Callers:
 *     MiFreeSubsectionProtos @ 0x1406DCE40 (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x140775678 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiReturnCommit @ 0x140230300 (MiReturnCommit.c)
 *     MmAccessFault @ 0x14026E3B0 (MmAccessFault.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1402AC310 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiSwizzleInvalidPte @ 0x1402AD3A0 (MiSwizzleInvalidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDeleteTransitionPte @ 0x1402C7050 (MiDeleteTransitionPte.c)
 *     MiUnlockProtoPoolPage @ 0x1402C8010 (MiUnlockProtoPoolPage.c)
 *     MiLockProtoPoolPage @ 0x1402CA9B0 (MiLockProtoPoolPage.c)
 *     MiUpdateSystemProtoPtesTree @ 0x1402D5630 (MiUpdateSystemProtoPtesTree.c)
 *     MiClearPfnImageVerified @ 0x140349B58 (MiClearPfnImageVerified.c)
 *     MiLockLeafPage @ 0x14034A220 (MiLockLeafPage.c)
 *     MiReleasePageFileSpace @ 0x14034D3F4 (MiReleasePageFileSpace.c)
 *     KeSetPagePrivilege @ 0x140511338 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(unsigned __int64 *P)
{
  __int64 *v1; // r9
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
  __int64 v14; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  _QWORD v18[9]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int8 v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+10h]

  v1 = (__int64 *)P[8];
  v2 = 0LL;
  v3 = 17;
  v4 = P[9];
  v18[1] = 0LL;
  v6 = *v1;
  v7 = v1[1];
  v8 = *((unsigned int *)v1 + 11);
  v19 = 17;
  v9 = *(_WORD *)(v6 + 60) & 0x3FF;
  v10 = *P + ((v7 - *(_QWORD *)(v6 + 136)) >> 3 << 12);
  v18[0] = v10;
  v11 = *(_QWORD *)(qword_140C4E4C8 + 8 * v9);
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
      v12 = MiLockLeafPage(v4, 0LL);
      v13 = MI_READ_PTE_LOCK_FREE(v4);
      if ( v12 )
      {
        if ( (MiFlags & 0x10000) != 0 && (MiFlags & 0x8000) != 0 && ((*(_QWORD *)(v12 + 40) >> 60) & 7) == 3 )
        {
          MiRemoveLockedPageChargeAndDecRef(v12);
          KeSetPagePrivilege((v12 + 0x58000000000LL) / 48, v18, 16LL);
          MiClearPfnImageVerified(v12, 4LL);
          v10 = v18[0];
        }
        LOBYTE(v14) = 17;
        if ( (unsigned int)MiDeleteTransitionPte(v4, v12, v14, 1) == 3 )
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
  MiUpdateSystemProtoPtesTree(P + 3, 0);
  ExFreePoolWithTag((PVOID)P[9], 0);
  ExFreePoolWithTag(P, 0);
  return v8;
}
