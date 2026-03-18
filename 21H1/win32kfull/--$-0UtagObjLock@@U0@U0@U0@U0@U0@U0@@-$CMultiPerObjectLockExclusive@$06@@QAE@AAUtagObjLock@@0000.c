/*
 * XREFs of ??$?0UtagObjLock@@U0@U0@U0@U0@U0@U0@@?$CMultiPerObjectLockExclusive@$06@@QAE@AAUtagObjLock@@000000@Z @ 0xAB276
 * Callers:
 *     ?xxxScanSysQueue@@YG?AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUtagQMSG@@@Z @ 0x38D60 (-xxxScanSysQueue@@YG-AW4_SCANSYSQUEUERESULT@@PAUtagTHREADINFO@@PAUtagMSG@@PAUtagWND@@IIKKPAPAUta.c)
 *     _EditionPostInputMessage@48 @ 0xF1632 (_EditionPostInputMessage@48.c)
 *     _EditionHandleAltTab@32 @ 0xF3338 (_EditionHandleAltTab@32.c)
 * Callees:
 *     <none>
 */

void *__thiscall CMultiPerObjectLockExclusive<7>::CMultiPerObjectLockExclusive<7>(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  int i; // ecx
  int j; // ecx
  int k; // ecx
  int m; // ecx
  int n; // ecx
  int ii; // ecx
  int jj; // ecx

  for ( i = 3; i; --i )
    a2 += 4;
  for ( j = 3; j; --j )
    a3 += 4;
  for ( k = 3; k; --k )
    a4 += 4;
  for ( m = 3; m; --m )
    a5 += 4;
  for ( n = 3; n; --n )
    a6 += 4;
  for ( ii = 3; ii; --ii )
    a7 += 4;
  for ( jj = 3; jj; --jj )
    a8 += 4;
  return this;
}
