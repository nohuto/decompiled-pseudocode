/*
 * XREFs of _NtGdiSwapBuffers@4 @ 0x222B79
 * Callers:
 *     <none>
 * Callees:
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DEVLOCKOBJ@@QAE@XZ @ 0x5A936 (--1DEVLOCKOBJ@@QAE@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?vInit@DEVLOCKOBJ@@QAEXXZ @ 0x78C50 (-vInit@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x1D86EC (-vConstructor@DEVLOCKOBJ_WNDOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QAEXXZ @ 0x1D87A2 (-vDestructorNULL@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z @ 0x206441 (-hdevFindDeviceHdev@@YGPAUHDEV__@@PAU1@U_RECTL@@PAVEWNDOBJ@@@Z.c)
 */

BOOL __stdcall NtGdiSwapBuffers(HDC a1)
{
  BOOL v1; // ebx
  DC *v2; // eax
  int v3; // edx
  int v4; // edx
  DEVLOCKOBJ_WNDOBJ *v5; // ecx
  EWNDOBJ *v6; // edi
  _DWORD *v7; // esi
  int v8; // ecx
  int DeviceHdev; // eax
  int (__stdcall *v10)(int, EWNDOBJ *); // eax
  struct _RECTL v12; // [esp-Ch] [ebp-7Ch]
  struct EWNDOBJ *v13; // [esp+4h] [ebp-6Ch]
  EWNDOBJ *v14; // [esp+10h] [ebp-60h]
  int v15; // [esp+18h] [ebp-58h]
  DC *v16[3]; // [esp+1Ch] [ebp-54h] BYREF
  HDEV v17; // [esp+28h] [ebp-48h]
  __int64 v18; // [esp+2Ch] [ebp-44h]
  LONG v19; // [esp+34h] [ebp-3Ch]
  _BYTE v20[20]; // [esp+38h] [ebp-38h] BYREF
  int v21; // [esp+4Ch] [ebp-24h]
  int v22; // [esp+50h] [ebp-20h]
  int v23; // [esp+54h] [ebp-1Ch]
  char v24; // [esp+58h] [ebp-18h]
  char v25; // [esp+59h] [ebp-17h]
  EWNDOBJ *v26; // [esp+68h] [ebp-8h]
  int v27; // [esp+6Ch] [ebp-4h]

  v1 = 0;
  memset(v16, 0, sizeof(v16));
  XDCOBJ::vLock((XDCOBJ *)v16, a1);
  v2 = v16[0];
  if ( !v16[0] || !*((_DWORD *)v16[0] + 126) )
  {
    EngSetLastError(6u);
    v2 = v16[0];
    v3 = 0;
    goto LABEL_22;
  }
  v3 = 1;
  if ( *((_DWORD *)v16[0] + 5) == 1 )
  {
LABEL_22:
    v1 = v3;
    goto LABEL_23;
  }
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 1;
  DEVLOCKOBJ::vInit((DEVLOCKOBJ *)v20);
  v27 = v4;
  DEVLOCKOBJ_WNDOBJ::vConstructor(v5, (struct XDCOBJ *)v16);
  if ( (v20[12] & 1) != 0 )
  {
    if ( v26 )
    {
      if ( ERECTL::bEmpty((EWNDOBJ *)((char *)v26 + 4)) )
        goto LABEL_17;
      ++*(_DWORD *)(*((_DWORD *)v16[0] + 126) + 56);
      v6 = v26;
      v14 = v26;
      v7 = (_DWORD *)*((_DWORD *)v16[0] + 9);
      v8 = *((_DWORD *)v16[0] + 126) != 0 ? *((_DWORD *)v16[0] + 126) + 16 : 0;
      v15 = v8;
      if ( ((unsigned int)&loc_20000 & v7[6]) != 0 )
      {
        v17 = (HDEV)*((_DWORD *)v16[0] + 266);
        v18 = *(_QWORD *)((char *)v16[0] + 1068);
        v19 = *((_DWORD *)v16[0] + 269);
        *(_QWORD *)&v12.left = v18;
        v12.right = v19;
        DeviceHdev = hdevFindDeviceHdev(v26, (int)v7, v17, v12, v13);
        v8 = v15;
        if ( DeviceHdev )
        {
          if ( *((_DWORD *)v16[0] + 126) == v7[455] )
            v8 = *(_DWORD *)(DeviceHdev + 1820) != 0 ? *(_DWORD *)(DeviceHdev + 1820) + 16 : 0;
          v7 = (_DWORD *)DeviceHdev;
        }
        v6 = v14;
      }
      v10 = (int (__stdcall *)(int, EWNDOBJ *))v7[531];
      if ( v10 )
      {
        if ( v10(v8, v6) )
LABEL_17:
          v1 = 1;
      }
    }
    else
    {
      EngSetLastError(6u);
    }
  }
  else
  {
    v1 = XDCOBJ::bFullScreen(v16) != 0;
  }
  DEVLOCKOBJ::vDestructorNULL((DEVLOCKOBJ *)v20);
  if ( v27 )
    UserLeaveUserCritSec();
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v20);
  v2 = v16[0];
LABEL_23:
  if ( v2 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  return v1;
}
