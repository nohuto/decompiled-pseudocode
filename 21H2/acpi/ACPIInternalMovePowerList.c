/*
 * XREFs of ACPIInternalMovePowerList @ 0x1C0002BA8
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000F880 (ACPIDevicePowerDpc.c)
 *     ACPIMovePowerListUnblockedItems @ 0x1C00515FC (ACPIMovePowerListUnblockedItems.c)
 * Callees:
 *     ACPIInternalMoveList @ 0x1C0002C10 (ACPIInternalMoveList.c)
 */

__int64 __fastcall ACPIInternalMovePowerList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // r9
  _QWORD *v4; // r8
  int v5; // edx
  int v6; // eax
  int v8; // eax

  v2 = *a1;
  while ( v2 != a1 )
  {
    v4 = v2;
    v2 = (_QWORD *)*v2;
    if ( !*((_DWORD *)v4 + 12) )
    {
      v5 = *(_DWORD *)(v4[5] + 740LL);
      if ( v5 > 0 )
      {
        v8 = *((_DWORD *)v4 + 14);
        if ( (v8 & 0x2000000) == 0 )
        {
          *((_DWORD *)v4 + 14) = v8 | 0x2000000;
          _InterlockedIncrement(&AcpiPowerCurrentPagingPathTransitions);
        }
      }
      else if ( !v5 )
      {
        v6 = *((_DWORD *)v4 + 14);
        if ( (v6 & 0x2000000) != 0 )
        {
          *((_DWORD *)v4 + 14) = v6 & 0xFDFFFFFF;
          _InterlockedDecrement(&AcpiPowerCurrentPagingPathTransitions);
        }
      }
    }
    _InterlockedExchange((volatile __int32 *)v4 + 52, 3);
  }
  return ACPIInternalMoveList(a1, a2);
}
