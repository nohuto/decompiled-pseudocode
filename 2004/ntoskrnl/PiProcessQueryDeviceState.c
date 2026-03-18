/*
 * XREFs of PiProcessQueryDeviceState @ 0x14072A788
 * Callers:
 *     PipProcessStartPhase3 @ 0x14072ACC0 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14077AB08 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036B584 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036B704 (PoFxActivateDevice.c)
 *     PiPnpRtlEndOperation @ 0x1405D7864 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1405D7FD4 (PiPnpRtlBeginOperation.c)
 *     PnpCheckForActiveDependencies @ 0x14072766C (PnpCheckForActiveDependencies.c)
 *     PipClearDevNodeUserFlags @ 0x14072A900 (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x14072A978 (IopQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x14072A9F8 (PiUpdateGuestAssignedState.c)
 *     PnpRequestDeviceRemoval @ 0x140733408 (PnpRequestDeviceRemoval.c)
 *     PipSetDevNodeUserFlags @ 0x14075F5CC (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x1407B3798 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407C2668 (IopDecDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x14089C930 (IopResourceRequirementsChanged.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B203C (PiUpdateDeviceResourceLists.c)
 */

__int64 __fastcall PiProcessQueryDeviceState(__int64 a1)
{
  __int64 v2; // rbx
  unsigned int v3; // edi
  int v4; // eax
  __int64 v5; // rdx
  __int64 v6; // rdx
  unsigned int updated; // esi
  PVOID **v8; // rcx
  __int64 v10; // r8
  unsigned int v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  v11 = 0;
  P = 0LL;
  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  PiPnpRtlBeginOperation(&P);
  PoFxActivateDevice(*(_QWORD *)(v2 + 32));
  *(_DWORD *)(v2 + 704) |= 0x100u;
  if ( (int)IopQueryDeviceState(a1, &v11) < 0 )
  {
    updated = 0;
    goto LABEL_16;
  }
  v3 = v11;
  if ( (v11 & 2) != 0 )
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
  if ( ((v3 & 9) != 0 || (v3 & 4) != 0 && (v3 & 0x10) == 0) && PnpCheckForActiveDependencies(v2, 3u) )
  {
    v10 = 51LL;
LABEL_30:
    PnpRequestDeviceRemoval(v2, 0LL, v10);
    updated = -1073741823;
    goto LABEL_16;
  }
  if ( (v3 & 9) != 0 )
  {
    v10 = (v3 & 1) != 0 ? 29 : 24;
    goto LABEL_30;
  }
  if ( (v3 & 0x10) != 0 )
  {
    LOBYTE(v6) = (v3 & 4) != 0;
    IopResourceRequirementsChanged(a1, v6);
    goto LABEL_16;
  }
  if ( (v3 & 4) != 0 )
  {
    v10 = 43LL;
    goto LABEL_30;
  }
  if ( (v3 & 0x80u) != 0 )
    updated = PiUpdateDeviceResourceLists(v2);
LABEL_16:
  PoFxIdleDevice(*(_QWORD *)(v2 + 32));
  v8 = (PVOID **)P;
  *(_DWORD *)(v2 + 704) &= ~0x100u;
  if ( v8 )
    PiPnpRtlEndOperation(v8);
  return updated;
}
