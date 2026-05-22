/*
 * XREFs of ?RuntimeClassInitialize@MPCVoiceProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18018A108
 * Callers:
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180136168 (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001FA40 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E484 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_7a8cdf47427de701aad174af942599f3___ @ 0x180189A18 (std--call_once__lambda_7a8cdf47427de701aad174af942599f3___.c)
 */

__int64 __fastcall MPCVoiceProcessor::RuntimeClassInitialize(
        MPCVoiceProcessor *this,
        const struct InputProcessorCreateParams *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // edi
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCVoiceProcessor *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 0x40000 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      14LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
      a4);
    __debugbreak();
  }
  v5 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v10 = this;
    std::call_once__lambda_7a8cdf47427de701aad174af942599f3___(v6, (__int64)&v10);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcvoiceprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
