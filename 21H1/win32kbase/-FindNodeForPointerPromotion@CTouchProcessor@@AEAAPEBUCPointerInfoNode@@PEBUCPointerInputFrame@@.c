/*
 * XREFs of ?FindNodeForPointerPromotion@CTouchProcessor@@AEAAPEBUCPointerInfoNode@@PEBUCPointerInputFrame@@@Z @ 0x1C01939E4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0194FD8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     ?IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z @ 0x1C019AC44 (-IsFrameReferenced@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@@Z.c)
 *     ?IsPrimary@CPointerInfoNode@@QEBAHXZ @ 0x1C019B1F4 (-IsPrimary@CPointerInfoNode@@QEBAHXZ.c)
 *     ?IsValid@CPointerInfoNode@@QEBAHXZ @ 0x1C019B338 (-IsValid@CPointerInfoNode@@QEBAHXZ.c)
 *     ApiSetPointerPromotionGetCurrentPointerId @ 0x1C01D232C (ApiSetPointerPromotionGetCurrentPointerId.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

const struct CPointerInfoNode *__fastcall CTouchProcessor::FindNodeForPointerPromotion(
        CTouchProcessor *this,
        const struct CPointerInputFrame *a2)
{
  __int16 CurrentPointerId; // si
  __int64 v4; // rcx
  unsigned int v5; // ecx
  unsigned int v6; // ebp
  CPointerInfoNode *v7; // rbx
  unsigned __int64 v8; // rcx
  CPointerInfoNode *v9; // rcx

  CurrentPointerId = 0;
  if ( !(unsigned int)CTouchProcessor::IsFrameReferenced(this, a2) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
  if ( *(_DWORD *)(*((_QWORD *)a2 + 19) + 24LL) == 7 )
    return 0LL;
  if ( (*((_DWORD *)a2 + 30) & 8) == 0 )
  {
    CurrentPointerId = ApiSetPointerPromotionGetCurrentPointerId();
    if ( !CurrentPointerId )
      return 0LL;
  }
  v5 = *((_DWORD *)a2 + 12);
  v6 = 0;
  v7 = (CPointerInfoNode *)*((_QWORD *)a2 + 17);
  if ( !v5 )
    return 0LL;
  while ( 1 )
  {
    v8 = *((_QWORD *)a2 + 17) + 480LL * v5;
    if ( (unsigned __int64)v7 >= v8 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v8);
    if ( (unsigned int)CPointerInfoNode::IsValid(v7)
      && (*(_DWORD *)v7 & 0x1000) == 0
      && ((unsigned int)CPointerInfoNode::IsPrimary(v9) || CurrentPointerId == *((_WORD *)v7 + 86)) )
    {
      break;
    }
    v5 = *((_DWORD *)a2 + 12);
    ++v6;
    v7 = (CPointerInfoNode *)((char *)v7 + 480);
    if ( v6 >= v5 )
      return 0LL;
  }
  return v7;
}
