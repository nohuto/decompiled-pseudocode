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

int __stdcall RtlpTpWaitCallback(int a1, int a2, int a3, int a4)
{
  struct _TEB *v4; // esi
  int v5; // ebx
  int v6; // eax
  _DWORD v8[2]; // [esp+18h] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+20h] [ebp-18h]

  v8[1] = a2;
  if ( (*(_BYTE *)(a2 + 4) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_DWORD *)a2 )
    RtlpTpImpersonate();
  if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(a2 + 48) = NtCurrentTeb()->ClientId.UniqueThread;
  v4 = NtCurrentTeb();
  v5 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v6 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v6 = 2147353478;
  if ( *(_BYTE *)v6 )
    RtlpTpETWCallbackStart(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v4->SubProcessTag);
  TppStartThreadData(*(_DWORD *)(a2 + 20), v4->SubProcessTag);
  ms_exc.registration.TryLevel = 0;
  (*(void (__thiscall **)(_DWORD, _DWORD, bool))(a2 + 16))(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), a4 == 258);
  ms_exc.registration.TryLevel = -2;
  if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
    *(_DWORD *)(a2 + 48) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v8[0] = 0;
    ZwSetInformationThread(-2, 5, v8, 4);
  }
  if ( (*(_BYTE *)(a2 + 4) & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( RtlGetCurrentServiceSessionId() )
    v5 = (int)NtCurrentPeb()->SharedData + 556;
  if ( *(_BYTE *)v5 )
    RtlpTpETWCallbackStop(*(_DWORD *)(a2 + 16), *(_DWORD *)(a2 + 20), v4->SubProcessTag);
  return TppCompleteThreadData(1261079055);
}
