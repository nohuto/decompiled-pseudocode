/*
 * XREFs of ?MsgSQMGetMsgCache@@YAPEAUtagMSGSQM_CACHE@@PEAUtagPROCESSINFO@@H@Z @ 0x1C021E7B4
 * Callers:
 *     ?MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x1C021E4FC (-MsgSQMAddTargetNode@@YAHPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 *     ?MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z @ 0x1C021E8F0 (-MsgSQMGetSourceListProcessPair@@YAPEAUtagMSGSQM_PROCESSPAIR@@PEAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z @ 0x1C021E9E8 (-MsgSQMPopulateProcessSQMInfo@@YAXPEAUtagPROCESSINFO@@PEAUtagMSGSQM_PROCESSSQMINFO@@@Z.c)
 */

struct tagMSGSQM_CACHE *__fastcall MsgSQMGetMsgCache(struct tagPROCESSINFO *a1, int a2)
{
  struct tagMSGSQM_PROCESSSQMINFO *v3; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rax

  if ( a2 )
  {
    if ( !*((_QWORD *)a1 + 108) )
    {
      v3 = (struct tagMSGSQM_PROCESSSQMINFO *)Win32AllocPoolZInit(80LL, 1937077077LL);
      *((_QWORD *)a1 + 108) = v3;
      if ( v3 )
      {
        MsgSQMPopulateProcessSQMInfo(a1, v3);
        v4 = (_QWORD *)(*((_QWORD *)a1 + 108) + 48LL);
        v4[1] = v4;
        *v4 = v4;
        v5 = (_QWORD *)(*((_QWORD *)a1 + 108) + 64LL);
        v5[1] = v5;
        *v5 = v5;
      }
    }
  }
  return (struct tagMSGSQM_CACHE *)*((_QWORD *)a1 + 108);
}
