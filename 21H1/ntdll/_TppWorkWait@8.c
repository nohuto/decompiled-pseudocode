/*
 * XREFs of _TppWorkWait@8 @ 0x4B2B1F6A
 * Callers:
 *     _TpWaitForWork@8 @ 0x4B2AB500 (_TpWaitForWork@8.c)
 *     _TpWaitForWait@8 @ 0x4B2B1D80 (_TpWaitForWait@8.c)
 *     _TpWaitForTimer@8 @ 0x4B2B3C20 (_TpWaitForTimer@8.c)
 * Callees:
 *     _RtlGetCurrentServiceSessionId@0 @ 0x4B2C3BF0 (_RtlGetCurrentServiceSessionId@0.c)
 *     _TppBarrierAdjust@12 @ 0x4B2DDB10 (_TppBarrierAdjust@12.c)
 *     _TppETWCallbackCancel@24 @ 0x4B384938 (_TppETWCallbackCancel@24.c)
 */

int __fastcall TppWorkWait(_DWORD *a1, int a2)
{
  unsigned __int32 v3; // esi
  unsigned __int32 v4; // edi
  int result; // eax
  unsigned __int32 v6; // ecx

  v3 = a1[35];
  if ( a2 )
  {
    while ( 1 )
    {
      v4 = v3 >> 1;
      if ( !(v3 >> 1) )
        break;
      v6 = v3;
      v3 = _InterlockedCompareExchange(a1 + 35, v3 & 1, v3);
      if ( v3 == v6 )
        goto LABEL_4;
    }
  }
  v4 = 0;
LABEL_4:
  TppBarrierAdjust(1);
  if ( RtlGetCurrentServiceSessionId() )
    result = (int)NtCurrentPeb()->SharedData + 556;
  else
    result = 2147353478;
  if ( *(_BYTE *)result )
  {
    if ( v4 )
      return TppETWCallbackCancel(a1[12], a1[13], a1[15], v4);
  }
  return result;
}
