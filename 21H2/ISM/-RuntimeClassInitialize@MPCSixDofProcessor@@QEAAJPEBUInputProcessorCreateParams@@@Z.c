/*
 * XREFs of ?RuntimeClassInitialize@MPCSixDofProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18018F450
 * Callers:
 *     ??$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x18018AA44 (--$MakeAndInitialize@VMPCSixDofProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F7C0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___ @ 0x18018B208 (std--call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___.c)
 *     std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___ @ 0x18018B2BC (std--call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___.c)
 */

__int64 __fastcall MPCSixDofProcessor::RuntimeClassInitialize(
        MPCSixDofProcessor *this,
        const struct InputProcessorCreateParams *a2)
{
  int v3; // eax
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCSixDofProcessor *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v5 = v3;
  if ( v3 >= 0 )
  {
    v9 = this;
    std::call_once__lambda_c5f59095f0ae3e38eeaa5c86892cff4d___(v4, (__int64)&v9);
    LOBYTE(v9) = 0;
    std::call_once__lambda_2ab80ba63dcc212dafbb4e4695138308___(v7, (__int64)&v9);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcsixdofprocessor.cpp",
      (const char *)(unsigned int)v3);
    return v5;
  }
}
