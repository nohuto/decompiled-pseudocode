/*
 * XREFs of CmpFindNameInListWithStatus @ 0x140665F7C
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x1405EEA70 (CmpGetSymbolicLinkTarget.c)
 *     CmSetValueKey @ 0x1406646C0 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140665DE8 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmDeleteValueKey @ 0x140666544 (CmDeleteValueKey.c)
 *     CmpFindNameInList @ 0x1406695F8 (CmpFindNameInList.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x14086C548 (CmQueryMultipleValueForLayeredKey.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404085B0 (_guard_dispatch_icall.c)
 *     CmpFindNameInListCellWithStatus @ 0x140666030 (CmpFindNameInListCellWithStatus.c)
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
