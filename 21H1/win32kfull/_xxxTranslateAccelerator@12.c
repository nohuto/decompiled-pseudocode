/*
 * XREFs of _xxxTranslateAccelerator@12 @ 0xA8452
 * Callers:
 *     _NtUserTranslateAccelerator@12 @ 0xA8372 (_NtUserTranslateAccelerator@12.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z @ 0x94832 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AAEXPAUtagMENU@@@Z.c)
 *     _SystoChar@8 @ 0xA879C (_SystoChar@8.c)
 *     _xxxSetSysMenu@4 @ 0xB9E58 (_xxxSetSysMenu@4.c)
 *     ?xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z @ 0xC3566 (-xxxTA_AccelerateMenu@@YGIQAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@IQAPAUHMENU__@@@Z.c)
 *     _xxxLoadSysDesktopMenu@8 @ 0xCC3A8 (_xxxLoadSysDesktopMenu@8.c)
 */

int __fastcall xxxTranslateAccelerator(ULONG_PTR a1, int a2, int a3)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // ebx
  int v9; // esi
  unsigned __int8 *v10; // eax
  int v11; // edi
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  _DWORD *v15; // edi
  int v16; // ebx
  int v17; // eax
  int v18; // ebx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int SysDesktopMenu; // edi
  ULONG_PTR v22; // ebx
  int *v23; // ecx
  PKTHREAD v24; // eax
  int v25; // eax
  PKTHREAD v26; // eax
  int v27; // eax
  char v28; // al
  _DWORD v30[3]; // [esp+8h] [ebp-44h] BYREF
  _DWORD v31[3]; // [esp+14h] [ebp-38h] BYREF
  int v32; // [esp+20h] [ebp-2Ch] BYREF
  int v33; // [esp+24h] [ebp-28h]
  int v34; // [esp+28h] [ebp-24h]
  int v35; // [esp+2Ch] [ebp-20h]
  unsigned __int8 *v36; // [esp+30h] [ebp-1Ch]
  int v37; // [esp+34h] [ebp-18h]
  unsigned int v38; // [esp+38h] [ebp-14h] BYREF
  unsigned int HighLimit; // [esp+3Ch] [ebp-10h]
  BOOL v40; // [esp+40h] [ebp-Ch]
  ULONG_PTR BugCheckParameter2; // [esp+44h] [ebp-8h]
  int v42; // [esp+48h] [ebp-4h]

  BugCheckParameter2 = a1;
  v32 = 0;
  v38 = 0;
  v33 = 0;
  v34 = 0;
  if ( (_gfInNumpadHexInput & 2) != 0 )
    return 0;
  v36 = (unsigned __int8 *)(a2 + 16);
  v37 = 0;
  v3 = SystoChar(*(_DWORD *)(a3 + 4), *(_DWORD *)(a3 + 12)) - 256;
  if ( v3 )
  {
    v4 = v3 - 2;
    if ( !v4 )
    {
LABEL_6:
      v35 = 0;
      goto LABEL_8;
    }
    v5 = v4 - 2;
    if ( v5 )
    {
      if ( v5 == 2 )
        goto LABEL_6;
      return 0;
    }
  }
  v35 = 1;
