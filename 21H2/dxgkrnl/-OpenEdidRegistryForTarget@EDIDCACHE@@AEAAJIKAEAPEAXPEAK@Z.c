/*
 * XREFs of ?OpenEdidRegistryForTarget@EDIDCACHE@@AEAAJIKAEAPEAXPEAK@Z @ 0x1C0276794
 * Callers:
 *     ?ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0276918 (-ReadEdidFromRegistry@EDIDCACHE@@QEAAJIPEAEPEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     ?WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0276AEC (-WriteEdidToRegistry@EDIDCACHE@@QEAAXIPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C00474E0 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C0147238 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 */

__int64 __fastcall EDIDCACHE::OpenEdidRegistryForTarget(
        EDIDCACHE *this,
        unsigned int a2,
        unsigned int a3,
        void **a4,
        unsigned int *a5)
{
  __int128 v6; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  int v14; // eax
  __int128 v15; // xmm0
  NTSTATUS v16; // ebx
  HANDLE v17; // rcx
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  struct _UNICODE_STRING v20; // [rsp+38h] [rbp-C8h] BYREF
  struct _UNICODE_STRING v21; // [rsp+48h] [rbp-B8h] BYREF
  char v22; // [rsp+58h] [rbp-A8h] BYREF
  _OWORD v23[10]; // [rsp+70h] [rbp-90h] BYREF
  int v24; // [rsp+110h] [rbp+10h]
  wchar_t v25; // [rsp+114h] [rbp+14h]

  v6 = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v9 = *(_OWORD *)L"e\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[1] = v6;
  Handle = 0LL;
  v10 = *(_OWORD *)L"\\CurrentControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  *(_QWORD *)&v21.Length = 10879140LL;
  v23[2] = v9;
  *(_QWORD *)&v20.Length = 1179648LL;
  v11 = *(_OWORD *)L"ControlSet\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[3] = v10;
  v12 = *(_OWORD *)L"et\\Control\\GraphicsDrivers\\InternalMonEdid";
  v23[4] = v11;
  v13 = *(_OWORD *)L"ol\\GraphicsDrivers\\InternalMonEdid";
  v23[5] = v12;
  v23[6] = v13;
  v23[7] = *(_OWORD *)L"icsDrivers\\InternalMonEdid";
  v14 = *(_DWORD *)L"id";
  v15 = *(_OWORD *)L"nalMonEdid";
  v23[8] = *(_OWORD *)L"rs\\InternalMonEdid";
  v23[9] = v15;
  v24 = v14;
  v25 = aRegistryMachin_20[82];
  v21.Buffer = (wchar_t *)v23;
  v20.Buffer = (wchar_t *)&v22;
  v16 = OpenRegistrySubkey(&Handle, a3, 0LL, &v21, a5);
  if ( v16 < 0
    || (RtlUnicodeStringPrintf(&v20, L"%08x", a2), v16 = OpenRegistrySubkey(a4, a3, Handle, &v20, a5),
                                                   v16 != -1073741772)
    || a5 )
  {
    v17 = Handle;
  }
  else
  {
    v17 = 0LL;
    *a4 = Handle;
    v16 = 0;
    Handle = 0LL;
  }
  if ( v17 )
    ZwClose(v17);
  return (unsigned int)v16;
}
