/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x180340D1C
 * Callers:
 *     _lambda_e323e37eb6a7c14a55f28542b981c184_::operator() @ 0x180341E94 (_lambda_e323e37eb6a7c14a55f28542b981c184_--operator().c)
 *     _lambda_603221b9b6c913954c8435c703c54208_::operator() @ 0x18035AC04 (_lambda_603221b9b6c913954c8435c703c54208_--operator().c)
 * Callees:
 *     _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x180341DAC (_lambda_60cffcfe8b0715df3af987611c13edce_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___(
        volatile signed __int32 *a1,
        __int64 a2,
        _BYTE ***a3)
{
  unsigned __int32 v3; // edi
  int v7; // r9d
  bool v8; // zf
  signed __int32 v9; // eax
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v7 = lambda_60cffcfe8b0715df3af987611c13edce_::operator()(a2, v3, &v11);
    if ( v7 < 0 )
      break;
    v9 = _InterlockedCompareExchange(a1, v11, v3);
    v8 = v3 == v9;
    v3 = v9;
    if ( v8 )
      break;
    ***a3 = 0;
  }
  return (unsigned int)v7;
}
