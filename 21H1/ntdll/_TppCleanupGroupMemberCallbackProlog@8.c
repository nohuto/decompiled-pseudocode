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

int __fastcall TppCleanupGroupMemberCallbackProlog(_DWORD *Instance, int a2)
{
  int v4; // eax
  _GUID *p_ActivityId; // edi
  void *v7; // [esp-4h] [ebp-14h]

  if ( *(_DWORD *)(a2 + 56) != -1 && *(_DWORD *)(a2 + 56) )
  {
    *Instance = 36;
    Instance[1] = 1;
    RtlActivateActivationContextUnsafeFast(Instance, *(_DWORD *)(a2 + 56));
    *((_BYTE *)Instance + 40) |= 1u;
  }
  Instance[20] |= 0x240u;
  Instance[27] = a2;
  if ( (*(_DWORD *)(a2 + 104) & 3) == 1 )
    TpCallbackMayRunLong((PTP_CALLBACK_INSTANCE)Instance);
  v4 = *(_DWORD *)(a2 + 60);
  if ( v4 )
  {
    v7 = *(void **)(a2 + 60);
    Instance[11] = v4;
    RtlSetThreadSubProcessTag(v7);
  }
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 64);
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 68);
  *(_QWORD *)&p_ActivityId->Data2 = *(_QWORD *)(a2 + 72);
  return RtlSetThreadWorkOnBehalfTicket((void *)(a2 + 80));
}
