/*
 * XREFs of _xxxSetClassData@16 @ 0xCBC4C
 * Callers:
 *     _xxxSetClassLong@16 @ 0xCBBE2 (_xxxSetClassLong@16.c)
 * Callees:
 *     @HMValidateHandleNoRip@8 @ 0x16F4A (@HMValidateHandleNoRip@8.c)
 *     _DwmAsyncChildStyleChange@16 @ 0x1BAD6 (_DwmAsyncChildStyleChange@16.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96 (--1-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     _MapClientToServerPfn@4 @ 0x47FDC (_MapClientToServerPfn@4.c)
 *     _ClassLock@8 @ 0x705D6 (_ClassLock@8.c)
 *     _MapClientNeuterToClientPfn@12 @ 0x807E4 (_MapClientNeuterToClientPfn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     _xxxClientWOWGetProcModule@4 @ 0xA1B00 (_xxxClientWOWGetProcModule@4.c)
 *     ?ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z @ 0xA1C78 (-ClassUnlockWorker@@YGPAUtagCLS@@PAU1@@Z.c)
 *     _DwmGetClassStyle@4 @ 0xA4714 (_DwmGetClassStyle@4.c)
 *     _AllocateUnicodeString@8 @ 0xAB0D2 (_AllocateUnicodeString@8.c)
 *     ??4?$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z @ 0xACF20 (--4-$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z.c)
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 *     _MapServerToClientPfn@8 @ 0xEB49C (_MapServerToClientPfn@8.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QAE@PAUtagCLS@@@Z @ 0xF1838 (--0-$SmartObjStackRef@UtagCLS@@@@QAE@PAUtagCLS@@@Z.c)
 *     _DirtyVisRgnTrackers@4 @ 0xF4CDE (_DirtyVisRgnTrackers@4.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 */

unsigned int __fastcall xxxSetClassData(int *a1, struct tagWND *a2, int a3, int a4)
{
  __int16 v5; // bx
  unsigned int v6; // edi
  int v8; // edx
  unsigned int CPD; // eax
  struct tagCLS *v10; // edx
  int v11; // eax
  int v12; // eax
  int v13; // esi
  struct tagCLS *v14; // esi
  PKTHREAD v15; // eax
  int v16; // eax
  unsigned int v17; // edi
  struct tagCLS *v18; // ecx
  unsigned int v19; // edx
  int v20; // eax
  int v21; // ecx
  int v22; // esi
  struct tagCLS **v23; // ecx
  struct tagCLS *v24; // eax
  void *v25; // eax
  unsigned __int16 *v26; // ecx
  int v27; // eax
  const WCHAR *v28; // eax
  int v29; // edx
  struct tagCLS *v30; // esi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  int ClassStyle; // [esp-4h] [ebp-6Ch]
  unsigned int v35; // [esp+0h] [ebp-68h]
  unsigned int v36; // [esp+4h] [ebp-64h]
  _DWORD v37[3]; // [esp+10h] [ebp-58h] BYREF
  _DWORD v38[3]; // [esp+1Ch] [ebp-4Ch] BYREF
  struct _UNICODE_STRING v39; // [esp+28h] [ebp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+30h] [ebp-38h] BYREF
  _DWORD v41[2]; // [esp+38h] [ebp-30h] BYREF
  struct tagWND *v42; // [esp+48h] [ebp-20h]
  int *v43; // [esp+4Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+50h] [ebp-18h]
  struct tagCLS *v45; // [esp+70h] [ebp+8h]
  int v46; // [esp+74h] [ebp+Ch]
  int v47; // [esp+74h] [ebp+Ch]

  v43 = a1;
  v42 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(a1[19]);
  v5 = 0;
  memset(v37, 0, sizeof(v37));
  *(_DWORD *)&v39.Length = 0;
  v39.Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  if ( (int)a2 > -18 )
  {
    if ( a2 != (struct tagWND *)-14 && a2 != (struct tagWND *)-12 )
    {
      if ( a2 == (struct tagWND *)-8 )
      {
        v42 = *(struct tagWND **)(*(_DWORD *)v41[0] + 56);
        v28 = *(const WCHAR **)(*(_DWORD *)(a3 + 8) + 4);
        if ( ((unsigned int)v28 & 0xFFFF0000) != 0 )
        {
          ms_exc.registration.TryLevel = 0;
          RtlInitUnicodeString(&DestinationString, v28);
          ms_exc.registration.TryLevel = -2;
          if ( DestinationString.Length )
          {
            if ( !AllocateUnicodeString(&v39, (const void **)&DestinationString) )
            {
              *(_DWORD *)(a3 + 8) = 0;
              goto LABEL_85;
            }
            tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(
              (int *)(*(_DWORD *)v41[0] + 56),
              (int)v39.Buffer);
          }
          else
          {
            tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=((int *)(*(_DWORD *)v41[0] + 56), 0);
          }
        }
        else
        {
          tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(
            (int *)(*(_DWORD *)v41[0] + 56),
            *(_DWORD *)(*(_DWORD *)(a3 + 8) + 4));
        }
        *(_DWORD *)(a3 + 8) = 0;
        if ( ((unsigned int)v42 & 0xFFFF0000) != 0 )
          Win32FreePool(v42);
        v29 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 16);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 16) = *(_DWORD *)a3;
        *(_DWORD *)a3 = v29;
        v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 20);
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 20) = *(_DWORD *)(a3 + 4);
        *(_DWORD *)(a3 + 4) = v6;
        if ( a4 )
          v6 = *(_DWORD *)a3;
        goto LABEL_83;
      }
      goto LABEL_52;
    }
