/*
 * XREFs of CmpDereferenceSecurityNode @ 0x1403EFD44
 * Callers:
 *     CmpCleanupLightWeightUoWData @ 0x1406A42E0 (CmpCleanupLightWeightUoWData.c)
 *     CmpCopySaclToVirtualKey @ 0x140873F78 (CmpCopySaclToVirtualKey.c)
 *     CmpLightWeightCleanupSetSecDescUoW @ 0x1408815F4 (CmpLightWeightCleanupSetSecDescUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x140881BA4 (CmpLightWeightCommitSetSecDescUoW.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x1402F2C04 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x140706E0C (HvFreeCell.c)
 *     HvpGetCellContextInitialize @ 0x14087840C (HvpGetCellContextInitialize.c)
 */

__int64 __fastcall CmpDereferenceSecurityNode(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter3)
{
  unsigned int v3; // esi
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = BugCheckParameter3;
  HvpGetCellContextInitialize(&v8);
  result = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64 *))(BugCheckParameter2 + 8))(
             BugCheckParameter2,
             v4,
             &v8);
  v6 = result;
  if ( (*(_DWORD *)(result + 12))-- == 1 )
  {
    CmpRemoveSecurityCellList(BugCheckParameter2, v3);
    (*(void (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
    v6 = 0LL;
    result = HvFreeCell(BugCheckParameter2, v3);
  }
  if ( v6 )
    return (*(__int64 (__fastcall **)(ULONG_PTR, __int64 *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v8);
  return result;
}
