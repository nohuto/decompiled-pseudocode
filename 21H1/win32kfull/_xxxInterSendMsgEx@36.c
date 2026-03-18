/*
 * XREFs of _xxxInterSendMsgEx@36 @ 0x43A56
 * Callers:
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     _xxxReceiveMessage@4 @ 0x415B8 (_xxxReceiveMessage@4.c)
 *     _xxxSendMessageCallback@36 @ 0x46062 (_xxxSendMessageCallback@36.c)
 *     ?xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z @ 0x6A7C0 (-xxxCallHook2@@YGJPAUtagHOOK@@HIJPAH_N@Z.c)
 *     _ClearSendMessages@4 @ 0x719D2 (_ClearSendMessages@4.c)
 *     __ReplyMessage@4 @ 0xC4C9C (__ReplyMessage@4.c)
 *     _xxxReceiverDied@4 @ 0xCC50E (_xxxReceiverDied@4.c)
 * Callees:
 *     _IsThreadHung@8 @ 0x175E4 (_IsThreadHung@8.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _UnlinkSendListSms@4 @ 0x439C4 (_UnlinkSendListSms@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _IsPointerInputMessage@4 @ 0x4485A (_IsPointerInputMessage@4.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     _W32GetCurrentThreadDpiAwarenessContext@0 @ 0x68610 (_W32GetCurrentThreadDpiAwarenessContext@0.c)
 *     _TransformMessageBetweenCoordinateSpaces@24 @ 0x6C458 (_TransformMessageBetweenCoordinateSpaces@24.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _MergeDeferredMessagesOfThreadOnQueue@4 @ 0xAAAC0 (_MergeDeferredMessagesOfThreadOnQueue@4.c)
 *     _ProcessSuspendedSendMessage@20 @ 0xAB210 (_ProcessSuspendedSendMessage@20.c)
 *     _wcsncpycch@12 @ 0xC9046 (_wcsncpycch@12.c)
 *     _GetAppCompatFlags2ForPti@8 @ 0xEFB45 (_GetAppCompatFlags2ForPti@8.c)
 *     _xxxSleepThread@16 @ 0xEFFA2 (_xxxSleepThread@16.c)
 *     ??0CKernelStackSwapAuto@@QAE@XZ @ 0xF3AFF (--0CKernelStackSwapAuto@@QAE@XZ.c)
 *     ??1CKernelStackSwapAuto@@QAE@XZ @ 0xF3B14 (--1CKernelStackSwapAuto@@QAE@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _MakeUpKeyboardCorrectionCalloutContents@12 @ 0x14E42F (_MakeUpKeyboardCorrectionCalloutContents@12.c)
 *     _DirectedScheduleTask@16 @ 0x1559F9 (_DirectedScheduleTask@16.c)
 *     _strncpycch@12 @ 0x1B7A81 (_strncpycch@12.c)
 */

