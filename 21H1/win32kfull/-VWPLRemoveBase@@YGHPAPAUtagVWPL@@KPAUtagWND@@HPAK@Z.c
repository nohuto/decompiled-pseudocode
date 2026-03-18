/*
 * XREFs of ?VWPLRemoveBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@HPAK@Z @ 0x6FCFE
 * Callers:
 *     _ClearHungFlag@8 @ 0x715BC (_ClearHungFlag@8.c)
 *     _FreeWindowGCData@4 @ 0x717D2 (_FreeWindowGCData@4.c)
 *     _FreeWindowMessageFilter@4 @ 0x71856 (_FreeWindowMessageFilter@4.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     __DeregisterShellHookWindow@4 @ 0x821A4 (__DeregisterShellHookWindow@4.c)
 * Callees:
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 */

int __userpurge VWPLRemoveBase@<eax>(
        _DWORD **a1@<ecx>,
        struct tagVWPL **a2,
        unsigned int a3,
        struct tagWND *a4,
        int a5,
        unsigned int *a6)
{
  _DWORD *v7; // esi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  struct tagVWPL ***v10; // edx
  struct tagVWPL ***v12; // edx
  struct tagVWPL **v13; // eax
  unsigned int v14; // eax
  _DWORD *v15; // eax
  struct tagVWPL **v16; // [esp+14h] [ebp+8h]

  v7 = *a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(11, 12, &WPP_7b6843d7872833607704d87654b4b262_Traceguids, (char)v7, (char)a2);
  if ( !v7 )
    return 0;
  if ( v7[3] )
    return 0;
  v8 = *v7;
  v9 = 0;
  if ( !*v7 )
    return 0;
  v10 = (struct tagVWPL ***)(v7 + 5);
  do
  {
    if ( a2 == *v10 )
      break;
    ++v9;
    v10 += 2;
  }
  while ( v9 < v8 );
  if ( v9 >= v8 )
    return 0;
  v12 = (struct tagVWPL ***)&v7[2 * v9 + 4];
  v13 = *v12;
  v7[2 * v9 + 4] = 0;
  v7[2 * v9 + 5] = 0;
  --*v7;
  v16 = v13;
  v14 = *v7;
  if ( a4 )
  {
    *(_DWORD *)a4 = v16;
    v14 = *v7;
  }
  if ( v14 )
  {
    while ( v9 < v14 )
    {
      ++v9;
      *v12 = v12[2];
      v12 += 2;
      *(v12 - 1) = v12[1];
      v14 = *v7;
    }
    v7[2 * v14 + 5] = 0;
    if ( (unsigned int)(v7[1] - *v7) >= v7[2] )
    {
      v15 = (_DWORD *)UserReAllocPoolZInit(v7, 8 * v7[1] + 16, 8 * *v7 + 16, 1819702101);
      if ( v15 )
      {
        v15[1] = *v15;
        *a1 = v15;
      }
    }
  }
  else
  {
    Win32FreePool(v7);
    *a1 = 0;
  }
  return 1;
}
