/*
 * XREFs of CmpFreeSecurityDescriptor @ 0x1406F8F24
 * Callers:
 *     CmpFreeKeyByCell @ 0x14069CB70 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x14069CFA8 (CmpCreateChild.c)
 *     CmpCopySaclToVirtualKey @ 0x14086E48C (CmpCopySaclToVirtualKey.c)
 *     CmpSyncKeyValues @ 0x14087693C (CmpSyncKeyValues.c)
 * Callees:
 *     CmpRemoveSecurityCellList @ 0x14034D6E4 (CmpRemoveSecurityCellList.c)
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     HvFreeCell @ 0x14069EAAC (HvFreeCell.c)
 */

__int64 __fastcall CmpFreeSecurityDescriptor(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v5; // rbp
  unsigned int v6; // esi
  __int64 v7; // rax
  int v8; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF
  int v10; // [rsp+44h] [rbp+Ch]
  int v11; // [rsp+50h] [rbp+18h] BYREF
  int v12; // [rsp+54h] [rbp+1Ch]

  v11 = -1;
  v9 = -1;
  v12 = 0;
  v10 = 0;
  v3 = 0LL;
  result = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, a2, &v11);
  v5 = result;
  if ( result )
  {
    v6 = *(_DWORD *)(result + 44);
    if ( v6 != -1 )
    {
      v7 = (*(__int64 (__fastcall **)(ULONG_PTR, _QWORD, int *))(BugCheckParameter2 + 8))(BugCheckParameter2, v6, &v9);
      v3 = v7;
      if ( v7 )
      {
        v8 = *(_DWORD *)(v7 + 12);
        if ( v8 == 1 )
        {
          (*(void (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
          v3 = 0LL;
          CmpRemoveSecurityCellList(BugCheckParameter2, v6);
          HvFreeCell(BugCheckParameter2, v6);
        }
        else
        {
          *(_DWORD *)(v3 + 12) = v8 - 1;
        }
        *(_DWORD *)(v5 + 44) = -1;
      }
    }
    result = (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v11);
    if ( v3 )
      return (*(__int64 (__fastcall **)(ULONG_PTR, int *))(BugCheckParameter2 + 16))(BugCheckParameter2, &v9);
  }
  return result;
}
