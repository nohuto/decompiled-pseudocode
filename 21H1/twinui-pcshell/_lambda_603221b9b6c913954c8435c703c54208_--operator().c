/*
 * XREFs of _lambda_603221b9b6c913954c8435c703c54208_::operator() @ 0x180339EB8
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V?$Vector@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@U?$DefaultEqualityPredicate@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@U?$DefaultVectorOptions@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@@Internal@Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@7895@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18033D090 (-MoveNext@-$SimpleVectorIterator@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@V-$V.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___ @ 0x18031FBAC (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d.c)
 *     _lambda_60cffcfe8b0715df3af987611c13edce_::operator() @ 0x180320C3C (_lambda_60cffcfe8b0715df3af987611c13edce_--operator().c)
 */

__int64 __fastcall lambda_603221b9b6c913954c8435c703c54208_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  _BYTE ***v2; // rdx
  volatile signed __int32 *v3; // rcx
  bool v4; // zf
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v2 = (_BYTE ***)a1[2];
  v6[0] = a1[1];
  v7 = v1;
  v3 = (volatile signed __int32 *)(v1 + 40);
  v4 = *(_BYTE *)(v1 + 56) == 0;
  v6[1] = &v7;
  if ( v4 )
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_60cffcfe8b0715df3af987611c13edce___lambda_4d0109064d4e478866fb97661f906aa0___(
             v3,
             (__int64)v6,
             v2);
  else
    return lambda_60cffcfe8b0715df3af987611c13edce_::operator()((__int64)v6, *v3, (_DWORD *)(v1 + 40));
}
