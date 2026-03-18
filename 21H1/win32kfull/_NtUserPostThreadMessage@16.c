/*
 * XREFs of _NtUserPostThreadMessage@16 @ 0x82578
 * Callers:
 *     <none>
 * Callees:
 *     _GetDesktopView@8 @ 0x6FBFA (_GetDesktopView@8.c)
 *     ?IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z @ 0x7FEB8 (-IsMessageAllowedAcrossILByReceiver@@YGHPAUtagPROCESSINFO@@0PAUtagWND@@IIJH@Z.c)
 *     _MSGSQMAddMessage@28 @ 0x7FF98 (_MSGSQMAddMessage@28.c)
 *     ?IsMessageAlwaysAllowedAcrossIL@@YGHI@Z @ 0x8015A (-IsMessageAlwaysAllowedAcrossIL@@YGHI@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     __PostThreadMessage@16 @ 0x8262A (__PostThreadMessage@16.c)
 *     _IsPrivileged@4 @ 0xCB7DA (_IsPrivileged@4.c)
 */

int __userpurge NtUserPostThreadMessage@<eax>(
        int a1@<ebx>,
        int a2,
        struct tagPROCESSINFO *a3,
        struct tagWND *a4,
        unsigned int a5)
{
  int v5; // esi
  struct tagPROCESSINFO *v7; // eax
  int v8; // ecx
  int v9; // eax
  _DWORD *v12; // edx
  int v13; // ecx
  int **i; // ecx
  unsigned __int8 v15; // al
  char v16; // al
  unsigned int v18; // [esp-4h] [ebp-1Ch]
  int v19; // [esp+0h] [ebp-18h]
  int v20; // [esp+8h] [ebp-10h] BYREF
  int v21; // [esp+Ch] [ebp-Ch]
  int v22; // [esp+10h] [ebp-8h] BYREF
  int v23; // [esp+14h] [ebp-4h]
  _DWORD *v24; // [esp+20h] [ebp+8h]
  struct tagPROCESSINFO *v25; // [esp+24h] [ebp+Ch]
  struct tagWND *v26; // [esp+28h] [ebp+10h]

  v5 = 0;
  EnterCrit(0, 1);
  if ( ((unsigned int)a3 & 0xFFFE0000) != 0 )
  {
    v13 = 87;
    goto LABEL_10;
  }
  v25 = (struct tagPROCESSINFO *)PtiFromThreadId(a2);
  if ( v25 )
    goto LABEL_3;
  v12 = (_DWORD *)_gpwpiFirstWow;
LABEL_8:
  if ( !v12 )
  {
    v13 = 1444;
LABEL_10:
    UserSetLastError((struct _NT_TIB *)v13);
    goto LABEL_6;
  }
  for ( i = (int **)v12[2]; ; i = (int **)*i )
  {
    if ( !i )
    {
      v12 = (_DWORD *)*v12;
      goto LABEL_8;
    }
    if ( *((unsigned __int16 *)i + 10) == a2 )
      break;
  }
  v25 = (struct tagPROCESSINFO *)i[3];
LABEL_3:
  v7 = v25;
  if ( *(_DWORD *)(_gptiCurrent + 248) != *((_DWORD *)v25 + 62) && (*(_BYTE *)(_gptiCurrent + 264) & 8) == 0 )
  {
    if ( !GetDesktopView(*(_DWORD *)(_gptiCurrent + 232), *((_DWORD *)v25 + 62)) )
    {
      v22 = 0;
      v23 = 0;
      v20 = 0;
      v21 = 0;
      if ( !IsPrivileged(_psTcb) )
      {
LABEL_26:
        UserSetLastError((struct _NT_TIB *)0x5A4);
        goto LABEL_6;
      }
      if ( (unsigned __int8)Enforced() )
      {
        if ( !(unsigned __int8)CheckAccess(*(_DWORD *)(_gptiCurrent + 232) + 496, *((_DWORD *)v25 + 58) + 496) )
        {
          UserSetLastError((struct _NT_TIB *)0x5A4);
          EtwTraceUIPIMsgError(*(_DWORD *)(_gptiCurrent + 232), *((_DWORD *)v25 + 58), a3, a4, a5);
          goto LABEL_6;
        }
      }
      else if ( (int)GetProcessLuid(*_gptiCurrent, &v22) < 0
             || (int)GetProcessLuid(*(_DWORD *)v25, &v20) < 0
             || v22 != v20
             || v23 != v21 )
      {
        goto LABEL_26;
      }
    }
    v7 = v25;
  }
  v8 = *(_DWORD *)(_gptiCurrent + 232);
  v9 = *((_DWORD *)v7 + 58);
  v24 = (_DWORD *)v9;
  v23 = v8;
  if ( v9 == v8 )
    goto LABEL_5;
  if ( a3 == (struct tagPROCESSINFO *)717 )
    goto LABEL_6;
  if ( IsMessageAllowedAcrossILByReceiver(v9, v8, 0, a3, a4, a5, 0, a1, v19) )
    goto LABEL_5;
  v26 = (struct tagWND *)IsMessageAlwaysAllowedAcrossIL(v18);
  if ( v26 )
  {
    MSGSQMAddMessage(v23, (int)v24, (int)a3, (int)a4, a5, 0, 2);
    goto LABEL_45;
  }
  if ( a3 == (struct tagPROCESSINFO *)274
    && (a4 == (struct tagWND *)61472 || a4 == (struct tagWND *)61728 || a4 == (struct tagWND *)61536) )
  {
    MSGSQMAddMessage(v23, (int)v24, 274, (int)a4, a5, 0, 2);
  }
  else
  {
    if ( *v24 == _gpepCSRSS )
    {
      v20 = 0x2000;
      v21 = 0;
    }
    else
    {
      v20 = v24[124];
      v21 = v24[125];
    }
    v15 = CheckAccess(v23 + 496, &v20);
    v26 = (struct tagWND *)v15;
    if ( !v15 || (v16 = Enforced(), MSGSQMAddMessage(v23, (int)v24, (int)a3, (int)a4, a5, 0, 4 * (v16 != 0) + 1), !v26) )
    {
      EtwTraceUIPIMsgError(v23, v24, a3, a4, a5);
      UserSetLastError((struct _NT_TIB *)5);
      MSGSQMAddMessage(v23, (int)v24, (int)a3, (int)a4, a5, 0, 0);
LABEL_45:
      if ( !v26 )
        goto LABEL_6;
    }
  }
LABEL_5:
  v5 = _PostThreadMessage(a4, a5);
LABEL_6:
  UserSessionSwitchLeaveCrit();
  return v5;
}
