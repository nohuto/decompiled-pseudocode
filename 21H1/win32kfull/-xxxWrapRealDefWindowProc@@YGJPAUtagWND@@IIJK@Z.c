/*
 * XREFs of ?xxxWrapRealDefWindowProc@@YGJPAUtagWND@@IIJK@Z @ 0x3D2F0
 * Callers:
 *     <none>
 * Callees:
 *     _xxxRealDefWindowProc@16 @ 0x3D3F2 (_xxxRealDefWindowProc@16.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall xxxWrapRealDefWindowProc(
        struct tagWND *a1,
        struct tagPROCESSINFO *a2,
        struct tagWND *a3,
        unsigned int a4,
        unsigned int a5)
{
  _DWORD *CurrentProcessWin32Process; // eax
  _DWORD *v7; // ebx
  unsigned __int8 v9; // al
  char v10; // al
  int v11; // edx
  int v12; // [esp+0h] [ebp-18h]
  unsigned int v13; // [esp+0h] [ebp-18h]
  int v14; // [esp+4h] [ebp-14h]
  int v15; // [esp+Ch] [ebp-Ch] BYREF
  int v16; // [esp+10h] [ebp-8h]
  _DWORD *v17; // [esp+14h] [ebp-4h]
  struct tagWND *v18; // [esp+28h] [ebp+10h]

  if ( a1 != (struct tagWND *)-1 )
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
    v17 = CurrentProcessWin32Process;
    v7 = *(_DWORD **)(*((_DWORD *)a1 + 2) + 232);
    if ( v7 == CurrentProcessWin32Process )
      return xxxRealDefWindowProc(a3, a4);
    if ( a2 != (struct tagPROCESSINFO *)717 )
    {
      if ( IsMessageAllowedAcrossILByReceiver(a1, a2, a3, a4, 1u, v12, v14) )
        return xxxRealDefWindowProc(a3, a4);
      v18 = (struct tagWND *)IsMessageAlwaysAllowedAcrossIL(v13);
      if ( v18 )
      {
        MSGSQMAddMessage(v17, v7, a2, a3, a4, 1, 2);
      }
      else
      {
        if ( a2 == (struct tagPROCESSINFO *)274
          && (a3 == (struct tagWND *)61472 || a3 == (struct tagWND *)61728 || a3 == (struct tagWND *)61536) )
        {
          MSGSQMAddMessage(v17, v7, 274, a3, a4, 1, 2);
          return xxxRealDefWindowProc(a3, a4);
        }
        if ( *v7 == _gpepCSRSS )
        {
          v16 = 0;
          v15 = 0x2000;
        }
        else
        {
          v15 = v7[124];
          v16 = v7[125];
        }
        v9 = CheckAccess(v17 + 124, &v15);
        v18 = (struct tagWND *)v9;
        if ( v9 )
        {
          v10 = Enforced();
          MSGSQMAddMessage(v17, v7, a2, a3, a4, 1, 4 * (v10 != 0) + 1);
          if ( v18 )
            return xxxRealDefWindowProc(a3, a4);
        }
        if ( a2 == (struct tagPROCESSINFO *)793 )
        {
          v11 = *((_DWORD *)a1 + 2);
          if ( *(struct tagWND **)(v11 + 796) == a1 && *(_DWORD *)(v11 + 236) == *(_DWORD *)(_gptiCurrent + 236) )
            return xxxRealDefWindowProc(a3, a4);
        }
        EtwTraceUIPIMsgError(v17, v7, a2, a3, a4);
        UserSetLastError(5);
        MSGSQMAddMessage(v17, v7, a2, a3, a4, 1, 0);
      }
      if ( v18 )
        return xxxRealDefWindowProc(a3, a4);
      CurrentProcessWin32Process = v17;
    }
    if ( *CurrentProcessWin32Process == _gpepCSRSS )
      return xxxRealDefWindowProc(a3, a4);
  }
  UserSetLastError(5);
  return 0;
}
