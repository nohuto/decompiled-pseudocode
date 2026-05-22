/*
 * XREFs of ?CreateDeviceInfo@Win32kInterop@@AEAAPEAULegacyDeviceInfo@@W4InputType@@PEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029BAC
 * Callers:
 *     ?ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z @ 0x180029A7C (-ProcessDeviceArrival@Win32kInterop@@AEAAXPEBU_MIT_PNP_DEVICE_NOTIFICATION_MESSAGE@@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180029CA8 (memcpy_s.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x18003CA78 (--2@YAPEAX_K@Z.c)
 */

_DWORD *__fastcall Win32kInterop::CreateDeviceInfo(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v5; // rbx
  unsigned int v6; // r14d

  v5 = operator new(0x60CuLL);
  memset_0(v5, 0, 0x60CuLL);
  v5[2] = 1548;
  *v5 = *(_DWORD *)(a3 + 4);
  v5[1] = a2;
  *((_BYTE *)v5 + 12) = *(_DWORD *)(a3 + 12) != 0;
  v5[4] = *(_DWORD *)(a3 + 16);
  v5[18] = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 48);
  if ( v6 )
  {
    memcpy_s(v5 + 19, 0x208uLL, (const void *const)(a3 + 52), 2LL * v6);
    if ( v6 > 2 && *(_WORD *)(a3 + 52) == 92 && *(_WORD *)(a3 + 54) == 63 && *(_WORD *)(a3 + 56) == 63 )
      *((_WORD *)v5 + 39) = 92;
  }
  if ( a2 == 2 )
  {
    *(_QWORD *)(v5 + 11) = *(_QWORD *)(a3 + 20);
    v5[13] = *(_DWORD *)(a3 + 28);
  }
  else if ( a2 == 4 )
  {
    *(_OWORD *)(v5 + 11) = *(_OWORD *)(a3 + 20);
    *(_QWORD *)(v5 + 15) = *(_QWORD *)(a3 + 36);
    v5[17] = *(_DWORD *)(a3 + 44);
  }
  return v5;
}
