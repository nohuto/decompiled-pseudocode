/*
 * XREFs of sub_18006F7DC @ 0x18006F7DC
 * Callers:
 *     sub_1800135B8 @ 0x1800135B8 (sub_1800135B8.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_18006F7DC(_QWORD *a1, _QWORD *a2, _QWORD *a3, _QWORD *a4)
{
  _QWORD *i; // rsi
  char v8; // al
  int v9; // eax
  _QWORD *result; // rax

  for ( i = a2; i != a3; ++i )
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*i + 208LL))(*i);
    v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, bool, _QWORD))(*(_QWORD *)qword_18019EE48 + 32LL))(
           qword_18019EE48,
           *i,
           *a4,
           v8 == 0,
           0LL);
    if ( v9 < 0 )
      sub_18005E8F8(
        (__int64)"CAudioResourceManager::GetSaDeviceForSharedStream::<lambda_a2fefe741e044b1f018eee6408496d06>::operator ()",
        2025,
        v9);
  }
  result = a1;
  *a1 = a4;
  return result;
}
