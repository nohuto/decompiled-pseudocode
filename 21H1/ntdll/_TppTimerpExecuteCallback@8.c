/*
 * XREFs of _TppTimerpExecuteCallback@8 @ 0x4B2B56A0
 * Callers:
 *     _TppWorkerThread@4 @ 0x4B2B58A0 (_TppWorkerThread@4.c)
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackDequeue@20 @ 0x4B3849B7 (_TppETWCallbackDequeue@20.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

int __stdcall TppTimerpExecuteCallback(int a1, int a2)
{
  _DWORD *v2; // edi
  int v3; // ebx
  int v4; // eax
  int result; // eax
  int v6; // eax

  v2 = (_DWORD *)(a2 - 120);
  v3 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478;
  if ( *(_BYTE *)v4 )
    TppETWCallbackDequeue(v2[12], v2[13], v2[15]);
  result = TppWorkCallbackPrologRelease(0);
  if ( result )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v6 = 2147353478;
    if ( *(_BYTE *)v6 )
      TppETWCallbackStart(v2[12], v2[13], v2[15]);
    TppStartThreadData(v2[13], v2[15]);
    *(_DWORD *)(a1 + 48) = v2[12];
    *(_DWORD *)(a1 + 52) = v2[13];
    ((void (__thiscall *)(_DWORD, int, _DWORD, _DWORD *))v2[12])(v2[12], a1, v2[13], v2);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v3 )
      TppETWCallbackStop(v2[12], v2[13], v2[15]);
    return TppCompleteThreadData();
  }
  return result;
}
