/*
 * XREFs of UmfdLoadFontFileView @ 0xDDE4C
 * Callers:
 *     ?vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNTCHECKSUM@@HPAH@Z @ 0xDDDEA (-vLoadFontFileView@@YGXPAGKPAPAU_FONTFILEVIEW@@KPAPAXPAKPAUtagDESIGNVECTOR@@K3PAPAVPDEV@@PAU_FNT.c)
 * Callees:
 *     ?bIsPathInSystemFontsDir@@YGHPBG@Z @ 0xD2AA2 (-bIsPathInSystemFontsDir@@YGHPBG@Z.c)
 *     ?LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z @ 0xDE012 (-LookUpFNTCacheTable@@YGHKPAGPAK1PAPAVPDEV@@1HPAH3PAPAU_FONTFILEVIEW@@KPAUtagDESIGNVECTOR@@K@Z.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ @ 0xDE13E (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SG_NXZ.c)
 *     _lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator() @ 0xDE294 (_lambda_e38443a3a25c903e7c5b58388f45a0a4_--operator().c)
 *     ?UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z @ 0xDE312 (-UmfdInsertFontFileViewForLookup@@YGHPAPAU_FONTFILEVIEW@@I@Z.c)
 *     ?PutFntCacheDrvAndFileInfo@@YGXKPAVPDEV@@KPAPAU_FONTFILEVIEW@@K@Z @ 0xECCEE (-PutFntCacheDrvAndFileInfo@@YGXKPAVPDEV@@KPAPAU_FONTFILEVIEW@@K@Z.c)
 *     ?FNTCacheValidateFntFileInfo@@YG?AW4FntFileInfoValidationResult@@PAPAU_FONTFILEVIEW@@K@Z @ 0x1E85AE (-FNTCacheValidateFntFileInfo@@YG-AW4FntFileInfoValidationResult@@PAPAU_FONTFILEVIEW@@K@Z.c)
 */

