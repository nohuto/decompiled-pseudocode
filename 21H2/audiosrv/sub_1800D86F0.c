/*
 * XREFs of sub_1800D86F0 @ 0x1800D86F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BC54 @ 0x18004BC54 (sub_18004BC54.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800D86F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v4; // ebx
  __int64 v6; // [rsp+58h] [rbp+20h] BYREF

  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
         pv,
         a2,
         0LL,
         0LL,
         &v6);
  if ( v4 < 0 || (v4 = sub_18004BC54(v6, a3), v4 < 0) )
    sub_18005E8F8((__int64)"CPolicyConfig::SetProcessingPeriod", 2119, v4);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  return (unsigned int)v4;
}
