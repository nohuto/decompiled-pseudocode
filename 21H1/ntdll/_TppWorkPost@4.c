/*
 * XREFs of _TppWorkPost@4 @ 0x4B2C1B97
 * Callers:
 *     _TppSingleTimerExpiration@12 @ 0x4B2B75E3 (_TppSingleTimerExpiration@12.c)
 *     _TpPostWork@4 @ 0x4B2C1B30 (_TpPostWork@4.c)
 *     _TpSimpleTryPost@12 @ 0x4B2E7210 (_TpSimpleTryPost@12.c)
 * Callees:
 *     _TpPostTask@16 @ 0x4B2C1C3F (_TpPostTask@16.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     _TppETWCallbackEnqueue@20 @ 0x4B384A30 (_TppETWCallbackEnqueue@20.c)
 */

int __thiscall TppWorkPost(int this)
{
  signed __int32 v2; // edx
  volatile signed __int32 *v3; // esi
  signed __int32 v4; // ecx
  int v5; // ebx
  int result; // eax
  _DWORD *SharedData; // eax
  int v8; // eax

  TppBarrierAdjust(0);
  v2 = *(_DWORD *)(this + 140);
  v3 = (volatile signed __int32 *)(this + 140);
  do
  {
    v4 = v2;
    v5 = v2 & 1;
    result = _InterlockedCompareExchange(v3, (v2 & 0xFFFFFFFE) + 2, v2);
    v2 = result;
  }
  while ( result != v4 );
  if ( v5 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)this, 2u);
    *(_QWORD *)(this + 80) = *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket;
    SharedData = NtCurrentPeb()->SharedData;
    if ( SharedData && *SharedData )
      v8 = (int)NtCurrentPeb()->SharedData + 556;
    else
      v8 = 2147353478;
    if ( *(_BYTE *)v8 )
      TppETWCallbackEnqueue(*(_DWORD *)(this + 48), *(_DWORD *)(this + 52), *(_DWORD *)(this + 60));
    TpPostTask(*(_DWORD *)(this + 116), 0);
    result = _InterlockedExchangeAdd((volatile signed __int32 *)this, 0xFFFFFFFF);
    if ( !result )
      return (**(int (__thiscall ***)(_DWORD, int))(this + 4))(**(_DWORD **)(this + 4), this);
  }
  return result;
}
