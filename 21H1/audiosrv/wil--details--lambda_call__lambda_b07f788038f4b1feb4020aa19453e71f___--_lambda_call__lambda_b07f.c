/*
 * XREFs of wil::details::lambda_call__lambda_b07f788038f4b1feb4020aa19453e71f___::_lambda_call__lambda_b07f788038f4b1feb4020aa19453e71f___ @ 0x1800C3470
 * Callers:
 *     _CVolumeStrip::RuntimeClassInitialize_::_1_::dtor$17 @ 0x18007CD4C (_CVolumeStrip--RuntimeClassInitialize_--_1_--dtor$17.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::lambda_call__lambda_b07f788038f4b1feb4020aa19453e71f___::_lambda_call__lambda_b07f788038f4b1feb4020aa19453e71f___(
        _BYTE *a1)
{
  __int64 result; // rax

  if ( a1[8] )
  {
    a1[8] = 0;
    return (*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)a1 + 16LL))(**(_QWORD **)a1);
  }
  return result;
}
