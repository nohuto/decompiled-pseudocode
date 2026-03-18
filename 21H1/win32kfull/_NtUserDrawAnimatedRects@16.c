/*
 * XREFs of _NtUserDrawAnimatedRects@16 @ 0x160E73
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxDrawAnimatedRects@16 @ 0x19E161 (_xxxDrawAnimatedRects@16.c)
 */

int __stdcall NtUserDrawAnimatedRects(int a1, int a2, ULONG a3, ULONG a4)
{
  int v4; // esi
  int v5; // ebx
  int *v6; // eax
  int *v7; // esi
  int *v8; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int v12; // [esp+10h] [ebp-4Ch] BYREF
  int v13; // [esp+14h] [ebp-48h]
  int v14; // [esp+18h] [ebp-44h]
  int v15; // [esp+1Ch] [ebp-40h]
  int v16; // [esp+20h] [ebp-3Ch] BYREF
  int v17; // [esp+24h] [ebp-38h]
  int v18; // [esp+28h] [ebp-34h]
  int v19; // [esp+2Ch] [ebp-30h]
  int v20; // [esp+30h] [ebp-2Ch] BYREF
  int v21; // [esp+34h] [ebp-28h]
  int v22; // [esp+38h] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v20 = 0;
  v21 = 0;
  v22 = 0;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v19 = 0;
  v4 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v5 = ValidateHwnd(a1);
    if ( !v5 )
      goto LABEL_12;
  }
  else
  {
    v5 = 0;
  }
  ms_exc.registration.TryLevel = 0;
  v6 = (int *)_MmUserProbeAddress;
  v7 = (int *)a3;
  if ( a3 >= _MmUserProbeAddress )
    v7 = (int *)_MmUserProbeAddress;
  v12 = *v7;
  v8 = v7 + 1;
  v13 = *v8++;
  v14 = *v8;
  v15 = v8[1];
  if ( a4 < _MmUserProbeAddress )
    v6 = (int *)a4;
  v16 = *v6;
  v17 = v6[1];
  v18 = v6[2];
  v19 = v6[3];
  ms_exc.registration.TryLevel = -2;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v20 = *(_DWORD *)(ThreadWin32Thread + 228);
  *(_DWORD *)(ThreadWin32Thread + 228) = &v20;
  v21 = v5;
  if ( v5 )
    HMLockObject(v5);
  v4 = xxxDrawAnimatedRects(&v12, &v16);
  ThreadUnlock1();
LABEL_12:
  UserSessionSwitchLeaveCrit();
  return v4;
}
