/*
 * XREFs of ?GetItemForWrite@CMouseQueue@CMouseProcessor@@QEAAPEAURawMouseEvent@2@_N@Z @ 0x1C0069310
 * Callers:
 *     ?InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z @ 0x1C003E6AC (-InitiateWaitForInjectionCompletion@CMouseProcessor@@QEAA_NP6AXXZ@Z.c)
 *     ?QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_INT@@PEBUtagPOINT@@@Z @ 0x1C0065ABC (-QueueMouseEvent@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEBU_SUBPIXELS@@PEBUtagUIPI_INFO_I.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

struct CMouseProcessor::RawMouseEvent *__fastcall CMouseProcessor::CMouseQueue::GetItemForWrite(
        CMouseProcessor::CMouseQueue *this,
        char a2)
{
  CMouseProcessor::CMouseQueue *v2; // rbx
  bool v3; // zf

  v2 = this;
  if ( !a2 )
  {
    this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)this + 1345);
    v3 = (_WORD)this == 16;
    if ( (unsigned __int16)this > 0x10u )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
      this = (CMouseProcessor::CMouseQueue *)*((unsigned __int16 *)v2 + 1345);
      v3 = (_WORD)this == 16;
    }
    if ( v3 )
      return 0LL;
    LOWORD(this) = (_WORD)this + 1;
    *((_WORD *)v2 + 1344) = ((unsigned __int8)*((_WORD *)v2 + 1344) + 1) & 0xF;
    *((_WORD *)v2 + 1345) = (_WORD)this;
  }
  if ( *((_WORD *)v2 + 1345) > 0x10u )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this);
  return (CMouseProcessor::CMouseQueue *)((char *)v2 + 168 * *((unsigned __int16 *)v2 + 1344));
}
