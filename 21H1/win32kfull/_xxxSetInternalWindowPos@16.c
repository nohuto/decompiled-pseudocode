/*
 * XREFs of _xxxSetInternalWindowPos@16 @ 0x16F556
 * Callers:
 *     _NtUserSetInternalWindowPos@16 @ 0x169647 (_NtUserSetInternalWindowPos@16.c)
 * Callees:
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __MonitorFromRect@12 @ 0x336E0 (__MonitorFromRect@12.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _UpdateCheckpoint@4 @ 0xB4838 (_UpdateCheckpoint@4.c)
 *     _GetMonitorWorkRect@4 @ 0xB498E (_GetMonitorWorkRect@4.c)
 *     _GetMonitorRect@4 @ 0xB49BE (_GetMonitorRect@4.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 */

int __thiscall xxxSetInternalWindowPos(_DWORD *this, int *a2, int *a3)
{
  _DWORD *v3; // esi
  int result; // eax
  int *v5; // ebx
  void *v6; // ebx
  int *MonitorWorkRect; // eax
  int *MonitorRect; // eax
  int v9; // eax
  int v10; // ecx
  void *v11; // ebx
  int *v12; // eax
  _DWORD *v13; // eax
  unsigned int v14; // ecx
  char v15; // al
  struct tagWND *v16; // [esp+0h] [ebp-48h]
  unsigned int v17; // [esp+4h] [ebp-44h]
  int *v19; // [esp+10h] [ebp-38h]
  int v20; // [esp+18h] [ebp-30h]
  int v21; // [esp+1Ch] [ebp-2Ch]
  int v22; // [esp+1Ch] [ebp-2Ch]
  int v23; // [esp+28h] [ebp-20h] BYREF
  int v24; // [esp+2Ch] [ebp-1Ch]
  int v25; // [esp+30h] [ebp-18h]
  int v26; // [esp+34h] [ebp-14h]
  _DWORD v27[4]; // [esp+38h] [ebp-10h] BYREF

  v3 = this;
  result = UpdateCheckpoint(this);
  v5 = (int *)result;
  v19 = (int *)result;
  if ( result )
  {
    if ( a2 )
    {
      *(_DWORD *)result = *a2;
      *(_DWORD *)(result + 4) = a2[1];
      *(_DWORD *)(result + 8) = a2[2];
      *(_DWORD *)(result + 12) = a2[3];
      v3 = this;
      if ( this[14] == _GetDesktopWindow(this) )
      {
        v6 = (void *)_MonitorFromRect(a2, 1, 0);
        MonitorWorkRect = GetMonitorWorkRect(v6, &v23);
        v20 = *MonitorWorkRect;
        v21 = MonitorWorkRect[1];
        MonitorRect = GetMonitorRect(v6, v27);
        v5 = v19;
        v23 = *MonitorRect;
        v24 = MonitorRect[1];
        v25 = MonitorRect[2];
        v26 = MonitorRect[3];
        v9 = v20 - v23;
        v10 = v21 - v24;
        *v19 += v20 - v23;
        v19[2] += v9;
        v19[3] += v10;
        v19[1] += v10;
        v3 = this;
      }
    }
    if ( !a3 || *a3 == -1 )
    {
      v14 = v5[12] & 0xFFFFFFDE;
    }
    else
    {
      v5[8] = *a3;
      v5[9] = a3[1];
      if ( v3[14] == _GetDesktopWindow(v3) )
      {
        v11 = (void *)_MonitorFromRect(v5, 1, 0);
        v12 = GetMonitorWorkRect(v11, v27);
        v23 = *v12;
        v24 = v12[1];
        v25 = v12[2];
        v26 = v12[3];
        v13 = GetMonitorRect(v11, v27);
        v5 = v19;
        v22 = v13[1];
        v19[8] += v23 - *v13;
        v19[9] += v24 - v22;
        v3 = this;
      }
      v14 = v5[12] | 0x21;
    }
    v5[12] = v14;
    v15 = *(_BYTE *)(v3[5] + 23);
    if ( (v15 & 0x20) != 0 )
    {
      if ( (v14 & 0x20) != 0 )
        xxxSetWindowPos((int)v3, 0, v5[8], v5[9], 0, 0, 21);
    }
    else if ( (v15 & 1) == 0 && a2 )
    {
      xxxSetWindowPos((int)v3, 0, *a2, a2[1], a2[2] - *a2, a2[3] - a2[1], 4);
    }
    xxxShowWindow(v16, v17);
    return 1;
  }
  return result;
}
