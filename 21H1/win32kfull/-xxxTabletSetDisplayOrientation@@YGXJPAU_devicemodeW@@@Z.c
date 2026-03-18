/*
 * XREFs of ?xxxTabletSetDisplayOrientation@@YGXJPAU_devicemodeW@@@Z @ 0x147613
 * Callers:
 *     ?xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z @ 0x147505 (-xxxTabletButtonExecuteAction@@YGXPAUtagTABLET_BUTTON_ACTION@@HPAU_devicemodeW@@@Z.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?TabletRetrieveDevMode@@YGJPAU_devicemodeW@@@Z @ 0x147384 (-TabletRetrieveDevMode@@YGJPAU_devicemodeW@@@Z.c)
 */

void __fastcall xxxTabletSetDisplayOrientation(unsigned int a1, _DWORD *a2)
{
  NTSTATUS DevMode; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // eax
  int v8; // edx
  int v9; // ecx
  unsigned int v10; // eax
  unsigned int v11; // eax
  union _LARGE_INTEGER CurrentTime; // [esp+10h] [ebp-130h] BYREF
  _WORD v13[112]; // [esp+18h] [ebp-128h] BYREF
  _DWORD v14[17]; // [esp+F8h] [ebp-48h] BYREF

  DevMode = 0;
  memset(v14, 0, 0x40u);
  EtwActivityIdControl(3u, (LPGUID)&v14[1]);
  CurrentTime.QuadPart = 0LL;
  KeQuerySystemTime(&CurrentTime);
  *(union _LARGE_INTEGER *)&v14[14] = CurrentTime;
  v14[5] = 19;
  LOBYTE(v14[11]) = -1;
  memset(v13, 0, 0xDCu);
  if ( !a2 )
  {
    DevMode = TabletRetrieveDevMode(v13);
    if ( DevMode < 0 )
      return;
    a2 = v13;
  }
  v5 = a2[18];
  if ( (v5 & 0x80u) != 0 )
  {
    v6 = a2[21];
    if ( a1 > 3 )
    {
      if ( a1 != -1 )
      {
        DevMode = -1073741823;
        a1 = a2[21];
LABEL_10:
        if ( DevMode >= 0 )
        {
          v7 = 1;
          a2[18] = v5 & 0x7C0080;
          v8 = !v6 || v6 == 2;
          if ( a1 && a1 != 2 )
            v7 = 0;
          v9 = a2[43];
          if ( v8 == v7 )
          {
            v10 = a2[43];
          }
          else
          {
            v10 = a2[44];
            a2[43] = v10;
            a2[44] = v9;
          }
          if ( v10 >= 0x258 )
          {
            while ( xxxUserChangeDisplaySettings(0, a2, 0, 9, 0, 0, v14) == -2 )
            {
              v11 = a2[42];
              if ( v11 < 0x18 )
                break;
              a2[42] = v11 - 8;
            }
          }
        }
        return;
      }
      gCurrentOrientation = (gCurrentOrientation + 1) & 3;
      a1 = *((unsigned __int8 *)&gbOrientationTable + gCurrentOrientation);
    }
    a2[21] = a1;
    goto LABEL_10;
  }
}
