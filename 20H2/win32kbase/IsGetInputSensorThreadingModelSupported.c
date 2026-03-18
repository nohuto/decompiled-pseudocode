/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C009C274
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C009C1C4 (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C0251238 )
    return qword_1C0251238();
  else
    return 3221225659LL;
}
