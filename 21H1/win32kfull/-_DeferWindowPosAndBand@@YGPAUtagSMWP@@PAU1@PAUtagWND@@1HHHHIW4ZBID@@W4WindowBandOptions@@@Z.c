/*
 * XREFs of ?_DeferWindowPosAndBand@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@W4WindowBandOptions@@@Z @ 0x7705E
 * Callers:
 *     _NtUserDeferWindowPosAndBand@40 @ 0x749C8 (_NtUserDeferWindowPosAndBand@40.c)
 *     _lambda_0c0b2ffdec7bf834e0e54733fd19cc10_::operator() @ 0x9BEF4 (_lambda_0c0b2ffdec7bf834e0e54733fd19cc10_--operator().c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     _IsValidBandForProcess@12 @ 0x2A442 (_IsValidBandForProcess@12.c)
 *     _IsPseudoPwnd@4 @ 0x2A852 (_IsPseudoPwnd@4.c)
 *     ?_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z @ 0x32E22 (-_DeferWindowPos@@YGPAUtagSMWP@@PAU1@PAUtagWND@@1HHHHIW4ZBID@@@Z.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsValidBand@4 @ 0xA6CEE (_IsValidBand@4.c)
 */

_DWORD *__fastcall _DeferWindowPosAndBand(
        _DWORD *a1,
        _DWORD *a2,
        _DWORD *a3,
        int a4,
        int a5,
        int a6,
        int a7,
        unsigned int a8,
        int a9,
        char a10)
{
  unsigned int v10; // eax
  int v11; // edi
  int v12; // ebx
  int v13; // esi
  int v14; // edx
  int v15; // ecx
  int v17; // edx
  int v18; // ecx
  int v19; // ebx
  int DesktopWindow; // eax
  int v21; // ecx
  int v22; // ecx
  int v23; // ecx
  int v24; // edx
  _DWORD *v25; // eax

  if ( (a10 & 1) != 0 )
  {
    v11 = a9;
    if ( !IsPseudoPwnd(a3) )
    {
      v22 = *(_DWORD *)(*(_DWORD *)(v18 + 20) + 148);
      if ( v22 != a9 && *(_DWORD *)(*(_DWORD *)(v17 + 20) + 148) != v22 )
        goto LABEL_33;
    }
    if ( (a10 & 2) == 0 && !IAMThreadAccessGranted(_gptiCurrent) )
      goto LABEL_33;
    if ( !IsValidBand(a9) )
      goto LABEL_34;
    if ( !IsValidBandForProcess(*(_DWORD *)(_gptiCurrent + 232), a9, 0)
      || a9 == 15
      || (v19 = a2[5], *(_DWORD *)(v19 + 148) == 15) )
    {
LABEL_33:
      UserSetLastError(5);
      return 0;
    }
    DesktopWindow = _GetDesktopWindow(a2);
    if ( *(_DWORD *)(v21 + 56) != DesktopWindow || *(char *)(v19 + 12) < 0 )
      goto LABEL_34;
    if ( (unsigned int)a3 > 1 )
    {
      if ( (unsigned int)a3 <= 0xFFFFFFFD )
      {
        if ( *(_DWORD *)(a3[5] + 148) != a9 )
        {
          v23 = a1[4] - 1;
          if ( v23 >= 0 )
          {
            v24 = a1[6];
            v25 = (_DWORD *)(v24 + (v23 << 7));
            while ( *v25 != *a3 )
            {
              v25 -= 32;
              if ( --v23 < 0 )
                goto LABEL_49;
            }
            if ( *(_DWORD *)((v23 << 7) + v24 + 116) != a9 )
              goto LABEL_34;
          }
LABEL_49:
          if ( v23 == -1 )
          {
LABEL_34:
            UserSetLastError(87);
            return 0;
          }
        }
      }
      else if ( a9 != 1 )
      {
        goto LABEL_34;
      }
    }
    v10 = a8 & 0xFFF9FBFF | 0x60000;
  }
  else
  {
    v10 = a8;
    v11 = 0;
  }
  if ( (((a10 & 1) != 0 ? -459776 : -66560) & v10) != 0 )
    goto LABEL_34;
  v12 = a4;
  if ( (v10 & 2) != 0 )
  {
    v13 = a5;
  }
  else
  {
    if ( a4 > 0x7FFF )
    {
      v12 = 0x7FFF;
    }
    else if ( a4 < -32768 )
    {
      v12 = -32768;
    }
    v13 = a5;
    if ( a5 > 0x7FFF )
    {
      v13 = 0x7FFF;
    }
    else if ( a5 < -32768 )
    {
      v13 = -32768;
    }
  }
  v14 = a6;
  if ( (v10 & 1) != 0 )
  {
    v15 = a7;
  }
  else
  {
    if ( a6 < 0 )
    {
      v14 = 0;
    }
    else if ( a6 > 0x7FFF )
    {
      v14 = 0x7FFF;
    }
    v15 = a7;
    if ( a7 < 0 )
    {
      v15 = 0;
    }
    else if ( a7 > 0x7FFF )
    {
      v15 = 0x7FFF;
    }
  }
  return _DeferWindowPos(a1, a2, a3, v12, v13, v14, v15, v10, v11);
}
