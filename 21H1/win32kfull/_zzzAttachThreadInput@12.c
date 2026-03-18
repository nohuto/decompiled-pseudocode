/*
 * XREFs of _zzzAttachThreadInput@12 @ 0xC76E4
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     _xxxDestroyWindow@4 @ 0x7239A (_xxxDestroyWindow@4.c)
 *     _NtUserAttachThreadInput@12 @ 0xC4BFA (_NtUserAttachThreadInput@12.c)
 *     _xxxSetModernAppWindow@8 @ 0xC6BDE (_xxxSetModernAppWindow@8.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 *     ?TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z @ 0x14DB96 (-TryAttachShellFrame@@YGXPAUtagTHREADINFO@@I@Z.c)
 *     _TryDetachShellFrame@16 @ 0x14E7E3 (_TryDetachShellFrame@16.c)
 *     ?xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z @ 0x1A5A84 (-xxxHandleOwnerSwitch@@YGXPAUtagWND@@00@Z.c)
 * Callees:
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     _ExemptedFromImmersiveRestrictions@4 @ 0x141D39 (_ExemptedFromImmersiveRestrictions@4.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzAttachThreadInput(int a1, int a2, __int16 a3)
{
  int v5; // ecx
  int v6; // eax
  _DWORD *i; // ecx
  int v8; // eax
  _DWORD *v9; // eax
  PKTHREAD CurrentThread; // eax
  PKTHREAD v11; // eax
  _DWORD **v13; // edx
  _DWORD *v14; // ecx
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // [esp-4h] [ebp-1Ch]
  BOOL v18; // [esp+14h] [ebp-4h]

  v5 = a3 & 1;
  v18 = (a3 & 0x4000) != 0 && (a3 & 1) == 0;
  if ( a1 != a2 )
  {
    if ( (a3 & 0x8000) == 0 )
    {
      v6 = *(_DWORD *)(a2 + 232);
      if ( v6 != *(_DWORD *)(a1 + 232) || *(_DWORD *)(_gptiCurrent + 232) != v6 )
      {
        if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, *(_DWORD *)(a2 + 236) + 316)
          && *(int *)(*(_DWORD *)(_gptiCurrent + 232) + 8) >= 0 )
        {
          EtwTraceUIPIInputError(
            _gptiCurrent,
            a2,
            *(_DWORD *)(a2 + 236),
            *(_DWORD *)(*(_DWORD *)(a2 + 236) + 316),
            *(_DWORD *)(*(_DWORD *)(a2 + 236) + 320),
            2);
          return -1073741790;
        }
        if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, *(_DWORD *)(a1 + 236) + 316)
          && *(int *)(*(_DWORD *)(_gptiCurrent + 232) + 8) >= 0
          || IsDesktopApp(*(_DWORD *)(_gptiCurrent + 232))
          && (IsImmersiveAppRestricted(*(_DWORD *)(a2 + 232)) || IsImmersiveAppRestricted(*(_DWORD *)(a1 + 232)))
          && !ExemptedFromImmersiveRestrictions(_gptiCurrent)
          && (*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 464) & 0x100) == 0 )
        {
          EtwTraceUIPIInputError(
            _gptiCurrent,
            a1,
            *(_DWORD *)(a1 + 236),
            *(_DWORD *)(*(_DWORD *)(a1 + 236) + 316),
            *(_DWORD *)(*(_DWORD *)(a1 + 236) + 320),
            2);
          return -1073741790;
        }
        v5 = a3 & 1;
      }
    }
    if ( (*(_BYTE *)(a2 + 264) & 0x40) != 0
      || (*(_BYTE *)(a1 + 264) & 0x40) != 0
      || *(_DWORD *)(a2 + 248) != *(_DWORD *)(a1 + 248) )
    {
      return -1073741790;
    }
    if ( v5 )
    {
      for ( i = (_DWORD *)_gpai; ; i = (_DWORD *)*i )
      {
        if ( !i )
        {
          v9 = (_DWORD *)Win32AllocPool(16, 1767994197);
          if ( v9 )
          {
            v9[1] = a1;
            v9[2] = a2;
            v9[3] = 1;
            *v9 = _gpai;
            _gpai = v9;
            goto LABEL_21;
          }
          return -1073741801;
        }
        v8 = i[2];
        if ( v8 == a2 && i[1] == a1 )
          break;
        if ( v8 == a1 && i[1] == a2 )
          break;
      }
      v16 = i[3];
      if ( v16 == -1 )
        return -1073741811;
      i[3] = v16 + 1;
      return 0;
    }
    v13 = (_DWORD **)_gpai;
    v14 = (_DWORD *)_gpai;
    if ( _gpai )
    {
      while ( 1 )
      {
        v15 = v14[2];
        if ( v15 == a2 && v14[1] == a1 )
          break;
        if ( v15 == a1 && v14[1] == a2 )
          break;
        v13 = (_DWORD **)v14;
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          return -1073741811;
      }
      --v14[3];
      if ( !(*v13)[3] || v18 )
      {
        v17 = *v13;
        *v13 = (_DWORD *)**v13;
        Win32FreePool(v17);
LABEL_21:
        *(_DWORD *)(a2 + 688) |= 0x200u;
        *(_DWORD *)(a1 + 688) |= 0x200u;
        if ( (*(_DWORD *)(a1 + 688) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a1 + 400), 1, 0);
        if ( (*(_DWORD *)(a2 + 688) & 0x400) != 0 )
          KeSetEvent(*(PRKEVENT *)(a2 + 400), 1, 0);
        CurrentThread = KeGetCurrentThread();
        if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 24) )
        {
          v11 = KeGetCurrentThread();
          if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v11) + 252) + 28) )
            zzzReattachThreads(0, a2);
        }
      }
      return 0;
    }
  }
  return -1073741811;
}
