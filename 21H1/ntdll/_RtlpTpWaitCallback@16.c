/*
 * XREFs of _RtlpTpWaitCallback@16 @ 0x4B2A8970
 * Callers:
 *     <none>
 * Callees:
 *     _RtlpTpWaitCallback@16 @ 0x4B2A8970 (_RtlpTpWaitCallback@16.c)
 *     _RtlpTpWaitCheckReset@8 @ 0x4B2A8A69 (_RtlpTpWaitCheckReset@8.c)
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _ZwSetInformationThread@16 @ 0x4B2F2A30 (_ZwSetInformationThread@16.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlpTpImpersonate@4 @ 0x4B385B57 (_RtlpTpImpersonate@4.c)
 *     _RtlpTpETWCallbackStart@20 @ 0x4B385CA6 (_RtlpTpETWCallbackStart@20.c)
 *     _RtlpTpETWCallbackStop@20 @ 0x4B385D1F (_RtlpTpETWCallbackStop@20.c)
 */

void __stdcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _BYTE *a2, PTP_WAIT a3, TP_WAIT_RESULT a4)
{
  struct _TEB *v4; // esi
  int v5; // ebx
  int v6; // eax
  _DWORD ThreadInformation[2]; // [esp+18h] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  ThreadInformation[1] = a2;
  if ( (a2[4] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_DWORD *)a2 )
    RtlpTpImpersonate();
  if ( (a2[4] & 4) != 0 )
    *((_DWORD *)a2 + 12) = NtCurrentTeb()->ClientId.UniqueThread;
  v4 = NtCurrentTeb();
  v5 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  if ( *(_BYTE *)v6 )
    RtlpTpETWCallbackStart(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), v4->SubProcessTag);
  TppStartThreadData(*((_DWORD *)a2 + 5), v4->SubProcessTag);
  ms_exc.registration.TryLevel = 0;
  (*((void (__thiscall **)(_DWORD, _DWORD, bool))a2 + 4))(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), a4 == 258);
  ms_exc.registration.TryLevel = -2;
  if ( (a2[4] & 4) != 0 )
    *((_DWORD *)a2 + 12) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation[0] = 0;
    ZwSetInformationThread((HANDLE)0xFFFFFFFE, ThreadImpersonationToken, ThreadInformation, 4u);
  }
  if ( (a2[4] & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(*((_DWORD *)a2 + 4), *((_DWORD *)a2 + 5), v4->SubProcessTag);
  TppCompleteThreadData(1261079055);
}
