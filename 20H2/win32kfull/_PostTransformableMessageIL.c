/*
 * XREFs of _PostTransformableMessageIL @ 0x1C001A1A0
 * Callers:
 *     ?xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x1C00197A8 (-xxxSendBSMtoDesktop@@YAHPEAUtagWND@@I_K_JPEAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 *     xxxBroadcastMessageEx @ 0x1C0038FD0 (xxxBroadcastMessageEx.c)
 * Callees:
 *     _PostTransformableMessage @ 0x1C001A3A8 (_PostTransformableMessage.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z @ 0x1C001A3EC (-IsMessageAllowedAcrossILByReceiver@@YAHPEAUtagPROCESSINFO@@0PEAUtagWND@@I_K_JH@Z.c)
 *     MSGSQMAddMessage @ 0x1C001A558 (MSGSQMAddMessage.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YAHI@Z @ 0x1C001A5DC (-IsMessageAlwaysAllowedAcrossIL@@YAHI@Z.c)
 *     IAMThreadAccessGranted @ 0x1C008F634 (IAMThreadAccessGranted.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ValidateDDEConvPair @ 0x1C021C6A0 (ValidateDDEConvPair.c)
 */

__int64 __fastcall PostTransformableMessageIL(struct tagWND *a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  unsigned int v7; // ebx
  __int64 v9; // r8
  int v10; // r9d
  __int64 v11; // rsi
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax
  struct tagPROCESSINFO *v13; // r14
  int v14; // r15d
  unsigned __int8 v15; // al
  bool v16; // zf
  __int16 v17; // ax
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // [rsp+70h] [rbp+8h] BYREF

  v7 = a2;
  v9 = 1LL;
  if ( (unsigned int)(a2 - 992) <= 8 )
  {
    v19 = ValidateDDEConvPair(a3, a1, 1LL);
    v10 = a5;
    v9 = 1LL;
    if ( v19 )
      v10 = 1;
  }
  else
  {
    v10 = a5;
  }
  if ( v7 == 274 && a3 == 61488 && (unsigned int)IAMThreadAccessGranted(gptiCurrent) )
    v10 = v9;
  if ( (unsigned __int64)a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v10 )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  v11 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, a2, v9);
  v13 = CurrentProcessWin32Process;
  if ( (struct tagPROCESSINFO *)v11 == CurrentProcessWin32Process )
    return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  if ( v7 != 717 )
  {
    if ( (unsigned int)IsMessageAllowedAcrossILByReceiver(
                         CurrentProcessWin32Process,
                         (struct tagPROCESSINFO *)v11,
                         a1,
                         v7,
                         a3,
                         a4,
                         0) )
      return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
    v14 = IsMessageAlwaysAllowedAcrossIL(v7);
    if ( v14 )
    {
      MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v11, a4, 0, 2);
    }
    else
    {
      if ( v7 == 274 && ((a3 - 61472) & 0xFFFFFFFFFFFFFEBFuLL) == 0 && a3 != 61792 )
      {
        MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v11, a4, 0, 2);
        return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      }
      if ( *(_QWORD *)v11 == gpepCSRSS )
        v21 = 0x2000LL;
      else
        v21 = *(_QWORD *)(v11 + 880);
      v15 = CheckAccess((char *)v13 + 880, &v21);
      v14 = v15;
      if ( v15 )
      {
        v16 = (unsigned __int8)Enforced() == 0;
        v17 = 5;
        if ( v16 )
          v17 = 1;
        MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v11, a4, 0, v17);
      }
      if ( v14 )
        return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      if ( v7 == 793 )
      {
        v20 = *((_QWORD *)a1 + 2);
        if ( *(struct tagWND **)(v20 + 1392) == a1 && *(_QWORD *)(v20 + 432) == *(_QWORD *)(gptiCurrent + 432LL) )
          return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
      }
      EtwTraceUIPIMsgError(v13, v11, v7, a3, a4);
      UserSetLastError(5LL);
      MSGSQMAddMessage(v13, (struct tagPROCESSINFO *)v11, a4, 0, 0);
    }
    if ( v14 )
      return PostTransformableMessage((_DWORD)a1, v7, a3, a4, 1);
  }
  return 0LL;
}
