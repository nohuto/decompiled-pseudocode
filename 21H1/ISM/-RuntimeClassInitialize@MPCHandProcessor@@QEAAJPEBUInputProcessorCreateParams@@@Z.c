/*
 * XREFs of ?RuntimeClassInitialize@MPCHandProcessor@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18007F2D0
 * Callers:
 *     ??$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x1801363C4 (--$MakeAndInitialize@VMPCHandProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@De.c)
 * Callees:
 *     ?RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z @ 0x18001F9E0 (-RuntimeClassInitialize@MPCInputProviderBase@@QEAAJPEBUInputProcessorCreateParams@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035710 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003E424 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9___ @ 0x18007D278 (std--call_once__lambda_b16aee874608ec8ce55934157fa7dff9___.c)
 */

__int64 __fastcall MPCHandProcessor::RuntimeClassInitialize(
        MPCHandProcessor *this,
        const struct InputProcessorCreateParams *a2,
        __int64 a3,
        const char *a4)
{
  int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  MPCHandProcessor *v10; // [rsp+38h] [rbp+10h] BYREF

  if ( *(_DWORD *)(*(_QWORD *)a2 + 4LL) != 512 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      29LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      a4);
    __debugbreak();
  }
  v5 = MPCInputProviderBase::RuntimeClassInitialize(this, a2);
  v7 = v5;
  if ( v5 >= 0 )
  {
    v10 = this;
    std::call_once__lambda_b16aee874608ec8ce55934157fa7dff9___(v6, (__int64)&v10);
    *((_QWORD *)this + 1430) = 1000 * qword_1802092F8 / 1000;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpchandprocessor.cpp",
      (const char *)(unsigned int)v5);
    return v7;
  }
}
