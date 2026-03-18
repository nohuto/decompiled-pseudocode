/*
 * XREFs of ?PanEnablePDEV@@YGPAUDHPDEV__@@PAU_devicemodeW@@PAGKPAPAUHSURF__@@KPAKKPAUtagDEVINFO@@PAUHDEV__@@1PAX@Z @ 0x1F5ADF
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?bCreateSemaphores@@YGHPAU_PANDEV@@@Z @ 0x1F6B32 (-bCreateSemaphores@@YGHPAU_PANDEV@@@Z.c)
 *     ?vDeleteSemaphores@@YGXPAU_PANDEV@@@Z @ 0x1F6E09 (-vDeleteSemaphores@@YGXPAU_PANDEV@@@Z.c)
 */

PATHOBJ *__stdcall PanEnablePDEV(
        struct _devicemodeW *a1,
        unsigned __int16 *a2,
        unsigned int a3,
        HSURF *a4,
        unsigned int a5,
        unsigned int *a6,
        unsigned int a7,
        struct tagDEVINFO *a8,
        HDEV a9,
        unsigned __int16 *a10,
        void *a11)
{
  PATHOBJ *v11; // eax
  PATHOBJ *v12; // ebx
  DWORD dmPanningWidth; // eax
  DWORD dmPanningHeight; // eax
  int v15; // eax
  ULONG v16; // eax
  FLONG v17; // eax
  unsigned int v18; // eax
  struct _PANDEV *v20; // [esp+0h] [ebp-118h]
  struct _PANDEV *v21; // [esp+0h] [ebp-118h]
  _DWORD v22[55]; // [esp+38h] [ebp-E0h] BYREF

  memset(v22, 0, sizeof(v22));
  v11 = (PATHOBJ *)PALLOCMEM2(0x34Cu, 1851879495, 1);
  v12 = v11;
  if ( !v11 )
    return 0;
  qmemcpy(&v11[52].cCurves, (const void *)(*((_DWORD *)a9 + 276) + 40), 0x1A0u);
  v11[1].fl = a1->dmPelsWidth;
  v11[1].cCurves = a1->dmPelsHeight;
  if ( !bCreateSemaphores(v20) )
  {
LABEL_13:
    Win32FreePool(v12);
    return 0;
  }
  dmPanningWidth = a1->dmPanningWidth;
  if ( dmPanningWidth )
  {
    v12->fl = dmPanningWidth;
    dmPanningHeight = a1->dmPanningHeight;
  }
  else
  {
    v12->fl = a1->dmPelsWidth;
    dmPanningHeight = a1->dmPelsHeight;
  }
  v12->cCurves = dmPanningHeight;
  qmemcpy(v22, a1, sizeof(v22));
  v22[43] = v12->fl;
  v22[44] = v12->cCurves;
  v15 = ((int (__stdcall *)(_DWORD *, unsigned __int16 *, unsigned int, HSURF *, unsigned int, unsigned int *, unsigned int, struct tagDEVINFO *, HDEV, unsigned __int16 *, void *))v12[52].cCurves)(
          v22,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  if ( !v15 )
  {
    vDeleteSemaphores(v21);
    goto LABEL_13;
  }
  v12[4].cCurves = *((_DWORD *)a8 + 71);
  v12[4].fl = v15;
  v12[5].cCurves = (ULONG)a9;
  v12[5].fl = *(_DWORD *)a8;
  v16 = *((_DWORD *)a9 + 471);
  if ( v16 )
  {
    v12[104].cCurves = v16;
    *((_DWORD *)a9 + 471) = PanCloseProcess;
  }
  v17 = *((_DWORD *)a9 + 470);
  if ( v17 )
  {
    v12[105].fl = v17;
    *((_DWORD *)a9 + 470) = PanAddD3DDirtyRgn;
  }
  a6[4] = v12[1].fl;
  a6[5] = v12[1].cCurves;
  v18 = (unsigned int)&loc_80420 & *(_DWORD *)a8;
  *((_DWORD *)a8 + 74) = 192;
  *(_DWORD *)a8 = v18 | 0x10003;
  return v12;
}
