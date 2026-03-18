/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QEAAHPEAPEAVRFONT@@@Z @ 0x1C0065230
 * Callers:
 *     ?vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00252E8 (-vInitEUDC@RFONTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QEAAXXZ @ 0x1C00650FC (-vMakeInactive@RFONTOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     vMakeInactiveHelper @ 0x1C0297D2C (vMakeInactiveHelper.c)
 * Callees:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z @ 0x1C00642D4 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAVPDEVOBJ@@PEAVPFFOBJ@@H@Z.c)
 *     ?vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z @ 0x1C0064544 (-vRemove@RFONTOBJ@@QEAAXPEAPEAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ @ 0x1C00656B8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@XZ.c)
 *     ?prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z @ 0x1C00656D8 (-prfntInactive@PDEVOBJ@@QEAAPEAVRFONT@@PEAV2@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT **v2; // r15
  unsigned int v4; // r14d
  struct RFONT *v5; // rbp
  struct RFONT *v6; // rax
  struct RFONT *v7; // rcx
  struct RFONT *v8; // r8
  struct RFONT *v9; // rcx
  struct RFONT *v10; // rcx
  unsigned int i; // edx
  struct RFONT *v12; // rcx
  struct RFONT *v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // r10
  _QWORD *v19; // r8
  __int64 v20; // rax
  int v21; // ecx
  unsigned int v22; // edx
  int v23; // edx
  int v24; // edx
  int v25; // edx
  struct RFONT *v26; // rcx
  struct RFONT **v27; // r8
  _QWORD *v28; // rax
  __int64 result; // rax
  struct RFONT *v30; // rax
  struct RFONT *j; // rcx
  __int64 v32; // r9
  __int64 v33; // rcx
  struct RFONT *v34; // r10
  __int64 v35; // [rsp+20h] [rbp-68h] BYREF
  _OWORD v36[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _FONTOBJ *v37; // [rsp+90h] [rbp+8h] BYREF
  struct RFONT *v38; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v39; // [rsp+A8h] [rbp+20h] BYREF

  v2 = a2;
  v4 = 0;
  if ( !*this || !*((_DWORD *)*this + 165) )
    return 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  GreAcquireSemaphore(ghsemRFONTList);
  --*((_DWORD *)*this + 165);
  v6 = *this;
  if ( !*((_DWORD *)*this + 165) )
  {
    if ( v2 )
    {
      v7 = (struct RFONT *)*((_QWORD *)v6 + 90);
      v8 = *this;
      if ( v7 )
      {
        *v2++ = v7;
        *((_QWORD *)*this + 90) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v9 = (struct RFONT *)*((_QWORD *)v6 + 91);
      v4 = 1;
      if ( v9 )
      {
        *v2++ = v9;
        *((_QWORD *)*this + 91) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      v10 = (struct RFONT *)*((_QWORD *)v6 + 92);
      if ( v10 )
      {
        *v2++ = v10;
        *((_QWORD *)*this + 92) = 0LL;
        v6 = *this;
        v8 = *this;
      }
      for ( i = 0; i < *((_DWORD *)v6 + 210); v8 = v6 )
      {
        v32 = 8LL * i;
        v33 = *((_QWORD *)v6 + 93);
        v6 = v8;
        v34 = *(struct RFONT **)(v32 + v33);
        if ( v34 )
        {
          *v2++ = v34;
          *(_QWORD *)(v32 + *((_QWORD *)*this + 93)) = 0LL;
          v6 = *this;
        }
        ++i;
      }
      v12 = (struct RFONT *)*((_QWORD *)v6 + 93);
      v13 = v6;
      if ( v12 && v12 != (struct RFONT *)((char *)v6 + 752) )
      {
        Win32FreePool(v12);
        v13 = *this;
      }
      *((_QWORD *)v13 + 93) = 0LL;
      *((_DWORD *)*this + 210) = 0;
      *((_DWORD *)*this + 208) = 0;
      v6 = *this;
    }
    v14 = *((_QWORD *)v6 + 13);
    v39 = v14;
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      v15 = *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1520LL);
    else
      v15 = *(_QWORD *)(v14 + 1520);
    v16 = *((_QWORD *)v6 + 83);
    v17 = *((_QWORD *)v6 + 84);
    v18 = v16 + 664;
    if ( !v16 )
      v18 = 0LL;
    v19 = (_QWORD *)(v17 + 664);
    if ( !v17 )
      v19 = 0LL;
    if ( v16 )
    {
      *(_QWORD *)(v18 + 8) = v17;
      if ( v19 )
        *v19 = *((_QWORD *)v6 + 83);
    }
    else
    {
      v15 = *((_QWORD *)v6 + 84);
      if ( v19 )
        *v19 = 0LL;
    }
    if ( (*(_DWORD *)(v14 + 40) & 0x800000) != 0 )
      *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1520LL) = v15;
    else
      *(_QWORD *)(v14 + 1520) = v15;
    v20 = *((_QWORD *)*this + 16);
    if ( *(_DWORD *)(v20 + 56) || *(_DWORD *)(v20 + 60) || *(_QWORD *)(v20 + 144) )
    {
      v21 = *(_DWORD *)(v14 + 40) & 0x800000;
      if ( v21 )
        v22 = *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL);
      else
        v22 = *(_DWORD *)(v14 + 1536);
      if ( v22 >= 0x80 )
      {
        v30 = PDEVOBJ::prfntInactive((PDEVOBJ *)&v39);
        for ( j = v30; v30; v30 = (struct RFONT *)*((_QWORD *)v30 + 84) )
          v5 = v30;
        v38 = j;
        v37 = (struct _FONTOBJ *)v5;
        RFONTOBJ::vRemove((__int64)&v37, (unsigned __int64 *)&v38, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v39, v38);
        v37 = 0LL;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37);
      }
      else
      {
        if ( v21 )
          v23 = *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL);
        else
          v23 = *(_DWORD *)(v14 + 1536);
        v24 = v23 + 1;
        if ( v21 )
          *(_DWORD *)(*(_QWORD *)(v14 + 3520) + 1536LL) = v24;
        else
          *(_DWORD *)(v14 + 1536) = v24;
      }
      v25 = *(_DWORD *)(v14 + 40);
      if ( (v25 & 0x800000) != 0 )
        v26 = *(struct RFONT **)(*(_QWORD *)(v14 + 3520) + 1528LL);
      else
        v26 = *(struct RFONT **)(v14 + 1528);
      v27 = (struct RFONT **)((char *)v26 + 664);
      if ( !v26 )
        v27 = 0LL;
      v28 = (_QWORD *)((char *)*this + 664);
      if ( *this != (struct RFONT *)-664LL )
      {
        *v28 = 0LL;
        v28[1] = v26;
        if ( v27 )
          *v27 = *this;
        v26 = *this;
        v25 = *(_DWORD *)(v14 + 40);
      }
      if ( (v25 & 0x800000) != 0 )
        *(_QWORD *)(*(_QWORD *)(v14 + 3520) + 1528LL) = v26;
      else
        *(_QWORD *)(v14 + 1528) = v26;
    }
    else
    {
      v5 = *this;
    }
  }
  if ( ghsemRFONTList )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", ghsemRFONTList);
    GreReleaseSemaphoreInternal(ghsemRFONTList);
  }
  if ( v2 && !v4 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v5 )
  {
    v35 = *((_QWORD *)v5 + 16);
    v37 = (struct _FONTOBJ *)v5;
    memset(v36, 0, sizeof(v36));
    PushThreadGuardedObject(v36, v5, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT(&v37, 0LL, (struct PFFOBJ *)&v35, 1);
    PopThreadGuardedObject(v36);
    v37 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v37);
  }
  result = v4;
  *this = 0LL;
  return result;
}
