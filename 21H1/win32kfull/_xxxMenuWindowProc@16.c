/*
 * XREFs of _xxxMenuWindowProc@16 @ 0x19AC2A
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxDispatchMessage@4 @ 0x45B62 (_xxxDispatchMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     ?xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA0C (-xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     _xxxDefWindowProc@16 @ 0x16650 (_xxxDefWindowProc@16.c)
 *     ?xxxActivateWindow@@YG_NPAUtagWND@@@Z @ 0x1A2B0 (-xxxActivateWindow@@YG_NPAUtagWND@@@Z.c)
 *     _MNIsUAHMenu@4 @ 0x1E9CA (_MNIsUAHMenu@4.c)
 *     _PtInRect@12 @ 0x26C50 (_PtInRect@12.c)
 *     ??9?$SharedPointerBase@UtagWND@@@@QBEEH@Z @ 0x2A4F2 (--9-$SharedPointerBase@UtagWND@@@@QBEEH@Z.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??1?$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ @ 0x3F9D2 (--1-$SmartObjStackRefBase@UtagCLS@@@@IAE@XZ.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _xxxSendMessage@16 @ 0x402B0 (_xxxSendMessage@16.c)
 *     ??1?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x411E4 (--1-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     _GreGetLayout@4 @ 0x566A8 (_GreGetLayout@4.c)
 *     __PostMessage@16 @ 0x6DA60 (__PostMessage@16.c)
 *     _safe_cast_fnid_to_PMENUWND@4 @ 0x720B8 (_safe_cast_fnid_to_PMENUWND@4.c)
 *     _xxxDWP_DoNCActivate@12 @ 0x8F25E (_xxxDWP_DoNCActivate@12.c)
 *     ?NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z @ 0x92358 (-NextTopWindow@FindNextTopWindow@@YGPAUtagWND@@PBU2@0W4FindOption@1@@Z.c)
 *     _GetAppCompatFlags2@4 @ 0xA3AF6 (_GetAppCompatFlags2@4.c)
 *     _xxxPlayEventSound@4 @ 0xA95E6 (_xxxPlayEventSound@4.c)
 *     ?IsWindowActivateable@@YG_NPBUtagWND@@@Z @ 0xAB7F2 (-IsWindowActivateable@@YG_NPBUtagWND@@@Z.c)
 *     _xxxValidateRect@8 @ 0xAD504 (_xxxValidateRect@8.c)
 *     _xxxMenuDraw@12 @ 0xB5D6E (_xxxMenuDraw@12.c)
 *     _xxxSendUAHMenuMessage@16 @ 0xB6938 (_xxxSendUAHMenuMessage@16.c)
 *     _xxxMNCompute@28 @ 0xB6B36 (_xxxMNCompute@28.c)
 *     _GetDPIMetrics@0 @ 0xCCA30 (_GetDPIMetrics@0.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?xxxShowWindow@@YGHPAUtagWND@@K@Z @ 0xF5104 (-xxxShowWindow@@YGHPAUtagWND@@K@Z.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z @ 0x141923 (-xxxSetForegroundWindow@@YG_NPAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z @ 0x14CAE7 (--0MenuStateOwnerLockxxxUnlock@@QAE@PAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QAE@XZ @ 0x14CB0F (--1MenuStateOwnerLockxxxUnlock@@QAE@XZ.c)
 *     ??B?$SmartObjStackRefBase@UtagPOPUPMENU@@@@QBE_NXZ @ 0x14FAC7 (--B-$SmartObjStackRefBase@UtagPOPUPMENU@@@@QBE_NXZ.c)
 *     _CreateFadeForWindow@12 @ 0x1536B9 (_CreateFadeForWindow@12.c)
 *     _zzzShowFade@0 @ 0x153F22 (_zzzShowFade@0.c)
 *     _zzzStartFade@0 @ 0x153F74 (_zzzStartFade@0.c)
 *     __GetWindowDC@4 @ 0x154393 (__GetWindowDC@4.c)
 *     ??9?$RedirectedFieldfnid@G@tagWND@@QBEEABG@Z @ 0x154804 (--9-$RedirectedFieldfnid@G@tagWND@@QBEEABG@Z.c)
 *     __KillTimer@8 @ 0x15630A (__KillTimer@8.c)
 *     __SetTimer@20 @ 0x156316 (__SetTimer@20.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QAE@PAUtagMENU@@@Z @ 0x183D89 (--0-$SmartObjStackRef@UtagMENU@@@@QAE@PAUtagMENU@@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@ABV0@@Z @ 0x183DA4 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@ABV0@@Z.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ @ 0x183DBF (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QAE@XZ.c)
 *     ??4?$SmartObjStackRef@UtagPOPUPMENU@@@@QAEAAV0@QAUtagPOPUPMENU@@@Z @ 0x183DCF (--4-$SmartObjStackRef@UtagPOPUPMENU@@@@QAEAAV0@QAUtagPOPUPMENU@@@Z.c)
 *     _MNAllocPopup@4 @ 0x184482 (_MNAllocPopup@4.c)
 *     _MNCreateAnimationBitmap@12 @ 0x1844E8 (_MNCreateAnimationBitmap@12.c)
 *     _MNIsFlatMenu@0 @ 0x1846E0 (_MNIsFlatMenu@0.c)
 *     _xxxMNEndMenuState@4 @ 0x1847C9 (_xxxMNEndMenuState@4.c)
 *     _xxxUnlockAndEndMenuState@4 @ 0x184FB0 (_xxxUnlockAndEndMenuState@4.c)
 *     _xxxEndMenuLoop@8 @ 0x195235 (_xxxEndMenuLoop@8.c)
 *     ??9?$RedirectedFieldhbrBack@PAUHBRUSH__@@@tagMENU@@QBEEABQAUHBRUSH__@@@Z @ 0x1965D8 (--9-$RedirectedFieldhbrBack@PAUHBRUSH__@@@tagMENU@@QBEEABQAUHBRUSH__@@@Z.c)
 *     ?MNCheckScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@ABV?$SmartObjStackRef@UtagMENU@@@@PAUtagMONITOR@@@Z @ 0x196697 (-MNCheckScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@ABV-$SmartObjStackRef@UtagMENU@@@@PAUt.c)
 *     ?MNGetPopupBoundsRect@@YGXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z @ 0x19685B (-MNGetPopupBoundsRect@@YGXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagMONITOR@@PAUtagRECT@@H@Z.c)
 *     ?MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z @ 0x19699A (-MNSetTimerToAutoDismiss@@YGXPAUtagMENUSTATE@@PAUtagWND@@@Z.c)
 *     ?MNSetTimerToOpenHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1969DC (-MNSetTimerToOpenHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?xxxHandleMenuPainting@@YGXPAUtagWND@@ABV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x196AEB (-xxxHandleMenuPainting@@YGXPAUtagWND@@ABV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 *     ?xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z @ 0x196B8D (-xxxMNDestroyHandler@@YGXPAUtagMENUWND@@@Z.c)
 *     ?xxxMNDoScroll@@YGHABV?$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z @ 0x196E88 (-xxxMNDoScroll@@YGHABV-$SmartObjStackRef@UtagPOPUPMENU@@@@IH@Z.c)
 *     ?xxxMNPositionHierarchy@@YGIABV?$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMONITOR@@@Z @ 0x196F8F (-xxxMNPositionHierarchy@@YGIABV-$SmartObjStackRef@UtagPOPUPMENU@@@@PAUtagITEM@@HHPAH2PAPAUtagMON.c)
 *     _GetpMenuWndpMenuState@4 @ 0x1974C5 (_GetpMenuWndpMenuState@4.c)
 *     _IsMFMWFPWindow@4 @ 0x1974E8 (_IsMFMWFPWindow@4.c)
 *     _IsRecursedMenuState@8 @ 0x1974FD (_IsRecursedMenuState@8.c)
 *     _LockPopupMenu@12 @ 0x197533 (_LockPopupMenu@12.c)
 *     _MNCheckButtonDownState@4 @ 0x1975B5 (_MNCheckButtonDownState@4.c)
 *     _MNGetpItem@8 @ 0x1975F9 (_MNGetpItem@8.c)
 *     _MNIspItemValid@8 @ 0x19760F (_MNIspItemValid@8.c)
 *     _xxxCallHandleMenuMessages@20 @ 0x1978D8 (_xxxCallHandleMenuMessages@20.c)
 *     _xxxMNButtonDown@16 @ 0x1979D7 (_xxxMNButtonDown@16.c)
 *     _xxxMNButtonUp@16 @ 0x197A96 (_xxxMNButtonUp@16.c)
 *     _xxxMNCancel@16 @ 0x197B72 (_xxxMNCancel@16.c)
 *     _xxxMNChar@12 @ 0x197DEE (_xxxMNChar@12.c)
 *     _xxxMNCloseHierarchy@8 @ 0x1981C8 (_xxxMNCloseHierarchy@8.c)
 *     _xxxMNDismiss@4 @ 0x1984A3 (_xxxMNDismiss@4.c)
 *     _xxxMNDoubleClick@12 @ 0x19860D (_xxxMNDoubleClick@12.c)
 *     _xxxMNFindWindowFromPoint@12 @ 0x198869 (_xxxMNFindWindowFromPoint@12.c)
 *     _xxxMNKeyDown@12 @ 0x198B89 (_xxxMNKeyDown@12.c)
 *     _xxxMNMouseMove@12 @ 0x199408 (_xxxMNMouseMove@12.c)
 *     _xxxMNOpenHierarchy@8 @ 0x199664 (_xxxMNOpenHierarchy@8.c)
 *     _xxxMNSelectItem@12 @ 0x19A1F9 (_xxxMNSelectItem@12.c)
 *     _xxxMNSetCapture@8 @ 0x19A754 (_xxxMNSetCapture@8.c)
 *     _xxxClientRevokeDragDrop@4 @ 0x1A75FE (_xxxClientRevokeDragDrop@4.c)
 *     _FindBestPos@40 @ 0x1A7CE6 (_FindBestPos@40.c)
 *     _MNAnimate@8 @ 0x1A9493 (_MNAnimate@8.c)
 *     _MNDrawEdge@16 @ 0x1A9824 (_MNDrawEdge@16.c)
 *     _MNEraseBackground@24 @ 0x1A98B1 (_MNEraseBackground@24.c)
 *     _xxxMNDrawFullNC@12 @ 0x1A99B8 (_xxxMNDrawFullNC@12.c)
 *     _MNFindNextValidItem@16 @ 0x1ACCB8 (_MNFindNextValidItem@16.c)
 *     __MonitorFromWindow@8 @ 0x1B6E48 (__MonitorFromWindow@8.c)
 *     _GreGetWindowOrg@8 @ 0x21D64C (_GreGetWindowOrg@8.c)
 *     _GreSetWindowOrg@16 @ 0x21D7A5 (_GreSetWindowOrg@16.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall xxxMenuWindowProc(char *a1, unsigned int a2, unsigned int a3, int a4)
{
  int v4; // ebx
  int v5; // edx
  int v6; // eax
  unsigned int v7; // ecx
  unsigned int v8; // esi
  unsigned int v9; // esi
  int v10; // eax
  int v11; // edx
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // esi
  int v15; // eax
  unsigned int v16; // esi
  int *v17; // edi
  HDC v18; // edi
  char *v19; // eax
  unsigned int v20; // ecx
  char *v21; // edx
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  BOOL v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  int **v31; // ecx
  int v32; // eax
  int v33; // edx
  int v34; // edx
  char *v35; // ecx
  int v36; // ecx
  unsigned int v37; // edi
  char *TopWindow; // eax
  unsigned int v39; // eax
  _DWORD *v40; // edi
  int *v41; // eax
  void **v42; // esi
  int v43; // edi
  int v44; // edi
  PKTHREAD v45; // eax
  int v46; // eax
  PKTHREAD v47; // eax
  int v48; // eax
  void (*v49)(void); // esi
  unsigned int v51; // eax
  unsigned int v52; // eax
  unsigned int v53; // eax
  int v54; // eax
  int v55; // ecx
  int v56; // eax
  int v57; // edx
  int v58; // ecx
  HDC FadeForWindow; // ecx
  unsigned int v60; // ecx
  int v61; // eax
  char *v62; // ebx
  int v63; // esi
  PKTHREAD v64; // eax
  int v65; // eax
  char v66; // dl
  unsigned int v67; // edi
  _DWORD *v68; // eax
  int v69; // edx
  int v70; // ecx
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  char *v74; // edi
  int v75; // edx
  int WindowDC; // eax
  int v77; // edi
  int v78; // edx
  int v79; // edi
  int v80; // esi
  int DCEx; // esi
  int *v82; // esi
  int v83; // esi
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  unsigned int v87; // eax
  unsigned int v88; // eax
  unsigned int v89; // eax
  int v90; // eax
  int *v91; // eax
  int v92; // esi
  PKTHREAD v93; // eax
  int v94; // eax
  int v95; // edi
  int v96; // eax
  int v97; // edx
  int v98; // edi
  int v99; // eax
  int v100; // ecx
  int BestPos; // eax
  int v102; // ecx
  int v103; // ebx
  int v104; // eax
  int v105; // ecx
  _DWORD *v106; // esi
  unsigned int ValidItem; // edi
  bool v108; // zf
  _DWORD *v109; // ecx
  int v110; // eax
  int v111; // eax
  int v112; // esi
  PKTHREAD v113; // eax
  int v114; // eax
  int v115; // edx
  int v116; // eax
  unsigned int v117; // ecx
  unsigned int v118; // eax
  char *v119; // edi
  HDC v120; // edi
  int v121; // ecx
  int DPIMetrics; // eax
  int v123; // ecx
  int v124; // [esp-Ch] [ebp-D4h]
  HDC v125; // [esp-8h] [ebp-D0h] BYREF
  int v126; // [esp-4h] [ebp-CCh]
  struct tagMENUSTATE *v127; // [esp+0h] [ebp-C8h]
  unsigned int v128; // [esp+4h] [ebp-C4h]
  int *v129[2]; // [esp+Ch] [ebp-BCh] BYREF
  int v130; // [esp+14h] [ebp-B4h]
  char *v131; // [esp+18h] [ebp-B0h]
  int v132; // [esp+1Ch] [ebp-ACh]
  _DWORD *v133; // [esp+20h] [ebp-A8h]
  char *v134; // [esp+24h] [ebp-A4h] BYREF
  unsigned int v135; // [esp+28h] [ebp-A0h]
  HDC v136; // [esp+2Ch] [ebp-9Ch]
  int v137; // [esp+30h] [ebp-98h] BYREF
  int v138; // [esp+34h] [ebp-94h] BYREF
  int v139; // [esp+38h] [ebp-90h]
  int v140; // [esp+3Ch] [ebp-8Ch] BYREF
  int v141; // [esp+40h] [ebp-88h]
  int v142; // [esp+44h] [ebp-84h]
  int v143; // [esp+48h] [ebp-80h] BYREF
  int v144; // [esp+4Ch] [ebp-7Ch] BYREF
  char v145[4]; // [esp+50h] [ebp-78h] BYREF
  int v146; // [esp+54h] [ebp-74h] BYREF
  char *v147; // [esp+58h] [ebp-70h]
  int v148; // [esp+5Ch] [ebp-6Ch]
  int v149; // [esp+60h] [ebp-68h] BYREF
  char *v150; // [esp+64h] [ebp-64h]
  int v151; // [esp+68h] [ebp-60h]
  _DWORD v152[3]; // [esp+6Ch] [ebp-5Ch] BYREF
  _DWORD v153[3]; // [esp+78h] [ebp-50h] BYREF
  int *v154[3]; // [esp+84h] [ebp-44h] BYREF
  _DWORD v155[3]; // [esp+90h] [ebp-38h] BYREF
  int *v156[3]; // [esp+9Ch] [ebp-2Ch] BYREF
  int *v157[3]; // [esp+A8h] [ebp-20h] BYREF
  int v158[4]; // [esp+B4h] [ebp-14h] BYREF
  char *v159; // [esp+D0h] [ebp+8h]

  SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(v129);
  v146 = 0;
  v4 = 0;
  v138 = 0;
  v139 = 0;
  v130 = 0;
  v147 = 0;
  v148 = 0;
  v140 = 0;
  v141 = 0;
  v142 = 0;
  if ( (*(_DWORD *)(*((_DWORD *)a1 + 5) + 144) & 0x800) == 0 )
  {
    v137 = 668;
    if ( !tagWND::RedirectedFieldfnid<unsigned short>::operator!=(a1 + 47, &v137) )
      goto LABEL_25;
    if ( !*(_WORD *)(v5 + 30) )
    {
      if ( a2 != 129 )
      {
        v6 = xxxDefWindowProc((int)a1, a2, a3, a4);
LABEL_27:
        v4 = v6;
        goto LABEL_129;
      }
      v7 = *(_DWORD *)(v5 + 160);
      v8 = *(unsigned __int16 *)(_gpsi + 168);
      if ( v7 + 204 >= v8 )
      {
        v14 = *((_DWORD *)a1 + 41);
        if ( v14 )
        {
          v15 = 0;
          if ( v7 )
          {
            while ( !*(_BYTE *)(v14 + v15) )
            {
              if ( ++v15 >= v7 )
                goto LABEL_23;
            }
            MicrosoftTelemetryAssertTriggeredNoArgsKM();
            v5 = *((_DWORD *)a1 + 5);
          }
LABEL_23:
          memset(*((void **)a1 + 41), 0, *(_DWORD *)(v5 + 160));
        }
        goto LABEL_24;
      }
      if ( v7 + *(_DWORD *)(v5 + 128) + 204 >= v8 )
      {
        v9 = v8 - 204;
        v10 = Win32AllocPoolZInit(v9, 1937208149);
        v137 = v10;
        if ( v10 )
        {
          v11 = *((_DWORD *)a1 + 41);
          if ( v11 )
          {
            v12 = 0;
            v13 = *(_DWORD *)(*((_DWORD *)a1 + 5) + 160);
            if ( v13 )
            {
              while ( !*(_BYTE *)(v11 + v12) )
              {
                if ( ++v12 >= v13 )
                  goto LABEL_15;
              }
              MicrosoftTelemetryAssertTriggeredNoArgsKM();
            }
LABEL_15:
            Win32FreePool(*((_DWORD *)a1 + 41));
            v10 = v137;
          }
          *((_DWORD *)a1 + 41) = v10;
          *(_DWORD *)(*((_DWORD *)a1 + 5) + 160) = v9;
LABEL_24:
          *(_WORD *)(*((_DWORD *)a1 + 5) + 30) = 668;
LABEL_25:
          if ( *((_DWORD *)a1 + 2) != _gptiCurrent )
          {
            v6 = xxxSendMessage(a1, a3, a4);
            goto LABEL_27;
          }
          v16 = (unsigned int)a1;
          v17 = (int *)*((_DWORD *)a1 + 41);
          v135 = (unsigned int)v17;
          v126 = v17[1];
          *v17 = (int)a1;
          SmartObjStackRef<tagPOPUPMENU>::operator=(v129, v126);
          if ( SmartObjStackRefBase<tagPOPUPMENU>::operator bool(v129) )
          {
            v18 = (HDC)GetpMenuWndpMenuState(v17);
            v136 = v18;
          }
          else
          {
            v18 = 0;
            v136 = 0;
          }
          MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
            (MenuStateOwnerLockxxxUnlock *)v145,
            (struct tagMENUSTATE *)v18);
          if ( SmartObjStackRefBase<tagPOPUPMENU>::operator bool(v129) )
          {
            v19 = *(char **)(*v129[0] + 20);
            v131 = v19;
          }
          else
          {
            v19 = 0;
            v131 = 0;
          }
          v20 = a4;
          v21 = (char *)a3;
          v132 = 1;
          v133 = (_DWORD *)a4;
          if ( v18 && v19 )
          {
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v146 = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = &v146;
            v147 = v131;
            HMLockObject(v131);
            v130 = 1;
            v24 = *(_DWORD *)(*v129[0] + 32)
               && IsRecursedMenuState(*(_DWORD **)(*(_DWORD *)(*(_DWORD *)v135 + 8) + 328), *v129[0]);
            v25 = *((_DWORD *)v18 + 1);
            if ( (v25 & 0x100) != 0 && (v25 & 0x200) == 0 )
            {
              if ( v24 )
              {
                if ( a2 >= 0x200 && a2 <= 0x20E || a2 >= 0x100 && a2 <= 0x109 || a2 - 160 <= 0xD )
                  goto LABEL_125;
              }
              else if ( xxxCallHandleMenuMessages((int *)v18, a1, a2, a3, a4) )
              {
                goto LABEL_139;
              }
            }
            v21 = (char *)a3;
          }
          else
          {
            v26 = a2;
            if ( a2 != 480 )
            {
              if ( a2 != 129 )
              {
                if ( a2 != 112 )
                {
LABEL_127:
                  v4 = xxxDefWindowProc(v16, a2, (int)v21, v20);
LABEL_128:
                  MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(
                    (MenuStateOwnerLockxxxUnlock *)v145,
                    v127,
                    v128);
                  goto LABEL_129;
                }
LABEL_51:
                if ( v26 > 0x1E1 )
                {
                  if ( v26 <= 0x2A3 )
                  {
                    if ( v26 != 675 )
                    {
                      switch ( v26 )
                      {
                        case 0x1E2u:
                          if ( *(_DWORD *)(*v129[0] + 4) )
                          {
                            v92 = *(_DWORD *)(*v129[0] + 4);
                            v93 = KeGetCurrentThread();
                            v94 = W32GetThreadWin32Thread(v93);
                            v126 = v92;
                            v140 = *(_DWORD *)(v94 + 228);
                            *(_DWORD *)(v94 + 228) = &v140;
                            v141 = v92;
                            HMLockObject(v126);
                            SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v156, (int)v131);
                            v16 = (unsigned int)a1;
                            xxxMNCompute(v156, *(_DWORD *)(*v129[0] + 4), a1, 0, 0, 0, 0);
                            SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v156);
                            ThreadUnlock1();
                          }
                          v136 = (HDC)_MonitorFromWindow(v16, 1);
                          v126 = (int)v131;
                          v95 = *((_DWORD *)v131 + 9);
                          v134 = (char *)v95;
                          SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v157, (int)v131);
                          v133 = (_DWORD *)MNCheckScroll(v129, v157, (int)v136);
                          SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v157);
                          if ( a3 )
                          {
                            v96 = *(_DWORD *)(v16 + 20);
                            v97 = 0;
                            v137 = (8 * (a3 & 4)) | 0x214;
                            if ( (*(_BYTE *)(v96 + 23) & 0x10) != 0 )
                            {
                              memset(v158, 0, sizeof(v158));
                              v126 = (8 * (a3 & 4)) | 0x214;
                              v125 = (HDC)v126;
                              SmartObjStackRef<tagPOPUPMENU>::SmartObjStackRef<tagPOPUPMENU>(&v125, v129);
                              v98 = (int)v136;
                              MNGetPopupBoundsRect((int)v136, v158, 1, (int)v125, v126);
                              v99 = *(_DWORD *)(v16 + 20);
                              v100 = *(_DWORD *)(v99 + 52);
                              v126 = *(_DWORD *)(v99 + 56);
                              v124 = v98;
                              v95 = (int)v134;
                              BestPos = FindBestPos(v100, v126, v134, v133, v158, 0, v129, v124, v100, v126);
                              v102 = v137;
                              v4 = (__int16)BestPos;
                              v97 = SHIWORD(BestPos);
                            }
                            else
                            {
                              v102 = (8 * (a3 & 4)) | 0x216;
                            }
                            xxxSetWindowPos(v16, 0, v4, v97, v95 + 6, (int)v133 + 6, v102);
                          }
                          if ( v130 )
                            ThreadUnlock1();
                          v103 = (unsigned __int16)v133 << 16;
                          v104 = (unsigned __int16)v95;
                          goto LABEL_273;
                        case 0x1E3u:
                          v82 = (int *)xxxMNOpenHierarchy(v129, (int)v18);
                          if ( v130 )
                            ThreadUnlock1();
                          if ( v82 != (int *)-1 )
                            goto LABEL_281;
                          goto LABEL_128;
                        case 0x1E4u:
                          goto LABEL_238;
                        case 0x1E5u:
                          if ( (unsigned int)v21 >= *(_DWORD *)(*((_DWORD *)v131 + 5) + 24)
                            && (unsigned int)v21 < 0xFFFFFFFC )
                          {
                            goto LABEL_331;
                          }
                          v106 = (_DWORD *)xxxMNSelectItem(v129, (int)v18, v21);
                          if ( !v106 )
                            goto LABEL_331;
                          if ( v130 )
                            ThreadUnlock1();
                          v103 = SharedPointerBase<tagWND>::operator!=(v106 + 2, v105) ? 0x10 : 0;
                          v104 = *(unsigned __int16 *)(*v106 + 4);
LABEL_273:
                          v4 = v104 | v103;
                          goto LABEL_128;
                        case 0x1E6u:
                          xxxMNCancel((int *)v18, (unsigned int)v21, (unsigned __int16)v20, 0);
                          goto LABEL_331;
                        case 0x1E7u:
                          ValidItem = MNFindNextValidItem(1, 1);
                          xxxSendMessage(a1, ValidItem, 0);
                          if ( v130 )
                            ThreadUnlock1();
                          v4 = ValidItem;
                          goto LABEL_128;
                        case 0x1EBu:
                          v82 = (int *)xxxMNFindWindowFromPoint(v129, (int *)v21, v20);
                          if ( v130 )
                            ThreadUnlock1();
                          if ( !IsMFMWFPWindow(v82) )
                            goto LABEL_214;
LABEL_281:
                          if ( v82 )
                            v4 = *v82;
                          goto LABEL_128;
                        case 0x1ECu:
                          xxxPlayEventSound(5u);
                          xxxShowWindow(v127, v128);
                          goto LABEL_331;
                        case 0x1EDu:
                          if ( (unsigned int)v21 < *(_DWORD *)(*((_DWORD *)v131 + 5) + 24)
                            || (unsigned int)v21 >= 0xFFFFFFFC )
                          {
                            xxxMNButtonDown((int *)v129, (int)v18, v21, 1);
                          }
                          goto LABEL_331;
                        case 0x1EEu:
                          xxxMNMouseMove(v129, v18, v20);
                          goto LABEL_331;
                        case 0x1EFu:
                          if ( (unsigned int)v21 < *(_DWORD *)(*((_DWORD *)v131 + 5) + 24)
                            || (unsigned int)v21 >= 0xFFFFFFFC )
                          {
                            xxxMNButtonUp((char ***)v129, (int)v18, (int)v21, v20);
                          }
                          goto LABEL_331;
                        case 0x1F0u:
                          if ( v130 )
                            ThreadUnlock1();
                          v4 = (unsigned __int16)MNSetTimerToOpenHierarchy(v129);
                          goto LABEL_128;
                        case 0x1F1u:
                          xxxMNDoubleClick((int)v18, (int)v129, (struct tagWND *)v21);
                          goto LABEL_331;
                        case 0x1F2u:
                          xxxActivateWindow(*(void **)(*v129[0] + 8));
                          goto LABEL_331;
                        case 0x1F3u:
                          v49 = (void (*)(void))ThreadUnlock1;
                          goto LABEL_303;
                        case 0x1F4u:
                          if ( v130 )
                            ThreadUnlock1();
                          v108 = *((_BYTE *)v18 + 4) >= 0;
                          v130 = 0;
                          if ( v108 )
                            goto LABEL_128;
                          if ( !*(_DWORD *)(*v129[0] + 4) )
                            goto LABEL_128;
                          if ( !IsMFMWFPWindow(*((void **)v18 + 11)) )
                            goto LABEL_128;
                          v110 = safe_cast_fnid_to_PMENUWND(v109);
                          if ( !v110 )
                            goto LABEL_128;
                          v111 = *(_DWORD *)(v110 + 4);
                          if ( !v111 )
                            goto LABEL_128;
                          v108 = ((_DWORD)v18[1] & 0x100) == 0;
                          v132 = *(_DWORD *)(v111 + 20);
                          if ( v108 )
                            *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 236) + 284) &= ~0x100000u;
                          ++*((_DWORD *)v18 + 7);
                          v112 = *(_DWORD *)(*v129[0] + 4);
                          v113 = KeGetCurrentThread();
                          v114 = W32GetThreadWin32Thread(v113);
                          v126 = v112;
                          v140 = *(_DWORD *)(v114 + 228);
                          *(_DWORD *)(v114 + 228) = &v140;
                          v141 = v112;
                          HMLockObject(v126);
                          *((_DWORD *)v18 + 1) |= 0x8000u;
                          v115 = 0;
                          if ( v132 )
                            v115 = *(_DWORD *)v132;
                          v116 = xxxSendMessage(*(void **)(*v129[0] + 4), *((_DWORD *)v18 + 12), v115);
                          v117 = (_DWORD)v18[1] & 0xFFFF7FFF;
                          *((_DWORD *)v18 + 1) = v117;
                          if ( v116 == 1 )
                          {
                            v49 = (void (*)(void))ThreadUnlock1;
                            ThreadUnlock1();
                            if ( !xxxUnlockAndEndMenuState(v18) )
                              goto LABEL_303;
                          }
                          else
                          {
                            *((_DWORD *)v18 + 1) = v117 | 0x2000;
                            MNCheckButtonDownState(v18);
                            if ( ((_DWORD)v18[1] & 0x100) == 0 )
                              xxxMNSetCapture(v129, (int)v18);
                            ThreadUnlock1();
                            xxxUnlockAndEndMenuState(v18);
                          }
                          break;
                        default:
                          goto LABEL_124;
                      }
                      goto LABEL_128;
                    }
                    *((_DWORD *)v18 + 1) ^= ((unsigned __int16)*((_DWORD *)v18 + 1) ^ (unsigned __int16)~(unsigned __int16)(*((_DWORD *)v18 + 1) >> 1)) & 0x4000;
                    **(_DWORD **)v129[0] &= ~0x100000u;
                    MNSetTimerToAutoDismiss((int)v18, (unsigned int)a1);
                    if ( *(_DWORD *)(*v129[0] + 8) == *(_DWORD *)(*(_DWORD *)v18 + 28) )
                      xxxMNSelectItem(v129, (int)v18, (char *)0xFFFFFFFF);
                    goto LABEL_331;
                  }
                  v118 = v26 - 791;
                  if ( !v118 )
                  {
                    v119 = v131;
                    if ( (v20 & 2) == 0 || (v131[80] & 3) == 0 )
                    {
                      v132 = xxxDefWindowProc((int)a1, 791, (int)v21, v20);
                      if ( (!MNIsUAHMenu(v119)
                         || !*(_DWORD *)(*v129[0] + 8)
                         || !xxxSendUAHMenuMessage(*(void **)(*v129[0] + 8), (int)v119, a3))
                        && MNIsFlatMenu() )
                      {
                        MNDrawEdge(v119, a3, *((_DWORD *)a1 + 5) + 52, 0);
                      }
                      if ( v130 )
                        ThreadUnlock1();
                      v4 = v132;
                      goto LABEL_128;
                    }
                    if ( v21 && (*(_BYTE *)(*((_DWORD *)a1 + 5) + 18) & 0x40) != 0 && (GreGetLayout((HDC)v21) & 1) == 0 )
                    {
                      v120 = (HDC)a3;
                      v136 = (HDC)GreSetLayout(
                                    a3,
                                    *(_DWORD *)(*((_DWORD *)a1 + 5) + 60) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 52),
                                    1);
                    }
                    else
                    {
                      v120 = (HDC)a3;
                      v132 = 0;
                      v136 = 0;
                    }
                    xxxMNDrawFullNC(a1, v120, v129);
                    if ( v132 )
                      GreSetLayout(
                        v120,
                        *(_DWORD *)(*((_DWORD *)a1 + 5) + 60) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 52),
                        v136);
                    GreGetWindowOrg(v120, &v138);
                    v126 = v121;
                    v125 = (HDC)v121;
                    DPIMetrics = GetDPIMetrics();
                    GreSetWindowOrg(v120, v139 - *(_DWORD *)(DPIMetrics + 24) - 3, v126);
                    xxxDefWindowProc((int)a1, 791, (int)v120, a4 & 0xFFFFFFFD);
                    GreSetWindowOrg(v120, v139, v123);
                    goto LABEL_331;
                  }
                  if ( v118 == 1 )
                  {
                    xxxMenuDraw((HDC)a3, (int)v131, a1);
                    goto LABEL_331;
                  }
                  goto LABEL_124;
                }
                if ( v26 == 481 )
                {
                  if ( v130 )
                    v91 = (int *)ThreadUnlock1();
                  else
                    v91 = (int *)v131;
                  if ( v91 )
                    v4 = *v91;
                  goto LABEL_128;
                }
                if ( v26 <= 0x81 )
                {
                  if ( v26 == 129 )
                  {
                    v67 = v135;
                    if ( !*(_DWORD *)(v135 + 4) && !*(_DWORD *)(v135 + 8) )
                    {
                      v68 = MNAllocPopup((void *)1);
                      SmartObjStackRef<tagPOPUPMENU>::operator=(v129, (int)v68);
                      if ( SmartObjStackRefBase<tagPOPUPMENU>::operator bool(v129) )
                      {
                        v126 = (int)a1;
                        *(_DWORD *)(v67 + 4) = *v129[0];
                        **(_DWORD **)v129[0] |= 0x40000000u;
                        *(_DWORD *)(*v129[0] + 40) = -1;
                        v125 = (HDC)(*v129[0] + 8);
                        HMAssignmentLock(v70, v69);
LABEL_64:
                        if ( v130 )
                          ThreadUnlock1();
LABEL_219:
                        v4 = 1;
                        goto LABEL_128;
                      }
                    }
LABEL_138:
                    if ( !v130 )
                      goto LABEL_128;
LABEL_139:
                    ThreadUnlock1();
                    goto LABEL_128;
                  }
                  if ( v26 <= 0x18 )
                  {
                    if ( v26 == 24 )
                    {
                      if ( v21 )
                        goto LABEL_124;
                      xxxMNDismiss((int *)v18);
                      goto LABEL_123;
                    }
                    v27 = v26 - 3;
                    if ( !v27 || (v28 = v27 - 2) == 0 )
                    {
                      if ( !*(_DWORD *)(*v129[0] + 12) )
                        goto LABEL_331;
                      v40 = (_DWORD *)MNGetpItem((int)v129, *(_DWORD *)(*v129[0] + 44));
                      v133 = v40;
                      v41 = (int *)safe_cast_fnid_to_PMENUWND(*(_DWORD **)(*v129[0] + 12));
                      v42 = (void **)v41;
                      if ( !v40 )
                        goto LABEL_331;
                      if ( !v41 )
                        goto LABEL_331;
                      v43 = v41[1];
                      if ( !v43 )
                        goto LABEL_331;
                      v134 = (char *)*v41;
                      if ( !v134 )
                        goto LABEL_331;
                      v44 = *(_DWORD *)(v43 + 20);
                      v153[2] = 0;
                      v152[2] = 0;
                      v144 = 0;
                      v143 = 0;
                      v45 = KeGetCurrentThread();
                      v46 = W32GetThreadWin32Thread(v45);
                      v152[0] = *(_DWORD *)(v46 + 228);
                      *(_DWORD *)(v46 + 228) = v152;
                      v152[1] = v134;
                      HMLockObject(v134);
                      v47 = KeGetCurrentThread();
                      v48 = W32GetThreadWin32Thread(v47);
                      v126 = v44;
                      v153[0] = *(_DWORD *)(v48 + 228);
                      *(_DWORD *)(v48 + 228) = v153;
                      v153[1] = v44;
                      HMLockObject(v126);
                      if ( !*(_DWORD *)(v44 + 36) )
                        xxxSendMessage(*v42, 0, 0);
                      if ( *(_DWORD *)(*v129[0] + 20) && MNIspItemValid(*(_DWORD *)(*v129[0] + 20), (int)v133) )
                        xxxMNPositionHierarchy(
                          v129,
                          (int)v133,
                          *(_DWORD *)(v44 + 36) + 6,
                          *(_DWORD *)(v44 + 40) + 6,
                          &v144,
                          &v143,
                          0);
                      xxxSetWindowPos((int)*v42, 0, v144, v143, 0, 0, 1029);
                      v49 = (void (*)(void))ThreadUnlock1;
                      ThreadUnlock1();
LABEL_184:
                      v49();
                      goto LABEL_332;
                    }
                    v29 = v28 - 1;
                    if ( v29 )
                    {
                      v30 = v29 - 9;
                      if ( v30 )
                      {
                        if ( v30 != 5 )
                          goto LABEL_124;
                        v134 = 0;
                        if ( tagMENU::RedirectedFieldhbrBack<HBRUSH__ *>::operator!=(v131 + 71, &v134) )
                        {
                          MNEraseBackground(
                            (HDC)a3,
                            0,
                            0,
                            *(_DWORD *)(*((_DWORD *)a1 + 5) + 76) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 68),
                            *(_DWORD *)(*((_DWORD *)a1 + 5) + 80) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 72));
                          goto LABEL_64;
                        }
                        goto LABEL_123;
                      }
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v154, (int)v131);
                      xxxHandleMenuPainting((struct tagVWPL **)a1, v154);
                      v31 = v154;
LABEL_78:
                      SmartObjStackRefBase<tagCLS>::~SmartObjStackRefBase<tagCLS>(v31);
                      goto LABEL_331;
                    }
                    v134 = (char *)*((_DWORD *)v18 + 1);
                    if ( ((unsigned __int16)v134 & 0x100) != 0 )
                    {
                      if ( !(_WORD)v21
                        && ((unsigned __int16)v134 & 0x200) == 0
                        && ((unsigned int)&loc_80000 & **(_DWORD **)v18) == 0 )
                      {
                        v133 = (_DWORD *)HMValidateHandleNoSecure(v20, 1);
                        v32 = safe_cast_fnid_to_PMENUWND(v133);
                        if ( v20 )
                        {
                          if ( v32 )
                          {
                            v33 = *(_DWORD *)(v32 + 4);
                            if ( v33 )
                            {
                              if ( !IsRecursedMenuState(v18, v33) )
                                goto LABEL_90;
                            }
                          }
                          v34 = *((_DWORD *)v18 + 1);
                          if ( (v34 & 0x10000) != 0 && _gpqForeground == *(_DWORD *)(_gptiCurrent + 236) )
                          {
                            v126 = 0;
                            v125 = 0;
                            *((_DWORD *)v18 + 1) = v34 & 0xFFFEFFFF;
                            _PostMessage((int)a1, 498, (int)v125, v126);
LABEL_90:
                            v20 = (unsigned int)v133;
                            goto LABEL_124;
                          }
LABEL_91:
                          _PostMessage((int)a1, 499, 0, 0);
                          goto LABEL_331;
                        }
                      }
LABEL_124:
                      if ( !v130 )
                      {
LABEL_126:
                        v21 = (char *)a3;
                        goto LABEL_127;
                      }
LABEL_125:
                      ThreadUnlock1();
                      v20 = (unsigned int)v133;
                      goto LABEL_126;
                    }
                    if ( !(_WORD)v21 )
                      goto LABEL_331;
                    v149 = 0;
                    v150 = 0;
                    v151 = 0;
                    if ( *(_WORD *)(_gptiCurrent + 340) >= 0x500u )
                      goto LABEL_91;
                    if ( _gpqForegroundPrev
                      && IsWindowActivateable(*(_DWORD **)(_gpqForegroundPrev + 68))
                      && (v35 = *(char **)(_gpqForegroundPrev + 68),
                          (*(_WORD *)(*((_DWORD *)v35 + 5) + 30) & 0x3FFF) != 0x29C) )
                    {
LABEL_97:
                      v16 = (unsigned int)v35;
                      v159 = v35;
                    }
                    else
                    {
                      v134 = a1;
                      v37 = 0;
                      do
                      {
                        TopWindow = (char *)FindNextTopWindow::NextTopWindow(v16, 0, 0);
                        v16 = (unsigned int)TopWindow;
                        v159 = TopWindow;
                        if ( !TopWindow )
                          break;
                        if ( IsWindowActivateable(*((_DWORD **)TopWindow + 27)) )
                        {
                          v35 = *(char **)(v16 + 108);
                          if ( (*(_WORD *)(*((_DWORD *)v35 + 5) + 30) & 0x3FFF) != 0x29C )
                            goto LABEL_97;
                        }
                        v39 = v37++;
                      }
                      while ( v39 < 0xFF );
                      if ( v37 )
                      {
                        _PostMessage((int)v134, 499, 0, 0);
                        goto LABEL_331;
                      }
                    }
                    if ( v16 )
                    {
                      v126 = (int)v159;
                      v149 = *(_DWORD *)(_gptiCurrent + 228);
                      *(_DWORD *)(_gptiCurrent + 228) = &v149;
                      v150 = v159;
                      HMLockObject(v126);
                      v36 = *(_DWORD *)(_gptiCurrent + 236);
                      if ( *(_DWORD *)(*((_DWORD *)v159 + 2) + 236) == v36 )
                      {
                        xxxActivateWindow(v159);
                      }
                      else if ( _gpqForeground == v36 )
                      {
                        xxxSetForegroundWindow((unsigned int *)v159);
                      }
LABEL_183:
                      v49 = (void (*)(void))ThreadUnlock1;
                      goto LABEL_184;
                    }
LABEL_331:
                    v49 = (void (*)(void))ThreadUnlock1;
LABEL_332:
                    if ( v130 )
                      v49();
                    goto LABEL_128;
                  }
                  v51 = v26 - 28;
                  if ( !v51 )
                  {
                    if ( ((_DWORD)v18[1] & 0x100) == 0 || a1 != *(char **)(*(_DWORD *)v18 + 28) )
                      goto LABEL_331;
                    if ( v21 )
                    {
                      _PostMessage((int)a1, 498, 0, 0);
                      *((_DWORD *)v18 + 1) = (_DWORD)v18[1] & 0xFFFEFFFF | (*(_DWORD *)(_gptiCurrent + 236) != _gpqForeground
                                                                          ? 0x10000
                                                                          : 0);
                    }
                    if ( !*(_DWORD *)(*v129[0] + 4) )
                      goto LABEL_331;
                    v63 = *(_DWORD *)(*v129[0] + 4);
                    v64 = KeGetCurrentThread();
                    v65 = W32GetThreadWin32Thread(v64);
                    v126 = v63;
                    v140 = *(_DWORD *)(v65 + 228);
                    *(_DWORD *)(v65 + 228) = &v140;
                    v141 = v63;
                    HMLockObject(v126);
                    if ( !a3 || ((_DWORD)v18[1] & 0x10000) != 0 )
                      v66 = 2;
                    else
                      v66 = 1;
                    xxxDWP_DoNCActivate(*(struct tagVWPL ***)(*v129[0] + 4), v66, 1);
                    goto LABEL_183;
                  }
                  v52 = v51 - 42;
                  if ( v52 )
                  {
                    v53 = v52 - 1;
                    if ( v53 )
                    {
                      if ( v53 != 41 )
                        goto LABEL_124;
                      if ( v18 && ((_DWORD)v18[1] & 0x400) != 0 )
                        xxxClientRevokeDragDrop(*(_DWORD *)a1);
                      xxxMNDestroyHandler((int *)v135);
                      goto LABEL_138;
                    }
                    if ( (*(_BYTE *)(v20 + 24) & 0x40) == 0 || (**(_DWORD **)v129[0] & 0x8000000) == 0 )
                      goto LABEL_124;
                    if ( ((int)_gfade[9] & 0x10) != 0 )
                    {
                      zzzStartFade();
                    }
                    else
                    {
                      v135 = MEMORY[0xFFDF0004];
                      if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
                      {
                        v55 = MEMORY[0xFFDF0324];
                        v132 = MEMORY[0xFFDF0320];
                        if ( MEMORY[0xFFDF0324] == MEMORY[0xFFDF0328] )
                        {
                          v56 = v132;
                        }
                        else
                        {
                          do
                          {
                            _mm_pause();
                            v56 = MEMORY[0xFFDF0320];
                          }
                          while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] );
                          v18 = v136;
                          v16 = (unsigned int)a1;
                          v55 = MEMORY[0xFFDF0324];
                        }
                        v54 = v135 * (v55 << 8) + ((v135 * (unsigned __int64)(unsigned int)v56) >> 24);
                      }
                      else
                      {
                        v54 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
                      }
                      v126 = 0;
                      v125 = 0;
                      *((_DWORD *)v18 + 18) = v54;
                      _SetTimer(v16, (char *)0xFFFB, 0xAu, (int)v125, v126);
                    }
                    **(_DWORD **)v129[0] &= ~0x8000000u;
LABEL_123:
                    v20 = a4;
                    goto LABEL_124;
                  }
                  if ( (*(_BYTE *)(v20 + 24) & 0x40) == 0 )
                    goto LABEL_124;
                  if ( ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000002) != 0x80000002
                    || (**(_DWORD **)v129[0] & 0x8000000) == 0 )
                  {
LABEL_164:
                    **(_DWORD **)v129[0] &= ~0x8000000u;
                    goto LABEL_124;
                  }
                  if ( CInputGlobals::GetLastInputType(_gpInputGlobals) != 1
                    && CInputGlobals::GetLastInputType(_gpInputGlobals) != 4
                    && !CInputGlobals::WasLastInputJournalling(_gpInputGlobals)
                    && (GetAppCompatFlags2(0x400u) & 1) == 0 )
                  {
                    v57 = *(_DWORD *)(*((_DWORD *)a1 + 5) + 60) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 52);
                    *((_DWORD *)v18 + 21) = v57;
                    v58 = *(_DWORD *)(*((_DWORD *)a1 + 5) + 64) - *(_DWORD *)(*((_DWORD *)a1 + 5) + 56);
                    *((_DWORD *)v18 + 22) = v58;
                    if ( _gbDisableAlpha || ((unsigned int)_gpdwCPUserPreferencesMask & 0x80000200) != 0x80000200 )
                    {
                      if ( !MNCreateAnimationBitmap(v18, v57, v58) )
                        goto LABEL_163;
                      *((_DWORD *)v18 + 17) = _GetDCEx(a1, 1, 65665);
                      v60 = (**(_DWORD **)v129[0] >> 4) & 0xF80000 | (_DWORD)v18[1] & 0xFF07FFFF;
                      v61 = 0;
                      *((_DWORD *)v18 + 1) = v60;
                      if ( (v60 & 0x180000) == 0 )
                        v61 = *((_DWORD *)v18 + 21);
                      *((_DWORD *)v18 + 19) = v61;
                      if ( (v60 & 0x600000) == 0 )
                        v4 = *((_DWORD *)v18 + 22);
                      FadeForWindow = (HDC)*((_DWORD *)v18 + 24);
                      *((_DWORD *)v18 + 20) = v4;
                    }
                    else
                    {
                      FadeForWindow = CreateFadeForWindow(
                                        (unsigned int)a1,
                                        (struct tagWND *)0xAF,
                                        (struct tagRECT *)0x11);
                      if ( !FadeForWindow )
                        goto LABEL_163;
                    }
                    v62 = v131;
                    v126 = 14;
                    v125 = FadeForWindow;
                    *(_DWORD *)(*((_DWORD *)v131 + 5) + 20) |= 8u;
                    xxxSendMessage(a1, (unsigned int)v125, v126);
                    *(_DWORD *)(*((_DWORD *)v62 + 5) + 20) &= ~8u;
                    if ( ((int)_gfade[9] & 0x10) != 0 )
                      zzzShowFade();
                    goto LABEL_123;
                  }
LABEL_163:
                  v20 = a4;
                  goto LABEL_164;
                }
                if ( v26 > 0x102 )
                {
                  v87 = v26 - 260;
                  if ( !v87 )
                    goto LABEL_195;
                  v88 = v87 - 2;
                  if ( v88 )
                  {
                    v89 = v88 - 13;
                    if ( !v89 )
                    {
                      if ( v21 == (char *)65529 )
                      {
                        _KillTimer((unsigned int)a1, 65529);
                        v49 = (void (*)(void))ThreadUnlock1;
                        if ( ((_DWORD)v18[1] & 0x1000) != 0 )
                        {
LABEL_303:
                          xxxEndMenuLoop((int)v18, *(_DWORD *)v18);
                          if ( ((_DWORD)v18[1] & 0x100) != 0 )
                            xxxMNEndMenuState((int *)v18);
                        }
                        goto LABEL_332;
                      }
                      if ( v21 == (char *)65531 )
                      {
                        if ( *((_DWORD *)v18 + 17) )
                          MNAnimate(v18, 1);
                      }
                      else if ( v21 == (char *)65534 )
                      {
                        **(_DWORD **)v129[0] &= ~0x80u;
                        xxxMNOpenHierarchy(v129, (int)v18);
                      }
                      else if ( v21 == (char *)0xFFFF )
                      {
                        **(_DWORD **)v129[0] &= ~0x80u;
LABEL_238:
                        xxxMNCloseHierarchy(*v129[0], (int)v18);
                      }
                      else if ( (unsigned int)(v21 + 4) <= 1 )
                      {
                        if ( ((_BYTE)v18[1] & 8) != 0 )
                          xxxMNDoScroll((int)v129, v21, 0);
                        else
                          _KillTimer((unsigned int)a1, (int)v21);
                      }
                      goto LABEL_331;
                    }
                    if ( v89 == 205 )
                    {
                      if ( !v21 )
                        goto LABEL_331;
                      v90 = ValidateHmenu(v21);
                      if ( !v90 )
                        goto LABEL_331;
                      SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v155, v90);
                      LockPopupMenu(v129, (int *)(*v129[0] + 20), v155);
                      v31 = (int **)v155;
                      goto LABEL_78;
                    }
                    goto LABEL_124;
                  }
                }
                else if ( v26 != 258 )
                {
                  v71 = v26 - 131;
                  if ( !v71 )
                  {
                    xxxDefWindowProc((int)a1, 131, (int)v21, v20);
                    if ( (v131[80] & 3) != 0 )
                    {
                      v86 = *(_DWORD *)(GetDPIMetrics() + 24);
                      *(_DWORD *)(a4 + 4) += v86;
                      *(_DWORD *)(a4 + 12) -= v86;
                    }
                    goto LABEL_331;
                  }
                  v72 = v71 - 1;
                  if ( !v72 )
                  {
                    if ( ((_DWORD)v18[1] & 0x100) != 0 )
                    {
                      v84 = (__int16)v20;
                      v85 = SHIWORD(v20);
                      v138 = v84;
                      v139 = v85;
                      if ( v130 )
                      {
                        ThreadUnlock1();
                        v85 = v139;
                        v84 = v138;
                      }
                      if ( !PtInRect((_DWORD *)(*((_DWORD *)a1 + 5) + 52), v84, v85) )
                        goto LABEL_128;
                      goto LABEL_219;
                    }
                    goto LABEL_124;
                  }
                  v73 = v72 - 1;
                  if ( !v73 )
                  {
                    if ( (**(_DWORD **)v129[0] & 0x8000000) != 0 )
                    {
                      xxxValidateRect((int)a1, 0);
                    }
                    else
                    {
                      v74 = v131;
                      if ( (v131[80] & 3) != 0 )
                      {
                        if ( MNIsUAHMenu(v131) )
                          WindowDC = _GetWindowDC(*(void **)(*v129[0] + 8));
                        else
                          WindowDC = _GetDCEx(a1, v75, sub_50481);
                        v77 = WindowDC;
                        xxxMNDrawFullNC(a1, WindowDC, v129);
                        v126 = v77;
                      }
                      else
                      {
                        if ( !MNIsFlatMenu() )
                        {
                          v82 = (int *)xxxDefWindowProc((int)a1, 133, v78, a4);
                          v132 = (int)v82;
                          if ( MNIsUAHMenu(v74) && *(_DWORD *)(*v129[0] + 8) )
                          {
                            v83 = _GetWindowDC(*(void **)(*v129[0] + 8));
                            xxxSendUAHMenuMessage(*(void **)(*v129[0] + 8), (int)v74, v83);
                            _ReleaseDC(v83);
                            v82 = (int *)v132;
                          }
                          if ( v130 )
                            ThreadUnlock1();
LABEL_214:
                          v4 = (int)v82;
                          goto LABEL_128;
                        }
                        if ( MNIsUAHMenu(v74) )
                        {
                          v79 = _GetWindowDC(*(void **)(*v129[0] + 8));
                          v80 = xxxSendUAHMenuMessage(*(void **)(*v129[0] + 8), (int)v131, v79);
                          _ReleaseDC(v79);
                          if ( v80 )
                            goto LABEL_331;
                          v16 = (unsigned int)a1;
                        }
                        DCEx = _GetDCEx(v16, a3, sub_50481);
                        MNDrawEdge(v131, DCEx, *((_DWORD *)a1 + 5) + 52, 0);
                        v126 = DCEx;
                      }
                      _ReleaseDC(v126);
                    }
                    goto LABEL_331;
                  }
                  if ( v73 != 123 )
                    goto LABEL_124;
LABEL_195:
                  xxxMNKeyDown(v129, (int *)v18, (unsigned int)v21);
                  goto LABEL_331;
                }
                xxxMNChar((int)v129, (int *)v18, (int)v21);
                goto LABEL_331;
              }
              if ( *(char *)(*(_DWORD *)(*(_DWORD *)v135 + 20) + 11) < 0 )
                goto LABEL_128;
LABEL_50:
              v26 = a2;
              goto LABEL_51;
            }
            if ( !SmartObjStackRefBase<tagPOPUPMENU>::operator bool(v129)
              || *(char *)(*(_DWORD *)(*(_DWORD *)v135 + 20) + 11) < 0 )
            {
              goto LABEL_128;
            }
          }
          v20 = a4;
          goto LABEL_50;
        }
      }
    }
  }
LABEL_129:
  SmartObjStackRef<tagPOPUPMENU>::~SmartObjStackRef<tagPOPUPMENU>(v129);
  return v4;
}
