/*
 * XREFs of ?bMakeInactiveHelper@RFONTOBJ@@QAEHPAPAVRFONT@@@Z @ 0x8D4E8
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 *     ?vMakeInactive@RFONTOBJ@@QAEXXZ @ 0x8D42A (-vMakeInactive@RFONTOBJ@@QAEXXZ.c)
 *     vMakeInactiveHelper @ 0x1F90C7 (vMakeInactiveHelper.c)
 *     ?vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z @ 0x208150 (-vInitEUDC@RFONTOBJ@@QAEXAAVXDCOBJ@@@Z.c)
 * Callees:
 *     ??1RFONTOBJ@@QAE@XZ @ 0x86B86 (--1RFONTOBJ@@QAE@XZ.c)
 *     ?vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z @ 0xA3954 (-vRemove@RFONTOBJ@@QAEXPAPAVRFONT@@W4_RFL_TYPE@@@Z.c)
 *     ?vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z @ 0xD0924 (-vDeleteRFONT@RFONTOBJ@@QAEXPAVPDEVOBJ@@PAVPFFOBJ@@H@Z.c)
 *     ?prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z @ 0xD0B62 (-prfntInactive@PDEVOBJ@@QAEPAVRFONT@@PAV2@@Z.c)
 */

int __thiscall RFONTOBJ::bMakeInactiveHelper(struct RFONT **this, struct RFONT **a2)
{
  struct RFONT **v3; // esi
  int v4; // edi
  unsigned int v5; // ecx
  struct RFONT *v6; // edx
  struct RFONT *v7; // eax
  struct RFONT *v8; // eax
  struct RFONT *v9; // eax
  _DWORD *v10; // ecx
  struct RFONT *v11; // esi
  _DWORD *v12; // esi
  struct RFONT *v13; // eax
  int v14; // ecx
  struct RFONT *v15; // eax
  _DWORD *v16; // edi
  bool v17; // zf
  struct RFONT *v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // edx
  int v23; // edx
  struct RFONT *v24; // ecx
  struct RFONT **v25; // edx
  _DWORD *v26; // eax
  int v27; // eax
  int v28; // esi
  struct RFONT *v30; // eax
  struct RFONT *v31; // eax
  struct RFONT *v32; // eax
  struct RFONT *v33; // eax
  struct RFONT *v34; // eax
  struct RFONT *v35; // edx
  struct RFONT *v36; // eax
  _BYTE v37[16]; // [esp+Ch] [ebp-38h] BYREF
  int v38; // [esp+1Ch] [ebp-28h] BYREF
  _DWORD *v39; // [esp+20h] [ebp-24h] BYREF
  int v40; // [esp+24h] [ebp-20h]
  int v41; // [esp+28h] [ebp-1Ch]
  struct RFONT *v42; // [esp+2Ch] [ebp-18h] BYREF
  int v43; // [esp+30h] [ebp-14h]
  struct RFONT *v44; // [esp+34h] [ebp-10h] BYREF
  struct RFONT *v45; // [esp+38h] [ebp-Ch]
  _DWORD *v46; // [esp+3Ch] [ebp-8h]

  v43 = 0;
  if ( !*this || !*((_DWORD *)*this + 165) )
    return 0;
  v3 = a2;
  v45 = 0;
  if ( a2 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    ++gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  v4 = _ghsemRFONTList;
  v40 = _ghsemRFONTList;
  GreAcquireSemaphore(_ghsemRFONTList);
  v5 = 0;
  --*((_DWORD *)*this + 165);
  v6 = *this;
  if ( !*((_DWORD *)*this + 165) )
  {
    if ( v3 )
    {
      v7 = (struct RFONT *)*((_DWORD *)v6 + 179);
      if ( v7 )
      {
        *v3++ = v7;
        v30 = *this;
        a2 = v3;
        *((_DWORD *)v30 + 179) = 0;
        v6 = *this;
      }
      v8 = (struct RFONT *)*((_DWORD *)v6 + 180);
      v43 = 1;
      if ( v8 )
      {
        *v3++ = v8;
        v31 = *this;
        a2 = v3;
        *((_DWORD *)v31 + 180) = 0;
        v6 = *this;
      }
      v9 = (struct RFONT *)*((_DWORD *)v6 + 181);
      if ( v9 )
      {
        *v3++ = v9;
        v32 = *this;
        a2 = v3;
        *((_DWORD *)v32 + 181) = 0;
        v6 = *this;
      }
      if ( *((_DWORD *)v6 + 195) )
      {
        do
        {
          v33 = *(struct RFONT **)(*((_DWORD *)v6 + 182) + 4 * v5);
          if ( v33 )
          {
            *v3++ = v33;
            *(_DWORD *)(*((_DWORD *)*this + 182) + 4 * v5) = 0;
            v6 = *this;
          }
          ++v5;
        }
        while ( v5 < *((_DWORD *)v6 + 195) );
        a2 = v3;
      }
      v10 = (_DWORD *)*((_DWORD *)v6 + 182);
      v11 = v6;
      if ( v10 )
      {
        v11 = v6;
        if ( v10 != (_DWORD *)((char *)v6 + 732) )
        {
          Win32FreePool(*((_DWORD *)v6 + 182));
          v11 = *this;
        }
      }
      *((_DWORD *)v11 + 182) = 0;
      *((_DWORD *)*this + 195) = 0;
      *((_DWORD *)*this + 193) = 0;
      v6 = *this;
    }
    v12 = (_DWORD *)*((_DWORD *)v6 + 18);
    v39 = v12;
    if ( (v12[6] & 0x800000) != 0 )
      v13 = *(struct RFONT **)(v12[579] + 940);
    else
      v13 = (struct RFONT *)v12[235];
    v14 = *((_DWORD *)v6 + 166);
    v44 = v13;
    v15 = (struct RFONT *)*((_DWORD *)v6 + 167);
    v41 = v14 != 0 ? v14 + 664 : 0;
    v42 = v15;
    v16 = v15 != 0 ? (_DWORD *)((unsigned int)v15 + 664) : 0;
    v17 = v14 == 0;
    v18 = v15;
    v46 = v16;
    if ( v17 )
    {
      if ( v16 )
        *v16 = 0;
    }
    else
    {
      *(_DWORD *)(v41 + 4) = v42;
      if ( v46 )
        *v46 = *((_DWORD *)v6 + 166);
      v18 = v44;
    }
    if ( (v12[6] & 0x800000) != 0 )
      *(_DWORD *)(v12[579] + 940) = v18;
    else
      v12[235] = v18;
    v4 = v40;
    v19 = (_DWORD *)*((_DWORD *)*this + 21);
    if ( v19[9] || v19[10] || v19[23] )
    {
      v20 = v12[6] & 0x800000;
      if ( v20 )
        v21 = *(_DWORD *)(v12[579] + 948);
      else
        v21 = v12[237];
      if ( v21 >= 0x80 )
      {
        if ( v20 )
          v34 = *(struct RFONT **)(v12[579] + 944);
        else
          v34 = (struct RFONT *)v12[236];
        if ( v34 )
        {
          do
          {
            v35 = v34;
            v34 = (struct RFONT *)*((_DWORD *)v34 + 167);
            v45 = v35;
          }
          while ( v34 );
        }
        else
        {
          v35 = v45;
        }
        v44 = v35;
        if ( v20 )
          v36 = *(struct RFONT **)(v12[579] + 944);
        else
          v36 = (struct RFONT *)v12[236];
        v42 = v36;
        RFONTOBJ::vRemove(&v44, &v42, 1);
        PDEVOBJ::prfntInactive((PDEVOBJ *)&v39, v42);
        v44 = 0;
        RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v44);
      }
      else
      {
        if ( v20 )
          v22 = *(_DWORD *)(v12[579] + 948);
        else
          v22 = v12[237];
        v23 = v22 + 1;
        if ( v20 )
          *(_DWORD *)(v12[579] + 948) = v23;
        else
          v12[237] = v23;
      }
      v40 = v12[6];
      if ( (v40 & 0x800000) != 0 )
        v24 = *(struct RFONT **)(v12[579] + 944);
      else
        v24 = (struct RFONT *)v12[236];
      v39 = (_DWORD *)((char *)*this + 664);
      v25 = v24 != 0 ? (struct RFONT **)((unsigned int)v24 + 664) : 0;
      v26 = v39;
      if ( v39 )
      {
        *v39 = 0;
        v26[1] = v24;
        if ( v25 )
          *v25 = *this;
        v24 = *this;
        v27 = v12[6];
      }
      else
      {
        v27 = v40;
      }
      if ( (v27 & 0x800000) != 0 )
        *(_DWORD *)(v12[579] + 944) = v24;
      else
        v12[236] = v24;
    }
    else
    {
      v45 = *this;
    }
    v3 = a2;
  }
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsem", v4);
    GreReleaseSemaphoreInternal(v4);
  }
  v17 = v3 == 0;
  v28 = v43;
  if ( !v17 && !v43 )
  {
    GreAcquireSemaphore(ghsemEUDC1);
    --gcEUDCCount;
    EtwTraceGreLockReleaseSemaphore(L"ghsemEUDC1", ghsemEUDC1);
    GreReleaseSemaphoreInternal(ghsemEUDC1);
  }
  if ( v45 )
  {
    v38 = *((_DWORD *)v45 + 21);
    memset(v37, 0, sizeof(v37));
    a2 = (struct RFONT **)v45;
    PushThreadGuardedObject(v37, v45, RestartInactiveHelper);
    RFONTOBJ::vDeleteRFONT((RFONTOBJ *)&a2, 0, (struct PFFOBJ *)&v38, (struct RFONT *)1);
    PopThreadGuardedObject(v37);
    a2 = 0;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&a2);
  }
  *this = 0;
  return v28;
}
