/*
 * XREFs of ??$MakeOrThrow@VClientWindowReadyForPresentationEventArgs@@AEB_N@wil@@YA?AV?$ComPtr@VClientWindowReadyForPresentationEventArgs@@@WRL@Microsoft@@AEB_N@Z @ 0x18009ED28
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___::Run @ 0x18003F520 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7b575a9786ff11c5110d4c5de8dd2250___--Run.c)
 * Callees:
 *     ?Attach@?$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CMarshaledInterface@@@Z @ 0x180013678 (-Attach@-$ComPtr@VCMarshalStream@CMarshaledInterface@@@WRL@Microsoft@@QEAAXPEAVCMarshalStream@CM.c)
 *     ??0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z @ 0x18003F400 (--0ClientWindowReadyForPresentationEventArgs@@QEAA@E@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18008CA20 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180134FD8 (-_Throw_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall wil::MakeOrThrow<ClientWindowReadyForPresentationEventArgs,bool const &>(__int64 *a1, char *a2)
{
  ClientWindowReadyForPresentationEventArgs *v4; // rax
  const char *v5; // r9
  ClientWindowReadyForPresentationEventArgs *v6; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *a1 = 0LL;
  v4 = (ClientWindowReadyForPresentationEventArgs *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = ClientWindowReadyForPresentationEventArgs::ClientWindowReadyForPresentationEventArgs(v4, *a2);
    Microsoft::WRL::ComPtr<CMarshaledInterface::CMarshalStream>::Attach(a1, (__int64)v6);
  }
  if ( !*a1 )
  {
    wil::details::in1diag3::_Throw_NullAlloc(
      retaddr,
      (void *)0x38,
      (unsigned int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/wrl.h",
      v5);
    __debugbreak();
  }
  return a1;
}
