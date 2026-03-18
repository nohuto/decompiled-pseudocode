/*
 * XREFs of ?TabletAdjustBrightness@@YGXH@Z @ 0x147066
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z @ 0x147505 (-xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z.c)
 * Callees:
 *     <none>
 */

void __thiscall TabletAdjustBrightness(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi
  unsigned int v4; // ecx
  char *v5; // edx
  unsigned int v6; // edi
  int v7; // ecx
  int v8; // [esp+8h] [ebp-Ch] BYREF
  ULONG InOutBufferSize; // [esp+Ch] [ebp-8h] BYREF
  PVOID DataBlockObject; // [esp+10h] [ebp-4h] BYREF

  DataBlockObject = 0;
  if ( !_gfSwitchInProgress && !_gPowerTransitionsState[2] && _gPowerTransitionsState[0] )
  {
    if ( IoWMIOpenBlock(&WmiMonitorBrightness_GUID, 1u, &DataBlockObject) < 0 )
      goto LABEL_19;
    InOutBufferSize = 0;
    if ( IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, 0) != -1073741789
      || (v2 = (_DWORD *)Win32AllocPoolNonPaged(InOutBufferSize, 1869640533), (v3 = v2) == 0) )
    {
LABEL_18:
      ObfDereferenceObject(DataBlockObject);
LABEL_19:
      if ( _gPowerDisplayState[24] != _gPowerDisplayState[19] )
      {
        v8 = 4;
        InOutBufferSize = 0;
        QueuePowerRequest(&v8, 0);
      }
      return;
    }
    if ( IoWMIQueryAllData(DataBlockObject, &InOutBufferSize, v2) >= 0 )
    {
      v4 = 0;
      v5 = (char *)v3 + v3[12];
      v6 = *((_DWORD *)v5 + 1);
      if ( v6 )
      {
        do
        {
          if ( (unsigned __int8)v5[v4 + 8] >= (unsigned __int8)*v5 )
            break;
          ++v4;
        }
        while ( v4 < v6 );
      }
      if ( this )
      {
        if ( v4 + 1 < v6 )
        {
          v7 = (unsigned __int8)v5[v4 + 9];
LABEL_16:
          _gPowerDisplayState[19] = v7;
        }
      }
      else if ( v4 > 1 )
      {
        v7 = (unsigned __int8)v5[v4 + 7];
        goto LABEL_16;
      }
    }
    Win32FreePool(v3);
    goto LABEL_18;
  }
}
