/*
 * XREFs of ?OnFocusRequest@RawButtonProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x1801827B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ @ 0x180182538 (-FindRemoteEndpoint@RawButtonProcessor@@AEAAXXZ.c)
 */

__int64 __fastcall RawButtonProcessor::OnFocusRequest(
        RawButtonProcessor *this,
        struct DeviceInfo *a2,
        struct InputContext *a3,
        struct ContextualProcessorInitialState *a4)
{
  int v4; // ebx
  __int64 v7; // rax

  v4 = 0;
  if ( *((char *)a2 + 4) < 0 )
  {
    v7 = *((_QWORD *)this + 5);
    if ( !v7 || !*((_QWORD *)this + 4) )
    {
      RawButtonProcessor::FindRemoteEndpoint(this);
      v7 = *((_QWORD *)this + 5);
    }
    if ( v7 && *((_QWORD *)this + 4) )
      v4 = 1;
  }
  *(_DWORD *)a4 = v4;
  return 0LL;
}
