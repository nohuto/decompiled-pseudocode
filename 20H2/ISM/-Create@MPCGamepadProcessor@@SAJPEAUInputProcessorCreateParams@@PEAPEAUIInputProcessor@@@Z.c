/*
 * XREFs of ?Create@MPCGamepadProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180192030
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180191420 (--$MakeAndInitialize@VMPCGamepadProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@.c)
 */

__int64 __fastcall MPCGamepadProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  const struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  *a2 = 0LL;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCGamepadProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           a2,
           &v3);
}
