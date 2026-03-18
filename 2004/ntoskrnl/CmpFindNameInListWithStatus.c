/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1405E31A4
 * Callers:
 *     CmDeleteValueKey @ 0x1405DDB38 (CmDeleteValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x1405E34BC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x1405E3F50 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x1405E6CF0 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindNameInList @ 0x140655778 (CmpFindNameInList.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140868EE4 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FFC70 (_guard_dispatch_icall.c)
 *     CmpFindNameInListCellWithStatus @ 0x1405E3260 (CmpFindNameInListCellWithStatus.c)
 */

__int64 __fastcall CmpFindNameInListWithStatus(
        __int64 a1,
        unsigned int *a2,
        __int64 a3,
        int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rsi
  __int64 v10; // r8
  __int64 v12; // rax
  unsigned int NameInListCellWithStatus; // edi
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0LL;
  v15 = 0xFFFFFFFFLL;
  v10 = *a2;
  if ( (_DWORD)v10 )
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(a1 + 8))(a1, a2[1], &v15);
    v10 = *a2;
    v6 = v12;
  }
  NameInListCellWithStatus = CmpFindNameInListCellWithStatus(a1, v6, v10, a3, a4, a5, a6);
  if ( v6 )
    (*(void (__fastcall **)(__int64, __int64 *))(a1 + 16))(a1, &v15);
  return NameInListCellWithStatus;
}
