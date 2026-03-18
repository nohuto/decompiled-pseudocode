/*
 * XREFs of ?bLoadRemoteFonts@PUBLIC_PFTOBJ@@QEAAHAEAVXDCOBJ@@PEAPEAU_FONTFILEVIEW@@IPEAUtagDESIGNVECTOR@@PEAU_UNIVERSAL_FONT_ID@@PEAH@Z @ 0x1C02739E0
 * Callers:
 *     NtGdiAddRemoteMMInstanceToDC @ 0x1C027D940 (NtGdiAddRemoteMMInstanceToDC.c)
 *     NtGdiAddRemoteFontToDC @ 0x1C028AF20 (NtGdiAddRemoteFontToDC.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?bAddHash@PFFOBJ@@QEAAHH@Z @ 0x1C00108C4 (-bAddHash@PFFOBJ@@QEAAHH@Z.c)
 *     ?vRemoveHash@PFFOBJ@@QEAAXXZ @ 0x1C0010BE0 (-vRemoveHash@PFFOBJ@@QEAAXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0010ECC (-bLoadFontFileTable@PFFMEMOBJ@@QEAAHPEBGKPEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z.c)
 *     ?vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAVPDEV@@PEAU_FNTCHECKSUM@@HPEAH@Z @ 0x1C0014AB0 (-vLoadFontFileView@@YAXPEAGKPEAPEAU_FONTFILEVIEW@@KPEAPEAXPEAKPEAUtagDESIGNVECTOR@@KPEA_KPEAPEAV.c)
 *     PALLOCMEM2 @ 0x1C00D8F8C (PALLOCMEM2.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z @ 0x1C00D9CB4 (-pPFFGet@PUBLIC_PFTOBJ@@QEAAPEAVPFF@@PEBGKKPEAUtagDESIGNVECTOR@@KPEAPEAPEAV2@H@Z.c)
 *     ??0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTCHECKSUM@@PEAPEAU_FONTFILEVIEW@@PEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C010A588 (--0PFFMEMOBJ@@QEAA@IPEBGKKPEAUtagDESIGNVECTOR@@K_KPEAUHDEV__@@PEAUDHPDEV__@@PEAVPFT@@KKPEAU_FNTC.c)
 *     ?QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z @ 0x1C011B920 (-QueryFontFile@PDEVOBJ@@QEAAJ_KKKPEAK@Z.c)
 *     ?vKeepIt@PFFMEMOBJ@@QEAAXXZ @ 0x1C011C63C (-vKeepIt@PFFMEMOBJ@@QEAAXXZ.c)
 *     ??1PFFMEMOBJ@@QEAA@XZ @ 0x1C011D6F0 (--1PFFMEMOBJ@@QEAA@XZ.c)
 *     ?ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z @ 0x1C012981C (-ScrutinizeFontLoad@@YAJW4_W32KFontSourceType@@PEBG@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z @ 0x1C02ADB0C (-bAddRemoteFont@XDCOBJ@@QEAAHPEAVPFF@@@Z.c)
 */

