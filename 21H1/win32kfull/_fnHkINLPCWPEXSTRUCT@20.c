/*
 * XREFs of _fnHkINLPCWPEXSTRUCT@20 @ 0x1A4E79
 * Callers:
 *     <none>
 * Callees:
 *     _PhkNextValid@4 @ 0x1299C (_PhkNextValid@4.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _xxxCallNextHookEx@12 @ 0x152C82 (_xxxCallNextHookEx@12.c)
 */

size_t __stdcall fnHkINLPCWPEXSTRUCT(int *a1, int a2, int a3, int a4, int a5)
{
  PKTHREAD CurrentThread; // eax
  _DWORD *v6; // edx
  int v7; // ecx
  int Valid; // eax
  int v10[3]; // [esp+10h] [ebp-34h] BYREF
  int v11; // [esp+1Ch] [ebp-28h]
  int v12; // [esp+20h] [ebp-24h]
  struct tagHOOK *v13; // [esp+28h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+2Ch] [ebp-18h]

  CurrentThread = KeGetCurrentThread();
  v6 = *(_DWORD **)(W32GetThreadWin32Thread(CurrentThread) + 260);
  v7 = *(_DWORD *)(_gptiCurrent + 376);
  if ( v7 )
  {
    Valid = PhkNextValid(v7);
    if ( Valid )
    {
      if ( *(_DWORD *)(Valid + 24) != 4 )
        return 0;
    }
  }
  if ( a1 )
    v11 = *a1;
  else
    v11 = 0;
  v10[2] = a2;
  v10[1] = a3;
  v10[0] = a4;
  v12 = 0;
  ms_exc.registration.TryLevel = 0;
  v13 = (struct tagHOOK *)((*v6 >> 4) & 1);
  ms_exc.registration.TryLevel = -2;
  return xxxCallNextHookEx(0, v13, v10);
}
