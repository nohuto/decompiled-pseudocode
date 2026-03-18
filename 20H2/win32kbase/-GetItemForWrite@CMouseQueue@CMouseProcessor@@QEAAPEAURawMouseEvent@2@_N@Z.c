/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C003620C
 * Callers:
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0035B88 (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C00ACDDC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  CMouseProcessor::CMouseQueue *v4; // rbx
  bool v5; // zf

  v4 = this;
  if ( !(_BYTE)a2 )
  {
    this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)this + 1345);
    v5 = (_WORD)this == 16;
    if ( (unsigned __int16)this > 0x10u )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
      this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)v4 + 1345);
      v5 = (_WORD)this == 16;
    }
    if ( v5 )
      return 0LL;
    LOWORD(this) = (_WORD)this + 1;
    *((_WORD *)v4 + 1344) = ((unsigned __int8)*((_WORD *)v4 + 1344) + 1) & 0xF;
    *((_WORD *)v4 + 1345) = (_WORD)this;
  }
  if ( *((_WORD *)v4 + 1345) > 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2, a3, a4);
  return (CMouseProcessor::CMouseQueue *)((char *)v4 + 168 * *((unsigned __int16 *)v4 + 1344));
}