LABEL_81:
    if ( !ClassLock(*(_DWORD *)v41[0], v37) )
    {
LABEL_84:
      UserSetLastError((struct _NT_TIB *)5);
      goto LABEL_85;
    }
    v6 = xxxSetClassCursor(a2, (struct tagCLS *)a3, v35, v36);
    v30 = *(struct tagCLS **)v41[0];
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
    *(_DWORD *)(ThreadWin32Thread + 8) = v37[0];
    ClassUnlockWorker(v30);
LABEL_83:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v41);
    return v6;
  }
  if ( a2 == (struct tagWND *)-18 )
  {
    v43 = (int *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 48)
                + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 52));
    v47 = 0;
    v17 = 0;
    while ( **(_WORD **)(*(_DWORD *)v41[0] + 4) != *(_WORD *)(_gpsi
                                                            + 2
                                                            * (((unsigned int)gDefaultServerClasses[v17] >> 3) & 0x1F)
                                                            + 468) )
    {
      ++v47;
      v17 += 7;
      if ( v17 >= 56 )
      {
        v18 = (struct tagCLS *)a3;
        goto LABEL_48;
      }
    }
    v19 = dword_24CC58[7 * v47];
    v18 = (struct tagCLS *)a3;
    v20 = *(_DWORD *)(*(_DWORD *)v41[0] + 4);
    if ( a3 >= v19 )
    {
      *(_DWORD *)(v20 + 52) = v19;
      v18 = (struct tagCLS *)(a3 - *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 52));
    }
    else
    {
      if ( (*(_WORD *)(v20 + 6) & 0x200) != 0 )
        goto LABEL_84;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 52) = 0;
    }
LABEL_48:
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 48) = v18;
    v6 = (unsigned int)v43;
    goto LABEL_83;
  }
  if ( a2 == (struct tagWND *)-34 )
    goto LABEL_81;
  if ( a2 == (struct tagWND *)-29 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 8) != 0 )
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12) + *(_DWORD *)(*(_DWORD *)v41[0] + 4) + 56) = a3;
    goto LABEL_85;
  }
  if ( a2 == (struct tagWND *)-24 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 1) != 0 )
    {
      v46 = MapServerToClientPfn(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 24), a4);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) &= ~1u;
      if ( a4 )
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) |= 2u;
    }
    else
    {
      v46 = MapClientNeuterToClientPfn(*(_DWORD *)v41[0], 0, a4);
      if ( v46 == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 24)
        && a4 != ((*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) >> 1) & 1) )
      {
        v8 = (a4 == 0) + 1;
LABEL_19:
        if ( v8 )
        {
          CPD = GetCPD(*(_DWORD *)v41[0], v8 | 0x10, v46);
          if ( CPD )
            v46 = CPD;
        }
        v10 = (struct tagCLS *)a3;
        if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
        {
          v11 = HMValidateHandleNoRip(a3, 7);
          if ( v11 )
            v10 = *(struct tagCLS **)(*(_DWORD *)(v11 + 20) + 8);
          else
            v10 = (struct tagCLS *)a3;
        }
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 24) = v10;
        v12 = MapClientToServerPfn(v10);
        if ( v12 )
        {
          *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 24) = v12;
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) |= 1u;
        }
        else if ( a4 )
        {
          *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) |= 2u;
