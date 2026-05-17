/*
 * XREFs of _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7
 * Callers:
 *     _TppExecuteWaitCallback@12 @ 0x4B2B55E2 (_TppExecuteWaitCallback@12.c)
 *     _TppAlpcpExecuteCallback@16 @ 0x4B2B6DC0 (_TppAlpcpExecuteCallback@16.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _TppIopExecuteCallback@16 @ 0x4B2EB530 (_TppIopExecuteCallback@16.c)
 *     _TppJobpExecuteCallback@16 @ 0x4B3837E0 (_TppJobpExecuteCallback@16.c)
 * Callees:
 *     _RtlSetThreadWorkOnBehalfTicket@4 @ 0x4B2B7140 (_RtlSetThreadWorkOnBehalfTicket@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0 (_RtlSetThreadSubProcessTag@4.c)
 *     _TpCallbackMayRunLong@4 @ 0x4B2E9600 (_TpCallbackMayRunLong@4.c)
 */

int __fastcall TppCleanupGroupMemberCallbackProlog(int a1, int a2)
{
  int v4; // eax
  _GUID *p_ActivityId; // edi
  int v7; // [esp-4h] [ebp-14h]

  if ( *(_DWORD *)(a2 + 56) != -1 && *(_DWORD *)(a2 + 56) )
  {
    *(_DWORD *)a1 = 36;
    *(_DWORD *)(a1 + 4) = 1;
    RtlActivateActivationContextUnsafeFast(a1, *(_DWORD *)(a2 + 56));
    *(_BYTE *)(a1 + 40) |= 1u;
  }
  *(_DWORD *)(a1 + 80) |= 0x240u;
  *(_DWORD *)(a1 + 108) = a2;
  if ( (*(_DWORD *)(a2 + 104) & 3) == 1 )
    TpCallbackMayRunLong(a1);
  v4 = *(_DWORD *)(a2 + 60);
  if ( v4 )
  {
    v7 = *(_DWORD *)(a2 + 60);
    *(_DWORD *)(a1 + 44) = v4;
    RtlSetThreadSubProcessTag(v7);
  }
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 64);
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 68);
  *(_QWORD *)&p_ActivityId->Data2 = *(_QWORD *)(a2 + 72);
  return RtlSetThreadWorkOnBehalfTicket((void *)(a2 + 80));
}
