/*
 * XREFs of __GetClassInfoEx@20 @ 0x8052E
 * Callers:
 *     _NtUserGetClassInfoEx@20 @ 0x802EC (_NtUserGetClassInfoEx@20.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x2A3EA (--0-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96 (--1-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     _GetClassPtr@12 @ 0x4741E (_GetClassPtr@12.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _MapClientNeuterToClientPfn@12 @ 0x807E4 (_MapClientNeuterToClientPfn@12.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 *     _MapServerToClientPfn@8 @ 0xEB49C (_MapServerToClientPfn@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

__int16 __fastcall _GetClassInfoEx(KDEFERRED_ROUTINE *a1, int Atom, _DWORD *a3, _DWORD *a4, int a5)
{
  int v6; // esi
  PKDEFERRED_ROUTINE DeferredRoutine; // eax
  _DWORD *ClassPtr; // eax
  PKDEFERRED_ROUTINE v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  __int16 v14; // si
  int CPD; // eax
  unsigned int v17; // [esp+0h] [ebp-50h]
  const unsigned __int16 *v18; // [esp+4h] [ebp-4Ch]
  _BYTE v19[8]; // [esp+10h] [ebp-40h] BYREF
  _DWORD v20[4]; // [esp+18h] [ebp-38h] BYREF
  int v21; // [esp+28h] [ebp-28h]
  int v22; // [esp+2Ch] [ebp-24h]
  int v23; // [esp+30h] [ebp-20h]
  KDEFERRED_ROUTINE *v24; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]

  v24 = a1;
  v20[3] = a1;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v20);
  v6 = 0;
  v21 = 0;
  v22 = _gptiCurrent;
  a3[9] = 0;
  a3[10] = 0;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v19);
  ms_exc.registration.TryLevel = 0;
  if ( (Atom & 0xFFFF0000) != 0 )
  {
    if ( RtlStringCchCopyW(256, gawchAtomScratch, (unsigned __int16 *)Atom, v17, v18) < 0 )
      Atom = 0;
    else
      Atom = (unsigned __int16)UserFindAtom(gawchAtomScratch);
  }
  else
  {
    Atom = (unsigned __int16)Atom;
  }
  v23 = Atom;
  ms_exc.registration.TryLevel = -2;
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v19);
  DeferredRoutine = v24;
  if ( !v24 )
  {
    DeferredRoutine = WPP_MAIN_CB.Dpc.DeferredRoutine;
    v24 = WPP_MAIN_CB.Dpc.DeferredRoutine;
  }
  ClassPtr = (_DWORD *)GetClassPtr(Atom, *(_DWORD *)(v22 + 232), (int)DeferredRoutine);
  if ( ClassPtr )
  {
    SmartObjStackRefBase<tagCLS>::operator=(*ClassPtr);
    a3[1] = (unsigned int)&loc_37BFF & *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 8);
    if ( *(_WORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 4)
      && (*(_WORD *)(v22 + 340) >= 0x400u || (*(_BYTE *)(v22 + 264) & 2) != 0) )
    {
      a3[1] &= ~0x4000u;
    }
    a3[3] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 12);
    a3[4] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 48) + *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 52);
    if ( *(_WORD *)(v22 + 340) < 0x400u )
    {
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 40) == _hModuleWin
        || *(PKDEFERRED_ROUTINE *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 40) == WPP_MAIN_CB.Dpc.DeferredRoutine )
      {
        v9 = WPP_MAIN_CB.Dpc.DeferredRoutine;
      }
      else
      {
        v9 = *(PKDEFERRED_ROUTINE *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 40);
      }
    }
    else
    {
      v9 = WPP_MAIN_CB.Dpc.DeferredRoutine != v24 ? v24 : 0;
    }
    a3[5] = v9;
    if ( *(_DWORD *)(*(_DWORD *)v20[0] + 48) )
      v10 = **(_DWORD **)(*(_DWORD *)v20[0] + 48);
    else
      v10 = 0;
    a3[6] = v10;
    if ( *(_DWORD *)(*(_DWORD *)v20[0] + 52) )
      v11 = **(_DWORD **)(*(_DWORD *)v20[0] + 52);
    else
      v11 = 0;
    a3[7] = v11;
    a3[8] = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 44);
    if ( (!*(_DWORD *)(*(_DWORD *)v20[0] + 64) || *(char *)(*(_DWORD *)(*(_DWORD *)v20[0] + 64) + 44) >= 0)
      && *(_DWORD *)(*(_DWORD *)v20[0] + 64) )
    {
      v6 = **(_DWORD **)(*(_DWORD *)v20[0] + 64);
    }
    a3[11] = v6;
    if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 6) & 1) != 0 )
    {
      a3[2] = MapServerToClientPfn(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 24), a5);
    }
    else
    {
      a3[2] = MapClientNeuterToClientPfn(a5);
      if ( a3[2] == *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 24)
        && a5 != ((*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 6) >> 1) & 1) )
      {
        v21 = (a5 == 0) + 1;
      }
    }
    if ( v21 )
    {
      CPD = GetCPD(a3[2]);
      if ( CPD )
        a3[2] = CPD;
    }
    v12 = *(_DWORD *)(*(_DWORD *)v20[0] + 4);
    if ( a5 )
      v13 = *(_DWORD *)(v12 + 16);
    else
      v13 = *(_DWORD *)(v12 + 20);
    *a4 = v13;
    v14 = *(_WORD *)(*(_DWORD *)(*(_DWORD *)v20[0] + 4) + 2);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v20);
    return v14;
  }
  else
  {
    UserSetLastError(1411);
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v20);
    return 0;
  }
}
