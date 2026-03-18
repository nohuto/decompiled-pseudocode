/*
 * XREFs of ?VWPLAddBase@@YGHPAPAUtagVWPL@@KPAUtagWND@@KH@Z @ 0x9B3CC
 * Callers:
 *     _SetHungFlag@8 @ 0x17252 (_SetHungFlag@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 *     __RegisterShellHookWindow@4 @ 0x8116A (__RegisterShellHookWindow@4.c)
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 * Callees:
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _WPP_RECORDER_SF_qq@28 @ 0x6FDEA (_WPP_RECORDER_SF_qq@28.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 */

int __userpurge VWPLAddBase@<eax>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        struct tagVWPL **a3,
        unsigned int a4,
        struct tagWND *a5,
        unsigned int a6,
        int a7)
{
  _DWORD *v8; // esi
  unsigned int v9; // ecx
  unsigned int v10; // edx
  struct tagVWPL ***v11; // eax
  unsigned int v12; // eax
  unsigned int v13; // eax
  int *v15; // ecx
  _DWORD *v16; // eax
  int *v17; // ecx
  _DWORD *v18; // eax
  ULONG *v19; // [esp+0h] [ebp-18h]
  unsigned int v20; // [esp+0h] [ebp-18h]
  unsigned int v21; // [esp+0h] [ebp-18h]
  ULONG *v22; // [esp+0h] [ebp-18h]
  unsigned int v23; // [esp+0h] [ebp-18h]
  unsigned int *v24; // [esp+4h] [ebp-14h]
  unsigned int *v25; // [esp+4h] [ebp-14h]
  int v26; // [esp+Ch] [ebp-Ch]
  unsigned int v27; // [esp+10h] [ebp-8h] BYREF
  int v28; // [esp+14h] [ebp-4h]

  v28 = 0;
  v26 = a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a1) = 4;
    WPP_RECORDER_SF_qq((int)a2, a1, 0xBu, 11, (int)&WPP_7b6843d7872833607704d87654b4b262_Traceguids, *a2, (char)a3);
  }
  v8 = (_DWORD *)*a2;
  if ( *a2 )
  {
    if ( !v8[3] )
    {
      v9 = *v8;
      v10 = 0;
      if ( *v8 )
      {
        v11 = (struct tagVWPL ***)(v8 + 5);
        while ( a3 != *v11 )
        {
          ++v10;
          v11 += 2;
          if ( v10 >= v9 )
            goto LABEL_9;
        }
        return 0;
      }
LABEL_9:
      v12 = v8[1];
      if ( v9 < v12 )
      {
LABEL_10:
        v13 = *v8;
        v8[2 * v13 + 5] = a3;
        v8[2 * v13 + 4] = v26;
        ++*v8;
        return 1;
      }
      v27 = 0;
      if ( ULongLongToULong(8LL * v12, v19) >= 0
        && (ULongAdd(0, 0x10u, v17, v21, v24) & 0x80000000) == 0
        && ULongLongToULong(8LL * (unsigned int)v8[2], v22) >= 0
        && (ULongAdd(v28, 0, (int *)&v27, v23, v25) & 0x80000000) == 0 )
      {
        v18 = (_DWORD *)UserReAllocPoolZInit(v8, 0, v27, 1819702101);
        v8 = v18;
        if ( v18 )
        {
          v18[1] += v18[2];
          goto LABEL_15;
        }
      }
    }
  }
  else if ( ULongLongToULong(8LL * a4, v19) >= 0 && (ULongAdd(v28, 0x10u, v15, v20, v24) & 0x80000000) == 0 )
  {
    v16 = (_DWORD *)Win32AllocPoolZInit(v28, 1819702101);
    v8 = v16;
    if ( v16 )
    {
      *v16 = 0;
      v16[3] = 0;
      v16[1] = a4;
      v16[2] = a4;
LABEL_15:
      *a2 = v8;
      goto LABEL_10;
    }
  }
  return 0;
}
