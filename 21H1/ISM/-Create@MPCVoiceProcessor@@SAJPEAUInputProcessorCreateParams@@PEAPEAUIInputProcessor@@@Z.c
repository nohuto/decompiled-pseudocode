/*
 * XREFs of ?Create@MPCVoiceProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x180136840
 * Callers:
 *     <none>
 * Callees:
 *     ??$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Details@WRL@Microsoft@@YAJPEAPEAUIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@Z @ 0x180136628 (--$MakeAndInitialize@VMPCVoiceProcessor@@UIInputProcessor@@AEAPEAUInputProcessorCreateParams@@@D.c)
 */

__int64 __fastcall MPCVoiceProcessor::Create(struct InputProcessorCreateParams *a1, struct IInputProcessor **a2)
{
  const struct InputProcessorCreateParams *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = a1;
  return Microsoft::WRL::Details::MakeAndInitialize<MPCVoiceProcessor,IInputProcessor,InputProcessorCreateParams * &>(
           (__int64 *)a2,
           &v3);
}
