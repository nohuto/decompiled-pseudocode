/*
 * XREFs of __GetTouchValidationStatus@4 @ 0x14B414
 * Callers:
 *     _NtUserGetTouchValidationStatus@4 @ 0x16494D (_NtUserGetTouchValidationStatus@4.c)
 *     ?_IsLegacyDevice@Edgy@@YGHPAX@Z @ 0x16EC06 (-_IsLegacyDevice@Edgy@@YGHPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall _GetTouchValidationStatus(int this)
{
  int v1; // edi
  int v2; // eax
  int v3; // eax
  CInpPushLock *Lock; // esi
  struct DEVICEINFO *DeviceList; // ecx
  int v6; // eax

  v1 = 3;
  if ( this )
  {
    if ( *(_BYTE *)(this + 24) == 2 )
    {
      v2 = *(_DWORD *)(this + 276);
      if ( *(_WORD *)(v2 + 22) == 13 )
      {
        v3 = *(unsigned __int16 *)(v2 + 20);
        if ( (v3 == 4 || v3 == 5) && (*(_DWORD *)(*(_DWORD *)(this + 284) + 300) & 8) == 0 )
          return 2 - ((*(_DWORD *)(*(_DWORD *)(this + 284) + 300) & 0x100) != 0);
      }
    }
    return v1;
  }
  Lock = CBaseInput::TmpGetLock(_gpHidInput);
  CInpPushLock::LockShared(Lock);
  DeviceList = CBaseInput::TmpGetDeviceList(_gpHidInput);
  if ( !DeviceList )
    goto LABEL_18;
  while ( 1 )
  {
    if ( *((_BYTE *)DeviceList + 24) != 2 )
      goto LABEL_15;
    if ( (*((_DWORD *)DeviceList + 26) & 0x2000) != 0 )
      goto LABEL_15;
    v6 = *((_DWORD *)DeviceList + 69);
    if ( *(_WORD *)(v6 + 22) != 13 || *(_WORD *)(v6 + 20) != 4 )
      goto LABEL_15;
    if ( (*(_DWORD *)(*((_DWORD *)DeviceList + 71) + 300) & 0x100) != 0 )
      break;
    v1 = 2;
LABEL_15:
    DeviceList = (struct DEVICEINFO *)*((_DWORD *)DeviceList + 7);
    if ( !DeviceList )
      goto LABEL_18;
  }
  v1 = 1;
LABEL_18:
  CInpPushLock::UnLockShared(Lock);
  return v1;
}
