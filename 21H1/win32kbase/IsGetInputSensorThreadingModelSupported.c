/*
 * XREFs of IsGetInputSensorThreadingModelSupported @ 0x1C001E86C
 * Callers:
 *     ApiSetGetInputSensorThreadingModel @ 0x1C001E7BC (ApiSetGetInputSensorThreadingModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 IsGetInputSensorThreadingModelSupported()
{
  if ( qword_1C02591F8 )
    return qword_1C02591F8();
  else
    return 3221225659LL;
}
