/*
 * XREFs of _NtUserGetMouseMovePointsEx@20 @ 0x163A0C
 * Callers:
 *     <none>
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     __GetMouseMovePointsEx@16 @ 0x147FA4 (__GetMouseMovePointsEx@16.c)
 */

int __stdcall NtUserGetMouseMovePointsEx(int a1, unsigned int a2, volatile void *Address, unsigned int a4, int a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int *v7; // esi
  int *v8; // esi
  int MouseMovePoints; // esi
  int v11; // [esp+10h] [ebp-40h]
  int v12; // [esp+14h] [ebp-3Ch]
  int v13; // [esp+18h] [ebp-38h]
  int v14; // [esp+1Ch] [ebp-34h]
  int v15; // [esp+20h] [ebp-30h] BYREF
  int v16; // [esp+24h] [ebp-2Ch]
  int v17; // [esp+28h] [ebp-28h]
  int v18; // [esp+2Ch] [ebp-24h]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v15 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  EnterSharedCrit(0, 1);
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  if ( a1 != 16 || a4 > 0x40 )
  {
    UserSetLastError((struct _NT_TIB *)0x57);
    goto LABEL_10;
  }
  if ( *(_DWORD *)(ThreadWin32Thread + 248) != _grpdeskRitInput )
  {
    UserSetLastError((struct _NT_TIB *)5);
LABEL_10:
    MouseMovePoints = -1;
    goto LABEL_11;
  }
  ms_exc.registration.TryLevel = 0;
  v7 = (int *)a2;
  if ( a2 + 16 < a2 || a2 + 16 > _MmUserProbeAddress )
    v7 = (int *)_MmUserProbeAddress;
  v11 = *v7;
  v8 = v7 + 1;
  v12 = *v8++;
  v13 = *v8;
  v14 = v8[1];
  v15 = v11;
  v16 = v12;
  v17 = v13;
  v18 = v14;
  ProbeForWrite(Address, 16 * a4, 1u);
  ms_exc.registration.TryLevel = -2;
  MouseMovePoints = _GetMouseMovePointsEx((__int16 *)&v15, (int)Address, a4, a5);
LABEL_11:
  UserSessionSwitchLeaveCrit();
  return MouseMovePoints;
}
