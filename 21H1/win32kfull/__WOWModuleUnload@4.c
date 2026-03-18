/*
 * XREFs of __WOWModuleUnload@4 @ 0x188E7A
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC (-Init@-$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     ?PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x188CC6 (-PseudoDestroyClassWindows@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 */

int __stdcall _WOWModuleUnload(__int16 a1)
{
  int CurrentProcessWin32Process; // ebx
  unsigned int v2; // edx
  unsigned int v3; // esi
  _DWORD *v4; // edi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  _DWORD *v8; // esi
  _DWORD *v9; // ecx
  int v10; // edx
  int v11; // ecx
  int v13; // [esp+Ch] [ebp-14h]
  _DWORD v14[2]; // [esp+10h] [ebp-10h] BYREF
  int *v15[2]; // [esp+18h] [ebp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v2 = _gSharedInfo[1];
  v3 = v2 + 16 * _giheLast;
  v4 = (_DWORD *)_gpKernelHandleTable;
  while ( v2 <= v3 )
  {
    if ( *(_BYTE *)(v2 + 12) == 1 )
    {
      v5 = v4[1];
      if ( (*(_BYTE *)(v5 + 264) & 2) != 0 && *(_DWORD *)(v5 + 232) == CurrentProcessWin32Process )
      {
        v6 = *(_DWORD *)(*v4 + 20);
        if ( (*(_BYTE *)(v6 + 10) & 4) == 0
          && (*(_DWORD *)(v6 + 84) & 0xC0000000) == 0xC0000000
          && *(_WORD *)(v6 + 28) == a1 )
        {
          *(_DWORD *)(v6 + 84) = *(_DWORD *)(_gpsi + 244);
        }
      }
    }
    v2 += 16;
    v4 += 3;
  }
  v7 = 2;
  v8 = (_DWORD *)(CurrentProcessWin32Process + 192);
  v13 = 2;
  v9 = (_DWORD *)(CurrentProcessWin32Process + 196);
  do
  {
    if ( !*v8 )
      goto LABEL_32;
    do
    {
      SmartObjStackRefBase<tagCLS>::Init(v14, 0);
      if ( *(_WORD *)(*(_DWORD *)(*v8 + 4) + 42) == a1 )
      {
        if ( !*(_DWORD *)(*v8 + 40) )
        {
          DestroyClass(CurrentProcessWin32Process, (_DWORD **)v8);
          goto LABEL_30;
        }
        SmartObjStackRefBase<tagCLS>::Init(v15, *v8);
        PseudoDestroyClassWindows(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 248) + 4) + 12), v15);
        SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v15);
        *(_WORD *)(*(_DWORD *)(*v8 + 4) + 6) |= 4u;
      }
      else
      {
        SmartObjStackRefBase<tagCLS>::operator=(v14, *v8);
        if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v14[0] + 4) + 6) & 8) != 0
          && a1 == *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v14[0] + 4) + 12)
                            + *(_DWORD *)(*(_DWORD *)v14[0] + 4)
                            + 62) )
        {
          v10 = 0;
          v11 = 468;
          while ( !*((_DWORD *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v10)
               || **(_WORD **)(*v8 + 4) != *(_WORD *)(v11 + _gpsi)
               || (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v14[0] + 4) + 6) & 1) != 0 )
          {
            v11 += 2;
            ++v10;
            if ( v11 >= 518 )
              goto LABEL_26;
          }
          *(_DWORD *)(*(_DWORD *)(*v8 + 4) + 24) = *((_DWORD *)&WPP_MAIN_CB.Dpc.SystemArgument1 + v10);
LABEL_26:
          if ( v10 == 25 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v14[0] + 4) + 6) & 1) == 0 )
            *(_DWORD *)(*(_DWORD *)(*v8 + 4) + 24) = *(_DWORD *)(_gpsi + 340);
        }
      }
      v8 = (_DWORD *)*v8;
LABEL_30:
      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v14);
    }
    while ( *v8 );
    v7 = v13;
    v9 = (_DWORD *)(CurrentProcessWin32Process + 196);
LABEL_32:
    --v7;
    v8 = v9;
    v13 = v7;
  }
  while ( v7 );
  return 1;
}
