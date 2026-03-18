/*
 * XREFs of ?MsgSQMCleanupMsgCache@@YGXPAUtagPROCESSINFO@@@Z @ 0x180BED
 * Callers:
 *     _MSGSQMRemoveProcess@4 @ 0xA5E80 (_MSGSQMRemoveProcess@4.c)
 *     ?MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z @ 0x180F65 (-MsgSQMGetSourceListProcessPair@@YGPAUtagMSGSQM_PROCESSPAIR@@PAUtagPROCESSINFO@@0H@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall MsgSQMCleanupMsgCache(_DWORD *this)
{
  int v1; // ecx

  v1 = this[122];
  if ( v1 && *(_DWORD *)(v1 + 44) == v1 + 44 && *(_DWORD *)(v1 + 52) == v1 + 52 )
    Win32FreePool(v1);
}
