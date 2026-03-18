/*
 * XREFs of ?hLoadMemFonts@PUBLIC_PFTOBJ@@QAEPAXPAPAU_FONTFILEVIEW@@PAUtagDESIGNVECTOR@@KPAKPAH@Z @ 0x1D0D40
 * Callers:
 *     _GreAddFontMemResourceEx@20 @ 0x1E9227 (_GreAddFontMemResourceEx@20.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?vRemoveHash@PFFOBJ@@QAEXXZ @ 0xCE2F8 (-vRemoveHash@PFFOBJ@@QAEXXZ.c)
 *     ?bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z @ 0xDC500 (-bLoadFontFileTable@PFFMEMOBJ@@QAEHPBGKPAU_UNIVERSAL_FONT_ID@@PAU_EUDCLOAD@@@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 *     ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA (-vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNT.c)
 *     ??1PFFMEMOBJ@@QAE@XZ @ 0xDE54C (--1PFFMEMOBJ@@QAE@XZ.c)
 *     ?vSetUniqueness@PFFOBJ@@QAEXXZ @ 0xDE55E (-vSetUniqueness@PFFOBJ@@QAEXXZ.c)
 *     ?bAddHash@PFFOBJ@@QAEHH@Z @ 0xDE594 (-bAddHash@PFFOBJ@@QAEHH@Z.c)
 *     ??0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@@PAPAU_FONTFILEVIEW@@PAU_UNIVERSAL_FONT_ID@@H@Z @ 0xDEC04 (--0PFFMEMOBJ@@QAE@IPBGKKPAUtagDESIGNVECTOR@@KKPAUHDEV__@@PAUDHPDEV__@@PAVPFT@@KKPAU_FNTCHECKSUM@.c)
 *     ?ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z @ 0xE89BA (-ScrutinizeFontLoad@@YGJW4_W32KFontSourceType@@PBG@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __thiscall PUBLIC_PFTOBJ::hLoadMemFonts(
        PUBLIC_PFTOBJ *this,
        struct _FONTFILEVIEW **a2,
        void **a3,
        size_t a4,
        unsigned int *a5,
        int *a6)
{
  struct _FONTFILEVIEW **v6; // ebx
  struct _FONTFILEVIEW *v7; // ecx
  int v8; // esi
  unsigned int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // edi
  _DWORD *v12; // edi
  struct PFT *v13; // eax
  HDEV v14; // ecx
  struct PFT *v16; // [esp-1Ch] [ebp-B0h]
  unsigned int v17; // [esp-Ch] [ebp-A0h]
  int v18; // [esp+0h] [ebp-94h]
  int *v19; // [esp+4h] [ebp-90h]
  unsigned int v20[2]; // [esp+10h] [ebp-84h] BYREF
  int *v21; // [esp+18h] [ebp-7Ch]
  struct _FONTFILEVIEW *v22; // [esp+1Ch] [ebp-78h] BYREF
  unsigned int v23; // [esp+20h] [ebp-74h] BYREF
  _DWORD v24[2]; // [esp+24h] [ebp-70h] BYREF
  __int16 v25; // [esp+2Ch] [ebp-68h]
  struct tagDESIGNVECTOR *v26; // [esp+34h] [ebp-60h]
  unsigned int v27; // [esp+38h] [ebp-5Ch] BYREF
  unsigned int v28; // [esp+3Ch] [ebp-58h]
  PUBLIC_PFTOBJ *v29; // [esp+40h] [ebp-54h]
  size_t MaxCount; // [esp+44h] [ebp-50h]
  unsigned int v31; // [esp+48h] [ebp-4Ch] BYREF
  HDEV v32; // [esp+4Ch] [ebp-48h] BYREF
  wchar_t Dst[30]; // [esp+50h] [ebp-44h] BYREF

  v6 = a2;
  v29 = this;
  MaxCount = a4;
  v7 = *a2;
  v28 = (unsigned int)a5;
  v21 = a6;
  v22 = (struct _FONTFILEVIEW *)*((_DWORD *)v7 + 3);
  v8 = 0;
  v9 = *((_DWORD *)v7 + 4);
  v26 = (struct tagDESIGNVECTOR *)a3;
  v20[0] = 0;
  v20[1] = 0;
  v23 = v9;
  v31 = 0;
  v32 = 0;
  if ( ScrutinizeFontLoad(1, 0) >= 0 )
  {
    vLoadFontFileView(
      0,
      0,
      (unsigned __int16 *)a2,
      1u,
      &v22,
      (unsigned int)&v23,
      a3,
      (unsigned int *)MaxCount,
      (struct tagDESIGNVECTOR *)&v31,
      (unsigned int)&v32,
      v20,
      (struct PDEV **)1,
      0,
      v18,
      v19);
    if ( v31 )
    {
      v10 = (*((int (__stdcall **)(unsigned int, int, _DWORD, _DWORD))v32 + 526))(v31, 2, 0, 0);
      v11 = v10;
      v27 = v10;
      if ( v10 )
      {
        if ( v10 != -1 )
        {
          *(_DWORD *)v28 = v10;
          _swprintf_s(
            Dst,
            0x1Eu,
            L"MEMORY-%u",
            _InterlockedIncrement((volatile signed __int32 *)&PUBLIC_PFTOBJ::ulMemoryUnique));
          v16 = *(struct PFT **)v29;
          v28 = wcslen(Dst) + 1;
          PFFMEMOBJ::PFFMEMOBJ(
            (PFFMEMOBJ *)v24,
            v11,
            Dst,
            v28,
            1u,
            v26,
            MaxCount,
            v31,
            v32,
            0,
            v16,
            0x10u,
            0x30u,
            (struct _FNTCHECKSUM *)v20,
            a2,
            0,
            0);
          v12 = (_DWORD *)v24[0];
          if ( v24[0] )
          {
            v17 = v27;
            *v21 = 0;
            v6 = 0;
            if ( PFFMEMOBJ::bLoadFontFileTable((PFFMEMOBJ *)v24, Dst, v17, 0, 0) )
            {
              v27 = _ghsemPublicPFT;
              GreAcquireSemaphore(_ghsemPublicPFT);
              if ( PFFOBJ::bAddHash((PFFOBJ *)v24, 0) )
              {
                v32 = 0;
                if ( !PUBLIC_PFTOBJ::pPFFGet(v29, Dst, v28, 1u, v26, MaxCount, (struct PFF ***)&v32, 0) )
                {
                  v13 = *(struct PFT **)v29;
                  if ( (v12[8] & 0x200) == 0 )
                    ++*((_DWORD *)v13 + 5);
                  v14 = v32;
                  ++*((_DWORD *)v13 + 4);
                  if ( *(_DWORD *)v14 )
                    *(_DWORD *)(*(_DWORD *)v14 + 8) = v12;
                  v12[1] = *(_DWORD *)v14;
                  v12[2] = 0;
                  *(_DWORD *)v14 = v12;
                  PFFOBJ::vSetUniqueness((PFFOBJ *)v24);
                  v25 |= 2u;
                  PopThreadGuardedObject(v12 + 25);
                  v8 = v12[22];
                }
              }
              else
              {
                PFFOBJ::vRemoveHash((PFFOBJ *)v24);
              }
              SEMOBJ::vUnlock((SEMOBJ *)&v27);
            }
          }
          PFFMEMOBJ::~PFFMEMOBJ((PFFMEMOBJ *)v24);
        }
      }
    }
  }
  if ( v6 )
    Win32FreePool(v6);
  return v8;
}
