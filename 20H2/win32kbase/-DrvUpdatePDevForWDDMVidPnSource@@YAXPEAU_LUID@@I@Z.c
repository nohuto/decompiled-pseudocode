/*
 * XREFs of ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C000E7DC
 * Callers:
 *     ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x1C00B9240 (-DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z.c)
 * Callees:
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C000FDEC (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0011700 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     hdevEnumerate @ 0x1C0011850 (hdevEnumerate.c)
 *     ?bLddmDriver@PDEVOBJ@@QEBAHXZ @ 0x1C0060CA8 (-bLddmDriver@PDEVOBJ@@QEBAHXZ.c)
 */

void __fastcall DrvUpdatePDevForWDDMVidPnSource(struct _LUID *a1, int a2)
{
  __int64 i; // rcx
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // eax
  struct _LUID *v8; // rax
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  for ( i = 0LL; ; i = v6 )
  {
    v5 = hdevEnumerate(i);
    v6 = v5;
    if ( !v5 )
      break;
    v9 = v5;
    v7 = *(_DWORD *)(v5 + 40);
    if ( (v7 & 1) != 0 && (v7 & 0x400) == 0 && (v7 & 0x20000) == 0 )
    {
      if ( (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v9) )
      {
        v8 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v9);
        if ( v8->LowPart == a1->LowPart
          && v8->HighPart == a1->HighPart
          && *(_DWORD *)(*(_QWORD *)(v6 + 2576) + 256LL) == a2 )
        {
          DrvUpdatePDevForWDDMDevice(v6);
        }
      }
    }
  }
}
