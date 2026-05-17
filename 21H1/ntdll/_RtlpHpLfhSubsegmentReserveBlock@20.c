/*
 * XREFs of _RtlpHpLfhSubsegmentReserveBlock@20 @ 0x4B37797B
 * Callers:
 *     _RtlpHpLfhSlotReserveBlock@16 @ 0x4B376CD6 (_RtlpHpLfhSlotReserveBlock@16.c)
 * Callees:
 *     <none>
 */

int __fastcall RtlpHpLfhSubsegmentReserveBlock(int a1, int a2, int a3, unsigned __int16 *a4, _DWORD *a5)
{
  int v5; // ebx
  unsigned int v6; // edi
  unsigned __int16 v7; // si
  int v8; // edx
  unsigned int v9; // eax
  volatile signed __int16 *v11; // [esp+Ch] [ebp-4h]

  v5 = 0;
  *a5 = 0;
  v11 = (volatile signed __int16 *)(a2 + 16);
  LOWORD(v6) = *(_WORD *)(a2 + 16);
  while ( 1 )
  {
    v7 = *a4;
    if ( *a4 >= (unsigned __int16)v6 )
      v7 = v6;
    if ( (unsigned __int16)v6 <= v7 && a3 == 1 )
      break;
    v8 = (unsigned __int16)(v6 - v7);
    v6 = (unsigned __int16)_InterlockedCompareExchange16(v11, v6 - v7, v6);
    v9 = v8 + v7;
    if ( v6 == v9 )
    {
      v5 = 1;
      *a4 = v7;
      return v5;
    }
    if ( v6 < v9 )
      *a5 = 1;
  }
  return v5;
}
