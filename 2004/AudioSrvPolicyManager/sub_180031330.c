/*
 * XREFs of sub_180031330 @ 0x180031330
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000F8F4 @ 0x18000F8F4 (sub_18000F8F4.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180031330(__int64 *a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  __int64 v4; // rax
  int v6; // eax
  unsigned int v7; // ebx
  void *v8; // rcx
  int v9; // eax
  void *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+38h] [rbp-8h] BYREF
  __int64 retaddr; // [rsp+48h] [rbp+8h]
  void *v15; // [rsp+50h] [rbp+10h] BYREF

  v4 = *a1;
  pv = 0LL;
  v15 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64, LPVOID *))(v4 + 32))(a1, a2, a3, &pv);
  v7 = v6;
  if ( v6 >= 0 )
  {
    if ( pv )
    {
      v12 = 0LL;
      if ( (int)MMDevAPI_23(pv, &v12) >= 0 )
      {
        v9 = (*(__int64 (__fastcall **)(__int64, void **))(*(_QWORD *)v12 + 40LL))(v12, &v15);
        if ( v9 < 0 )
          sub_18000F8F4(
            retaddr,
            249,
            (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
            v9);
      }
      if ( v12 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v10 = v15;
    v8 = 0LL;
    v15 = 0LL;
    v7 = 0;
    *a4 = v10;
  }
  else
  {
    sub_180003AB0(
      retaddr,
      239,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      v6);
    v8 = v15;
  }
  if ( v8 )
    CoTaskMemFree(v8);
  if ( pv )
    CoTaskMemFree(pv);
  return v7;
}
