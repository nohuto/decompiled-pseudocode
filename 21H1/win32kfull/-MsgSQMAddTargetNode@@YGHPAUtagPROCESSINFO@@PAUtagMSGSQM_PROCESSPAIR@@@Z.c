/*
 * XREFs of ?MsgSQMAddTargetNode@@YGHPAUtagPROCESSINFO@@PAUtagMSGSQM_PROCESSPAIR@@@Z @ 0x180BB2
 * Callers:
 *     ?MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z @ 0x180F65 (-MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     ?MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z @ 0x180E40 (-MsgSQMGetMsgCache@@YGPAUtagMSGSQM_CACHE@@PAUtagPROCESSINFO@@H@Z.c)
 */

int __fastcall MsgSQMAddTargetNode(int a1, _DWORD *a2)
{
  int result; // eax
  int v5; // ecx
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  struct tagPROCESSINFO *v8; // [esp+0h] [ebp-8h]
  int v9; // [esp+4h] [ebp-4h]

  result = (int)MsgSQMGetMsgCache(v8, v9);
  if ( result )
  {
    v5 = result + 52;
    a2[5] = a1;
    v6 = a2 + 2;
    v7 = *(_DWORD **)(v5 + 4);
    if ( *v7 != v5 )
      __fastfail(3u);
    *v6 = v5;
    a2[3] = v7;
    *v7 = v6;
    *(_DWORD *)(v5 + 4) = v6;
    return 1;
  }
  return result;
}
