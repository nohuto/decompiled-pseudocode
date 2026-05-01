/*
 * XREFs of _lambda_6914baa2bbb41478f35591fe55a15932_::operator() @ 0x1800EF4A8
 * Callers:
 *     _lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_::operator() @ 0x1800EF668 (_lambda_f041bb78b865ecfb9ab5fa4d5b43ebf6_--operator().c)
 *     wil::details::ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___::_ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___ @ 0x180137140 (wil--details--ScopeExitFn__lambda_6914baa2bbb41478f35591fe55a15932___--_ScopeExitFn__lambda_6914.c)
 * Callees:
 *     <none>
 */

void __fastcall lambda_6914baa2bbb41478f35591fe55a15932_::operator()(__int64 a1)
{
  const unsigned __int16 *StringRawBuffer; // rbx
  const unsigned __int16 *v3; // rax

  StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 16LL), 0LL);
  v3 = WindowsGetStringRawBuffer(*(HSTRING *)(*(_QWORD *)(a1 + 8) + 8LL), 0LL);
  SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::Stop(
    *(SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation **)a1,
    v3,
    StringRawBuffer);
}
