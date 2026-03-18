/*
 * XREFs of _GetClassInfoEx @ 0x1C00B9EB0
 * Callers:
 *     NtUserGetClassInfoEx @ 0x1C00B9B70 (NtUserGetClassInfoEx.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0094684 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     GetClassPtr @ 0x1C00BA260 (GetClassPtr.c)
 *     MapClientNeuterToClientPfn @ 0x1C00BA2F0 (MapClientNeuterToClientPfn.c)
 *     GetCPD @ 0x1C00D3314 (GetCPD.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     MapServerToClientPfn @ 0x1C0155B1C (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015BAE8 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 */

__int64 __fastcall GetClassInfoEx(struct _LIST_ENTRY *Flink, char *a2, __int64 a3, _QWORD *a4, unsigned int a5)
{
  unsigned __int16 v9; // bx
  int v10; // r15d
  __int64 *ClassPtr; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 CPD; // rax
  _BYTE v21[16]; // [rsp+38h] [rbp-60h] BYREF
  _QWORD v22[10]; // [rsp+48h] [rbp-50h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v22);
  v9 = 0;
  v10 = 0;
  *(_QWORD *)(a3 + 56) = 0LL;
  *(_QWORD *)(a3 + 64) = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v21);
  if ( ((unsigned __int64)a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    if ( (int)RtlStringCchCopyW((char *)gawchAtomScratch, 256LL, a2) < 0 )
      LOWORD(a2) = 0;
    else
      LOWORD(a2) = UserFindAtom(gawchAtomScratch);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v21);
  if ( !Flink )
    Flink = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
  ClassPtr = (__int64 *)GetClassPtr((unsigned __int16)a2, *(_QWORD *)(gptiCurrent + 424LL), Flink);
  if ( ClassPtr )
  {
    v12 = *ClassPtr;
    if ( *ClassPtr != *(_QWORD *)v22[0] )
    {
      if ( v22[0] != gSmartObjNullRef && !--*(_DWORD *)(v22[0] + 8LL) )
      {
        if ( *(_BYTE *)(v22[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v22[0]);
      }
      if ( v12 )
      {
        v22[0] = *(_QWORD *)(v12 + 128);
        ++*(_DWORD *)(v22[0] + 8LL);
      }
      else
      {
        v22[0] = gSmartObjNullRef;
      }
    }
    *(_DWORD *)(a3 + 4) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 8LL) & 0x37BFF;
    if ( *(_WORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 4LL) && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
      *(_DWORD *)(a3 + 4) &= ~0x4000u;
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 12LL);
    *(_DWORD *)(a3 + 20) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 84LL);
    if ( *(_WORD *)(gptiCurrent + 632LL) < 0x400u )
    {
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 64LL) == hModuleWin
        || *(struct _LIST_ENTRY **)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 64LL) == WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
      {
        *(_QWORD *)(a3 + 24) = WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink;
      }
      else
      {
        *(_QWORD *)(a3 + 24) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 64LL);
      }
    }
    else
    {
      if ( Flink == WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink )
        Flink = 0LL;
      *(_QWORD *)(a3 + 24) = Flink;
    }
    if ( *(_QWORD *)(*(_QWORD *)v22[0] + 80LL) )
      v13 = **(_QWORD **)(*(_QWORD *)v22[0] + 80LL);
    else
      v13 = 0LL;
    *(_QWORD *)(a3 + 32) = v13;
    if ( *(_QWORD *)(*(_QWORD *)v22[0] + 88LL) )
      v14 = **(_QWORD **)(*(_QWORD *)v22[0] + 88LL);
    else
      v14 = 0LL;
    *(_QWORD *)(a3 + 40) = v14;
    *(_QWORD *)(a3 + 48) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 72LL);
    if ( (!*(_QWORD *)(*(_QWORD *)v22[0] + 112LL)
       || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 112LL) + 80LL) & 0x80u) == 0)
      && *(_QWORD *)(*(_QWORD *)v22[0] + 112LL) )
    {
      v15 = **(_QWORD **)(*(_QWORD *)v22[0] + 112LL);
    }
    else
    {
      v15 = 0LL;
    }
    *(_QWORD *)(a3 + 72) = v15;
    v16 = *(_QWORD *)v22[0];
    if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 6LL) & 1) != 0 )
    {
      *(_QWORD *)(a3 + 8) = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v16 + 8) + 32LL), a5);
    }
    else
    {
      *(_QWORD *)(a3 + 8) = MapClientNeuterToClientPfn(v16, 0LL, a5);
      if ( *(_QWORD *)(a3 + 8) == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 32LL)
        && a5 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 6LL) >> 1) & 1) )
      {
        v10 = 2 - (a5 != 0);
      }
    }
    if ( v10 )
    {
      CPD = GetCPD(*(_QWORD *)v22[0], v10 | 0x10u, *(_QWORD *)(a3 + 8));
      if ( CPD )
        *(_QWORD *)(a3 + 8) = CPD;
    }
    v17 = *(_QWORD *)(*(_QWORD *)v22[0] + 8LL);
    if ( a5 )
      v18 = *(_QWORD *)(v17 + 16);
    else
      v18 = *(_QWORD *)(v17 + 24);
    *a4 = v18;
    v9 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v22[0] + 8LL) + 2LL);
  }
  else
  {
    UserSetLastError(1411LL);
  }
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v22);
  return v9;
}
