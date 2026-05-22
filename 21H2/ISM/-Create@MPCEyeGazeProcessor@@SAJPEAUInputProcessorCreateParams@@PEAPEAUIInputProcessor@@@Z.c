/*
 * XREFs of ?Create@MPCEyeGazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180197840
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DE74 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180197584 (--$MakeAndInitialize@VMPCEyeGazeProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 */

__int64 __fastcall MPCEyeGazeProcessor::Create(
        struct InputProcessorCreateParams *a1,
        struct IInputProcessor **a2,
        __int64 a3,
        const char *a4)
{
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  const struct InputProcessorCreateParams *v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  *a2 = 0LL;
  if ( (*(_DWORD *)(*(_QWORD *)a1 + 4LL) & 0x200000) == 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      63LL,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpceyegazeprocessor.cpp",
      a4);
    __debugbreak();
  }
  return Microsoft::WRL::Details::MakeAndInitialize<MPCEyeGazeProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           (__int64 *)a2,
           &v6);
}
