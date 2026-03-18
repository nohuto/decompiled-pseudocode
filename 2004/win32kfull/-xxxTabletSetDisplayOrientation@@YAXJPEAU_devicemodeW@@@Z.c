/*
 * XREFs of ?xxxTabletSetDisplayOrientation@@YAXJPEAU_devicemodeW@@@Z @ 0x1C01D9D3C
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z @ 0x1C01D9BCC (-xxxTabletButtonExecuteAction@@YAXPEAUtagTABLET_BUTTON_ACTION@@HPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ?TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z @ 0x1C01D997C (-TabletRetrieveDevMode@@YAJPEAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletSetDisplayOrientation(DWORD a1, struct _devicemodeW *a2)
{
  int v4; // esi
  DWORD dmFields; // edx
  DWORD dmDisplayOrientation; // r8d
  DWORD dmPelsWidth; // edx
  DWORD dmPelsHeight; // eax
  DWORD dmBitsPerPel; // eax
  _QWORD v10[10]; // [rsp+40h] [rbp-148h] BYREF
  struct _devicemodeW v11; // [rsp+90h] [rbp-F8h] BYREF

  memset(v10, 0, 0x48uLL);
  EtwActivityIdControl(3u, (LPGUID)&v10[1]);
  v4 = 0;
  v10[8] = MEMORY[0xFFFFF78000000014];
  LODWORD(v10[3]) = 19;
  LOBYTE(v10[6]) = -1;
  memset(&v11, 0, sizeof(v11));
  if ( !a2 )
  {
    v4 = TabletRetrieveDevMode(&v11);
    if ( v4 < 0 )
      return;
    a2 = &v11;
  }
  dmFields = a2->dmFields;
  if ( (dmFields & 0x80u) != 0 )
  {
    dmDisplayOrientation = a2->dmDisplayOrientation;
    if ( a1 > 3 )
    {
      if ( a1 != -1 )
      {
        v4 = -1073741823;
        a1 = a2->dmDisplayOrientation;
        goto LABEL_10;
      }
      gCurrentOrientation = (gCurrentOrientation + 1) & 3;
      a1 = gbOrientationTable[gCurrentOrientation];
    }
    a2->dmDisplayOrientation = a1;
LABEL_10:
    if ( v4 >= 0 )
    {
      a2->dmFields = dmFields & 0x7C0080;
      dmPelsWidth = a2->dmPelsWidth;
      if ( ((dmDisplayOrientation & 0xFFFFFFFD) == 0) == ((a1 & 0xFFFFFFFD) == 0) )
      {
        dmPelsHeight = a2->dmPelsWidth;
      }
      else
      {
        dmPelsHeight = a2->dmPelsHeight;
        a2->dmPelsWidth = dmPelsHeight;
        a2->dmPelsHeight = dmPelsWidth;
      }
      if ( dmPelsHeight >= 0x258 )
      {
        while ( (unsigned int)xxxUserChangeDisplaySettings(0LL, a2, 0LL, 9LL, 0LL, 0, v10) == -2 )
        {
          dmBitsPerPel = a2->dmBitsPerPel;
          if ( dmBitsPerPel < 0x18 )
            break;
          a2->dmBitsPerPel = dmBitsPerPel - 8;
        }
      }
    }
  }
}
