/*
 * XREFs of _Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch$31 @ 0x18003F903
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800723A0 (-FailFast_CaughtException@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall Microsoft::BamoImpl::BufferingMessageCallHost::SubmitBuffer_::_1_::catch_31(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3::FailFast_CaughtException(
    *(wil::details::in1diag3 **)(a2 + 72),
    (void *)0xF2,
    (unsigned int)"onecore\\private\\mincore\\priv_sdk\\inc\\BamoBufferingMessageCallHost.inl",
    a4);
  JUMPOUT(0x18003F926LL);
}