// write access to const memory has been detected, the output may be wrong!
size_t __fastcall xxxInterSendMsgEx(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3,
        size_t a4,
        int a5,
        int a6,
        int a7,
        size_t MaxCount,
        int a9)
{
  struct tagPROCESSINFO *v9; // esi
  unsigned int CurrentProcessWin32Process; // edi
  int v11; // eax
  struct tagPROCESSINFO *v12; // edx
  _DWORD *v13; // ebx
  int v14; // eax
  unsigned __int16 *v15; // edi
  _DWORD *v16; // eax
  _DWORD *v17; // ebx
  unsigned int v18; // edx
  _DWORD *v19; // ecx
  size_t v20; // esi
  size_t v21; // eax
  int v22; // eax
  int v23; // edx
  _DWORD *v24; // ecx
  int v25; // edi
  int v26; // eax
  _DWORD *v27; // edx
  unsigned int v28; // eax
  int v29; // edi
  struct tagPROCESSINFO *v30; // edi
  int v31; // edx
  int v32; // eax
  _DWORD *v33; // ecx
  int v34; // edx
  size_t v35; // esi
  int v36; // ecx
  _DWORD *v38; // esi
  _DWORD *v39; // edi
  _DWORD *v40; // ebx
  int v41; // eax
  int v42; // edi
  unsigned __int8 v43; // al
  int v44; // edi
  char v45; // al
  bool v46; // zf
  struct tagPROCESSINFO *v47; // edi
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  char *v51; // esi
  void *v52; // edi
  _DWORD *v53; // edx
  size_t v54; // eax
  struct tagWND *v55; // edi
  const void *v56; // esi
  void *v57; // eax
  char *v58; // esi
  char *v59; // esi
  char *v60; // esi
  char *v61; // esi
  bool v62; // zf
  int v63; // eax
  int v64; // ebx
  int v65; // eax
  int CurrentProcess; // eax
  _DWORD *v67; // edi
  int v68; // edx
  size_t v69; // eax
  char *v70; // esi
  char *v71; // esi
  char *v72; // esi
  char *v73; // esi
  bool v74; // zf
  int v75; // edi
  void *v76; // esi
  int v77; // eax
  _DWORD *v78; // edi
  _DWORD *v79; // edi
  PKTHREAD CurrentThread; // eax
  int ThreadWin32Thread; // eax
  _DWORD *v82; // ecx
  unsigned int v83; // edx
  int v84; // eax
  int v85; // edx
  struct tagPROCESSINFO *v86; // esi
  struct tagPROCESSINFO *v87; // esi
  int v88; // eax
  _DWORD *v89; // eax
  int v90; // edx
  _DWORD *v91; // ecx
  int v92; // [esp-4h] [ebp-9Ch]
  struct tagPROCESSINFO *v93; // [esp-4h] [ebp-9Ch]
  int v94; // [esp-4h] [ebp-9Ch]
  int v95; // [esp-4h] [ebp-9Ch]
  unsigned int v96; // [esp+0h] [ebp-98h]
  unsigned int *v97; // [esp+4h] [ebp-94h]
  int v98; // [esp+10h] [ebp-88h] BYREF
  _DWORD *v99; // [esp+14h] [ebp-84h]
  int v100; // [esp+18h] [ebp-80h]
  int v101; // [esp+1Ch] [ebp-7Ch] BYREF
  int v102; // [esp+20h] [ebp-78h]
  void *Src; // [esp+24h] [ebp-74h]
  _BYTE v104[8]; // [esp+28h] [ebp-70h] BYREF
  int v105; // [esp+30h] [ebp-68h] BYREF
  int v106; // [esp+34h] [ebp-64h]
  int v107; // [esp+40h] [ebp-58h]
  _DWORD *v108; // [esp+44h] [ebp-54h]
  int v109; // [esp+48h] [ebp-50h]
  int v110; // [esp+4Ch] [ebp-4Ch]
  _DWORD *v111; // [esp+50h] [ebp-48h]
  unsigned int LowLimit; // [esp+54h] [ebp-44h] BYREF
  int v113; // [esp+58h] [ebp-40h]
  void *v114; // [esp+5Ch] [ebp-3Ch]
  _DWORD *v115; // [esp+60h] [ebp-38h]
  _DWORD *v116; // [esp+64h] [ebp-34h]
  int v117; // [esp+68h] [ebp-30h]
  unsigned int HighLimit; // [esp+6Ch] [ebp-2Ch] BYREF
  size_t v119; // [esp+70h] [ebp-28h]
  struct tagPROCESSINFO *v120; // [esp+74h] [ebp-24h]
  struct tagPROCESSINFO *v121; // [esp+78h] [ebp-20h]
  unsigned int v122; // [esp+7Ch] [ebp-1Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+80h] [ebp-18h]

  v9 = a2;
  v121 = a2;
  v120 = a1;
  v109 = 0;
  v119 = 0;
  v111 = 0;
  v110 = 0;
  v101 = 0;
  v102 = 0;
  Src = 0;
  v114 = 0;
  v116 = 0;
  v113 = 0;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
  v122 = CurrentProcessWin32Process;
  v117 = _gptiCurrent;
  v11 = a5 != 0 ? _gptiCurrent : 0;
  a5 = v11;
  v107 = v11;
  _InterlockedIncrement(&glInterSendMessage);
  if ( v11 && (*(_BYTE *)(v11 + 264) & 1) != 0 )
    return 0;
  HighLimit = 0;
  LowLimit = 0;
  IoGetStackLimits(&LowLimit, &HighLimit);
  if ( (unsigned int)&HighLimit - LowLimit < 0x1000 )
    return 0;
  v12 = v120;
  if ( !v120 )
    goto LABEL_16;
  v13 = *(_DWORD **)(*((_DWORD *)v120 + 2) + 232);
  if ( v13 == (_DWORD *)CurrentProcessWin32Process )
    goto LABEL_16;
  if ( (unsigned int)v9 > 0xD0 )
  {
    if ( v9 == (struct tagPROCESSINFO *)272 )
      goto LABEL_250;
    if ( v9 != (struct tagPROCESSINFO *)353
      && v9 != (struct tagPROCESSINFO *)424
      && v9 != (struct tagPROCESSINFO *)563
      && v9 != (struct tagPROCESSINFO *)648 )
    {
      goto LABEL_14;
    }
  }
  else if ( v9 != (struct tagPROCESSINFO *)208 && v9 != (struct tagPROCESSINFO *)12 )
  {
    if ( v9 == (struct tagPROCESSINFO *)13 )
      goto LABEL_241;
    if ( v9 != (struct tagPROCESSINFO *)78 )
    {
      if ( v9 != (struct tagPROCESSINFO *)188 )
      {
        if ( v9 != (struct tagPROCESSINFO *)196 && v9 != (struct tagPROCESSINFO *)204 )
        {
LABEL_14:
          v14 = 0;
          goto LABEL_15;
        }
LABEL_241:
        if ( *(_WORD *)(_gpsi + 470) == *(_WORD *)(*(_DWORD *)(*((_DWORD *)v120 + 19) + 4) + 2)
          && (*(_BYTE *)(*((_DWORD *)v120 + 5) + 20) & 0x20) != 0 )
        {
          UserSetLastError(5);
          goto LABEL_244;
        }
        goto LABEL_14;
      }
      goto LABEL_245;
    }
LABEL_250:
    v14 = 1;
LABEL_15:
    if ( !v14 )
      goto LABEL_16;
LABEL_244:
    UserSetLastError(5);
    return 0;
  }
LABEL_245:
  if ( !(unsigned __int8)Enforced() || *v13 == _gpepCSRSS )
  {
    if ( v13[106] != *(_DWORD *)(CurrentProcessWin32Process + 424)
      || v13[107] != *(_DWORD *)(CurrentProcessWin32Process + 428) )
    {
      goto LABEL_244;
    }
    goto LABEL_14;
  }
LABEL_16:
  if ( MaxCount )
    goto LABEL_17;
  v40 = 0;
  if ( v120 )
  {
    v41 = *((_DWORD *)v120 + 2);
LABEL_103:
    v40 = *(_DWORD **)(v41 + 232);
    goto LABEL_104;
  }
  v41 = a6;
  if ( a6 )
    goto LABEL_103;
LABEL_104:
  if ( v40 != (_DWORD *)CurrentProcessWin32Process )
  {
    if ( v9 == (struct tagPROCESSINFO *)717 )
      return 0;
    if ( !IsMessageAllowedAcrossILByReceiver(v120, v9, a3, a4, 1u, v96, (int)v97) )
    {
      if ( IsMessageAlwaysAllowedAcrossIL(v96) )
      {
        MSGSQMAddMessage(v122, v40, v9, a3, a4, 1, 2);
      }
      else
      {
        if ( v9 == (struct tagPROCESSINFO *)274
          && (a3 == (struct tagWND *)61472 || a3 == (struct tagWND *)61728 || a3 == (struct tagWND *)61536) )
        {
          v42 = 1;
          MSGSQMAddMessage(v122, v40, 274, a3, a4, 1, 2);
        }
        else
        {
          v42 = 0;
        }
        if ( !v42 )
        {
          if ( *v40 == _gpepCSRSS )
          {
            v105 = 0x2000;
            v106 = 0;
          }
          else
          {
            v105 = v40[124];
            v106 = v40[125];
          }
          v43 = CheckAccess(v122 + 496, &v105);
          v44 = v43;
          if ( v43 )
          {
            v45 = Enforced();
            MSGSQMAddMessage(v122, v40, v9, a3, a4, 1, 4 * (v45 != 0) + 1);
          }
          if ( !v44 )
          {
            if ( v120 )
            {
              if ( v9 == (struct tagPROCESSINFO *)793 )
              {
                v12 = (struct tagPROCESSINFO *)*((_DWORD *)v120 + 2);
                if ( *((struct tagPROCESSINFO **)v12 + 199) == v120 )
                  v44 = *((_DWORD *)v12 + 59) == *(_DWORD *)(_gptiCurrent + 236);
              }
            }
            if ( !v44 )
            {
              EtwTraceUIPIMsgError(v122, v40, v9, a3, a4);
              UserSetLastError(5);
              MSGSQMAddMessage(v122, v40, v9, a3, a4, 1, 0);
              return 0;
            }
          }
        }
      }
    }
  }
LABEL_17:
  if ( v9 == (struct tagPROCESSINFO *)576 )
  {
    LOBYTE(v12) = 20;
    v15 = (unsigned __int16 *)a4;
  }
  else
  {
    v15 = (unsigned __int16 *)a4;
    if ( v9 != (struct tagPROCESSINFO *)281 )
      goto LABEL_19;
    LOBYTE(v12) = 21;
  }
  if ( !HMValidateHandle(v15, v12) )
    return 0;
LABEL_19:
  if ( (*(_BYTE *)(a6 + 688) & 0x20) == 0 )
    goto LABEL_20;
  v63 = a7;
  if ( a7 )
  {
    if ( (*(_BYTE *)(a7 + 16) & 0x40) != 0 )
    {
      v64 = a5;
      goto LABEL_263;
    }
    if ( *(_DWORD *)a7 == 2 && *(_DWORD *)(a7 + 20) )
      return 0;
  }
  v64 = a5;
  if ( a5 )
  {
    v95 = **(_DWORD **)(a6 + 232);
    CurrentProcess = PsGetCurrentProcess();
    if ( !PsGetProcessCommonJob(CurrentProcess, v95) )
      return 0;
    v63 = a7;
LABEL_263:
    if ( v64 )
      goto LABEL_20;
  }
  if ( !v63 && !ProcessSuspendedSendMessage(v9, a3, v15) || !v64 && *(_DWORD *)(a6 + 288) > 0x2710u )
    return 0;
LABEL_20:
  v16 = (_DWORD *)Win32AllocateFromPagedLookasideList(SMSLookaside);
  v17 = v16;
  v108 = v16;
  v115 = v16;
  if ( !v16 )
    return 0;
  v16[16] = 0;
  v119 = 0;
  v18 = 0;
  MaxCount = 0;
  v122 = 0;
  v19 = v15;
  HighLimit = (unsigned int)v15;
  v16[17] = *(_DWORD *)(v117 + 808);
  if ( a7 && *(_DWORD *)a7 == 33 )
    goto LABEL_49;
  ms_exc.registration.TryLevel = 0;
  if ( (unsigned int)v9 > 0x14A )
  {
    if ( (unsigned int)v9 > 0x1A2 )
    {
      if ( (unsigned int)v9 > 0x30C )
      {
        if ( v9 == (struct tagPROCESSINFO *)812 )
        {
          v18 = 304;
          goto LABEL_136;
        }
        if ( v9 == (struct tagPROCESSINFO *)833 )
        {
          v92 = 60;
          goto LABEL_31;
        }
        if ( v9 != (struct tagPROCESSINFO *)834 )
          goto LABEL_34;
        v94 = 48;
        goto LABEL_135;
      }
      if ( v9 == (struct tagPROCESSINFO *)780 )
        goto LABEL_290;
      if ( v9 == (struct tagPROCESSINFO *)536 )
      {
        if ( !v15 || ((unsigned __int16)a3 & 0x8000) == 0 || a5 && v15 >= _MmSystemRangeStart )
          goto LABEL_34;
        if ( ULongAdd((unsigned int)&v122, v96, v97) != -2147024362 )
        {
          v18 = v122;
          goto LABEL_33;
        }
LABEL_284:
        Win32FreeToPagedLookasideList(SMSLookaside, v17);
        ms_exc.registration.TryLevel = -2;
        return 8;
      }
      if ( v9 != (struct tagPROCESSINFO *)537 )
      {
        if ( v9 == (struct tagPROCESSINFO *)544 )
        {
          v18 = (*((_DWORD *)v15 + 10) & 0x7FFFFFFF) + (*((_DWORD *)v15 + 13) & 0x7FFFFFFF);
          v122 = v18;
          v110 = (int)v15;
          goto LABEL_33;
        }
        if ( v9 == (struct tagPROCESSINFO *)643 && a3 == (struct tagWND *)24 )
        {
          v122 = *(_DWORD *)v15 << 9;
          v18 = v122 + 4;
          goto LABEL_136;
        }
        goto LABEL_34;
      }
      if ( !v15 || ((unsigned __int16)a3 & 0x8000) == 0 || v15 >= _MmSystemRangeStart && a5 )
        goto LABEL_34;
LABEL_270:
      v18 = *(_DWORD *)v15;
      goto LABEL_136;
    }
    if ( v9 != (struct tagPROCESSINFO *)418 )
    {
      if ( (unsigned int)v9 > 0x18C )
      {
        if ( v9 == (struct tagPROCESSINFO *)397 )
          goto LABEL_200;
        if ( v9 != (struct tagPROCESSINFO *)399 )
        {
          if ( (unsigned int)v9 <= 0x190 )
            goto LABEL_34;
          if ( (unsigned int)v9 > 0x192 )
          {
            if ( v9 != (struct tagPROCESSINFO *)406 )
              goto LABEL_34;
            goto LABEL_200;
          }
          goto LABEL_283;
        }
      }
      else if ( v9 != (struct tagPROCESSINFO *)396 )
      {
        if ( (unsigned int)v9 < 0x14C )
          goto LABEL_34;
        if ( (unsigned int)v9 > 0x14D && v9 != (struct tagPROCESSINFO *)344 )
        {
          if ( (unsigned int)v9 <= 0x17F )
            goto LABEL_34;
          if ( (unsigned int)v9 > 0x181 )
          {
            v46 = v9 == (struct tagPROCESSINFO *)393;
            goto LABEL_127;
          }
        }
      }
    }
LABEL_276:
    v62 = *(_DWORD *)(v117 + 808) == 1;
LABEL_199:
    if ( v62 )
      goto LABEL_34;
LABEL_200:
    v101 = *(_DWORD *)v15;
    v102 = *((_DWORD *)v15 + 1);
    Src = (void *)*((_DWORD *)v15 + 2);
    v19 = Src;
    if ( Src >= _MmSystemRangeStart && a5 )
    {
      v9 = v121;
      v15 = (unsigned __int16 *)a4;
      goto LABEL_34;
    }
    if ( ULongAdd((unsigned int)&v122, v96, v97) != -2147024362 )
    {
      v18 = v122;
      v9 = v121;
      v15 = (unsigned __int16 *)a4;
      goto LABEL_33;
    }
    goto LABEL_284;
  }
  if ( v9 == (struct tagPROCESSINFO *)330 )
    goto LABEL_276;
  if ( (unsigned int)v9 > 0x53 )
  {
    if ( (unsigned int)v9 <= 0xCB )
    {
      if ( v9 != (struct tagPROCESSINFO *)203 )
      {
        if ( v9 == (struct tagPROCESSINFO *)129 )
          goto LABEL_265;
        if ( v9 == (struct tagPROCESSINFO *)131 )
        {
          v18 = a3 != 0 ? 80 : 16;
          goto LABEL_32;
        }
        if ( v9 == (struct tagPROCESSINFO *)194 )
          goto LABEL_198;
        v46 = (struct tagPROCESSINFO *)((char *)v9 - 194) == (struct tagPROCESSINFO *)2;
LABEL_127:
        if ( !v46 )
          goto LABEL_34;
        goto LABEL_290;
      }
LABEL_283:
      v18 = 4 * (_DWORD)a3;
      goto LABEL_136;
    }
    if ( v9 != (struct tagPROCESSINFO *)323 )
    {
      if ( v9 == (struct tagPROCESSINFO *)325 )
        goto LABEL_200;
      v46 = v9 == (struct tagPROCESSINFO *)328;
      goto LABEL_127;
    }
    goto LABEL_276;
  }
  if ( v9 == (struct tagPROCESSINFO *)83 )
    goto LABEL_270;
  if ( (unsigned int)v9 <= 0x1B )
  {
    if ( v9 == (struct tagPROCESSINFO *)27 )
      goto LABEL_200;
    if ( v9 != (struct tagPROCESSINFO *)1 )
    {
      if ( v9 == (struct tagPROCESSINFO *)12 )
      {
LABEL_198:
        v62 = v15 == 0;
        goto LABEL_199;
      }
      if ( v9 != (struct tagPROCESSINFO *)13 )
      {
        if ( v9 != (struct tagPROCESSINFO *)26 )
          goto LABEL_34;
        goto LABEL_198;
      }
LABEL_290:
      v101 = *(_DWORD *)v15;
      v102 = *((_DWORD *)v15 + 1);
      Src = (void *)*((_DWORD *)v15 + 2);
      v113 = 2 - (v102 < 0);
      v15 = (unsigned __int16 *)&v101;
      a4 = (size_t)&v101;
      v19 = Src;
      if ( Src >= _MmSystemRangeStart && a5 )
      {
        v9 = v121;
        goto LABEL_34;
      }
      v18 = v102 & 0x7FFFFFFF;
      v9 = v121;
      goto LABEL_136;
    }
LABEL_265:
    UserSetLastError(5);
LABEL_266:
    Win32FreeToPagedLookasideList(SMSLookaside, v17);
    ms_exc.registration.TryLevel = -2;
    return 0;
  }
  if ( v9 == (struct tagPROCESSINFO *)56 )
  {
    v18 = *v15;
    goto LABEL_136;
  }
  if ( (unsigned int)v9 > 0x45 )
  {
    if ( (unsigned int)v9 <= 0x47 )
    {
      v92 = 28;
LABEL_31:
      v18 = v92;
LABEL_32:
      v122 = v18;
      v119 = v18;
LABEL_33:
      MaxCount = v18;
      goto LABEL_34;
    }
    if ( v9 == (struct tagPROCESSINFO *)73 )
    {
      v18 = (unsigned int)a3;
      goto LABEL_136;
    }
    if ( v9 != (struct tagPROCESSINFO *)74 )
      goto LABEL_34;
    v111 = v15;
    if ( *((_DWORD *)v15 + 2) )
    {
      v18 = *((_DWORD *)v15 + 1) + 12;
      MaxCount = v18;
      v122 = v18;
      if ( v18 >= 0xC )
        goto LABEL_34;
      goto LABEL_266;
    }
    v94 = 12;
LABEL_135:
    v18 = v94;
LABEL_136:
    v122 = v18;
    goto LABEL_33;
  }
LABEL_34:
  if ( !v18 )
    goto LABEL_98;
  v18 = Win32AllocPoolWithQuota(v18, 1668510549);
  v17[16] = v18;
  if ( !v18 )
    goto LABEL_98;
  v114 = v15;
  v116 = v15;
  if ( (unsigned int)v9 > 0x14D )
  {
    if ( (unsigned int)v9 > 0x191 )
    {
      v57 = (void *)v18;
      v58 = (char *)v9 - 406;
      if ( !v58 )
        goto LABEL_237;
      v59 = v58 - 12;
      if ( !v59 )
        goto LABEL_237;
      v60 = v59 - 126;
      if ( v60 )
      {
        v61 = v60 - 236;
        if ( !v61 )
          goto LABEL_305;
        if ( v61 != (char *)32 )
          goto LABEL_42;
        MakeUpKeyboardCorrectionCalloutContents((void *)v18);
        a3 = 0;
        a4 = v17[16];
      }
      else
      {
        v75 = v110;
        v19 = *(_DWORD **)(v110 + 56);
        if ( v19 )
        {
          memcpy((void *)v18, v19, *(_DWORD *)(v110 + 52) & 0x7FFFFFFF);
          *(_DWORD *)v75 = v17[16];
        }
        if ( *(_DWORD *)(v75 + 36) )
        {
          v76 = (void *)(v17[16] + (*(_DWORD *)(v75 + 52) & 0x7FFFFFFF));
          memcpy(v76, *(const void **)(v75 + 44), *(_DWORD *)(v75 + 40) & 0x7FFFFFFF);
          *(_DWORD *)(v75 + 4) = v76;
        }
      }
LABEL_98:
      v20 = MaxCount;
      goto LABEL_45;
    }
    if ( v9 == (struct tagPROCESSINFO *)401 )
    {
      v20 = MaxCount;
      v119 = MaxCount;
      goto LABEL_43;
    }
    if ( v9 == (struct tagPROCESSINFO *)344 )
      goto LABEL_237;
    if ( (unsigned int)v9 <= 0x17F )
      goto LABEL_42;
    if ( (unsigned int)v9 <= 0x181 )
      goto LABEL_237;
    v57 = (void *)v18;
    if ( v9 == (struct tagPROCESSINFO *)393 )
      goto LABEL_305;
    if ( (unsigned int)v9 <= 0x18B )
      goto LABEL_42;
    if ( (unsigned int)v9 <= 0x18D )
    {
LABEL_237:
      v67 = (_DWORD *)v18;
      a4 = v18;
      v68 = v102 ^ (v102 ^ *(_DWORD *)(v18 + 4)) & 0x7FFFFFFF;
      *(_DWORD *)(a4 + 4) = v68;
      *v67 = v101;
      v67[2] = v67 + 3;
      v20 = MaxCount;
      v69 = v68 ^ (v68 ^ (MaxCount - 12)) & 0x7FFFFFFF;
      v67[1] = v69;
      memcpy(v67 + 3, Src, v69 & 0x7FFFFFFF);
      goto LABEL_45;
    }
    v74 = v9 == (struct tagPROCESSINFO *)399;
LABEL_314:
    if ( !v74 )
      goto LABEL_42;
    goto LABEL_237;
  }
  if ( (unsigned int)v9 >= 0x14C )
    goto LABEL_237;
  if ( (unsigned int)v9 > 0xC2 )
  {
    v57 = (void *)v18;
    v70 = (char *)v9 - 196;
    if ( !v70 )
    {
      *(_WORD *)v18 = *(_WORD *)Src;
      v57 = (void *)v17[16];
      goto LABEL_305;
    }
    v71 = v70 - 127;
    if ( !v71 )
      goto LABEL_237;
    v72 = v71 - 2;
    if ( !v72 )
      goto LABEL_237;
    v73 = v72 - 3;
    if ( !v73 )
    {
LABEL_305:
      v20 = MaxCount;
      v119 = MaxCount;
      v19 = Src;
      v114 = Src;
      v116 = Src;
      Src = v57;
      goto LABEL_45;
    }
    v74 = v73 == (char *)2;
    goto LABEL_314;
  }
  if ( v9 == (struct tagPROCESSINFO *)194 )
    goto LABEL_237;
  if ( (unsigned int)v9 > 0x47 )
  {
    v51 = (char *)v9 - 74;
    if ( v51 )
    {
      if ( v51 == (char *)57 && a3 )
      {
        qmemcpy((void *)v18, (const void *)HighLimit, 0x34u);
        v52 = (void *)(v17[16] + 52);
        *(_DWORD *)(v18 + 48) = v52;
        qmemcpy(v52, *(const void **)(HighLimit + 48), 0x1Cu);
        v19 = 0;
        v20 = MaxCount;
        goto LABEL_44;
      }
      goto LABEL_42;
    }
    v19 = (_DWORD *)v18;
    a4 = v18;
    v18 = (unsigned int)v111;
    v38 = v111;
    v39 = (_DWORD *)a4;
    *(_DWORD *)a4 = *v111;
    *++v39 = *++v38;
    v39[1] = v38[1];
    if ( *(_DWORD *)(v18 + 8) )
    {
      v19[2] = v19 + 3;
      memcpy(v19 + 3, *(const void **)(v18 + 8), *(_DWORD *)(v18 + 4));
    }
    goto LABEL_98;
  }
  if ( (unsigned int)v9 < 0x46 )
  {
    if ( v9 == (struct tagPROCESSINFO *)12 )
      goto LABEL_237;
    v57 = (void *)v18;
    if ( v9 != (struct tagPROCESSINFO *)13 )
    {
      if ( (unsigned int)v9 <= 0x19 || (unsigned int)v9 > 0x1B )
        goto LABEL_42;
      goto LABEL_237;
    }
    goto LABEL_305;
  }
LABEL_42:
  v20 = MaxCount;
LABEL_43:
  memcpy((void *)v18, (const void *)HighLimit, v20);
LABEL_44:
  a4 = v17[16];
LABEL_45:
  ms_exc.registration.TryLevel = -2;
  if ( v20 && !v17[16] )
  {
    Win32FreeToPagedLookasideList(SMSLookaside, v17);
    return 0;
  }
  if ( a9 && (v47 = v120) != 0 )
  {
    v48 = IsWindowDesktopComposed(v120);
    v9 = v121;
    if ( v48 && !IsPointerInputMessage(v121) )
      TransformMessageBetweenCoordinateSpaces(&a3, &a4, v47, 0);
  }
  else
  {
    v9 = v121;
  }
LABEL_49:
  v17[15] = 0;
  v17[2] = 0;
  v93 = v120;
  HMAssignmentLock(v19, v18);
  v17[14] = v9;
  v17[12] = a3;
  v21 = a4;
  v17[13] = a4;
  v17[11] = 0;
  v17[9] = 0;
  if ( v9 == (struct tagPROCESSINFO *)576 || v9 == (struct tagPROCESSINFO *)281 )
  {
    v77 = _HMObjectFromHandle(v21);
    if ( v77 )
      HMChangeOwnerThread(v77, a6);
  }
  if ( *(_DWORD *)(_gsmsList + 4) != _gsmsList )
    goto LABEL_240;
  *v17 = _gsmsList;
  v17[1] = _gsmsList;
  *(_DWORD *)(_gsmsList + 4) = v17;
  _gsmsList = v17;
  v110 = MEMORY[0xFFDF0004];
  if ( (unsigned int)MEMORY[0xFFDF0004] < 0x1000000 )
  {
    while ( MEMORY[0xFFDF0324] != MEMORY[0xFFDF0328] )
      _mm_pause();
    v22 = v110 * (MEMORY[0xFFDF0324] << 8)
        + (((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24);
  }
  else
  {
    v22 = ((unsigned int)MEMORY[0xFFDF0004] * (unsigned __int64)MEMORY[0xFFDF0320]) >> 24;
  }
  v17[10] = v22;
  v17[5] = a6;
  v17[4] = a5;
  v17[18] = W32GetCurrentThreadDpiAwarenessContext();
  v17[8] = 0;
  v23 = a7;
  if ( a7 && (*(_DWORD *)a7 & 1) != 0 )
  {
    v49 = v17[11] | ((*(_DWORD *)a7 & 0x100) != 0 ? 1024 : 2048);
    v17[11] = v49;
    v17[6] = *(_DWORD *)(v23 + 4);
    v17[7] = *(_DWORD *)(v23 + 8);
    if ( (*(_BYTE *)v23 & 0x20) != 0 )
    {
      v17[11] = v49 | 0x200;
      v17[9] = *(_DWORD *)(v23 + 12);
    }
    else
    {
      v115[11] = v49 | 0x100;
      v17[8] = v117;
    }
  }
  if ( a9 )
    v17[11] |= 0x10000u;
  v24 = v17 + 2;
  v25 = a6;
  v26 = a6 + 280;
  v27 = *(_DWORD **)(a6 + 284);
  if ( *v27 != a6 + 280 )
    goto LABEL_240;
  *v24 = v26;
  v17[3] = v27;
  *v27 = v24;
  *(_DWORD *)(v26 + 4) = v24;
  v28 = *(_DWORD *)(v25 + 288) + 1;
  *(_DWORD *)(v25 + 288) = v28;
  if ( v28 > gcSmsHighWaterMark )
    gcSmsHighWaterMark = v28;
  v29 = a5;
  if ( a5 )
  {
    v109 = *(_DWORD *)(a5 + 272);
    *(_DWORD *)(a5 + 272) = v17;
  }
  else
  {
    v17[11] |= 8u;
  }
  if ( (v17[11] & 0x200) == 0
    && (IsPointerInputMessage(v9) && v9 != (struct tagPROCESSINFO *)595
     || v9 == (struct tagPROCESSINFO *)528 && (_WORD)a3 == 582) )
  {
    CTouchProcessor::ReferenceMsgDataExternal(_gpTouchProcessor, a4, 6, v17, v17 + 15, v93);
  }
  EtwTraceBeginSendMessage(v17, v29, a7);
  if ( !v29 )
  {
    SetWakeBit(a6, 64);
    EtwTraceEndSendMessage(v17);
    return 1;
  }
  v30 = 0;
  v121 = 0;
  v117 = 0;
  v110 = 512;
  LowLimit = 0;
  SetWakeBit(a6, 64);
  if ( (*(_BYTE *)(a5 + 264) & 2) != 0 || (*(_BYTE *)(a6 + 264) & 2) != 0 )
    DirectedScheduleTask(1, v17);
  if ( a7 )
  {
    v117 = *(_DWORD *)(a7 + 20);
    v110 = ((*(_DWORD *)(a7 + 16) & 1) << 15) + 512;
  }
  CKernelStackSwapAuto::CKernelStackSwapAuto((CKernelStackSwapAuto *)v104);
  v31 = a5;
  if ( *(_DWORD *)(a5 + 236) == *(_DWORD *)(a6 + 236) )
  {
    v32 = *(_DWORD *)(a5 + 264);
    if ( (v32 & 0x10000) == 0 )
    {
      *(_DWORD *)(a5 + 264) = v32 | 0x10000;
      LowLimit = 1;
    }
  }
  while ( (v17[11] & 1) == 0 && !v30 )
  {
    v111 = 0;
    v98 = 0;
    v99 = 0;
    v100 = 0;
    HIBYTE(MaxCount) = 0;
    *(_WORD *)(*(_DWORD *)(v31 + 244) + 4) &= ~0x200u;
    if ( v9 == (struct tagPROCESSINFO *)788 )
    {
      v78 = (_DWORD *)a4;
      if ( a4 )
      {
        if ( GetAppCompatFlags2ForPti() )
        {
          v79 = (_DWORD *)*v78;
          v111 = v79;
          if ( (unsigned int)(v79[6] - 13) <= 1 )
          {
            CurrentThread = KeGetCurrentThread();
            ThreadWin32Thread = W32GetThreadWin32Thread(CurrentThread);
            v98 = *(_DWORD *)(ThreadWin32Thread + 228);
            *(_DWORD *)(ThreadWin32Thread + 228) = &v98;
            v99 = v79;
            HMLockObject(v79);
            HIBYTE(MaxCount) = 1;
          }
        }
      }
    }
    v30 = (struct tagPROCESSINFO *)(xxxSleepThread(0, 0) == 0);
    v121 = v30;
    if ( HIBYTE(MaxCount) )
    {
      v82 = v111;
      v83 = ((_DWORD)v30 << 7) | v111[12] & 0xFFFFFF7F;
      v111[12] = v83;
      if ( v30 )
      {
        v84 = v83 ^ ((unsigned __int8)v83 ^ (unsigned __int8)(v83 + 1)) & 0x7F;
        v82[12] = v84;
        if ( (v84 & 0x7Fu) > 0xA )
          v82[8] |= 0x10u;
      }
      ThreadUnlock1();
    }
    if ( v30 && a7 )
    {
      MaxCount = *(_DWORD *)(a7 + 16);
      v85 = v17[11];
      if ( ((v85 & 0x20) != 0 || (MaxCount & 0x10) != 0) && (v85 & 0x10) != 0 )
      {
        v117 = 0;
        v30 = 0;
        v121 = 0;
      }
      if ( (MaxCount & 8) != 0 )
      {
        v30 = IsThreadHung((_DWORD *)a6, 0) != 0 ? v30 : 0;
        v121 = v30;
      }
      if ( !v30 )
        EtwTraceConvertTimeOutToBlocking();
    }
    v31 = a5;
  }
  CKernelStackSwapAuto::~CKernelStackSwapAuto((CKernelStackSwapAuto *)v104);
  if ( LowLimit )
  {
    v65 = a5;
    *(_DWORD *)(a5 + 264) &= ~0x10000u;
    MergeDeferredMessagesOfThreadOnQueue(v65);
  }
  SetWakeBit(a5, 512);
  if ( !v30 )
  {
    if ( v119 )
    {
      v33 = v116;
      a4 = (size_t)v116;
      MaxCount = (size_t)v116;
      if ( v9 == (struct tagPROCESSINFO *)131 )
      {
        if ( a9 )
        {
          v86 = v120;
          if ( v120 )
          {
            if ( IsWindowDesktopComposed(v120) )
            {
              TransformMessageBetweenCoordinateSpaces(&a3, &MaxCount, 0, v86);
              v33 = (_DWORD *)MaxCount;
              a4 = MaxCount;
            }
            else
            {
              v33 = v116;
            }
          }
        }
        v53 = (_DWORD *)v115[16];
        if ( a3 )
        {
          a3 = (struct tagWND *)v33[12];
          v54 = a4;
          qmemcpy((void *)a4, v53, 0x34u);
          v55 = a3;
          *(_DWORD *)(v54 + 48) = a3;
          v56 = (const void *)v53[12];
          if ( v56 )
            qmemcpy(v55, v56, 0x1Cu);
        }
        else
        {
          *v33 = *v53;
          v33[1] = v53[1];
          v33[2] = v53[2];
          v33[3] = v53[3];
        }
        v30 = v121;
      }
      else
      {
        ms_exc.registration.TryLevel = 1;
        if ( v113 )
        {
          if ( v113 == 1 )
            strncpycch(v119);
          else
            wcsncpycch(v119 >> 1);
        }
        else
        {
          memcpy(v114, (const void *)v115[16], v119);
        }
        ms_exc.registration.TryLevel = -2;
      }
    }
    else if ( v9 == (struct tagPROCESSINFO *)831 )
    {
      if ( a9 )
      {
        v87 = v120;
        if ( v120 )
        {
          if ( IsWindowDesktopComposed(v120) )
            TransformMessageBetweenCoordinateSpaces(&a3, &a4, 0, v87);
        }
      }
    }
  }
  EtwTraceEndSendMessage(v17);
  *(_DWORD *)(a5 + 272) = v109;
  v34 = a7;
  if ( a7 )
  {
    **(_DWORD **)(a7 + 24) = v115[9];
    if ( (v17[11] & 0x8000) != 0 && (*(_BYTE *)(v34 + 16) & 0x20) != 0 )
    {
      v35 = 0;
      UserSetLastError(1400);
      v34 = a7;
    }
    else
    {
      a4 = v30 == 0;
      v35 = a4;
    }
  }
  else
  {
    v35 = v115[9];
  }
  if ( !v34 && !v30 )
    goto LABEL_91;
  v50 = v17[11];
  if ( (v50 & 1) != 0 )
    goto LABEL_91;
  v88 = v50 | 1;
  v17[11] = v88;
  if ( (v88 & 0x4000) == 0 )
  {
    --*(_DWORD *)(a6 + 288);
    v89 = v17 + 2;
    v90 = v17[2];
    v91 = (_DWORD *)v17[3];
    if ( *(_DWORD **)(v90 + 4) == v17 + 2 && (_DWORD *)*v91 == v89 )
    {
      *v91 = v90;
      *(_DWORD *)(v90 + 4) = v91;
      *v89 = 0;
      v17[11] |= 0x10u;
      goto LABEL_91;
    }
LABEL_240:
    __fastfail(3u);
  }
  v17[11] = v88 | 8;
LABEL_91:
  v36 = v17[11];
  if ( (v36 & 0x4010) != 0x10 )
  {
    v36 |= 8u;
    v17[11] = v36;
  }
  if ( (v36 & 0x8008) != 8 )
    UnlinkSendListSms(v17);
  return v35;
}
