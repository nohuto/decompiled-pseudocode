/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C018B7C4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C018CDB8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0192A14 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C0192FDC (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C0193120 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C01CA02C (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ecx
  unsigned int v9; // ebp
  CPointerInfoNode *v10; // rbx
  unsigned __int64 v11; // rcx
  CPointerInfoNode *v12; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6, v7);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 19) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 30) & 8) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v8 = *((_DWORD *)a2 + 12);
  v9 = 0;
  v10 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( !v8 )
    return 0LL;
  while ( 1 )
  {
    v11 = *((_QWORD *)a2 + 17) + 480LL * v8;
    if ( (unsigned __int64)v10 >= v11 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v11, v4, v6, v7);
    if ( (unsigned int)CPointerInfoNode::IsValid(v10)
      && (*(_DWORD *)v10 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v12) || CurrentPointerId == *((_WORD *)v10 + 86)) )
    {
      break;
    }
    v8 = *((_DWORD *)a2 + 12);
    ++v9;
    v10 = (CPointerInfoNode *)((char *)v10 + 480);
    if ( v9 >= v8 )
      return 0LL;
  }
  return v10;
}
