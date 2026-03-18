/*
 * XREFs of AcpiPlatformLevelDeviceReset @ 0x1C00529E8
 * Callers:
 *     AcpiDeviceReset @ 0x1C00AE1A0 (AcpiDeviceReset.c)
 * Callees:
 *     AcpiResetDeviceAlreadyProcessed @ 0x1C0052AF8 (AcpiResetDeviceAlreadyProcessed.c)
 */

__int64 __fastcall AcpiPlatformLevelDeviceReset(__int64 a1)
{
  __int64 v1; // rsi
  int v4; // edi
  KIRQL v5; // bp
  __int64 v6; // r8
  __int64 v7; // r11
  _QWORD *v8; // r10
  _QWORD *v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-8h]

  v1 = *(_QWORD *)(a1 + 8);
  if ( !*(_QWORD *)(v1 + 728) )
    return 3221225486LL;
  if ( !*(_QWORD *)(a1 + 72) )
    return 3221225659LL;
  v4 = 0;
  v5 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  if ( *(_QWORD *)(v1 + 912) )
  {
    v4 = -2147483631;
  }
  else
  {
    v7 = *(_QWORD *)(a1 + 72);
    v8 = (_QWORD *)(v7 + 48);
    v9 = *(_QWORD **)(v7 + 48);
    while ( v9 != v8 )
    {
      if ( !(unsigned __int8)AcpiResetDeviceAlreadyProcessed(v7, v9 - 5, v6, *v9, v13) )
      {
        v11 = *(_QWORD *)(v10 + 32);
        *(_QWORD *)(v11 + 960) |= 0x8000000uLL;
        *(_QWORD *)(v11 + 912) = a1;
        _InterlockedIncrement((volatile signed __int32 *)a1);
      }
    }
  }
  KeReleaseSpinLock(&AcpiPowerLock, v5);
  if ( v4 >= 0 )
  {
    v12 = (*(_DWORD *)(v1 + 960) & 0x40000000) == 0LL;
    if ( AcpiIgnorePnpVetoesInPLDR )
      v12 |= 2u;
    return (unsigned int)IoRequestDeviceRemovalForReset(*(_QWORD *)(v1 + 744), v12);
  }
  return (unsigned int)v4;
}
