/*
 * XREFs of PiProcessQueryDeviceState @ 0x140749F30
 * Callers:
 *     PipProcessStartPhase3 @ 0x14076BE08 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14081BA8C (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x1402D25CC (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x1402D2848 (PoFxActivateDevice.c)
 *     PnpRequestDeviceAction @ 0x1402DCF44 (PnpRequestDeviceAction.c)
 *     PiUpdateGuestAssignedState @ 0x140749ECC (PiUpdateGuestAssignedState.c)
 *     PipClearDevNodeUserFlags @ 0x14074A08C (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x14074A0F8 (IopQueryDeviceState.c)
 *     PnpRequestDeviceRemoval @ 0x140765430 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeUserFlags @ 0x140767220 (PipSetDevNodeUserFlags.c)
 *     PnpCheckForActiveDependencies @ 0x140777C08 (PnpCheckForActiveDependencies.c)
 *     PiPnpRtlEndOperation @ 0x140779A50 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140779DC4 (PiPnpRtlBeginOperation.c)
 *     IopIncDisableableDepends @ 0x14081BAC8 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x14095855C (IopDecDisableableDepends.c)
 *     PiUpdateDeviceResourceLists @ 0x14095B1A4 (PiUpdateDeviceResourceLists.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(_QWORD *Object)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  unsigned int updated; // esi
  PVOID v7; // rcx
  __int64 v9; // r8
  unsigned int v10; // [rsp+60h] [rbp+8h] BYREF
  PVOID P; // [rsp+68h] [rbp+10h] BYREF

  v10 = 0;
  P = 0LL;
  v2 = *(_QWORD *)(Object[39] + 40LL);
  PiPnpRtlBeginOperation(&P);
  PoFxActivateDevice(*(_QWORD *)(v2 + 32));
  *(_DWORD *)(v2 + 704) |= 0x100u;
  if ( (int)IopQueryDeviceState(Object, &v10) < 0 )
  {
    updated = 0;
    goto LABEL_15;
  }
  v3 = v10;
  if ( (v10 & 2) != 0 )
    PipSetDevNodeUserFlags(v2, 2LL);
  else
    PipClearDevNodeUserFlags(v2, 2LL);
  if ( (v3 & 0x40) != 0 )
    PipSetDevNodeUserFlags(v2, 64LL);
  else
    PipClearDevNodeUserFlags(v2, 64LL);
  v4 = *(_DWORD *)(v2 + 400) & 8;
  if ( (v3 & 0x20) != 0 )
  {
    if ( !v4 )
    {
      PipSetDevNodeUserFlags(v2, 8LL);
      IopIncDisableableDepends(v2);
    }
  }
  else if ( v4 )
  {
    IopDecDisableableDepends(v2);
    PipClearDevNodeUserFlags(v2, 8LL);
  }
  v5 = v3 >> 8;
  LOBYTE(v5) = BYTE1(v3) & 1;
  updated = PiUpdateGuestAssignedState(v2, v5);
  if ( (v3 & 9) == 0 )
  {
    if ( (v3 & 4) == 0 )
      goto LABEL_11;
    if ( (v3 & 0x10) != 0 )
      goto LABEL_28;
  }
  if ( (unsigned __int8)PnpCheckForActiveDependencies(v2, 3LL) )
  {
    v9 = 51LL;
    goto LABEL_30;
  }
  if ( (v3 & 9) != 0 )
  {
    v9 = (v3 & 1) != 0 ? 29 : 24;
LABEL_30:
    PnpRequestDeviceRemoval(v2, 0LL, v9, 0LL);
    updated = -1073741823;
    goto LABEL_15;
  }
LABEL_11:
  if ( (v3 & 0x10) != 0 )
  {
LABEL_28:
    PnpRequestDeviceAction(Object, 13, 0, (v3 >> 2) & 1, 0LL, 0LL, 0LL);
    goto LABEL_15;
  }
  if ( (v3 & 4) != 0 )
  {
    v9 = 43LL;
    goto LABEL_30;
  }
  if ( (v3 & 0x80u) != 0 )
    updated = PiUpdateDeviceResourceLists(v2);
LABEL_15:
  PoFxIdleDevice(*(_QWORD *)(v2 + 32));
  v7 = P;
  *(_DWORD *)(v2 + 704) &= ~0x100u;
  if ( v7 )
    PiPnpRtlEndOperation(v7);
  return updated;
}
