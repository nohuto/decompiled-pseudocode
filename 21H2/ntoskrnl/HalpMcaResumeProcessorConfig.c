/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140996A40
 * Callers:
 *     HalpPostSleepMP @ 0x140996864 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x1409A9408 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HalpIsCmciImplemented @ 0x14099AC64 (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x14099AD20 (HalpCmciInitProcessor.c)
 *     HalpMcaSetProcessorConfig @ 0x14099AE48 (HalpMcaSetProcessorConfig.c)
 */

__int64 __fastcall HalpMcaResumeProcessorConfig(int a1)
{
  __int64 result; // rax
  __int64 i; // rdi
  __int64 v4; // rbx
  _BYTE v5[976]; // [rsp+20h] [rbp-3E8h] BYREF

  memset(v5, 0, 0x3CCuLL);
  result = (unsigned int)HalpFeatureBits;
  if ( (HalpFeatureBits & 0xC) != 0 )
  {
    result = (__int64)KeGetPcr();
    for ( i = *(_QWORD *)(result + 216); i; i = *(_QWORD *)(i + 176) )
    {
      v4 = *(_QWORD *)(i + 164);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          HalpMcaSetProcessorConfig(HalpMceErrorSource, *(_QWORD *)(i + 164));
          result = HalpIsCmciImplemented();
          if ( (_BYTE)result )
            result = HalpCmciInitProcessor(HalpCmcErrorSource, v4);
        }
      }
      else
      {
        memset(v5, 0, 0x3CCuLL);
        PshedGetErrorSourceInfo(0LL, v5);
        result = HalpMcaSetProcessorConfig(v5, v4);
      }
    }
  }
  return result;
}
