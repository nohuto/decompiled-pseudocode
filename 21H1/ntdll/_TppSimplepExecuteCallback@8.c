/*
 * XREFs of _TppSimplepExecuteCallback@8 @ 0x4B2EB860
 * Callers:
 *     <none>
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

void __stdcall TppSimplepExecuteCallback(_DWORD *a1, int a2)
{
  int *v2; // edi
  int v3; // ebx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // [esp+Ch] [ebp-4h] BYREF

  v2 = (int *)(a2 - 120);
  v3 = 2147353478;
  if ( RtlGetCurrentServiceSessionId() )
    v4 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v4 = 2147353478;
  if ( *(_BYTE *)v4 )
    TppETWCallbackDequeue(v2[12], v2[13], v2[15]);
  if ( TppWorkCallbackPrologRelease(a1, (int)v2, 1) )
  {
    if ( RtlGetCurrentServiceSessionId() )
      v5 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v5 = 2147353478;
    if ( *(_BYTE *)v5 )
      TppETWCallbackStart(v2[12], v2[13], v2[15]);
    TppStartThreadData((int *)&v6, v2[12], v2[13], v2[15]);
    ((void (__thiscall *)(int, _DWORD *, int))v2[12])(v2[12], a1, v2[13]);
    if ( RtlGetCurrentServiceSessionId() )
      v3 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v3 )
      TppETWCallbackStop(v2[12], v2[13], v2[15]);
    TppCompleteThreadData(v6);
  }
}
