/*
 * XREFs of _TppWorkUnposted@8 @ 0x4B3844D0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackDequeue@20 @ 0x4B3849B7 (_TppETWCallbackDequeue@20.c)
 */

int __stdcall TppWorkUnposted(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  unsigned __int32 v4; // eax
  unsigned __int32 v5; // edi
  unsigned __int32 v6; // ecx
  int result; // eax

  v2 = a1 - 120;
  if ( RtlGetCurrentServiceSessionId() )
    v3 = (int)NtCurrentPeb()->SharedData + 556;
  else
    v3 = 2147353478;
  if ( *(_BYTE *)v3 )
    TppETWCallbackDequeue(*(_DWORD *)(v2 + 48), *(_DWORD *)(v2 + 52), *(_DWORD *)(v2 + 60));
  v4 = *(_DWORD *)(v2 + 140);
  while ( 1 )
  {
    v5 = v4 >> 1;
    if ( !(v4 >> 1) )
      break;
    v6 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 140), 0, v4);
    if ( v4 == v6 )
      goto LABEL_11;
  }
  v5 = 0;
LABEL_11:
  if ( v5 )
    TppBarrierAdjust((signed __int64 *)(v2 + 32), -v5, 0);
  result = _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF);
  if ( !result )
    return (**(int (__thiscall ***)(_DWORD, int))(v2 + 4))(**(_DWORD **)(v2 + 4), v2);
  return result;
}
