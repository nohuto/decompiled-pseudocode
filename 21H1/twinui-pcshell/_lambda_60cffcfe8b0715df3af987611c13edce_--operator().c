/*
 * XREFs of _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x180320C3C
 * Callers:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x18031FBAC (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d.c)
 *     _lambda_e323e37eb6a7c14a55f28542b981c184_::operator() @ 0x180320D24 (_lambda_e323e37eb6a7c14a55f28542b981c184_--operator().c)
 *     _lambda_603221b9b6c913954c8435c703c54208_::operator() @ 0x180339EB8 (_lambda_603221b9b6c913954c8435c703c54208_--operator().c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_60cffcfe8b0715df3af987611c13edce_::operator()(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 result; // rax

  ***(_BYTE ***)a1 = 0;
  if ( a2 >= *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL) )
  {
    RoOriginateError(2147483659LL, 0LL);
    return 2147483659LL;
  }
  else
  {
    *a3 = a2 + 1;
    result = 0LL;
    ***(_BYTE ***)a1 = a2 + 1 < *(_DWORD *)(**(_QWORD **)(a1 + 8) + 44LL);
  }
  return result;
}
