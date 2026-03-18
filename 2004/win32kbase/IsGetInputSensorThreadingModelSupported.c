/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C0034824
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C0034774 (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C0253238 )
    return qword_1C0253238();
  else
    return 3221225659LL;
}
