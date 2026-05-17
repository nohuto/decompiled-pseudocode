/*
 * XREFs of _TppExecuteWaitCallback@12 @ 0x4B2B55E2
 * Callers:
 *     _TppWaitCompletion@16 @ 0x4B2B5530 (_TppWaitCompletion@16.c)
 *     _TppExecuteWaitTimerCallback@8 @ 0x4B2ECE70 (_TppExecuteWaitTimerCallback@8.c)
 * Callees:
 *     _TppCompleteThreadData@4 @ 0x4B2B6E8F (_TppCompleteThreadData@4.c)
 *     _TppStartThreadData@16 @ 0x4B2B6F0C (_TppStartThreadData@16.c)
 *     _TppCleanupGroupMemberCallbackProlog@8 @ 0x4B2B6FC7 (_TppCleanupGroupMemberCallbackProlog@8.c)
 *     _TppWorkCallbackPrologRelease@12 @ 0x4B2B7032 (_TppWorkCallbackPrologRelease@12.c)
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _LdrAddRefDll@8 @ 0x4B2D20F0 (_LdrAddRefDll@8.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackStart@20 @ 0x4B384AA9 (_TppETWCallbackStart@20.c)
 *     _TppETWCallbackStop@20 @ 0x4B384B22 (_TppETWCallbackStop@20.c)
 */

int __fastcall TppExecuteWaitCallback(_DWORD *a1, int a2, int a3)
{
  int v5; // ebx
  int v6; // ebx
  int v7; // eax
  int result; // eax

  if ( a3 == 258 )
  {
    result = TppWorkCallbackPrologRelease(0);
    if ( !result )
      return result;
    goto LABEL_4;
  }
  v5 = *(_DWORD *)(a2 + 88);
  if ( !v5 )
  {
LABEL_3:
    TppCleanupGroupMemberCallbackProlog(a1, a2);
LABEL_4:
    v6 = 2147353478;
    if ( RtlGetCurrentServiceSessionId() )
      v7 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v7 = 2147353478;
    if ( *(_BYTE *)v7 )
      TppETWCallbackStart(*(_DWORD *)(a2 + 48), *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 60));
    TppStartThreadData(*(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 60));
    a1[12] = *(_DWORD *)(a2 + 48);
    a1[13] = *(_DWORD *)(a2 + 52);
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD, int, int))(a2 + 48))(
      *(_DWORD *)(a2 + 48),
      a1,
      *(_DWORD *)(a2 + 52),
      a2,
      a3);
    if ( RtlGetCurrentServiceSessionId() )
      v6 = (int)NtCurrentPeb()->SharedData + 556;
    if ( *(_BYTE *)v6 )
      TppETWCallbackStop(*(_DWORD *)(a2 + 48), *(_DWORD *)(a2 + 52), *(_DWORD *)(a2 + 60));
    return TppCompleteThreadData();
  }
  if ( (int)LdrAddRefDll(0, *(_DWORD *)(a2 + 88)) >= 0 )
  {
    a1[20] |= 0x100u;
    a1[25] = v5;
    goto LABEL_3;
  }
  result = TppBarrierAdjust(0);
  if ( !_InterlockedDecrement((volatile signed __int32 *)a2) )
    return (**(int (__thiscall ***)(_DWORD, int))(a2 + 4))(**(_DWORD **)(a2 + 4), a2);
  return result;
}
