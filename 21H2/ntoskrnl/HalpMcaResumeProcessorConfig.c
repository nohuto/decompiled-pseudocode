/*
 * XREFs of HalpMcaResumeProcessorConfig @ 0x140A5029C
 * Callers:
 *     HalpPostSleepMP @ 0x140A500C0 (HalpPostSleepMP.c)
 *     HalpDpPostReplaceInitialization @ 0x140A62458 (HalpDpPostReplaceInitialization.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     HalpIsCmciImplemented @ 0x140A5367C (HalpIsCmciImplemented.c)
 *     HalpCmciInitProcessor @ 0x140A53718 (HalpCmciInitProcessor.c)
 *     HalpMcaSetProcessorConfig @ 0x140A53828 (HalpMcaSetProcessorConfig.c)
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
    for ( i = *(_QWORD *)(result + 216); i; i = *(_QWORD *)(i + 184) )
    {
      v4 = *(_QWORD *)(i + 172);
      if ( a1 )
      {
        if ( a1 == 1 )
        {
          HalpMcaSetProcessorConfig(HalpMceErrorSource, *(_QWORD *)(i + 172));
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
