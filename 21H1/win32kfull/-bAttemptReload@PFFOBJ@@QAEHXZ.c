/*
 * XREFs of ?bAttemptReload@PFFOBJ@@QAEHXZ @ 0x221621
 * Callers:
 *     ?bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z @ 0x64130 (-bInit@RFONTOBJ@@QAEHAAVXDCOBJ@@HK@Z.c)
 * Callees:
 *     _cCapString@12 @ 0x89EC2 (_cCapString@12.c)
 *     ?bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z @ 0xCDA6C (-bUnloadWorkhorse@PFTOBJ@@QAEHPAVPFF@@PAPAV2@K@Z.c)
 *     ??0MALLOCOBJ@@QAE@K@Z @ 0xDD190 (--0MALLOCOBJ@@QAE@K@Z.c)
 *     ?bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z @ 0xDD3E2 (-bLoadFonts@PUBLIC_PFTOBJ@@QAEHPAGKKPAUtagDESIGNVECTOR@@KPAKKPAPAVPFF@@KHPAU_EUDCLOAD@@HH@Z.c)
 *     ?pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z @ 0xDDADA (-pPFFGet@PUBLIC_PFTOBJ@@QAEPAVPFF@@PBGKKPAUtagDESIGNVECTOR@@KPAPAPAV2@H@Z.c)
 */

int __thiscall PFFOBJ::bAttemptReload(struct PFF **this)
{
  struct PFF *v2; // ecx
  int v3; // eax
  int v4; // edi
  struct PFF *v5; // eax
  unsigned __int16 *v6; // esi
  struct PFF *v7; // ecx
  int v8; // ebx
  int v9; // ebx
  unsigned int v11; // [esp+Ch] [ebp-18h] BYREF
  struct PFF *v12; // [esp+10h] [ebp-14h] BYREF
  struct PFF **v13; // [esp+14h] [ebp-10h]
  struct PFF **v14; // [esp+18h] [ebp-Ch] BYREF
  struct _FONTHASH **v15; // [esp+1Ch] [ebp-8h] BYREF
  unsigned int v16; // [esp+20h] [ebp-4h]

  v13 = this;
  v2 = *this;
  v3 = *((_DWORD *)v2 + 8);
  if ( (v3 & 0x1000) == 0 )
    return 0;
  *((_DWORD *)v2 + 8) = v3 & 0xFFFFEFFF;
  v4 = 1;
  v5 = *this;
  if ( *((_DWORD *)*this + 9) != 1 || (*((_BYTE *)v5 + 32) & 8) != 0 )
    return 0;
  v16 = *((_DWORD *)v5 + 4);
  MALLOCOBJ::MALLOCOBJ((MALLOCOBJ *)&v14, 2 * v16);
  v6 = (unsigned __int16 *)v14;
  if ( !v14 )
    return 0;
  cCapString((WCHAR *)v14, *((WCHAR **)*this + 3), v16);
  v7 = *this;
  v14 = 0;
  v8 = *((_DWORD *)v7 + 8);
  v15 = gpPFTPublic;
  v9 = v8 & 0x200;
  if ( PUBLIC_PFTOBJ::pPFFGet(
         (PUBLIC_PFTOBJ *)&v15,
         v6,
         v16,
         *((_DWORD *)v7 + 5),
         *((struct tagDESIGNVECTOR **)v7 + 6),
         *((_DWORD *)v7 + 7),
         &v14,
         0) == *v13
    && PFTOBJ::bUnloadWorkhorse((PFTOBJ *)&v15, *v13, v14, 0)
    && (GreQuerySystemTime(&PFTOBJ::FontChangeTime),
        v12 = 0,
        v11 = 0,
        PUBLIC_PFTOBJ::bLoadFonts(
          (PUBLIC_PFTOBJ *)&v15,
          v6,
          v16,
          1u,
          0,
          0,
          &v11,
          v9 != 0 ? 514 : 2,
          (struct _FONTFILEVIEW ***)&v12,
          0,
          0,
          0,
          1,
          1)) )
  {
    GreQuerySystemTime(&PFTOBJ::FontChangeTime);
  }
  else
  {
    v4 = 0;
  }
  Win32FreePool((PATHOBJ *)v6);
  return v4;
}
