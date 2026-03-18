/*
 * XREFs of ?DxgkSetBootAnimationRelayState@@YAEW4_CDD_BOOT_ANIMATION_RELAY_STATE@@@Z @ 0x1C01F6850
 * Callers:
 *     DxgDetermineBootImageMode @ 0x1C01F60AC (DxgDetermineBootImageMode.c)
 * Callees:
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

char __fastcall DxgkSetBootAnimationRelayState(int a1)
{
  struct DXGGLOBAL *Global; // rax
  int v3; // r8d
  char v4; // bl
  int v6; // r8d
  int v7; // r8d
  bool v8; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  Global = DXGGLOBAL_GetGlobal();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGGLOBAL *)((char *)Global + 1664), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9);
  v3 = *((_DWORD *)DXGGLOBAL_GetGlobal() + 413);
  if ( v3 )
  {
    v6 = v3 - 1;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 != 1 )
          goto LABEL_7;
        v8 = a1 == 4;
      }
      else
      {
        v8 = a1 == 3;
      }
    }
    else
    {
      v8 = a1 == 2;
    }
    if ( v8 )
      goto LABEL_3;
  }
  else if ( ((a1 - 1) & 0xFFFFFFFD) == 0 )
  {
LABEL_3:
    *((_DWORD *)DXGGLOBAL_GetGlobal() + 413) = a1;
    v4 = 1;
    goto LABEL_4;
  }
LABEL_7:
  v4 = 0;
LABEL_4:
  if ( v9[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9);
  return v4;
}
