/*
 * XREFs of PopNetUpdateCsConsumptionFlags @ 0x1407C9288
 * Callers:
 *     PopNetEvaluationWorkerCallback @ 0x1403CAC80 (PopNetEvaluationWorkerCallback.c)
 *     PopPdcCsDeviceNotification @ 0x1408F2624 (PopPdcCsDeviceNotification.c)
 * Callees:
 *     <none>
 */

bool PopNetUpdateCsConsumptionFlags()
{
  bool result; // al

  if ( qword_140C4FD88 )
  {
    if ( (byte_140C4FE41 & 1) == 0 )
    {
      result = PopNetCompliantNicCount != 0;
      byte_140C4FE41 = (PopNetCompliantNicCount != 0) | byte_140C4FE41 & 0xFE;
    }
  }
  return result;
}
