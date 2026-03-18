/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407BA9F8
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403C8040 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408ECA14 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C4FD08 )
  {
    if ( (byte_140C4FDC1 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C4FDC1 = (PopNetCompliantNicCount != 0) | byte_140C4FDC1 & 0xFE;
    }
  }
  return result;
}
