/*
 * XREFs of LogDiagCDS @ 0x1C006C61C
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C006BCA4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     DrvChangeDisplaySettings @ 0x1C006C208 (DrvChangeDisplaySettings.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C003C5B0 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     ?FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z @ 0x1C006C838 (-FillSimpleDevModeField@@YAXQEAU_devicemodeW@@PEAU_DXGK_DIAG_SIMPLE_DEVMODE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x1C00C9780 (DrvDxgkLogCodePointPacket.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 */

void __fastcall LogDiagCDS(
        __int64 a1,
        struct _devicemodeW *a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        __int64 a9,
        unsigned int a10,
        unsigned int a11,
        unsigned int a12,
        __int16 a13,
        struct _devicemodeW *a14)
{
  void *v18; // rax
  __int64 v19; // rbx
  unsigned int v20; // r11d
  int v21; // r11d
  __int64 v22; // rax

  v18 = PALLOCMEM2(0xA0uLL, 1936876615LL, 1);
  v19 = (__int64)v18;
  if ( v18 )
  {
    memset(v18, 0, 0xA0uLL);
    *(_DWORD *)(v19 + 4) = 160;
    *(_DWORD *)v19 = 5;
    *(_QWORD *)(v19 + 64) = a9;
    *(_DWORD *)(v19 + 56) = a10;
    *(_DWORD *)(v19 + 52) = a11;
    *(_DWORD *)(v19 + 60) = a12;
    v20 = ((unsigned __int16)(a13 << 13) ^ (*(_WORD *)(v19 + 48) | (a6 != 0 ? 0x10 : 0) | (a7 != 0 ? 0x20 : 0) | (a5 != 0 ? 8 : 0) | (a8 != 0 ? 0x40 : 0) | (a4 == 0 ? 4 : 0) | (a2 != 0LL) | (a1 != 0 ? 2 : 0) | (a14 != 0LL ? 0x1000 : 0))) & 0xE000 ^ ((a8 != 0 ? 0x40 : 0) | (a7 != 0 ? 0x20 : 0) | (a6 != 0 ? 0x10 : 0) | (a5 != 0 ? 8 : 0) | (a4 == 0 ? 4 : 0) | (a1 != 0 ? 2 : 0) | (a14 != 0LL ? 0x1000 : 0) | *(_DWORD *)(v19 + 48) & 0xFFFFEF80 | (a2 != 0LL));
    *(_DWORD *)(v19 + 48) = v20;
    if ( a3 )
    {
      v21 = v20 | 0x800;
      *(_DWORD *)(v19 + 48) = v21;
      *(_DWORD *)(v19 + 48) = v21 ^ ((unsigned __int16)v21 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(a3 + 256) << 7)) & 0x780;
    }
    FillSimpleDevModeField(a2, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v19 + 72));
    FillSimpleDevModeField(a14, (struct _DXGK_DIAG_SIMPLE_DEVMODE *)(v19 + 116));
    ((void (__fastcall *)(__int64))qword_1C024A950)(v19);
    Win32FreePool(v19);
  }
  else
  {
    v22 = WdLogNewEntry5_WdLowResource();
    *(_QWORD *)(v22 + 24) = 160LL;
    WdLogEvent5_WdLowResource(v22);
    DrvDxgkLogCodePointPacket(5LL, a10, a11, a12);
  }
}
