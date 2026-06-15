/*
 * XREFs of _lambda_ed38f1c9fab6ded12fecd945b1b9e25e_::operator() @ 0x14004B594
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V?$Vector@PEAUIBuffer@Streams@Storage@Windows@@U?$DefaultEqualityPredicate@PEAUIBuffer@Streams@Storage@Windows@@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@U?$DefaultVectorOptions@PEAUIBuffer@Streams@Storage@Windows@@@6784@@Internal@Collections@Foundation@4@U?$DefaultLifetimeTraits@PEAUIBuffer@Streams@Storage@Windows@@@6784@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x14004F580 (-MoveNext@-$SimpleVectorIterator@PEAUIBuffer@Streams@Storage@Windows@@V-$Vector@PEAUIBuffer@Stre.c)
 * Callees:
 *     XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___ @ 0x140049258 (XWinRT--detail--AtomicUpdates--AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b.c)
 *     _lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator() @ 0x14004B674 (_lambda_e3c6fb090615ba5f6d24ed4c991f4fba_--operator().c)
 */

__int64 __fastcall lambda_ed38f1c9fab6ded12fecd945b1b9e25e_::operator()(__int64 *a1)
{
  __int64 v1; // r8
  _BYTE ***v2; // rax
  volatile signed __int32 *v3; // rcx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = *a1;
  v5[0] = a1[1];
  v5[1] = &v6;
  v2 = (_BYTE ***)a1[2];
  v6 = v1;
  v3 = (volatile signed __int32 *)(v1 + 40);
  if ( *(_BYTE *)(v1 + 56) )
    return lambda_e3c6fb090615ba5f6d24ed4c991f4fba_::operator()(v5, *(unsigned int *)v3, v1 + 40);
  else
    return XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_e3c6fb090615ba5f6d24ed4c991f4fba___lambda_2b4e95c994fbfcf834a48c0377dad5b5___(
             v3,
             (__int64)v5,
             v2);
}