LABEL_8:
  v6 = *(_DWORD *)(_gptiCurrent + 240);
  if ( v6 && (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v6 + 24) + 16) + 40) & 1) != 0 && (_GetKeyState(165) & 0x8000) != 0 )
  {
    v7 = 163;
    v8 = 164;
  }
  else
  {
    v8 = 18;
    v7 = 17;
  }
  v9 = ((unsigned __int16)_GetKeyState(v7) >> 12) & 8;
  if ( (_GetKeyState(v8) & 0x8000u) != 0 )
    LOBYTE(v9) = v9 | 0x10;
  if ( (_GetKeyState(16) & 0x8000) != 0 )
    LOBYTE(v9) = v9 | 4;
  v10 = v36;
  v11 = v37;
  v12 = a3;
  do
  {
    v13 = *v10;
    v14 = *((unsigned __int16 *)v10 + 1);
    v42 = v13;
    if ( v14 == *(_DWORD *)(v12 + 8) )
    {
      if ( v35 == (v13 & 1)
        && (!v35 || (((unsigned __int8)v13 ^ (unsigned __int8)v9) & 0xC) == 0)
        && (((unsigned __int8)v13 ^ (unsigned __int8)v9) & 0x10) == 0 )
      {
        v40 = 0;
        v15 = (_DWORD *)BugCheckParameter2;
        v37 = 1;
        v16 = 0;
        HighLimit = *((unsigned __int16 *)v36 + 2);
        if ( HighLimit )
        {
          v17 = *(_DWORD *)(BugCheckParameter2 + 20);
          if ( (*(_BYTE *)(v17 + 23) & 0x40) != 0 )
            goto LABEL_29;
          v18 = *(_DWORD *)(BugCheckParameter2 + 92);
          CurrentThread = KeGetCurrentThread();
          ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
          v32 = *(_DWORD *)(ThreadWin32Thread + 228);
          *(_DWORD *)(ThreadWin32Thread + 228) = &v32;
          v33 = v18;
          if ( v18 )
            HMLockObject(v18);
          SmartObjStackRefBase<tagMENU>::Init(v31, v18);
          v31[2] = 0;
          v16 = xxxTA_AccelerateMenu(HighLimit, &v38);
          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
          ThreadUnlock1();
          v17 = v15[5];
          if ( (*(_BYTE *)(v17 + 23) & 0x40) != 0 || !v16 )
          {
LABEL_29:
            SysDesktopMenu = v15[22];
            if ( SysDesktopMenu || (*(_BYTE *)(v17 + 22) & 8) == 0 )
            {
              v26 = KeGetCurrentThread();
              v27 = W32GetThreadWin32Thread(v26);
              v32 = *(_DWORD *)(v27 + 228);
              *(_DWORD *)(v27 + 228) = &v32;
              v33 = SysDesktopMenu;
              if ( SysDesktopMenu )
                HMLockObject(SysDesktopMenu);
            }
            else
            {
              v22 = BugCheckParameter2;
              v23 = (int *)(*(_DWORD *)(BugCheckParameter2 + 12) + 28);
              SysDesktopMenu = *v23;
              if ( !*v23 )
                SysDesktopMenu = xxxLoadSysDesktopMenu(v23, 16);
              v24 = KeGetCurrentThread();
              v25 = W32GetThreadWin32Thread(v24);
              v32 = *(_DWORD *)(v25 + 228);
              *(_DWORD *)(v25 + 228) = &v32;
              v33 = SysDesktopMenu;
              if ( SysDesktopMenu )
                HMLockObject(SysDesktopMenu);
              xxxSetSysMenu(v22);
            }
            SmartObjStackRefBase<tagMENU>::Init(v30, SysDesktopMenu);
            v15 = (_DWORD *)BugCheckParameter2;
            v30[2] = 0;
            v16 = xxxTA_AccelerateMenu(HighLimit, &v38);
            v40 = v16 != 0;
            SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v30);
            ThreadUnlock1();
          }
        }
        v28 = *(_BYTE *)(v15[5] + 23);
        if ( (v16 & 1) != 0
          || v16 && ((v28 & 0x20) != 0 && !v40 || *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 56) || (v28 & 8) != 0) )
        {
          LOBYTE(v13) = v42;
        }
        else
        {
          if ( v40 )
          {
            _InterlockedIncrement(&glSendMessage);
            xxxSendTransformableMessageTimeout((int)v15, 0x112u, HighLimit, 0x10000, 0, 0, 0, 1u, 0);
          }
          else
          {
            xxxSendMessage(v15, HighLimit | 0x10000, 0);
          }
          LOBYTE(v13) = 0x80;
          v42 = 128;
        }
        if ( v38 )
        {
          xxxSendMessage(v15, v38, 0);
          LOBYTE(v13) = v42;
          v38 = 0;
        }
        v11 = v37;
      }
      v12 = a3;
    }
    v10 = v36 + 6;
    v36 += 6;
  }
  while ( (v13 & 0x80u) == 0 && !v11 );
  return v11;
}
