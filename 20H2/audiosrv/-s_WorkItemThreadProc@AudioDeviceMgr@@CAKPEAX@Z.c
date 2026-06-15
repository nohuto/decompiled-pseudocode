/*
 * XREFs of ?s_WorkItemThreadProc@AudioDeviceMgr@@CAKPEAX@Z @ 0x180068DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ @ 0x180068DFC (-WorkItemThreadProc@AudioDeviceMgr@@AEAAXXZ.c)
 */

__int64 __fastcall AudioDeviceMgr::s_WorkItemThreadProc(AudioDeviceMgr *Parameter)
{
  if ( Parameter )
    AudioDeviceMgr::WorkItemThreadProc(Parameter);
  return 0LL;
}
