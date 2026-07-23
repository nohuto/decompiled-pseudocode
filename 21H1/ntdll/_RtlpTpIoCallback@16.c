/*
 * XREFs of _RtlpTpIoCallback@16 @ 0x4B385720
 * Callers:
 *     <none>
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlSetThreadSubProcessTag@4 @ 0x4B2DF1C0 (_RtlSetThreadSubProcessTag@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _RtlpTpETWCallbackStart@20 @ 0x4B385CA6 (_RtlpTpETWCallbackStart@20.c)
 *     _RtlpTpETWCallbackStop@20 @ 0x4B385D1F (_RtlpTpETWCallbackStop@20.c)
 */

void __stdcall RtlpTpIoCallback(int a1, int a2, int a3, _DWORD *a4)
{
  _GUID *p_ActivityId; // edi
  int v5; // edi
  int v6; // eax
  _DWORD *v7; // [esp+8h] [ebp-4h] BYREF

  if ( *(_DWORD *)(a2 + 84) )
    RtlSetThreadSubProcessTag(*(PVOID *)(a2 + 84));
  p_ActivityId = &NtCurrentTeb()->ActivityId;
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 88);
  p_ActivityId = (_GUID *)((char *)p_ActivityId + 4);
  p_ActivityId->Data1 = *(_DWORD *)(a2 + 92);
  *(_QWORD *)&p_ActivityId->Data2 = *(_QWORD *)(a2 + 96);
  v5 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  if ( *(_BYTE *)v6 )
    RtlpTpETWCallbackStart(*(_DWORD *)(a2 - 4), a3, *(_DWORD *)(a2 + 84));
  TppStartThreadData((int *)&v7, *(_DWORD *)(a2 - 4), a3, (int)NtCurrentTeb()->SubProcessTag);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD, int))(a2 - 4))(*(_DWORD *)(a2 - 4), *a4, a4[1], a3);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(*(_DWORD *)(a2 - 4), a3, *(_DWORD *)(a2 + 84));
  if ( *(_DWORD *)(a2 + 84) )
  {
    RtlSetThreadSubProcessTag(0);
    *(_DWORD *)(a2 + 84) = 0;
  }
  TppCompleteThreadData(v7);
}
