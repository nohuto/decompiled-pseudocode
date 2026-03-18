/*
 * XREFs of _GreDescribePixelFormat@16 @ 0x222832
 * Callers:
 *     _NtGdiDescribePixelFormat@16 @ 0x21237A (_NtGdiDescribePixelFormat@16.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762 (-ipfdDevMaxGet@XDCOBJ@@QAEJXZ.c)
 */

int __fastcall GreDescribePixelFormat(HDC a1, int a2, unsigned int a3, int a4)
{
  int v4; // ebx
  __int16 v6; // ax
  int v7; // edi
  _DWORD *DeviceHdev; // esi
  int v9; // ecx
  int (__stdcall *v10)(_DWORD, int, unsigned int, int); // ecx
  struct _RECTL v12; // [esp-Ch] [ebp-74h]
  struct EWNDOBJ *v13; // [esp+4h] [ebp-64h]
  int v14; // [esp+Ch] [ebp-5Ch]
  _DWORD *v15; // [esp+10h] [ebp-58h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-54h]
  int v17; // [esp+18h] [ebp-50h]
  _DWORD v18[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  HDEV v19; // [esp+28h] [ebp-40h]
  __int64 v20; // [esp+2Ch] [ebp-3Ch]
  LONG v21; // [esp+34h] [ebp-34h]
  _BYTE v22[20]; // [esp+38h] [ebp-30h] BYREF
  _DWORD v23[3]; // [esp+4Ch] [ebp-1Ch] BYREF
  __int16 v24; // [esp+58h] [ebp-10h]

  v4 = 0;
  v17 = a2;
  memset(v18, 0, sizeof(v18));
  XDCOBJ::vLock((XDCOBJ *)v18, a1);
  if ( v18[0] )
  {
    v6 = *(_WORD *)(v18[0] + 1824);
    if ( v6 < 0 )
    {
      v7 = XDCOBJ::ipfdDevMaxGet((XDCOBJ *)v18);
      v14 = v7;
    }
    else
    {
      v7 = v6;
      v14 = v6;
    }
    if ( a3 )
    {
      if ( a3 < 0x28 || a2 < 1 || a2 > v7 )
      {
        EngSetLastError(0x57u);
      }
      else
      {
        DeviceHdev = *(_DWORD **)(v18[0] + 36);
        v16 = DeviceHdev;
        v15 = DeviceHdev;
        memset(v23, 0, sizeof(v23));
        v24 = 256;
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&v15);
        if ( ((unsigned int)&loc_20000 & DeviceHdev[6]) != 0 )
        {
          v9 = *(_DWORD *)(v18[0] + 36);
          v19 = *(HDEV *)(v18[0] + 1064);
          v20 = *(_QWORD *)(v18[0] + 1068);
          v21 = *(_DWORD *)(v18[0] + 1076);
          *(_QWORD *)&v12.left = v20;
          v12.right = v21;
          v7 = v14;
          DeviceHdev = (_DWORD *)hdevFindDeviceHdev(0, v9, v19, v12, v13);
          if ( !DeviceHdev )
            DeviceHdev = v16;
        }
        v10 = (int (__stdcall *)(_DWORD, int, unsigned int, int))DeviceHdev[530];
        if ( v10 )
          v4 = v10(DeviceHdev[277], v17, a3, a4);
        v4 = v4 != 0 ? v7 : 0;
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v22);
        if ( v23[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v23);
      }
    }
    else
    {
      v4 = v7;
    }
  }
  else
  {
    EngSetLastError(6u);
  }
  if ( v18[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v18);
  return v4;
}
