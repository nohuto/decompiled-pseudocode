/*
 * XREFs of xxxTranslateAccelerator @ 0x1C0103018
 * Callers:
 *     NtUserTranslateAccelerator @ 0x1C0102EB0 (NtUserTranslateAccelerator.c)
 * Callees:
 *     xxxSetSysMenu @ 0x1C005C610 (xxxSetSysMenu.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0097EC0 (xxxSendTransformableMessageTimeout.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C00A75D8 (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00F9D68 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     SystoChar @ 0x1C01033D0 (SystoChar.c)
 *     xxxLoadSysDesktopMenu @ 0x1C011EF04 (xxxLoadSysDesktopMenu.c)
 *     ?xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV?$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z @ 0x1C014E90C (-xxxTA_AccelerateMenu@@YAIQEAUtagWND@@AEBV-$SmartObjStackRef@UtagMENU@@@@IQEAPEAUHMENU__@@@Z.c)
 */

__int64 __fastcall xxxTranslateAccelerator(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  unsigned int v5; // r15d
  int v6; // eax
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned int v9; // edi
  __int64 v10; // rcx
  int v11; // ebx
  __int16 KeyState; // ax
  unsigned __int8 v13; // di
  __int16 v14; // ax
  unsigned __int8 v15; // dl
  __int64 v16; // rcx
  char v17; // r14
  int v19; // eax
  unsigned __int64 v20; // r15
  BOOL v21; // edi
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 SysDesktopMenu; // rbx
  __int64 *v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  char v35; // cl
  unsigned __int64 v36; // r8
  __int64 v37; // rax
  int v38; // eax
  unsigned __int8 v39; // [rsp+50h] [rbp-39h]
  __int128 v40; // [rsp+60h] [rbp-29h] BYREF
  __int64 v41; // [rsp+70h] [rbp-19h]
  _QWORD v42[3]; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v43[10]; // [rsp+90h] [rbp+7h] BYREF

  v41 = 0LL;
  v40 = 0LL;
  if ( (gfInNumpadHexInput & 2) != 0 )
    return 0LL;
  v4 = a2 + 28;
  v5 = 0;
  v6 = SystoChar(*(unsigned int *)(a3 + 8), *(_QWORD *)(a3 + 24)) - 256;
  if ( !v6 )
  {
LABEL_3:
    v7 = 1LL;
    goto LABEL_4;
  }
  v19 = v6 - 2;
  if ( v19 )
  {
    v38 = v19 - 2;
    if ( !v38 )
      goto LABEL_3;
    if ( v38 != 2 )
      return 0LL;
  }
  v7 = 0LL;
LABEL_4:
  v8 = *(_QWORD *)(gptiCurrent + 432LL);
  if ( v8
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 48) + 32LL) + 80LL) & 1) != 0
    && (_GetKeyState(165LL) & 0x8000) != 0 )
  {
    v10 = 163LL;
    v9 = 164;
  }
  else
  {
    v9 = 18;
    v10 = 17LL;
  }
  v11 = ((unsigned __int16)_GetKeyState(v10) >> 12) & 8;
  KeyState = _GetKeyState(v9);
  v13 = v11 | 0x10;
  if ( (KeyState & 0x8000) == 0 )
    v13 = v11;
  v14 = _GetKeyState(16LL);
  v15 = v13 | 4;
  v16 = a3;
  if ( (v14 & 0x8000) == 0 )
    v15 = v13;
  v39 = v15;
  do
  {
    v17 = *(_BYTE *)v4;
    if ( *(unsigned __int16 *)(v4 + 2) == *(_QWORD *)(v16 + 16)
      && (_DWORD)v7 == (v17 & 1)
      && (!v7 || (((unsigned __int8)v17 ^ v15) & 0xC) == 0)
      && (((unsigned __int8)v17 ^ v15) & 0x10) == 0 )
    {
      v20 = *(unsigned __int16 *)(v4 + 4);
      v21 = 0;
      v22 = 0;
      if ( *(_WORD *)(v4 + 4) )
      {
        v23 = *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(v23 + 31) & 0x40) != 0 )
          goto LABEL_28;
        v24 = *(_QWORD *)(a1 + 168);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)&v40 = *(_QWORD *)(ThreadWin32Thread + 408);
        *(_QWORD *)(ThreadWin32Thread + 408) = &v40;
        *((_QWORD *)&v40 + 1) = v24;
        if ( v24 )
          HMLockObject(v24);
        SmartObjStackRefBase<tagMENU>::Init(v42, v24);
        v42[2] = 0LL;
        v22 = xxxTA_AccelerateMenu(a1);
        SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v42);
        ThreadUnlock1(v27, v26, v28);
        v23 = *(_QWORD *)(a1 + 40);
        if ( (*(_BYTE *)(v23 + 31) & 0x40) != 0 || !v22 )
        {
LABEL_28:
          SysDesktopMenu = *(_QWORD *)(a1 + 160);
          if ( SysDesktopMenu || (*(_BYTE *)(v23 + 30) & 8) == 0 )
          {
            v37 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v40 = *(_QWORD *)(v37 + 408);
            *(_QWORD *)(v37 + 408) = &v40;
            *((_QWORD *)&v40 + 1) = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
          }
          else
          {
            v30 = (__int64 *)(*(_QWORD *)(a1 + 24) + 56LL);
            SysDesktopMenu = *v30;
            if ( !*v30 )
              SysDesktopMenu = xxxLoadSysDesktopMenu(v30, 16LL);
            v31 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)&v40 = *(_QWORD *)(v31 + 408);
            *(_QWORD *)(v31 + 408) = &v40;
            *((_QWORD *)&v40 + 1) = SysDesktopMenu;
            if ( SysDesktopMenu )
              HMLockObject(SysDesktopMenu);
            xxxSetSysMenu((struct tagWND *)a1);
          }
          SmartObjStackRefBase<tagMENU>::Init(v43, SysDesktopMenu);
          v43[2] = 0LL;
          v22 = xxxTA_AccelerateMenu(a1);
          v21 = v22 != 0;
          SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v43);
          ThreadUnlock1(v33, v32, v34);
        }
      }
      v35 = *(_BYTE *)(*(_QWORD *)(a1 + 40) + 31LL);
      if ( (v22 & 1) == 0
        && (!v22
         || ((v35 & 0x20) == 0 || v21) && !*(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 104LL) && (v35 & 8) == 0) )
      {
        _InterlockedIncrement(&glSendMessage);
        v36 = v20;
        if ( !v21 )
          v36 = v20 | 0x10000;
        xxxSendTransformableMessageTimeout(
          a1,
          v21 + 273,
          v36,
          (struct _LARGE_STRING *)((unsigned __int64)v21 << 16),
          0,
          0,
          0LL,
          1,
          !v21);
        v17 = 0x80;
      }
      v15 = v39;
      v16 = a3;
      v5 = 1;
    }
    v4 += 6LL;
  }
  while ( v17 >= 0 && !v5 );
  return v5;
}
