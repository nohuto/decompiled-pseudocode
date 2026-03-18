/*
 * XREFs of ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762
 * Callers:
 *     _GreDescribePixelFormat@16 @ 0x222832 (_GreDescribePixelFormat@16.c)
 *     _NtGdiSetPixelFormat@8 @ 0x222992 (_NtGdiSetPixelFormat@8.c)
 * Callees:
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 */

int __thiscall XDCOBJ::ipfdDevMaxGet(XDCOBJ *this)
{
  XDCOBJ *v1; // edi
  int v2; // ebx
  _DWORD *DeviceHdev; // esi
  int v4; // eax
  int v5; // ecx
  int (__stdcall *v6)(_DWORD, int, _DWORD, _DWORD); // ecx
  struct _RECTL v8; // [esp-Ch] [ebp-64h]
  struct EWNDOBJ *v9; // [esp+4h] [ebp-54h]
  _DWORD *v11; // [esp+10h] [ebp-48h] BYREF
  _DWORD *v12; // [esp+14h] [ebp-44h]
  HDEV v13; // [esp+18h] [ebp-40h]
  __int64 v14; // [esp+1Ch] [ebp-3Ch]
  LONG v15; // [esp+24h] [ebp-34h]
  _BYTE v16[20]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v17[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v18; // [esp+48h] [ebp-10h]

  v1 = this;
  v2 = 0;
  DeviceHdev = *(_DWORD **)(*(_DWORD *)this + 36);
  memset(v17, 0, sizeof(v17));
  v12 = DeviceHdev;
  v11 = DeviceHdev;
  v18 = 256;
  DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v16, (struct PDEVOBJ *)&v11);
  if ( ((unsigned int)&loc_20000 & DeviceHdev[6]) != 0 )
  {
    v4 = *(_DWORD *)v1;
    v5 = *(_DWORD *)(*(_DWORD *)v1 + 36);
    v13 = *(HDEV *)(*(_DWORD *)v1 + 1064);
    v14 = *(_QWORD *)(v4 + 1068);
    v15 = *(_DWORD *)(v4 + 1076);
    *(_QWORD *)&v8.left = v14;
    v8.right = v15;
    v1 = this;
    DeviceHdev = (_DWORD *)hdevFindDeviceHdev(0, v5, v13, v8, v9);
    if ( !DeviceHdev )
      DeviceHdev = v12;
  }
  v6 = (int (__stdcall *)(_DWORD, int, _DWORD, _DWORD))DeviceHdev[530];
  if ( v6 )
  {
    v2 = v6(DeviceHdev[277], 1, 0, 0);
    if ( v2 < 0 )
      v2 = 0;
  }
  *(_WORD *)(*(_DWORD *)v1 + 1824) = v2;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v16);
  if ( v17[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v17);
  return v2;
}
