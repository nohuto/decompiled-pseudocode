/*
 * XREFs of ?zzzMNFadeSelection@@YGHABV?$SmartObjStackRef@UtagMENU@@@@PAUtagITEM@@@Z @ 0x197315
 * Callers:
 *     ?xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@IJ@Z @ 0x196DCA (-xxxMNDismissWithNotify@@YGXPAUtagMENUSTATE@@ABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@.c)
 * Callees:
 *     _MNGetPopupFromMenu@8 @ 0x1EC0C (_MNGetPopupFromMenu@8.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ @ 0x41190 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAE@XZ.c)
 *     _NtGdiBitBltInternal@44 @ 0x57A20 (_NtGdiBitBltInternal@44.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x9D1EE (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z @ 0x9DD52 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AAEXPAUtagPOPUPMENU@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z @ 0x152DDB (-CreateFadeInternal@@YGPAUHDC__@@PAUtagWND@@PAUtagRECT@@KKK@Z.c)
 *     _zzzShowFade@0 @ 0x153F22 (_zzzShowFade@0.c)
 */

int __fastcall zzzMNFadeSelection(int a1, int a2)
{
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  int v6; // ebx
  _DWORD *v7; // esi
  HDC DCEx; // esi
  unsigned int v10; // [esp+0h] [ebp-30h]
  unsigned int v11; // [esp+4h] [ebp-2Ch]
  HDC v12; // [esp+Ch] [ebp-24h]
  _DWORD v13[2]; // [esp+10h] [ebp-20h] BYREF
  int v14; // [esp+18h] [ebp-18h]
  struct HDEV__ v15; // [esp+1Ch] [ebp-14h] BYREF
  int v16; // [esp+20h] [ebp-10h]
  int v17; // [esp+24h] [ebp-Ch]
  int v18; // [esp+28h] [ebp-8h]

  v14 = a2;
  v15.unused = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v13, 0);
  if ( _gbDisableAlpha )
    goto LABEL_12;
  if ( ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000400) != 0x80000400 )
    goto LABEL_12;
  v3 = 1;
  if ( CInputGlobals::GetLastInputType(_gpInputGlobals) == 1
    || CInputGlobals::GetLastInputType(_gpInputGlobals) == 4
    || CInputGlobals::WasLastInputJournalling(_gpInputGlobals) )
  {
    goto LABEL_12;
  }
  v4 = *(_DWORD *)(a1 + 8);
  if ( !v4 )
    v4 = **(_DWORD **)a1;
  v5 = MNGetPopupFromMenu(v4, 0);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(v13, v5);
  if ( !*(_DWORD *)v13[0]
    || (v6 = *(_DWORD *)(*(_DWORD *)v13[0] + 8)) == 0
    || (v7 = *(_DWORD **)v14,
        v15.unused = *(_DWORD *)(*(_DWORD *)(v6 + 20) + 68) + *(_DWORD *)(*(_DWORD *)v14 + 36),
        v16 = *(_DWORD *)(*(_DWORD *)(v6 + 20) + 72) + v7[10],
        v17 = v15.unused + v7[11],
        v18 = v16 + v7[12],
        (v12 = CreateFadeInternal(
                 &v15,
                 0,
                 (struct tagWND *)0x15E,
                 (*(_DWORD *)(*(_DWORD *)(v6 + 20) + 184) & 0xF) != 0 ? 0 : 256,
                 *(_DWORD *)(*(_DWORD *)(v6 + 20) + 184),
                 v10,
                 v11)) == 0) )
  {
LABEL_12:
    v3 = 0;
  }
  else
  {
    DCEx = (HDC)_GetDCEx(v6, 0, 1073807360);
    NtGdiBitBltInternal(
      v12,
      0,
      0,
      *(_DWORD *)(*(_DWORD *)v14 + 44),
      *(_DWORD *)(*(_DWORD *)v14 + 48),
      DCEx,
      *(struct ECLIPOBJ **)(*(_DWORD *)v14 + 36),
      *(struct ECLIPOBJ **)(*(_DWORD *)v14 + 40),
      13369376,
      0,
      0);
    _ReleaseDC(DCEx);
    zzzShowFade();
  }
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v13);
  return v3;
}
