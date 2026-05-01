/*
 * XREFs of _wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken_&__::_1_::dtor$0 @ 0x180235B5A
 * Callers:
 *     <none>
 * Callees:
 *     ??1_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@QEAA@XZ @ 0x180235C70 (--1_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_@@QEAA@XZ.c)
 */

void __fastcall wil::MakeOrThrow_ApplicationViewBackedViewHostItem_wil::AsyncEventSerialInvocationContextToken____::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    _lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_::~_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_(*(_lambda_d3eb828bd1a14f7fd2ad7ce4e25a01fd_ **)(a2 + 64));
  }
}
