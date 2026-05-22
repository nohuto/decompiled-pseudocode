/*
 * XREFs of wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___ @ 0x180090478
 * Callers:
 *     _HIDDeviceCollection::Initialize_::_1_::dtor$0 @ 0x18004EAE2 (_HIDDeviceCollection--Initialize_--_1_--dtor$0.c)
 *     _RIMDeviceCollection::Initialize_::_1_::dtor$0 @ 0x1800908D4 (_RIMDeviceCollection--Initialize_--_1_--dtor$0.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x180090544 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 */

void __fastcall wil::details::lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___::_lambda_call__lambda_9f352de651b7cbfacdb74837e0c369ab___(
        __int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    RIMDeviceCollection::Close(*(RIMDeviceCollection **)a1);
  }
}
