/*
 * XREFs of __RegisterClassEx@20 @ 0x47B74
 * Callers:
 *     _NtUserRegisterClassExWOW@28 @ 0x6F44C (_NtUserRegisterClassExWOW@28.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 */

__int16 __fastcall _RegisterClassEx(_DWORD *a1, _DWORD *a2, __int16 a3, __int16 a4, _DWORD *a5)
{
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  __int16 v8; // di
  int v9; // eax
  _DWORD *v10; // edx
  int v12; // eax
  int v13; // ecx
  int v14; // edx
  int v15; // [esp+10h] [ebp-10h] BYREF
  _DWORD *v16; // [esp+14h] [ebp-Ch]
  int v17; // [esp+18h] [ebp-8h] BYREF
  int v18; // [esp+1Ch] [ebp-4h] BYREF

  v16 = a2;
  CurrentThread = KeGetCurrentThread();
  ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
  v17 = gSmartObjNullRef;
  v18 = *(_DWORD *)(ThreadWin32Thread + 840);
  *(_DWORD *)(ThreadWin32Thread + 840) = &v18;
  if ( (a1[2] & 0xFFFF0000) == 0xFFFF0000 )
  {
    v12 = HMValidateHandleNoRip(a1[2], 7);
    if ( v12 )
      a1[2] = *(_DWORD *)(*(_DWORD *)(v12 + 20) + 8);
  }
  v8 = 0;
  v15 = 0;
  v9 = InternalRegisterClassEx(a1, a3, a4 | (4 * (*(_WORD *)(_gptiCurrent + 264) & 2)), &v15);
  SmartObjStackRefBase<tagCLS>::operator=(v9);
  if ( *(_DWORD *)v17 )
  {
    if ( v15 )
    {
LABEL_7:
      v8 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)v17 + 4) + 2);
      goto LABEL_8;
    }
    v10 = v16;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v17 + 4) + 20) = v16[1];
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v17 + 4) + 16) = *v10;
    if ( a5 )
    {
      if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) == 0 )
      {
LABEL_6:
        *(_WORD *)(*(_DWORD *)v17 + 18) = 0;
        goto LABEL_7;
      }
      v13 = *(_DWORD *)(*(_DWORD *)v17 + 4);
      v14 = *(_DWORD *)(v13 + 12);
      *(_DWORD *)(v14 + v13 + 56) = *a5;
      *(_DWORD *)(v14 + v13 + 60) = a5[1];
    }
    if ( (*(_BYTE *)(_gptiCurrent + 264) & 2) != 0 && *(_DWORD *)(_gptiCurrent + 332) )
    {
      *(_WORD *)(*(_DWORD *)v17 + 18) = *(_WORD *)(*(_DWORD *)(_gptiCurrent + 332) + 20);
      goto LABEL_7;
    }
    goto LABEL_6;
  }
LABEL_8:
  SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(&v17);
  return v8;
}
