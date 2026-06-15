/*
 * XREFs of sub_1800077B0 @ 0x1800077B0
 * Callers:
 *     sub_180016980 @ 0x180016980 (sub_180016980.c)
 * Callees:
 *     sub_180006770 @ 0x180006770 (sub_180006770.c)
 *     sub_18000736C @ 0x18000736C (sub_18000736C.c)
 *     sub_18002A3EC @ 0x18002A3EC (sub_18002A3EC.c)
 *     sub_18002A4F8 @ 0x18002A4F8 (sub_18002A4F8.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800077B0(__int64 a1)
{
  unsigned int v1; // esi
  int v2; // eax
  __int64 v3; // rbx
  DWORD v4; // eax
  DWORD v5; // edi
  __int64 v6; // rcx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v1 = *(_DWORD *)(a1 + 48);
  v2 = sub_180006770(a1, 0LL, (__int64)&v8);
  v3 = v8;
  if ( v2 >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 48LL))(v8);
    v5 = v4;
    if ( v4 )
    {
      if ( !(unsigned int)sub_18002A3EC(v4) )
        sub_18000736C(v6, v5);
      v1 = sub_18002A4F8(v5);
    }
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v1;
}
