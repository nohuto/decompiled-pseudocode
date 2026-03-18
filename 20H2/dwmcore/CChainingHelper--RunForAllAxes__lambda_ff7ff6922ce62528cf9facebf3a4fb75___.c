/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___ @ 0x180212594
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x1802127F0 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180212794 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_ff7ff6922ce62528cf9facebf3a4fb75___(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // ebx
  __int64 v6; // rdi
  unsigned int TemporaryConfigurationAxis; // eax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 result; // rax

  v4 = 0;
  v6 = 0LL;
  do
  {
    LOBYTE(a4) = (*(_BYTE *)(v6 + *a2) & 2) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v4,
                                   a2,
                                   *(unsigned int *)(v6 + *a2 + 4),
                                   a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(v8 + 200))(v9, TemporaryConfigurationAxis, 0LL);
    ++v4;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
