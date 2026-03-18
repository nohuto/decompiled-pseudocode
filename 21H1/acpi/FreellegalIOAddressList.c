/*
 * XREFs of FreellegalIOAddressList @ 0x1C00C0794
 * Callers:
 *     InitIllegalIOAddressListFromHAL @ 0x1C00BDB60 (InitIllegalIOAddressListFromHAL.c)
 * Callees:
 *     <none>
 */

void FreellegalIOAddressList()
{
  if ( gpBadIOAddressList )
  {
    ExFreePoolWithTag(gpBadIOAddressList, 0);
    gpBadIOAddressList = 0LL;
  }
  if ( gpBadIOErrorLogDoneList )
  {
    ExFreePoolWithTag(gpBadIOErrorLogDoneList, 0);
    gpBadIOErrorLogDoneList = 0LL;
  }
}
