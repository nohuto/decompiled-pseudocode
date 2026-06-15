/*
 * XREFs of sub_18006F958 @ 0x18006F958
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 * Callees:
 *     sub_1800461B8 @ 0x1800461B8 (sub_1800461B8.c)
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18006F958(__int64 *a1, _QWORD *a2, _QWORD *a3, __int64 *a4)
{
  _QWORD *i; // r14
  int v8; // eax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18019EE48 + 40LL))(
           qword_18019EE48,
           *i,
           *a4);
    if ( v8 < 0 )
      sub_18005E8F8(
        (__int64)"CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_b78fc1840c3dd433f506de497cc33a0a>::operator ()",
        2001,
        v8);
  }
  *a1 = 0LL;
  if ( a1 != a4 )
  {
    *a1 = *a4;
    *a4 = 0LL;
  }
  sub_1800461B8(a4);
  return a1;
}