unsigned int __thiscall UmfdLoadFontFileView(
        void *this,
        struct PDEV *a2,
        int *a3,
        char a4,
        char a5,
        struct _FONTFILEVIEW **a6,
        unsigned int a7,
        int *a8,
        _DWORD *a9,
        unsigned int a10,
        struct PDEV **a11,
        unsigned int *a12)
{
  unsigned int result; // eax
  int *v14; // edi
  unsigned int v15; // ebx
  unsigned int v16; // ecx
  int v17; // eax
  int v18; // esi
  int v19; // eax
  __int16 v20; // ax
  char v21; // bl
  bool v22; // al
  int v23; // esi
  int v24; // edi
  unsigned int v25; // edi
  char v26; // bl
  BOOL IsPathInSystemFontsDir; // eax
  int v28; // eax
  int v29; // eax
  __int16 v30; // [esp-4h] [ebp-48h]
  struct tagDESIGNVECTOR *v31; // [esp+0h] [ebp-44h]
  struct _FONTFILEVIEW **v32; // [esp+0h] [ebp-44h]
  struct _FONTFILEVIEW **v33; // [esp+0h] [ebp-44h]
  unsigned int v34; // [esp+4h] [ebp-40h]
  unsigned int v35; // [esp+4h] [ebp-40h]
  unsigned int v36; // [esp+4h] [ebp-40h]
  _DWORD v37[6]; // [esp+10h] [ebp-34h] BYREF
  void *v38; // [esp+28h] [ebp-1Ch]
  int v39; // [esp+2Ch] [ebp-18h] BYREF
  unsigned int v40; // [esp+30h] [ebp-14h] BYREF
  int v41; // [esp+34h] [ebp-10h] BYREF
  unsigned int v42; // [esp+38h] [ebp-Ch] BYREF
  unsigned int v43; // [esp+3Ch] [ebp-8h] BYREF

  v38 = this;
  result = UmfdHostLifeTimeManager::EnsureUmfdHost();
  *a8 = 0;
  *a9 = 0;
  if ( (_BYTE)result )
  {
    v14 = (int *)a10;
    v40 = 0;
    v42 = 0;
    v41 = 0;
    v43 = 0;
    result = LookUpFNTCacheTable(
               a10,
               (unsigned __int16 *)(a10 + 4),
               &v40,
               &v42,
               a11,
               &v43,
               (int)&v41,
               (int *)a2,
               a3,
               a6,
               a7,
               v31,
               v34);
    v15 = result;
    if ( a12 )
    {
      result = v43;
      *a12 = v43;
    }
    if ( !v41 )
    {
      v16 = 0;
      v39 = dword_2785B8;
      if ( a3 )
      {
        do
          *(_DWORD *)(*((_DWORD *)a2 + v16++) + 36) = 0;
        while ( v16 < (unsigned int)a3 );
      }
      UmfdInsertFontFileViewForLookup(v32, v35);
      v37[0] = &v39;
      v37[1] = &a6;
      v37[2] = &a3;
      v37[3] = &a2;
      v37[4] = &a4;
      v37[5] = &a5;
      if ( v15 )
      {
        v21 = 1;
        v22 = v42 != 1 && this;
        v23 = *v14;
        v24 = 0;
        LOBYTE(a7) = v22;
        if ( v43 )
        {
          if ( v22 )
          {
            v24 = FNTCacheValidateFntFileInfo(a2, a3);
            v23 = v24 != 1 ? v23 : 0;
            if ( v24 == 2 )
              goto LABEL_15;
          }
        }
        v18 = lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator()(v37, a7, v23);
        if ( v18 )
        {
          v25 = 0;
          if ( a3 )
          {
            v26 = a7;
            do
            {
              *(_DWORD *)(*((_DWORD *)a2 + v25) + 24) |= 8u;
              if ( !v26 )
              {
                IsPathInSystemFontsDir = bIsPathInSystemFontsDir(*(const wchar_t **)(*((_DWORD *)a2 + v25) + 48));
                *(_DWORD *)(*((_DWORD *)a2 + v25) + 24) ^= (*(_DWORD *)(*((_DWORD *)a2 + v25) + 24) ^ (16 * IsPathInSystemFontsDir)) & 0x10;
              }
              ++v25;
            }
            while ( v25 < (unsigned int)a3 );
          }
        }
        else
        {
          if ( v42 != 1 || !v38 )
            v21 = 0;
          LOBYTE(a7) = v21;
          if ( v43 && v21 )
            v24 = FNTCacheValidateFntFileInfo(a2, a3);
          if ( v24 == 2 )
            goto LABEL_15;
          v18 = lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator()(v37, a7, 0);
        }
        goto LABEL_12;
      }
      v17 = lambda_e38443a3a25c903e7c5b58388f45a0a4_::operator()(v37, this != 0, *v14);
      v18 = v17;
      if ( !v17 )
        goto LABEL_15;
      v19 = *(_DWORD *)(v17 + 4);
      if ( v19 )
      {
        v28 = v19 - 1;
        if ( v28 )
        {
          v29 = v28 - 1;
          if ( v29 )
          {
            if ( v29 != 1 )
            {
              v20 = 0;
              goto LABEL_11;
            }
            v30 = 4;
          }
          else
          {
            v30 = 3;
          }
        }
        else
        {
          v30 = 2;
        }
        v20 = v30;
      }
      else
      {
        v20 = 1;
      }
LABEL_11:
      PutFntCacheDrvAndFileInfo(v20, a2, (unsigned int)a3, v33, v36);
LABEL_12:
      if ( v18 )
      {
        *a9 = dword_2785B8;
        result = (unsigned int)a8;
        *a8 = v18;
        return result;
      }
LABEL_15:
      result = (unsigned int)a9;
      *a9 = 0;
    }
  }
  return result;
}