__int64 __fastcall PUBLIC_PFTOBJ::bLoadRemoteFonts(
        PUBLIC_PFTOBJ *this,
        struct XDCOBJ *a2,
        struct _FONTFILEVIEW **a3,
        unsigned int a4,
        struct tagDESIGNVECTOR *Src,
        struct _UNIVERSAL_FONT_ID *a6,
        int *a7)
{
  unsigned int v8; // edi
  __int64 v9; // r15
  unsigned int v10; // esi
  char *v11; // rax
  void **v12; // rbx
  unsigned int *v13; // r8
  unsigned int *v14; // r10
  struct _FONTFILEVIEW **v15; // rdx
  __int64 v16; // r11
  __int64 v17; // rax
  unsigned int FontFile; // r12d
  __int64 v19; // rsi
  struct PFF *v20; // rbx
  struct _UNIVERSAL_FONT_ID *v21; // r9
  unsigned int v22; // r8d
  PUBLIC_PFTOBJ *v23; // rsi
  __int64 v24; // rcx
  struct PFF **v25; // rcx
  size_t Size; // [rsp+30h] [rbp-E0h]
  unsigned int v28; // [rsp+90h] [rbp-80h]
  HDEV v29; // [rsp+98h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+A0h] [rbp-70h] BYREF
  __int64 v31; // [rsp+A8h] [rbp-68h] BYREF
  struct _UNIVERSAL_FONT_ID *v32; // [rsp+B0h] [rbp-60h]
  PUBLIC_PFTOBJ *v33; // [rsp+B8h] [rbp-58h]
  struct PFF **v34; // [rsp+C0h] [rbp-50h] BYREF
  struct PFF *v35[3]; // [rsp+C8h] [rbp-48h] BYREF
  HDEV v36; // [rsp+E0h] [rbp-30h] BYREF
  int *v37; // [rsp+E8h] [rbp-28h]
  XDCOBJ *v38; // [rsp+F0h] [rbp-20h]
  __int64 v39; // [rsp+F8h] [rbp-18h] BYREF
  _OWORD v40[2]; // [rsp+100h] [rbp-10h] BYREF
  char v41; // [rsp+120h] [rbp+10h] BYREF
  wchar_t Dst[32]; // [rsp+130h] [rbp+20h] BYREF

  v32 = a6;
  v8 = 0;
  v37 = a7;
  v9 = a4;
  v38 = a2;
  v33 = this;
  v30 = 0LL;
  if ( Src )
    v10 = 4 * *((_DWORD *)Src + 1) + 8;
  else
    v10 = 0;
  v28 = v10;
  v31 = 0LL;
  memset(v40, 0, sizeof(v40));
  if ( ScrutinizeFontLoad(2u, 0LL) >= 0 )
  {
    if ( (unsigned int)v9 <= 4 )
    {
      v12 = (void **)v40;
      v13 = (unsigned int *)&v41;
    }
    else
    {
      v11 = (char *)PALLOCMEM2((unsigned int)(16 * v9), 1986422343LL, 1);
      v12 = (void **)v11;
      if ( !v11 )
        goto LABEL_32;
      v13 = (unsigned int *)(v11 + 32);
    }
    if ( (_DWORD)v9 )
    {
      v14 = v13;
      v15 = a3;
      v16 = v9;
      do
      {
        *(struct _FONTFILEVIEW **)((char *)v15 + (char *)v12 - (char *)a3) = (struct _FONTFILEVIEW *)*((_QWORD *)*v15 + 2);
        v17 = (__int64)*v15++;
        *v14++ = *(_DWORD *)(v17 + 24);
        --v16;
      }
      while ( v16 );
    }
    v29 = 0LL;
    vLoadFontFileView(
      0LL,
      0,
      a3,
      (unsigned int)v9,
      v12,
      v13,
      Src,
      v10,
      &v30,
      (struct PDEV **)&v29,
      (struct _FNTCHECKSUM *)&v31,
      1,
      0LL);
    v36 = v29;
    if ( v12 != (void **)v40 )
      Win32FreePool(v12);
    if ( v30 )
    {
      FontFile = PDEVOBJ::QueryFontFile((PDEVOBJ *)&v36, v30, 2u, 0, 0LL);
      if ( FontFile - 1 <= 0xFFFFFFFD )
      {
        swprintf_s(
          Dst,
          0x1EuLL,
          L"REMOTE-%u",
          (unsigned int)_InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulRemoteUnique));
        v19 = -1LL;
        do
          ++v19;
        while ( Dst[v19] );
        LODWORD(Size) = v28;
        PFFMEMOBJ::PFFMEMOBJ(
          (PFFMEMOBJ *)v35,
          FontFile,
          Dst,
          v19 + 1,
          v9,
          Src,
          Size,
          v30,
          v29,
          0LL,
          *(struct PFT **)v33,
          0x20u,
          0x20u,
          (struct _FNTCHECKSUM *)&v31,
          a3,
          v32,
          0);
        v20 = v35[0];
        if ( v35[0] )
        {
          v21 = v32;
          a3 = 0LL;
          *v37 = 0;
          if ( (unsigned int)PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v35, Dst, FontFile, v21, 0LL) )
          {
            v39 = ghsemPublicPFT;
            GreAcquireSemaphore(ghsemPublicPFT);
            v8 = PFFOBJ::bAddHash((PFFOBJ *)v35, 0);
            if ( v8 )
            {
              v22 = v19 + 1;
              v23 = v33;
              v34 = 0LL;
              if ( PUBLIC_PFTOBJ::pPFFGet(v33, Dst, v22, v9, Src, v28, &v34, 0) )
              {
                v8 = 0;
              }
              else
              {
                v8 = XDCOBJ::bAddRemoteFont(v38, v20);
                if ( v8 )
                {
                  v24 = *(_QWORD *)v23;
                  if ( (*((_DWORD *)v20 + 13) & 0x200) == 0 )
                    ++*(_DWORD *)(v24 + 32);
                  ++*(_DWORD *)(v24 + 28);
                  v25 = v34;
                  if ( *v34 )
                    *((_QWORD *)*v34 + 2) = v20;
                  *((_QWORD *)v20 + 1) = *v25;
                  *((_QWORD *)v20 + 2) = 0LL;
                  *v25 = v20;
                  PFFMEMOBJ::vKeepIt((PFFMEMOBJ *)v35);
                }
              }
            }
            else
            {
              PFFOBJ::vRemoveHash((PFFOBJ *)v35);
            }
            SEMOBJ::vUnlock((SEMOBJ *)&v39);
          }
        }
        PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v35);
      }
    }
  }
LABEL_32:
  if ( a3 )
    Win32FreePool(a3);
  return v8;
}
