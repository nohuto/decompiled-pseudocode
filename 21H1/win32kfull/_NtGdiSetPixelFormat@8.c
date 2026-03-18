/*
 * XREFs of _NtGdiSetPixelFormat@8 @ 0x222992
 * Callers:
 *     <none>
 * Callees:
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     _UserGetHwnd@16 @ 0x1542EC (_UserGetHwnd@16.c)
 *     ??1USERCRIT@@QAE@XZ @ 0x1D6FFF (--1USERCRIT@@QAE@XZ.c)
 *     ?vForceClientRgnUpdate@@YGXXZ @ 0x1E6558 (-vForceClientRgnUpdate@@YGXXZ.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 *     ?ipfdDevMaxGet@XDCOBJ@@QAEJXZ @ 0x222762 (-ipfdDevMaxGet@XDCOBJ@@QAEJXZ.c)
 */

int __stdcall NtGdiSetPixelFormat(HDC a1, int a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // edi
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  _DWORD *v8; // esi
  int v9; // ecx
  bool v10; // zf
  int DeviceHdev; // eax
  int (__stdcall *v12)(int, int, int); // eax
  struct _RECTL v14; // [esp-Ch] [ebp-74h]
  struct EWNDOBJ *v15; // [esp+4h] [ebp-64h]
  _DWORD *v16; // [esp+Ch] [ebp-5Ch] BYREF
  int v17; // [esp+10h] [ebp-58h] BYREF
  int v18; // [esp+14h] [ebp-54h]
  int v19; // [esp+18h] [ebp-50h] BYREF
  _DWORD v20[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  HDEV v21; // [esp+28h] [ebp-40h]
  __int64 v22; // [esp+2Ch] [ebp-3Ch]
  LONG v23; // [esp+34h] [ebp-34h]
  _BYTE v24[20]; // [esp+38h] [ebp-30h] BYREF
  int v25; // [esp+4Ch] [ebp-1Ch]
  int v26; // [esp+50h] [ebp-18h]
  int v27; // [esp+54h] [ebp-14h]
  __int16 v28; // [esp+58h] [ebp-10h]

  v2 = 0;
  memset(v20, 0, sizeof(v20));
  XDCOBJ::vLock((XDCOBJ *)v20, a1);
  if ( !v20[0] || !*(_DWORD *)(v20[0] + 504) )
  {
    EngSetLastError(6u);
    goto LABEL_33;
  }
  LOWORD(v3) = *(_WORD *)(v20[0] + 1824);
  if ( (v3 & 0x8000u) != 0 )
    v3 = XDCOBJ::ipfdDevMaxGet((XDCOBJ *)v20);
  else
    v3 = (__int16)v3;
  v4 = a2;
  if ( a2 < 1 || a2 > v3 )
  {
    EngSetLastError(0x57u);
    goto LABEL_33;
  }
  UserEnterUserCritSec();
  v19 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v24, (struct XDCOBJ *)v20, 0);
  v6 = v20[0];
  v17 = 0;
  if ( (*(_BYTE *)(v20[0] + 24) & 1) == 0 )
    goto LABEL_16;
  v16 = 0;
  if ( UserGetHwnd(a1, &v17, (int *)&v16, v5) )
  {
    if ( v16 )
    {
      if ( v16[36] != a2 )
      {
        EngSetLastError(0x7D0u);
        goto LABEL_30;
      }
      goto LABEL_29;
    }
    v6 = v20[0];
LABEL_16:
    v7 = *(_DWORD *)(v6 + 504);
    v8 = *(_DWORD **)(v6 + 36);
    v16 = v8;
    v9 = v7 != 0 ? v7 + 16 : 0;
    v10 = ((unsigned int)&loc_20000 & v8[6]) == 0;
    v18 = v9;
    if ( !v10 )
    {
      v21 = *(HDEV *)(v6 + 1064);
      v22 = *(_QWORD *)(v6 + 1068);
      v23 = *(_DWORD *)(v6 + 1076);
      *(_QWORD *)&v14.left = v22;
      v14.right = v23;
      v8 = v16;
      DeviceHdev = hdevFindDeviceHdev(0, (int)v16, v21, v14, v15);
      v9 = v18;
      if ( DeviceHdev )
      {
        if ( *(_DWORD *)(v20[0] + 504) == v8[455] )
          v9 = *(_DWORD *)(DeviceHdev + 1820) != 0 ? *(_DWORD *)(DeviceHdev + 1820) + 16 : 0;
        else
          v9 = v18;
        v8 = (_DWORD *)DeviceHdev;
      }
      v4 = a2;
    }
    if ( !v8[531] )
      goto LABEL_30;
    if ( (*(_DWORD *)(v9 + 56) & 0x200000) == 0 )
      goto LABEL_30;
    v12 = (int (__stdcall *)(int, int, int))v8[529];
    if ( !v12 || !v12(v9, v4, v17) )
      goto LABEL_30;
    if ( gbWndobjUpdate )
    {
      gbWndobjUpdate = 0;
      vForceClientRgnUpdate();
    }
LABEL_29:
    v2 = 1;
    goto LABEL_30;
  }
  EngSetLastError(0x7D2u);
LABEL_30:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
  USERCRIT::~USERCRIT((USERCRIT *)&v19);
LABEL_33:
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v2;
}
