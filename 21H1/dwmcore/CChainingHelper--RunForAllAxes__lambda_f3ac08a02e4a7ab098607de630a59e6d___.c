/*
 * XREFs of CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___ @ 0x180216CA0
 * Callers:
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ @ 0x180217020 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     _anonymous_namespace_::GetTemporaryConfigurationAxis @ 0x180216FC4 (_anonymous_namespace_--GetTemporaryConfigurationAxis.c)
 */

__int64 __fastcall CChainingHelper::RunForAllAxes__lambda_f3ac08a02e4a7ab098607de630a59e6d___(
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
    LOBYTE(a4) = (*(_BYTE *)(v6 + *a2) & 4) != 0;
    TemporaryConfigurationAxis = anonymous_namespace_::GetTemporaryConfigurationAxis(
                                   (unsigned int)v4,
                                   a2,
                                   *(unsigned int *)(v6 + *a2 + 8),
                                   a4);
    result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64))(v8 + 200))(v9, TemporaryConfigurationAxis, 1LL);
    ++v4;
    v6 += 12LL;
  }
  while ( v4 < 3 );
  return result;
}
