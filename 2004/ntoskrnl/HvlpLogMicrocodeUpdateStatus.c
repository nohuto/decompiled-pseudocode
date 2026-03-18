/*
 * XREFs of HvlpLogMicrocodeUpdateStatus @ 0x14088B534
 * Callers:
 *     HvlPhase2Initialize @ 0x1403CBAA8 (HvlPhase2Initialize.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14088B8BC (HvlpDynamicUpdateMicrocode.c)
 * Callees:
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     memset @ 0x14040A280 (memset.c)
 *     CmLogMcUpdateStatus @ 0x1404E7938 (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1404EDAFC (HvlpGetLogicalProcessorProperty.c)
 */

__int64 HvlpLogMicrocodeUpdateStatus()
{
  __int64 result; // rax
  unsigned int v1; // edi
  int *v2; // rbx
  _BYTE v3[3264]; // [rsp+20h] [rbp-CD8h] BYREF

  result = (__int64)memset(v3, 0, 0xCB8uLL);
  v1 = 0;
  if ( (_DWORD)HvlpLogicalProcessorCount )
  {
    v2 = dword_140D042E4;
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
