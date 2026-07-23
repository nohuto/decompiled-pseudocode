/*
 * XREFs of _RtlpTpTimerCallback@12 @ 0x4B385320
 * Callers:
 *     <none>
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpTimerCallback@12 @ 0x4B385320 (_RtlpTpTimerCallback@12.c)
 *     _RtlpTpImpersonate@4 @ 0x4B385B57 (_RtlpTpImpersonate@4.c)
 *     _RtlpTpETWCallbackStart@20 @ 0x4B385CA6 (_RtlpTpETWCallbackStart@20.c)
 *     _RtlpTpETWCallbackStop@20 @ 0x4B385D1F (_RtlpTpETWCallbackStop@20.c)
 */

void __stdcall RtlpTpTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  struct _TEB *v3; // esi
  int v4; // ebx
  int v5; // eax
  _DWORD *v6; // [esp+10h] [ebp-24h] BYREF
  struct _TEB *v7; // [esp+14h] [ebp-20h]
  int ThreadInformation; // [esp+18h] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+1Ch] [ebp-18h]

  if ( *((_BYTE *)a2 + 44) || !_InterlockedExchange((volatile __int32 *)a2 + 12, 1) )
  {
    if ( *((_DWORD *)a2 + 2) )
      RtlpTpImpersonate();
    v3 = NtCurrentTeb();
    v7 = v3;
    v4 = 2147353478;
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478;
    if ( *(_BYTE *)v5 )
      RtlpTpETWCallbackStart(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), v3->SubProcessTag);
    TppStartThreadData((int *)&v6, *((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), (int)v3->SubProcessTag);
    ms_exc.registration.TryLevel = 0;
    (*((void (__thiscall **)(_DWORD, _DWORD, int))a2 + 4))(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), 1);
    ms_exc.registration.TryLevel = -2;
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0;
      ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, &ThreadInformation, 4u);
    }
    if ( RtlGetCurrentServiceSessionId() )
      v4 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v4 )
      RtlpTpETWCallbackStop(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), v7->SubProcessTag);
    TppCompleteThreadData(v6);
  }
}
