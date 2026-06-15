/*
 * XREFs of XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___ @ 0x14001EF64
 * Callers:
 *     _lambda_4718a3093fe00335c339b2b2fb133f28_::operator() @ 0x1400213EC (_lambda_4718a3093fe00335c339b2b2fb133f28_--operator().c)
 * Callees:
 *     _lambda_a9ede7db147a0808aca1dff73a0535ec_::operator() @ 0x140021334 (_lambda_a9ede7db147a0808aca1dff73a0535ec_--operator().c)
 *     _lambda_de5abcad9a268955ca8a59b56c59c282_::operator() @ 0x140021454 (_lambda_de5abcad9a268955ca8a59b56c59c282_--operator().c)
 */

__int64 __fastcall XWinRT::detail::AtomicUpdates::AtomicUpdate__lambda_de5abcad9a268955ca8a59b56c59c282___lambda_2994aaaa7734e700a95c78f8012e8556___(
        volatile signed __int32 *a1,
        __int64 a2,
        __int64 a3)
{
  unsigned __int32 v3; // ebx
  bool v7; // zf
  signed __int32 v8; // eax
  int v9; // r9d
  signed __int32 v11; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1;
  while ( 1 )
  {
    v9 = lambda_de5abcad9a268955ca8a59b56c59c282_::operator()(a2, v3, &v11);
    if ( v9 < 0 )
      break;
    v8 = _InterlockedCompareExchange(a1, v11, v3);
    v7 = v3 == v8;
    v3 = v8;
    if ( v7 )
      break;
    lambda_a9ede7db147a0808aca1dff73a0535ec_::operator()(a3);
  }
  return (unsigned int)v9;
}
