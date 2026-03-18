/*
 * XREFs of _NtUserPaintMonitor@12 @ 0x167454
 * Callers:
 *     <none>
 * Callees:
 *     _xxxDesktopPaintCallback@16 @ 0xE9858 (_xxxDesktopPaintCallback@16.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

BOOL __stdcall NtUserPaintMonitor(int a1, int a2, ULONG a3)
{
  BOOL v3; // ebx
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  void *v6; // esi
  int v7; // ecx
  int v8; // edi
  _DWORD v10[4]; // [esp+10h] [ebp-4Ch] BYREF
  int v11; // [esp+20h] [ebp-3Ch] BYREF
  void *v12; // [esp+24h] [ebp-38h]
  int v13; // [esp+28h] [ebp-34h]
  int v14; // [esp+2Ch] [ebp-30h] BYREF
  int v15; // [esp+30h] [ebp-2Ch]
  int v16; // [esp+34h] [ebp-28h]
  int v17; // [esp+38h] [ebp-24h] BYREF
  int v18; // [esp+3Ch] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v14 = 0;
  v15 = 0;
  v16 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  v3 = 0;
  v17 = 0;
  v18 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v4 = (_DWORD *)_MmUserProbeAddress;
  if ( a3 < _MmUserProbeAddress )
    v4 = (_DWORD *)a3;
  v10[0] = *v4;
  v5 = v4 + 1;
  v10[1] = *v5++;
  v10[2] = *v5;
  v10[3] = v5[1];
  ms_exc.registration.TryLevel = -2;
  v6 = (void *)ValidateHmonitor(a1);
  if ( v6 )
  {
    v7 = _gptiCurrent;
    v8 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12);
    v14 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v14;
    v15 = v8;
    if ( v8 )
    {
      HMLockObject(v8);
      v7 = _gptiCurrent;
    }
    v11 = *(_DWORD *)(v7 + 228);
    *(_DWORD *)(v7 + 228) = &v11;
    v12 = v6;
    HMLockObject(v6);
    v17 = v8;
    v18 = 0;
    v3 = xxxDesktopPaintCallback(v6, a2, (int)v10, (int)&v17);
    ThreadUnlock1();
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v3;
}
