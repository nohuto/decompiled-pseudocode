/*
 * XREFs of ?CheckProcessIdentity@@YGHPAUtagWND@@IIJ@Z @ 0x12752
 * Callers:
 *     ?xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x12790 (-xxxWrapDesktopWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0xC449A (-xxxWrapCallWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA0C (-xxxWrapMenuWindowProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA3B (-xxxWrapSBWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 *     ?xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z @ 0x14FA6A (-xxxWrapSwitchWndProc@@YGJPAUtagWND@@IIJK@Z.c)
 * Callees:
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __userpurge CheckProcessIdentity@<eax>(
        struct tagPROCESSINFO *a1@<edx>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5,
        int a6)
{
  _DWORD *CurrentProcessWin32Process; // ebx
  _DWORD *v9; // esi
  unsigned __int8 v11; // al
  char v12; // al
  int v13; // edx
  int v14; // [esp+0h] [ebp-20h]
  unsigned int v15; // [esp+0h] [ebp-20h]
  int v16; // [esp+4h] [ebp-1Ch]
  int v17; // [esp+10h] [ebp-10h] BYREF
  int v18; // [esp+14h] [ebp-Ch]
  struct tagPROCESSINFO *v19; // [esp+18h] [ebp-8h]
  int v20; // [esp+1Ch] [ebp-4h]

  v19 = (struct tagPROCESSINFO *)a2;
  if ( a2 != -1 )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
    v9 = *(_DWORD **)(*(_DWORD *)(a2 + 8) + 232);
    if ( v9 == CurrentProcessWin32Process )
      return 1;
    if ( a1 != (struct tagPROCESSINFO *)717 )
    {
      if ( IsMessageAllowedAcrossILByReceiver(v19, a1, a3, a4, 1u, v14, v16) )
        return 1;
      v20 = IsMessageAlwaysAllowedAcrossIL(v15);
      if ( v20 )
      {
        MSGSQMAddMessage(CurrentProcessWin32Process, v9, a1, a3, a4, 1, 2);
      }
      else
      {
        if ( a1 == (struct tagPROCESSINFO *)274
          && (a3 == (struct tagWND *)61472 || a3 == (struct tagWND *)61728 || a3 == (struct tagWND *)61536) )
        {
          MSGSQMAddMessage(CurrentProcessWin32Process, v9, 274, a3, a4, 1, 2);
          return 1;
        }
        if ( *v9 == _gpepCSRSS )
        {
          v18 = 0;
          v17 = 0x2000;
        }
        else
        {
          v17 = v9[124];
          v18 = v9[125];
        }
        v11 = CheckAccess(CurrentProcessWin32Process + 124, &v17);
        v20 = v11;
        if ( v11 )
        {
          v12 = Enforced();
          MSGSQMAddMessage(CurrentProcessWin32Process, v9, a1, a3, a4, 1, 4 * (v12 != 0) + 1);
          if ( v20 )
            return 1;
        }
        if ( a1 == (struct tagPROCESSINFO *)793 )
        {
          v13 = *((_DWORD *)v19 + 2);
          if ( *(struct tagPROCESSINFO **)(v13 + 796) == v19
            && *(_DWORD *)(v13 + 236) == *(_DWORD *)(_gptiCurrent + 236) )
          {
            return 1;
          }
        }
        EtwTraceUIPIMsgError(CurrentProcessWin32Process, v9, a1, a3, a4);
        UserSetLastError(5);
        MSGSQMAddMessage(CurrentProcessWin32Process, v9, a1, a3, a4, 1, 0);
      }
      if ( v20 )
        return 1;
    }
    if ( *CurrentProcessWin32Process == _gpepCSRSS )
      return 1;
  }
  UserSetLastError(5);
  return 0;
}
