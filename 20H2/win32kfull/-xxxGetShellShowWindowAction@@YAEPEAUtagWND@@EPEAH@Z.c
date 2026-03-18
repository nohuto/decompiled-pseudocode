/*
 * XREFs of ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00942E4
 * Callers:
 *     ?xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z @ 0x1C0093EA8 (-xxxShowWindowEx@@YAHPEAUtagWND@@EK@Z.c)
 * Callees:
 *     ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C007F050 (-xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUW.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z @ 0x1C0094B7C (-WindowSubjectToBehavior@ShellWindowManagement@@YA_NPEAUtagWND@@K@Z.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB20 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00AFB7C (--1UserAtomicCheck@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z @ 0x1C020DB00 (-xxxEndSetWindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@1K@Z.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x1C02404AC (-SetWindowGroup@WindowGroupingWindowManagement@@YAJAEBUWINDOW_GROUP_ID@@PEAUtagWND@@W4SET_WINDOW.c)
 */

unsigned __int8 __fastcall xxxGetShellShowWindowAction(struct tagWND *this, unsigned __int8 a2, int *a3)
{
  unsigned int v4; // ebx
  int v7; // esi
  unsigned __int8 v8; // al
  int v9; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v10; // [rsp+34h] [rbp-1Ch] BYREF
  struct tagRECT v11; // [rsp+38h] [rbp-18h] BYREF

  *a3 = 0;
  v4 = a2;
  if ( ShellWindowManagement::WindowSubjectToBehavior(this, (struct tagWND *)1, (unsigned int)a3) )
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
    v9 = 0;
    v10 = 0;
    v11 = 0LL;
    v8 = CallShell::xxxShowWindowPolicyHandler(
           this,
           (struct tagWND *)v4,
           &v10,
           (enum SHELL_SPECIFIED_SHOW_COMMAND *)&v9,
           (struct WINDOW_GROUP_ID *)&v11);
    v7 = v8;
    if ( !v8 )
    {
LABEL_15:
      *a3 = v7;
      return v4;
    }
    if ( !(_WORD)v10 )
    {
      if ( v9 && !*((_DWORD *)this + 77) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v11);
        WindowGroupingWindowManagement::SetWindowGroup(&v9, this, 0LL);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v11);
      }
      goto LABEL_12;
    }
    if ( (unsigned __int16)v10 != 1 )
    {
      switch ( (unsigned __int16)v10 )
      {
        case 2u:
          LOBYTE(v4) = (unsigned __int8)(v4 - 7) <= 1u ? 17 : 3;
          goto LABEL_12;
        case 3u:
          if ( !xxxEndSetWindowArrangement(this, &v11, 0LL, (unsigned __int8)(v4 - 7) <= 1u) )
          {
            v7 = 0;
            goto LABEL_12;
          }
          break;
        case 4u:
          if ( !v9 || *((_DWORD *)this + 77) || (int)WindowGroupingWindowManagement::SetWindowGroup(&v9, this, 1LL) < 0 )
          {
LABEL_12:
            if ( v7 && (v10 & 0x10000) != 0 )
            {
              *((_DWORD *)this + 81) |= 4u;
              goto LABEL_15;
            }
            goto LABEL_14;
          }
          break;
        default:
          v7 = 0;
LABEL_14:
          *((_DWORD *)this + 81) &= ~4u;
          goto LABEL_15;
      }
    }
    LOBYTE(v4) = -1;
    goto LABEL_12;
  }
  return v4;
}
