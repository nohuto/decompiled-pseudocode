/*
 * XREFs of PipAllocateDeviceNode @ 0x14074EAA0
 * Callers:
 *     PipProcessEnumeratedChildDevice @ 0x14074571C (PipProcessEnumeratedChildDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     IopLegacyResourceAllocation @ 0x140753634 (IopLegacyResourceAllocation.c)
 *     IoReportDetectedDevice @ 0x1407AEB10 (IoReportDetectedDevice.c)
 *     PiInitializeDevice @ 0x1408B3DCC (PiInitializeDevice.c)
 *     IopInitializePlugPlayServices @ 0x140A53280 (IopInitializePlugPlayServices.c)
 * Callees:
 *     memset @ 0x140414300 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PipAllocateDeviceNode(__int64 a1, void **a2)
{
  PVOID PoolWithTag; // rax
  _QWORD *v5; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x310uLL, 0x646F6E44u);
  *a2 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  _InterlockedIncrement(&IopNumberDeviceNodes);
  memset(*a2, 0, 0x310uLL);
  *((_DWORD *)*a2 + 112) = -1;
  *((_DWORD *)*a2 + 113) = -1;
  *((_DWORD *)*a2 + 114) = -1;
  *((_DWORD *)*a2 + 115) = -1;
  *((_WORD *)*a2 + 232) = -1;
  *((_DWORD *)*a2 + 75) = 769;
  *((_DWORD *)*a2 + 150) = 0;
  *((_DWORD *)*a2 + 160) = 0;
  *((_QWORD *)*a2 + 81) = 0LL;
  *((_DWORD *)*a2 + 164) = 0;
  *((_DWORD *)*a2 + 165) = -1;
  *((_WORD *)*a2 + 233) = 0;
  v5 = (char *)*a2 + 488;
  v5[1] = v5;
  *v5 = v5;
  v6 = (char *)*a2 + 504;
  v6[1] = v6;
  *v6 = v6;
  if ( a1 )
  {
    *((_QWORD *)*a2 + 4) = a1;
    *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL) = *a2;
    *(_DWORD *)(a1 + 48) &= ~0x80u;
  }
  v7 = (char *)*a2 + 472;
  v7[1] = v7;
  *v7 = v7;
  v8 = (char *)*a2 + 576;
  v8[1] = v8;
  *v8 = v8;
  v9 = (char *)*a2 + 608;
  v9[1] = v9;
  *v9 = v9;
  v10 = (char *)*a2 + 624;
  v10[1] = v10;
  *v10 = v10;
  v11 = (char *)*a2 + 176;
  v11[1] = v11;
  *v11 = v11;
  v12 = (char *)*a2 + 192;
  v12[1] = v12;
  *v12 = v12;
  return 0LL;
}
