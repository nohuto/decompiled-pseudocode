/*
 * XREFs of CmpFindNameInListWithStatus @ 0x1406187D0
 * Callers:
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140618ADC (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmSetValueKey @ 0x140619570 (CmSetValueKey.c)
 *     CmpGetSymbolicLinkTarget @ 0x14061C310 (CmpGetSymbolicLinkTarget.c)
 *     CmpFindNameInList @ 0x140657CD8 (CmpFindNameInList.c)
 *     CmDeleteValueKey @ 0x1406941D8 (CmDeleteValueKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x140867B94 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     CmpFindNameInListCellWithStatus @ 0x140618880 (CmpFindNameInListCellWithStatus.c)
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
