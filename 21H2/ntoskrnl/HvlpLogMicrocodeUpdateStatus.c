/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x140931064
 * Callers:
 *     HvlPhase2Initialize @ 0x1403DE4F0 (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x140931378 (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmLogMcUpdateStatus @ 0x14053F1A8 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x14054455C (HvlpGetLogicalProcessorProperty.c)
 */

__int64 HvlpLogMicrocodeUpdateStatus()
{
  __int64 result; // rax
  unsigned int v1; // edi
  int *v2; // rbx
  _BYTE v3[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  result = (__int64)memset(v3, 0, 0xCB4uLL);
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_140D125E4;
    do
    {
      HvlpGetLogicalProcessorProperty(*v2, 5, v3);
      result = CmLogMcUpdateStatus(*v2, (__int64)v3);
      if ( (int)result < 0 )
        break;
      ++v1;
      v2 += 30;
    }
    while ( v1 < (unsigned int)HvlpLogicalProcessorCount );
  }
  return result;
}
