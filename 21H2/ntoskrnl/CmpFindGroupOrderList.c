/*
 * XREFs of CmpFindGroupOrderList @ 0x140A6136C
 * Callers:
 *     CmpFindDrivers @ 0x140A61F64 (CmpFindDrivers.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     CmpFindSubKeyByName @ 0x1407ACAD4 (CmpFindSubKeyByName.c)
 */

__int64 __fastcall CmpFindGroupOrderList(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  unsigned int SubKeyByName; // ebx
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp+8h] BYREF
  int v9; // [rsp+34h] [rbp+Ch]

  v8 = -1;
  v9 = 0;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, int *))(a1 + 8))(a1, a2, &v8);
  if ( !v3 )
    return 0xFFFFFFFFLL;
  SubKeyByName = CmpFindSubKeyByName(a1, v3, (__int64)&CmpControlString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  if ( SubKeyByName == -1 )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, SubKeyByName, &v8);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = CmpFindSubKeyByName(a1, v5, (__int64)&CmpGroupOrderListString);
  (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v8);
  return v6;
}
