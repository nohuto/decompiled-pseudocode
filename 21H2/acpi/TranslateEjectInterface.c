/*
 * XREFs of TranslateEjectInterface @ 0x1C0097130
 * Callers:
 *     ACPIBusIrpQueryInterface @ 0x1C0005A80 (ACPIBusIrpQueryInterface.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x1C0001928 (ACPIInternalGetDeviceExtension.c)
 *     ACPIGet @ 0x1C0010180 (ACPIGet.c)
 *     PnpBiosResourcesToNtResources @ 0x1C009832C (PnpBiosResourcesToNtResources.c)
 *     BuildTranslatorRanges @ 0x1C00B52A0 (BuildTranslatorRanges.c)
 */

__int64 __fastcall TranslateEjectInterface(ULONG_PTR a1, __int64 a2)
{
  __int64 DeviceExtension; // r14
  __int64 v5; // rsi
  int v6; // ebx
  unsigned int v7; // r9d
  unsigned int v8; // r8d
  char *v9; // rdx
  _QWORD *Pool2; // rax
  void *v12; // rdi
  PVOID P[2]; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+98h] [rbp+38h] BYREF
  PVOID v15; // [rsp+A0h] [rbp+40h]
  __int64 v16; // [rsp+A8h] [rbp+48h]

  v15 = 0LL;
  P[0] = 0LL;
  v14 = 0;
  v16 = 0LL;
  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v5 = *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL);
  if ( (int)ACPIGet(DeviceExtension, 1397900127, 268501000, 0LL, 0, 0LL, 0LL, (__int64)P, (__int64)&v14) < 0 )
    goto LABEL_9;
  v6 = PnpBiosResourcesToNtResources(a1, P[0], 1LL);
  if ( v6 < 0 )
    goto LABEL_10;
  if ( v15 && (v7 = *((_DWORD *)v15 + 9), v8 = 0, v7) )
  {
    v9 = (char *)v15 + 44;
    while ( 1 )
    {
      if ( *(v9 - 3) == -127 && (*(_WORD *)v9 & 0x6000) != 0 )
      {
        v16 = *((_QWORD *)v9 + 1);
        if ( *((_DWORD *)v9 + 1) != *((unsigned __int8 *)v15 + 32 * v8 + 9) || v16 != *(_QWORD *)(v9 - 20) )
          break;
      }
      ++v8;
      v9 += 32;
      if ( v8 >= v7 )
        goto LABEL_9;
    }
    Pool2 = (_QWORD *)ExAllocatePool2(256LL, 32LL, 1483760449LL);
    v12 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = *(_QWORD *)(DeviceExtension + 760);
      Pool2[3] = v15;
      v6 = BuildTranslatorRanges(Pool2, Pool2 + 1, Pool2 + 2);
      if ( v6 < 0 )
      {
        ExFreePoolWithTag(v12, 0);
      }
      else
      {
        *(_DWORD *)v5 = 65584;
        *(_QWORD *)(v5 + 16) = PciConfigPinToLine;
        v6 = 0;
        *(_QWORD *)(v5 + 24) = PciConfigPinToLine;
        *(_QWORD *)(v5 + 32) = &TranslateBridgeResources;
        *(_QWORD *)(v5 + 40) = &TranslateBridgeRequirements;
        *(_QWORD *)(v5 + 8) = v12;
      }
    }
    else
    {
      v6 = -1073741670;
    }
  }
  else
  {
LABEL_9:
    v6 = *(_DWORD *)(a2 + 48);
  }
LABEL_10:
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v15 )
    ExFreePoolWithTag(v15, 0);
  return (unsigned int)v6;
}
