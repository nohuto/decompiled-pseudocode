/*
 * XREFs of TranslateEjectInterface @ 0x1C0099F24
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C00109F0 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0002980 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0003AB0 (ACPIGet.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009CBE0 (PnpBiosResourcesToNtResources.c)
 *     BuildTranslatorRanges @ 0x1C00B58C0 (BuildTranslatorRanges.c)
 */

__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  void *v2; // rdi
  __int64 *DeviceExtension; // r15
  __int64 v6; // rsi
  int v7; // ebx
  unsigned int v8; // r8d
  unsigned int v9; // r9d
  char *v10; // rdx
  _QWORD *PoolWithTag; // rax
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+A8h] [rbp+48h] BYREF
  PVOID v15; // [rsp+B0h] [rbp+50h]
  __int64 v16; // [rsp+B8h] [rbp+58h]

  v15 = 0LL;
  v2 = 0LL;
  P[0] = 0LL;
  v14 = 0;
  v16 = 0LL;
  DeviceExtension = (__int64 *)ACPIInternalGetDeviceExtension(a1);
  v6 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v14) < 0 )
    goto LABEL_9;
  v7 = PnpBiosResourcesToNtResources(a1, P[0], 1LL);
  if ( v7 < 0 )
    goto LABEL_13;
  if ( !v15 || (v8 = 0, (v9 = *((_DWORD *)v15 + 9)) == 0) )
  {
LABEL_9:
    v7 = *(_DWORD *)(a2 + 48);
    goto LABEL_10;
  }
  v10 = (char *)v15 + 44;
  while ( 1 )
  {
    if ( *(v10 - 3) == -127 && (*(_WORD *)v10 & 0x6000) != 0 )
    {
      v16 = *((_QWORD *)v10 + 1);
      if ( *((_DWORD *)v10 + 1) != *((unsigned __int8 *)v15 + 32 * v8 + 9) || v16 != *(_QWORD *)(v10 - 20) )
        break;
    }
    ++v8;
    v10 += 32;
    if ( v8 >= v9 )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x58706341u);
  v2 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v7 = -1073741670;
    goto LABEL_13;
  }
  *PoolWithTag = DeviceExtension[90];
  PoolWithTag[3] = v15;
  v7 = BuildTranslatorRanges(PoolWithTag, PoolWithTag + 1, PoolWithTag + 2);
  if ( v7 >= 0 )
  {
    *(_DWORD *)v6 = 65584;
    *(_QWORD *)(v6 + 16) = PciConfigPinToLine;
    v7 = 0;
    *(_QWORD *)(v6 + 24) = PciConfigPinToLine;
    *(_QWORD *)(v6 + 32) = &TranslateBridgeResources;
    *(_QWORD *)(v6 + 40) = &TranslateBridgeRequirements;
    *(_QWORD *)(v6 + 8) = v2;
LABEL_10:
    if ( v7 >= 0 )
      goto LABEL_13;
  }
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
LABEL_13:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v7;
}