LABEL_29:
          if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 8) != 0 )
          {
            v13 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12);
            v45 = *(struct tagCLS **)(*(_DWORD *)v41[0] + 4);
            memset(v38, 0, sizeof(v38));
            if ( ClassLock(*(_DWORD *)v41[0], v38) )
            {
              if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 1) == 0 )
                v5 = xxxClientWOWGetProcModule(*(void **)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 24));
              *(_WORD *)((char *)v45 + v13 + 62) = v5;
              v14 = *(struct tagCLS **)v41[0];
              v15 = KeGetCurrentThread();
              v16 = W32GetThreadWin32Thread(v15);
              *(_DWORD *)(v16 + 8) = v38[0];
              ClassUnlockWorker(v14);
            }
            else
            {
              UserSetLastError((struct _NT_TIB *)5);
              *(_WORD *)((char *)v45 + v13 + 62) = 0;
            }
          }
LABEL_34:
          v6 = v46;
          goto LABEL_83;
        }
        *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) &= ~2u;
        goto LABEL_29;
      }
    }
    v8 = 0;
    goto LABEL_19;
  }
  if ( a2 != (struct tagWND *)-20 )
  {
LABEL_52:
    if ( a2 == (struct tagWND *)-32 )
    {
      v21 = 87;
LABEL_54:
      UserSetLastError((struct _NT_TIB *)v21);
      v6 = 0;
      goto LABEL_83;
    }
    v22 = (int)a2 + 34;
    if ( v22 < 0 || (_mm_lfence(), !byte_252B28[v22]) )
    {
      v21 = 1413;
      goto LABEL_54;
    }
    SmartObjStackRefBase<tagCLS>::operator=(v41, *(_DWORD *)(*(_DWORD *)v41[0] + 32));
    v23 = (struct tagCLS **)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + (unsigned __int8)byte_252B28[v22]);
    if ( byte_252B4C[v22] == 4 )
    {
      v24 = *v23;
      v46 = (int)*v23;
      *v23 = (struct tagCLS *)a3;
      if ( v42 == (struct tagWND *)-26 && v24 != (struct tagCLS *)a3 && IsWindowDesktopComposed(v43) )
      {
        DirtyVisRgnTrackers(v43);
        ClassStyle = DwmGetClassStyle(v43);
        v25 = (void *)ReferenceDwmApiPort();
        DwmAsyncChildStyleChange(v25, *v43, -26, ClassStyle);
      }
    }
    else
    {
      v46 = *(unsigned __int16 *)v23;
      *(_WORD *)v23 = a3;
    }
    SmartObjStackRefBase<tagCLS>::operator=(v41, *(_DWORD *)(*(_DWORD *)v41[0] + 36));
    while ( *(_DWORD *)v41[0] )
    {
      v26 = (unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + (unsigned __int8)byte_252B28[v22]);
      if ( byte_252B4C[v22] == 4 )
      {
        v27 = *(_DWORD *)v26;
        *(_DWORD *)v26 = a3;
      }
      else
      {
        v27 = *v26;
        *v26 = a3;
      }
      v46 = v27;
      SmartObjStackRefBase<tagCLS>::operator=(v41, **(_DWORD **)v41[0]);
    }
    goto LABEL_34;
  }
  if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 8) != 0 )
  {
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) & 0x10) != 0 )
    {
      v6 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12)
                               + *(_DWORD *)(*(_DWORD *)v41[0] + 4)
                               + 60);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12) + *(_DWORD *)(*(_DWORD *)v41[0] + 4) + 60) = a3;
    }
    else
    {
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12) + *(_DWORD *)(*(_DWORD *)v41[0] + 4) + 60) = a3;
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 6) |= 0x10u;
      v6 = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v41[0] + 4) + 12);
    }
    goto LABEL_83;
  }
  UserSetLastError((struct _NT_TIB *)0x57);
LABEL_85:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v41);
  return 0;
}
