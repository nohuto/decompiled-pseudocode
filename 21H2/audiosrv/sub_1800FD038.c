/*
 * XREFs of sub_1800FD038 @ 0x1800FD038
 * Callers:
 *     sub_18005E178 @ 0x18005E178 (sub_18005E178.c)
 * Callees:
 *     sub_18002A504 @ 0x18002A504 (sub_18002A504.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall sub_1800FD038(__int64 a1, __int64 a2)
{
  bool v4; // di
  int v5; // eax
  void *v6; // rcx
  __int64 v7; // rdx
  LPVOID pv; // [rsp+38h] [rbp+10h] BYREF

  pv = 0LL;
  v4 = 0;
  sub_18002A504(&pv, 0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 40LL))(a2, &pv);
  v6 = pv;
  if ( v5 >= 0 )
  {
    if ( pv )
    {
      v7 = *(_QWORD *)(a1 + 344);
      if ( v7 )
      {
        v4 = (unsigned int)o__wcsicmp(pv, v7) == 0;
        v6 = pv;
      }
    }
  }
  if ( v6 )
    CoTaskMemFree(v6);
  return v4;
}
