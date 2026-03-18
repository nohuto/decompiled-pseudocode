/*
 * XREFs of ?GetMonitorRegionForDpi@@YGPAUHRGN__@@PAUtagMONITOR@@G@Z @ 0x1B7171
 * Callers:
 *     _xxxDeferWindowPosAndCheckPoint@28 @ 0x14AF0 (_xxxDeferWindowPosAndCheckPoint@28.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 *     _IsSmallerThanScreen@8 @ 0x19E5B1 (_IsSmallerThanScreen@8.c)
 * Callees:
 *     _GetMonitorRectForDpi@8 @ 0x15588 (_GetMonitorRectForDpi@8.c)
 *     _GetDpiCacheSlot@4 @ 0x31A1A (_GetDpiCacheSlot@4.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

HRGN __fastcall GetMonitorRegionForDpi(int a1, unsigned __int16 a2)
{
  int v3; // esi
  int DpiCacheSlot; // eax
  int v6; // ebx
  bool v7; // zf
  INT *MonitorRectForDpi; // eax
  INT v9[5]; // [esp+10h] [ebp-30h] BYREF
  int v10; // [esp+24h] [ebp-1Ch]
  int v11; // [esp+28h] [ebp-18h]
  _DWORD v12[4]; // [esp+2Ch] [ebp-14h] BYREF

  v3 = a1;
  v10 = a1;
  if ( !a2 )
    return *(HRGN *)(a1 + 40);
  DpiCacheSlot = GetDpiCacheSlot(a2);
  v6 = DpiCacheSlot != -1 ? DpiCacheSlot : 0;
  v7 = *(_DWORD *)(v3 + 44 + 4 * v6) == 0;
  v11 = v3 + 44 + 4 * v6;
  if ( v7 )
  {
    MonitorRectForDpi = GetMonitorRectForDpi(v3, a2, v9);
    v12[0] = *MonitorRectForDpi;
    v12[1] = MonitorRectForDpi[1];
    v12[2] = MonitorRectForDpi[2];
    v12[3] = MonitorRectForDpi[3];
    SetOrCreateRectRgnIndirectPublic(v11, v12);
    v3 = v10;
  }
  return *(HRGN *)(v3 + 4 * v6 + 44);
}
