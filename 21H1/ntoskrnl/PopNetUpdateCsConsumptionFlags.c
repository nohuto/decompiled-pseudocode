/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407B7888
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403C7230 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408EB794 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C4FE48 )
  {
    if ( (byte_140C4FF01 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C4FF01 = (PopNetCompliantNicCount != 0) | byte_140C4FF01 & 0xFE;
    }
  }
  return result;
}
