/*
 * XREFs of __PostTransformableMessageIL@24 @ 0x7F87A
 * Callers:
 *     _xxxBroadcastMessageEx@32 @ 0x48942 (_xxxBroadcastMessageEx@32.c)
 *     ?xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z @ 0x7F518 (-xxxSendBSMtoDesktop@@YGHPAUtagWND@@IIJPAUtagBROADCASTSYSTEMMSGPARAMS@@H@Z.c)
 * Callees:
 *     _IAMThreadAccessGranted@4 @ 0x26140 (_IAMThreadAccessGranted@4.c)
 *     __PostTransformableMessage@20 @ 0x7F9FE (__PostTransformableMessage@20.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _ValidateDDEConvPair@8 @ 0x17FF6F (_ValidateDDEConvPair@8.c)
 */

int __fastcall _PostTransformableMessageIL(
        struct tagPROCESSINFO *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3,
        unsigned int a4,
        int a5,
        int a6)
{
  struct tagWND *v9; // ebx
  unsigned __int8 v10; // al
  char v11; // al
  int v13; // edx
  int v14; // [esp+0h] [ebp-18h]
  unsigned int v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+4h] [ebp-14h]
  int v17; // [esp+Ch] [ebp-Ch] BYREF
  int v18; // [esp+10h] [ebp-8h]
  struct tagPROCESSINFO *v19; // [esp+14h] [ebp-4h]
  struct tagWND *CurrentProcessWin32Process; // [esp+20h] [ebp+8h]
  int v21; // [esp+28h] [ebp+10h]

  v19 = a1;
  if ( (unsigned int)a2 >= 0x3E0 && (unsigned int)a2 <= 0x3E8 && ValidateDDEConvPair(a3, a1) )
    a5 = 1;
  if ( a2 == (struct tagPROCESSINFO *)274 && a3 == (struct tagWND *)61488 && IAMThreadAccessGranted(_gptiCurrent) )
    a5 = 1;
  if ( !v19 )
    return _PostTransformableMessage(v19, a2, a3, a4, 1);
  if ( v19 == (struct tagPROCESSINFO *)-1 )
    return _PostTransformableMessage(v19, a2, a3, a4, 1);
  if ( a5 )
    return _PostTransformableMessage(v19, a2, a3, a4, 1);
  v9 = *(struct tagWND **)(*((_DWORD *)v19 + 2) + 232);
  CurrentProcessWin32Process = (struct tagWND *)PsGetCurrentProcessWin32Process();
  if ( v9 == CurrentProcessWin32Process )
    return _PostTransformableMessage(v19, a2, a3, a4, 1);
  if ( a2 != (struct tagPROCESSINFO *)717 )
  {
    if ( IsMessageAllowedAcrossILByReceiver(v19, a2, a3, a4, 0, v14, v16) )
      return _PostTransformableMessage(v19, a2, a3, a4, 1);
    v21 = IsMessageAlwaysAllowedAcrossIL(v15);
    if ( v21 )
    {
      MSGSQMAddMessage(CurrentProcessWin32Process, v9, a2, a3, a4, 0, 2);
    }
    else
    {
      if ( a2 == (struct tagPROCESSINFO *)274
        && (a3 == (struct tagWND *)61472 || a3 == (struct tagWND *)61728 || a3 == (struct tagWND *)61536) )
      {
        MSGSQMAddMessage(CurrentProcessWin32Process, v9, 274, a3, a4, 0, 2);
        return _PostTransformableMessage(v19, a2, a3, a4, 1);
      }
      if ( *(_DWORD *)v9 == _gpepCSRSS )
      {
        v18 = 0;
        v17 = 0x2000;
      }
      else
      {
        v17 = *((_DWORD *)v9 + 124);
        v18 = *((_DWORD *)v9 + 125);
      }
      v10 = CheckAccess((char *)CurrentProcessWin32Process + 496, &v17);
      v21 = v10;
      if ( v10 )
      {
        v11 = Enforced();
        MSGSQMAddMessage(CurrentProcessWin32Process, v9, a2, a3, a4, 0, 4 * (v11 != 0) + 1);
        if ( v21 )
          return _PostTransformableMessage(v19, a2, a3, a4, 1);
      }
      if ( a2 == (struct tagPROCESSINFO *)793 )
      {
        v13 = *((_DWORD *)v19 + 2);
        if ( *(struct tagPROCESSINFO **)(v13 + 796) == v19 && *(_DWORD *)(v13 + 236) == *(_DWORD *)(_gptiCurrent + 236) )
          return _PostTransformableMessage(v19, a2, a3, a4, 1);
      }
      EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a2, a3, a4);
      UserSetLastError(5);
      MSGSQMAddMessage(CurrentProcessWin32Process, v9, a2, a3, a4, 0, 0);
    }
    if ( v21 )
      return _PostTransformableMessage(v19, a2, a3, a4, 1);
  }
  return 0;
}
