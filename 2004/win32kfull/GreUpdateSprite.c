/*
 * XREFs of GreUpdateSprite @ 0x1C002032C
 * Callers:
 *     UpdateSprite @ 0x1C00201F0 (UpdateSprite.c)
 *     ?DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z @ 0x1C0052FE4 (-DwmMovePointer@@YAXPEAU_SURFOBJ@@JJPEAU_RECTL@@K@Z.c)
 *     ?bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCTION@@@Z @ 0x1C0053254 (-bSpDwmUpdateCursor@@YAHPEAUHSPRITE__@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_BLENDFUNCT.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C007A780 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z @ 0x1C01E7FA4 (-zzzUpdateFade@@YAXPEAUtagPOINT@@PEAUtagSIZE@@PEAUHDC__@@0PEAU_BLENDFUNCTION@@@Z.c)
 *     ?SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z @ 0x1C026E9CC (-SpDdCreateFullscreenSprite@@YAJPEAUHDC__@@KPEAPEAXPEAPEAU1@@Z.c)
 *     ?bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z @ 0x1C0280B38 (-bSetPreviewRectContent@@YAHPEAU_SPRITESTATE@@PEBU_RECTL@@@Z.c)
 *     bMoveDevDragRect @ 0x1C0286698 (bMoveDevDragRect.c)
 *     bMoveDevPreviewRect @ 0x1C028696C (bMoveDevPreviewRect.c)
 * Callees:
 *     ?GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@34KPEAU_BLENDFUNCTION@@KPEAUtagRECT@@PEAUtagMINIWINDOWINFO@@HH@Z @ 0x1C007C1E0 (-GreUpdateSpriteInternal@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAUHDC__@@PEAUtagPOINT@@PEAUtagSIZE@@3.c)
 */

__int64 __fastcall GreUpdateSprite(
        HDEV a1,
        HWND a2,
        void *a3,
        HDC a4,
        struct tagPOINT *a5,
        struct tagSIZE *a6,
        HDC a7,
        struct tagPOINT *a8,
        unsigned int a9,
        struct _BLENDFUNCTION *a10,
        void *a11,
        struct tagRECT *a12,
        struct tagMINIWINDOWINFO *a13,
        int a14,
        int a15)
{
  NTSTATUS v20; // eax
  unsigned int v21; // ecx
  void *v22; // [rsp+58h] [rbp-99h]
  _QWORD Parameter[11]; // [rsp+88h] [rbp-69h] BYREF
  unsigned int v24; // [rsp+E0h] [rbp-11h]
  int v25; // [rsp+E4h] [rbp-Dh]
  int v26; // [rsp+E8h] [rbp-9h]
  int v27; // [rsp+ECh] [rbp-5h]
  __int64 v28; // [rsp+F0h] [rbp-1h]

  if ( (unsigned int)GreStackExpansionRequired(0x2000LL) )
  {
    Parameter[4] = a5;
    Parameter[5] = a6;
    Parameter[6] = a7;
    Parameter[7] = a8;
    Parameter[8] = a10;
    Parameter[9] = a12;
    Parameter[10] = a13;
    v24 = a9;
    v25 = (int)a11;
    v26 = a14;
    v27 = a15;
    v28 = 0LL;
    Parameter[0] = a1;
    Parameter[1] = a2;
    Parameter[2] = a3;
    Parameter[3] = a4;
    v20 = KeExpandKernelStackAndCalloutEx(GreUpdateSpriteCallout, Parameter, 0x2000uLL, 1u, 0LL);
    v21 = v28;
    if ( v20 < 0 )
      return 0;
    return v21;
  }
  else
  {
    LODWORD(v22) = (_DWORD)a11;
    return GreUpdateSpriteInternal(a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, v22, a12, a13, a14, a15);
  }
}
