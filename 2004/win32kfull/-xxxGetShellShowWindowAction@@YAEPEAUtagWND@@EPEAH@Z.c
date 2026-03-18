/*
 * XREFs of ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00AE6F8
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C00AE7F8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C00ADFEC (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C00BEC78 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020E980 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C024174C (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

unsigned __int8 __fastcall xxxGetShellShowWindowAction(struct tagWND *a1, unsigned __int8 a2, int *a3)
{
  unsigned int v4; // ebx
  int v7; // esi
  bool v8; // al
  struct tagRECT *v9; // [rsp+28h] [rbp-28h]
  int v10; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v11; // [rsp+34h] [rbp-1Ch] BYREF
  struct tagRECT v12; // [rsp+38h] [rbp-18h] BYREF

  *a3 = 0;
  v4 = a2;
  if ( ShellWindowManagement::WindowSubjectToBehavior(
         (ShellWindowManagement **)a1,
         (struct tagWND *)1,
         (unsigned int)a3) )
  {
    v7 = 1;
    if ( v4 == 7 )
      goto LABEL_15;
    if ( v4 > 7 )
    {
      if ( v4 > 9 )
        goto LABEL_15;
    }
    else if ( !(_BYTE)v4 || v4 != 1 && (v4 <= 2 || v4 > 5) )
    {
      goto LABEL_15;
    }
    v10 = 0;
    v11 = 0;
    v12 = 0LL;
    v8 = CallShell::xxxShowWindowPolicyHandler(
           a1,
           (struct tagWND *)v4,
           (unsigned int)&v11,
           (enum SHELL_SPECIFIED_SHOW_COMMAND *)&v10,
           (struct WINDOW_GROUP_ID *)&v12,
           v9);
    v7 = v8;
    if ( !v8 )
    {
LABEL_15:
      *a3 = v7;
      return v4;
    }
    if ( !(_WORD)v11 )
    {
      if ( v10 && !*((_DWORD *)a1 + 77) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v12);
        WindowGroupingWindowManagement::SetWindowGroup(&v10, a1, 0LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v12);
      }
      goto LABEL_12;
    }
    if ( (unsigned __int16)v11 != 1 )
    {
      switch ( (unsigned __int16)v11 )
      {
        case 2u:
          LOBYTE(v4) = (unsigned __int8)(v4 - 7) <= 1u ? 17 : 3;
          goto LABEL_12;
        case 3u:
          if ( !xxxEndSetWindowArrangement(a1, &v12, 0LL, (unsigned __int8)(v4 - 7) <= 1u) )
          {
            v7 = 0;
            goto LABEL_12;
          }
          break;
        case 4u:
          if ( !v10 || *((_DWORD *)a1 + 77) || (int)WindowGroupingWindowManagement::SetWindowGroup(&v10, a1, 1LL) < 0 )
          {
LABEL_12:
            if ( v7 && (v11 & 0x10000) != 0 )
            {
              *((_DWORD *)a1 + 81) |= 4u;
              goto LABEL_15;
            }
            goto LABEL_14;
          }
          break;
        default:
          v7 = 0;
LABEL_14:
          *((_DWORD *)a1 + 81) &= ~4u;
          goto LABEL_15;
      }
    }
    LOBYTE(v4) = -1;
    goto LABEL_12;
  }
  return v4;
}
