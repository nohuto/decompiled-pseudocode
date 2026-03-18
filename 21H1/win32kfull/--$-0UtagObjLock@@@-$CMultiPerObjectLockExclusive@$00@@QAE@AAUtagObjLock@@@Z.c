/*
 * XREFs of ??$?0UtagObjLock@@@?$CMultiPerObjectLockExclusive@$00@@QAE@AAUtagObjLock@@@Z @ 0xA4C20
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 * Callees:
 *     <none>
 */

void *__thiscall CMultiPerObjectLockExclusive<1>::CMultiPerObjectLockExclusive<1>(void *this, int a2)
{
  int i; // ecx

  for ( i = 3; i; --i )
    a2 += 4;
  return this;
}
