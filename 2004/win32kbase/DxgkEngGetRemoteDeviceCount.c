/*
 * XREFs of DxgkEngGetRemoteDeviceCount @ 0x1C01F76F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 (*DxgkEngGetRemoteDeviceCount())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1C0251088;
  if ( qword_1C0251088 )
    return (__int64 (*)(void))qword_1C0251088();
  return result;
}
