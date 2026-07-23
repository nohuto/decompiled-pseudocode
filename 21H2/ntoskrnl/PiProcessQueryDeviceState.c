/*
 * XREFs of PiProcessQueryDeviceState @ 0x140749BFC
 * Callers:
 *     PipProcessStartPhase3 @ 0x14074AD30 (PipProcessStartPhase3.c)
 *     PiProcessRequeryDeviceState @ 0x14078D0A8 (PiProcessRequeryDeviceState.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14036FCE4 (PoFxIdleDevice.c)
 *     PoFxActivateDevice @ 0x14036FE64 (PoFxActivateDevice.c)
 *     PiPnpRtlEndOperation @ 0x140628F64 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x140629498 (PiPnpRtlBeginOperation.c)
 *     PnpRequestDeviceRemoval @ 0x140736848 (PnpRequestDeviceRemoval.c)
 *     PnpCheckForActiveDependencies @ 0x140741A70 (PnpCheckForActiveDependencies.c)
 *     PipClearDevNodeUserFlags @ 0x140749D74 (PipClearDevNodeUserFlags.c)
 *     IopQueryDeviceState @ 0x140749DEC (IopQueryDeviceState.c)
 *     PiUpdateGuestAssignedState @ 0x140749E6C (PiUpdateGuestAssignedState.c)
 *     PipSetDevNodeUserFlags @ 0x14074C4EC (PipSetDevNodeUserFlags.c)
 *     IopIncDisableableDepends @ 0x1407C5F08 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1407D5458 (IopDecDisableableDepends.c)
 *     IopResourceRequirementsChanged @ 0x14089FB90 (IopResourceRequirementsChanged.c)
 *     PiUpdateDeviceResourceLists @ 0x1408B529C (PiUpdateDeviceResourceLists.c)
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
  int v10; // r8d
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
    v10 = 51;
LABEL_30:
    PnpRequestDeviceRemoval(v2, 0, v10, 0);
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
    v10 = 43;
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
