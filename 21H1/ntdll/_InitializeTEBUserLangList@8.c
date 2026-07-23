/*
 * XREFs of _InitializeTEBUserLangList@8 @ 0x4B2D3E35
 * Callers:
 *     _RtlGetUserPreferredUILanguages@20 @ 0x4B2AA700 (_RtlGetUserPreferredUILanguages@20.c)
 *     _RtlGetThreadPreferredUILanguages@16 @ 0x4B2D2D80 (_RtlGetThreadPreferredUILanguages@16.c)
 *     _RtlpQueryDefaultUILanguage@8 @ 0x4B2E9760 (_RtlpQueryDefaultUILanguage@8.c)
 * Callees:
 *     _RtlpLoadLanguageConfigList@12 @ 0x4B2ACFED (_RtlpLoadLanguageConfigList@12.c)
 *     _RtlpMuiRegFreeLanguageList@4 @ 0x4B2D32FD (_RtlpMuiRegFreeLanguageList@4.c)
 *     _InitializeUserOrMachineLangList@20 @ 0x4B2E98CF (_InitializeUserOrMachineLangList@20.c)
 *     _RtlpUpdateTEBLanguage@12 @ 0x4B2EA9DE (_RtlpUpdateTEBLanguage@12.c)
 */

int __fastcall InitializeTEBUserLangList(char a1, int a2)
{
  struct _TEB *v2; // ecx
  int updated; // ebx
  int WowTebOffset; // eax
  struct _TEB *v5; // eax
  int v6; // edx
  struct _TEB *v7; // eax
  int v8; // ecx
  void *MuiImpersonation; // ecx
  unsigned int v10; // edi
  void *UserPrefLanguages; // esi
  int v12; // eax
  unsigned __int16 v13; // dx
  int v14; // eax
  int v15; // edi
  int v16; // eax
  _DWORD *v17; // ecx
  int v18; // eax
  bool v19; // zf
  struct _TEB *v21; // ecx
  int v22; // eax
  struct _TEB *v23; // eax
  int v24; // edx
  struct _TEB *v25; // eax
  int v26; // ecx
  char v27; // cl
  int v28; // ecx
  bool v29; // dl
  char v30; // al
  int v31; // esi
  unsigned int i; // edx
  bool v33; // cf
  _DWORD *v34; // ecx
  int v35; // edx
  int v36; // eax
  int v37; // edx
  _DWORD *MergedPrefLanguages; // eax
  char v39; // dh
  char v40; // dl
  struct _TEB *v41; // eax
  int v42; // eax
  void *v43; // [esp+Ch] [ebp-1Ch]
  PVOID v44; // [esp+14h] [ebp-14h] BYREF
  int v45; // [esp+18h] [ebp-10h] BYREF
  unsigned int v46; // [esp+1Ch] [ebp-Ch]
  int v47; // [esp+20h] [ebp-8h]
  char v48; // [esp+24h] [ebp-4h]
  bool v49; // [esp+25h] [ebp-3h]
  char v50; // [esp+26h] [ebp-2h]
  bool v51; // [esp+27h] [ebp-1h]

  v48 = a1;
  v2 = NtCurrentTeb();
  updated = 0;
  v47 = a2;
  WowTebOffset = v2->WowTebOffset;
  v46 = 0;
  v50 = 0;
  v51 = 0;
  v45 = 0;
  v49 = 0;
  v44 = 0;
  if ( WowTebOffset < 0 )
    v2 = (struct _TEB *)((char *)v2 + WowTebOffset);
  v5 = NtCurrentTeb();
  v6 = v5->WowTebOffset;
  if ( v6 < 0 )
    v5 = (struct _TEB *)((char *)v5 + v6);
  v19 = v2 == (struct _TEB *)v5->NtTib.Self;
  v7 = NtCurrentTeb();
  v8 = v7->WowTebOffset;
  if ( v19 )
  {
    if ( v8 < 0 )
      v7 = (struct _TEB *)((char *)v7 + v8);
    MuiImpersonation = (void *)v7->MuiImpersonation;
  }
  else
  {
    if ( v8 < 0 )
      v7 = (struct _TEB *)((char *)v7 + v8);
    MuiImpersonation = v7[1].glDispatchTable[9];
  }
  v10 = MEMORY[0x7FFE03A4];
  if ( !MEMORY[0x7FFE03A4] )
    v10 = 1;
  UserPrefLanguages = NtCurrentTeb()->UserPrefLanguages;
  v43 = UserPrefLanguages;
  if ( v47 )
  {
    v12 = *(_DWORD *)(v47 + 20);
    if ( v12 )
    {
      v13 = *(_WORD *)(v12 + 6);
      if ( v13 )
      {
        v14 = *(_DWORD *)(v12 + 12);
        if ( v14 )
        {
          if ( (unsigned int)MuiImpersonation >= v10 )
            goto LABEL_16;
          if ( v13 > 1u )
          {
            v49 = 1;
          }
          else if ( (*(_BYTE *)v14 & 1) == 0 )
          {
            v31 = 0;
            for ( i = 0; i < 3; ++i )
            {
              if ( ((*(_WORD *)(v14 + 8) >> (2 * i)) & 3) != 0 )
                ++v31;
            }
            v33 = v31 == 0;
            v19 = v31 == 1;
            UserPrefLanguages = v43;
            v49 = !v33 && !v19;
            updated = 0;
          }
          v21 = NtCurrentTeb();
          v22 = v21->WowTebOffset;
          if ( v22 < 0 )
            v21 = (struct _TEB *)((char *)v21 + v22);
          v23 = NtCurrentTeb();
          v24 = v23->WowTebOffset;
          if ( v24 < 0 )
            v23 = (struct _TEB *)((char *)v23 + v24);
          v19 = v21 == (struct _TEB *)v23->NtTib.Self;
          v25 = NtCurrentTeb();
          v26 = v25->WowTebOffset;
          if ( v19 )
          {
            if ( v26 < 0 )
              v25 = (struct _TEB *)((char *)v25 + v26);
            v25->MuiImpersonation = v10;
          }
          else
          {
            if ( v26 < 0 )
              v25 = (struct _TEB *)((char *)v25 + v26);
            v25[1].glDispatchTable[9] = (void *)v10;
          }
          if ( v49 )
          {
            v15 = v47;
          }
          else
          {
LABEL_16:
            v15 = v47;
            if ( !UserPrefLanguages )
              goto LABEL_38;
            if ( !*(_DWORD *)UserPrefLanguages
              || (v16 = *(_DWORD *)(*(_DWORD *)UserPrefLanguages + 12)) == 0
              || *(_DWORD *)(v16 + 12) >= *(_DWORD *)(v47 + 12) )
            {
LABEL_20:
              if ( UserPrefLanguages )
              {
                v17 = *(_DWORD **)UserPrefLanguages;
                if ( *(_DWORD *)UserPrefLanguages )
                {
                  v18 = v17[8];
                  if ( v48 )
                    v19 = (v18 & 0x20) == 0;
                  else
                    v19 = (v18 & 0x10) == 0;
                  if ( !v19 )
                    return updated;
                  if ( (v18 & 2) != 0 )
                  {
                    v39 = 1;
                    v51 = 1;
                  }
                  else
                  {
                    v39 = v51;
                  }
                  if ( (v18 & 4) != 0 )
                  {
                    v40 = 1;
                    v50 = 1;
                  }
                  else
                  {
                    v40 = v50;
                  }
                  if ( v39 || v40 )
                    v46 = v18 & 0xFFFF0000;
                  RtlpMuiRegFreeLanguageList(v17);
                  v41 = NtCurrentTeb();
                  *(_DWORD *)UserPrefLanguages = 0;
                  if ( v41->MergedPrefLanguages )
                  {
                    RtlpMuiRegFreeLanguageList(NtCurrentTeb()->MergedPrefLanguages);
                    NtCurrentTeb()->MergedPrefLanguages = 0;
                  }
                }
              }
              if ( v49 )
              {
                v27 = v48;
                goto LABEL_55;
              }
LABEL_38:
              v27 = v48;
              if ( !v48 && !v51 && v50 == v48 )
              {
                LOBYTE(v47) = 1;
                goto LABEL_42;
              }
LABEL_55:
              LOBYTE(v47) = 0;
LABEL_42:
              updated = InitializeUserOrMachineLangList(&v45, (v27 == 0) + 2, v47);
              if ( updated >= 0 )
              {
                v28 = v45;
                if ( v45 )
                {
                  if ( v48 )
                    *(_DWORD *)(v45 + 32) |= 0x20u;
                  else
                    *(_DWORD *)(v45 + 32) |= 0x10u;
                  v29 = v51;
                  if ( v51 )
                    *(_DWORD *)(v28 + 32) |= 2u;
                  v30 = v50;
                  if ( v50 )
                    *(_DWORD *)(v28 + 32) |= 4u;
                  if ( v29 || v30 )
                    *(_DWORD *)(v28 + 32) |= v46;
                  updated = RtlpUpdateTEBLanguage(4);
                }
                if ( v49 )
                {
                  v42 = RtlpLoadLanguageConfigList(8, &v44, v15);
                  updated = v42;
                  if ( v42 >= 0 )
                    return RtlpUpdateTEBLanguage(5);
                }
              }
              return updated;
            }
          }
          if ( UserPrefLanguages )
          {
            v34 = *(_DWORD **)UserPrefLanguages;
            if ( *(_DWORD *)UserPrefLanguages )
            {
              v35 = v34[8];
              v36 = v35 & 2;
              v51 = v36 != 0;
              v37 = v35 & 4;
              v50 = v37 != 0;
              if ( v36 || v37 )
                v46 = v34[8] & 0xFFFF0000;
              RtlpMuiRegFreeLanguageList(v34);
              *(_DWORD *)UserPrefLanguages = 0;
            }
          }
          if ( NtCurrentTeb()->MergedPrefLanguages )
          {
            MergedPrefLanguages = NtCurrentTeb()->MergedPrefLanguages;
            MergedPrefLanguages[8] |= 0x80u;
          }
          goto LABEL_20;
        }
      }
    }
  }
  return -1073741811;
}
