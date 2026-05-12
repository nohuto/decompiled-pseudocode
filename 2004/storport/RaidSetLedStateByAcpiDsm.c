/*
 * XREFs of RaidSetLedStateByAcpiDsm @ 0x1C0044A14
 * Callers:
 *     RaidAdapterSetLedState @ 0x1C002E8B4 (RaidAdapterSetLedState.c)
 *     RaidUnitSetLedState @ 0x1C004ADFC (RaidUnitSetLedState.c)
 * Callees:
 *     RaidDsmGetLedState @ 0x1C0043DD0 (RaidDsmGetLedState.c)
 *     RaidDsmGetSupportedLedState @ 0x1C0043E88 (RaidDsmGetSupportedLedState.c)
 *     RaidDsmQuerySupportedFunctionForLedState @ 0x1C0043F50 (RaidDsmQuerySupportedFunctionForLedState.c)
 *     RaidDsmSetLedState @ 0x1C0044008 (RaidDsmSetLedState.c)
 */

__int64 __fastcall RaidSetLedStateByAcpiDsm(struct _DEVICE_OBJECT *a1, __int64 a2)
{
  _BYTE *DeviceExtension; // rdi
  __int64 result; // rax
  int v6; // ebx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  DeviceExtension = a1->DeviceExtension;
  if ( *(_DWORD *)DeviceExtension )
    return 3221225659LL;
  if ( !DeviceExtension )
    return 3221225473LL;
  result = RaidDsmQuerySupportedFunctionForLedState(a1);
  if ( (int)result >= 0 )
  {
    if ( (DeviceExtension[5848] & 9) != 9 )
      return 3221225659LL;
    v6 = 4 * (*(_DWORD *)(a2 + 8) & 0x1FF);
    if ( (*((_DWORD *)DeviceExtension + 1462) & 2) != 0
      && (int)RaidDsmGetSupportedLedState(a1) >= 0
      && (v6 & *((_DWORD *)DeviceExtension + 1463)) == 0 )
    {
      return 3221225659LL;
    }
    if ( (*((_DWORD *)DeviceExtension + 1462) & 4) != 0 )
    {
      v7 = 0;
      result = RaidDsmGetLedState(a1, &v7);
      if ( (int)result >= 0 )
      {
        if ( *(_BYTE *)(a2 + 12) )
        {
          if ( (v6 & v7) != 0 )
            return result;
        }
        else if ( (v6 & v7) == 0 )
        {
          return result;
        }
      }
    }
    return RaidDsmSetLedState(a1);
  }
  return result;
}
