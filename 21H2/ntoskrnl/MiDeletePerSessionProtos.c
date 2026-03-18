/*
 * XREFs of MiDeletePerSessionProtos @ 0x14025592C
 * Callers:
 *     MiFreeSubsectionProtos @ 0x1406DDE9C (MiFreeSubsectionProtos.c)
 *     MiDeleteSessionDriverProtos @ 0x1406EB270 (MiDeleteSessionDriverProtos.c)
 * Callees:
 *     MiClearPfnImageVerified @ 0x14023CC50 (MiClearPfnImageVerified.c)
 *     MiUpdateSystemProtoPtesTree @ 0x14026EA80 (MiUpdateSystemProtoPtesTree.c)
 *     MiLockLeafPage @ 0x1402738F0 (MiLockLeafPage.c)
 *     MiLockProtoPoolPageForce @ 0x140273AAC (MiLockProtoPoolPageForce.c)
 *     MiReleasePageFileSpace @ 0x140274E48 (MiReleasePageFileSpace.c)
 *     MiReturnCommit @ 0x14028CE10 (MiReturnCommit.c)
 *     MiDeleteTransitionPte @ 0x1402C3100 (MiDeleteTransitionPte.c)
 *     MiSwizzleInvalidPte @ 0x1402CCC50 (MiSwizzleInvalidPte.c)
 *     MiGetPagePrivilege @ 0x140313B20 (MiGetPagePrivilege.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiUnlockProtoPoolPage @ 0x140334790 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140336AD8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     KeSetPagePrivilege @ 0x14039FDB0 (KeSetPagePrivilege.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiDeletePerSessionProtos(char *P)
{
  __int64 v1; // r9
  __int64 v2; // rsi
  ULONG_PTR v3; // rbx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r13
  ULONG_PTR v9; // rbp
  __int64 v10; // rax
  __int64 v12; // rax
  _QWORD v13[9]; // [rsp+20h] [rbp-48h] BYREF
  ULONG_PTR v14; // [rsp+78h] [rbp+10h]

  v1 = *((_QWORD *)P + 8);
  v2 = 0LL;
  v3 = *((_QWORD *)P + 9);
  v13[1] = 0LL;
  v5 = *(unsigned int *)(v1 + 44);
  v6 = *(_WORD *)(*(_QWORD *)v1 + 60LL) & 0x3FF;
  v7 = *(_QWORD *)P + ((__int64)(*(_QWORD *)(v1 + 8) - *(_QWORD *)(*(_QWORD *)v1 + 136LL)) >> 3 << 12);
  v13[0] = v7;
  v8 = *(_QWORD *)(qword_140C51F48 + 8 * v6);
  v14 = v3 + 8 * v5;
  if ( v3 < v14 )
  {
    do
    {
      if ( (v3 & 0xFFF) == 0 || !v2 )
      {
        if ( v2 )
        {
          LOBYTE(v6) = 17;
          MiUnlockProtoPoolPage(v2, v6);
        }
        v2 = MiLockProtoPoolPageForce(v3);
      }
      v9 = MiLockLeafPage(v3, 0LL);
      v10 = MI_READ_PTE_LOCK_FREE(v3);
      v6 = v10;
      if ( v9 )
      {
        if ( (MiFlags & 0x8000) != 0 && (MiFlags & 0x4000) != 0 && (unsigned int)MiGetPagePrivilege(v9) )
        {
          MiRemoveLockedPageChargeAndDecRef(v9);
          KeSetPagePrivilege(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v9 + 0x220000000000LL) >> 4), v13, 16LL);
          MiClearPfnImageVerified(v9, 4);
          v7 = v13[0];
        }
        if ( (unsigned int)MiDeleteTransitionPte(v3) == 3 )
          --v5;
      }
      else
      {
        if ( !v10 )
          break;
        if ( (v10 & 0x400) == 0 )
        {
          v12 = MiSwizzleInvalidPte(768LL, v10);
          if ( v6 != v12 )
            MiReleasePageFileSpace(v8, v6, 1LL);
        }
      }
      v7 += 4096LL;
      v3 += 8LL;
      v13[0] = v7;
    }
    while ( v3 < v14 );
    if ( v2 )
    {
      LOBYTE(v6) = 17;
      MiUnlockProtoPoolPage(v2, v6);
    }
  }
  MiReturnCommit(v8, v5);
  MiUpdateSystemProtoPtesTree(P + 24, 0LL);
  ExFreePoolWithTag(*((PVOID *)P + 9), 0);
  ExFreePoolWithTag(P, 0);
  return v5;
}
