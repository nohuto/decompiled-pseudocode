/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QAEHAAVXDCOBJ@@PAPAU_FONTFILEVIEW@@IPAUtagDESIGNVECTOR@@PAU_UNIVERSAL_FONT_ID@@PAH@Z @ 0x1D0A09
 * Callers:
 *     _NtGdiAddRemoteMMInstanceToDC@12 @ 0x1D9196 (_NtGdiAddRemoteMMInstanceToDC@12.c)
 *     _NtGdiAddRemoteFontToDC@16 @ 0x1E92FF (_NtGdiAddRemoteFontToDC@16.c)
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA (-vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNT.c)
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?bAddRemoteFont@XDCOBJ@@QAEHPAVPFF@@@Z @ 0x2111EC (-bAddRemoteFont@XDCOBJ@@QAEHPAVPFF@@@Z.c)
 */

unsigned int __thiscall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        void **a5,
        struct PFF **a6,
        int *a7)
{
  unsigned int v7; // ebx
  unsigned int v8; // ecx
  char *v9; // eax
  struct _FONTFILEVIEW **v10; // esi
  char *v11; // eax
  unsigned __int16 *v12; // edi
  struct _FONTFILEVIEW **v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // esi
  wchar_t *p_Dst; // ecx
  __int16 v19; // ax
  unsigned int v20; // edi
  struct PFF *v21; // esi
  PUBLIC_PFTOBJ *v22; // edi
  int v23; // eax
  struct PFF **v24; // ecx
  unsigned int v26; // [esp-14h] [ebp-D4h]
  struct _FONTFILEVIEW **v27; // [esp-Ch] [ebp-CCh]
  unsigned int v28; // [esp-Ch] [ebp-CCh]
  struct PFF **v29; // [esp-8h] [ebp-C8h]
  int v30; // [esp+0h] [ebp-C0h]
  int *v31; // [esp+4h] [ebp-BCh]
  struct _FONTFILEVIEW **v32; // [esp+10h] [ebp-B0h]
  HDEV v33; // [esp+14h] [ebp-ACh] BYREF
  struct PFF **v34; // [esp+18h] [ebp-A8h] BYREF
  unsigned int v35; // [esp+1Ch] [ebp-A4h] BYREF
  unsigned int v36; // [esp+20h] [ebp-A0h]
  size_t MaxCount; // [esp+24h] [ebp-9Ch]
  unsigned int v38; // [esp+28h] [ebp-98h]
  void **v39; // [esp+2Ch] [ebp-94h]
  unsigned int v40; // [esp+30h] [ebp-90h]
  unsigned int v41; // [esp+34h] [ebp-8Ch]
  int *v42; // [esp+38h] [ebp-88h] BYREF
  PUBLIC_PFTOBJ *v43; // [esp+3Ch] [ebp-84h]
  unsigned int v44; // [esp+40h] [ebp-80h]
  XDCOBJ *v45; // [esp+44h] [ebp-7Ch]
  unsigned int v46[2]; // [esp+48h] [ebp-78h] BYREF
  struct PFF *v47[2]; // [esp+50h] [ebp-70h] BYREF
  __int16 v48; // [esp+58h] [ebp-68h]
  _BYTE v49[16]; // [esp+60h] [ebp-60h] BYREF
  char v50; // [esp+70h] [ebp-50h] BYREF
  wchar_t Dst; // [esp+80h] [ebp-40h] BYREF
  __int16 v52; // [esp+82h] [ebp-3Eh] BYREF

  v43 = this;
  v34 = a6;
  v45 = a2;
  v42 = a7;
  v32 = a3;
  v7 = 0;
  v39 = a5;
  v41 = 0;
  v40 = 0;
  v35 = 0;
  v36 = a4;
  if ( a5 )
    MaxCount = 4 * (_DWORD)a5[1] + 8;
  else
    MaxCount = 0;
  v46[0] = 0;
  v46[1] = 0;
  memset(v49, 0, sizeof(v49));
  if ( ScrutinizeFontLoad(2, 0) >= 0 )
  {
    v8 = v36;
    if ( v36 <= 4 )
    {
      v10 = (struct _FONTFILEVIEW **)v49;
      v11 = &v50;
    }
    else
    {
      v9 = (char *)PALLOCMEM2(8 * v36, 1986422343, 1);
      v10 = (struct _FONTFILEVIEW **)v9;
      if ( !v9 )
        goto LABEL_33;
      v8 = v36;
      v11 = v9 + 16;
    }
    v12 = (unsigned __int16 *)a3;
    v38 = (unsigned int)v11;
    if ( v8 )
    {
      v13 = a3;
      v14 = v8;
      v33 = (HDEV)((char *)v10 - (char *)a3);
      v44 = v38 - (_DWORD)a3;
      v15 = v38 - (_DWORD)a3;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v13 + (char *)v10 - (char *)a3) = (struct _FONTFILEVIEW *)*((_DWORD *)*v13 + 3);
        *(struct _FONTFILEVIEW **)((char *)v13 + v15) = (struct _FONTFILEVIEW *)*((_DWORD *)*v13 + 4);
        ++v13;
        --v14;
      }
      while ( v14 );
      v7 = v40;
      v12 = (unsigned __int16 *)a3;
      v8 = v36;
    }
    v33 = 0;
    vLoadFontFileView(
      0,
      0,
      v12,
      v8,
      v10,
      v38,
      v39,
      (unsigned int *)MaxCount,
      (struct tagDESIGNVECTOR *)&v35,
      (unsigned int)&v33,
      v46,
      (struct PDEV **)1,
      0,
      v30,
      v31);
    if ( v10 != (struct _FONTFILEVIEW **)v49 )
      Win32FreePool(v10);
    if ( v35 )
    {
      v16 = (*((int (__stdcall **)(unsigned int, int, _DWORD, _DWORD))v33 + 526))(v35, 2, 0, 0);
      v17 = v16;
      v40 = v16;
      if ( v16 )
      {
        if ( v16 != -1 )
        {
          _swprintf_s(
            &Dst,
            0x1Eu,
            L"REMOTE-%u",
            _InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
          p_Dst = &Dst;
          do
            v19 = *p_Dst++;
          while ( v19 != (_WORD)v41 );
          v27 = (struct _FONTFILEVIEW **)v12;
          v20 = v36;
          v41 = (((char *)p_Dst - (char *)&v52) >> 1) + 1;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v47,
            v17,
            &Dst,
            v41,
            v36,
            (struct tagDESIGNVECTOR *)v39,
            MaxCount,
            v35,
            v33,
            0,
            *(struct PFT **)v43,
            0x20u,
            0x20u,
            (struct _FNTCHECKSUM *)v46,
            v27,
            (struct _UNIVERSAL_FONT_ID *)v34,
            0);
          v21 = v47[0];
          if ( v47[0] )
          {
            v29 = v34;
            v32 = 0;
            v28 = v40;
            *v42 = 0;
            if ( PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v47, &Dst, v28, (struct _UNIVERSAL_FONT_ID *)v29, 0) )
            {
              v42 = (int *)_ghsemPublicPFT;
              GreAcquireSemaphore(_ghsemPublicPFT);
              v7 = PFFOBJ::bAddHash((PFFOBJ *)v47, 0);
              if ( v7 )
              {
                v7 = 0;
                v34 = 0;
                v26 = v20;
                v22 = v43;
                if ( !PUBLIC_PFTOBJ::pPFFGet(v43, &Dst, v41, v26, (struct tagDESIGNVECTOR *)v39, MaxCount, &v34, 0) )
                {
                  v7 = XDCOBJ::bAddRemoteFont(v45, v21);
                  if ( v7 )
                  {
                    v23 = *(_DWORD *)v22;
                    if ( (*((_DWORD *)v21 + 8) & 0x200) == 0 )
                      ++*(_DWORD *)(v23 + 20);
                    v24 = v34;
                    ++*(_DWORD *)(v23 + 16);
                    if ( *v24 )
                      *((_DWORD *)*v24 + 2) = v21;
                    *((_DWORD *)v21 + 1) = *v24;
                    *((_DWORD *)v21 + 2) = 0;
                    v48 |= 2u;
                    *v24 = v21;
                    PopThreadGuardedObject((char *)v21 + 100);
                  }
                }
              }
              else
              {
                PFFOBJ::vRemoveHash((PFFOBJ *)v47);
              }
              SEMOBJ::vUnlock((SEMOBJ *)&v42);
            }
          }
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v47);
        }
      }
    }
  }
LABEL_33:
  if ( v32 )
    Win32FreePool(v32);
  return v7;
}
