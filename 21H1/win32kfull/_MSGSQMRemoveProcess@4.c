/*
 * XREFs of _MSGSQMRemoveProcess@4 @ 0xA5E80
 * Callers:
 *     <none>
 * Callees:
 *     ?MsgSQMCleanupMsgCache@@YGXPAUtagPROCESSINFO@@@Z @ 0x180BED (-MsgSQMCleanupMsgCache@@YGXPAUtagPROCESSINFO@@@Z.c)
 *     ?MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180E1E (-MsgSQMFreeProcessPair@@YGXPAUtagMSGSQM_PROCESSPAIR@@@Z.c)
 */

void __userpurge MSGSQMRemoveProcess(struct tagMSGSQM_PROCESSPAIR *a1@<ebx>, int a2)
{
  int v2; // esi
  _DWORD *v3; // esi
  struct tagMSGSQM_PROCESSPAIR *v4; // [esp-4h] [ebp-Ch]
  struct tagMSGSQM_PROCESSPAIR *v5; // [esp+0h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 488);
  if ( v2 )
  {
    v4 = a1;
    while ( *(_DWORD *)(v2 + 44) != v2 + 44 )
      MsgSQMFreeProcessPair(v4);
    v3 = (_DWORD *)(v2 + 52);
    while ( (_DWORD *)*v3 != v3 )
      MsgSQMFreeProcessPair(v5);
    MsgSQMCleanupMsgCache(v5);
  }
}
