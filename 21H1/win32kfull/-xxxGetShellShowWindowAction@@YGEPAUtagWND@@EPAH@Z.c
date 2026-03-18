/*
 * XREFs of ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E
 * Callers:
 *     ?xxxShowWindowEx@@YGHPAUtagWND@@EK@Z @ 0xF511E (-xxxShowWindowEx@@YGHPAUtagWND@@EK@Z.c)
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     ?ShouldConsultShell@@YGHH@Z @ 0x9263E (-ShouldConsultShell@@YGHH@Z.c)
 *     ?xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWINDOW_GROUP_ID@@PAUtagRECT@@@Z @ 0x9267C (-xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWIND.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z @ 0xF4F26 (-WindowSubjectToBehavior@ShellWindowManagement@@YG_NPAUtagWND@@K@Z.c)
 *     ?xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z @ 0x1739DF (-xxxEndSetWindowArrangement@@YG_NPAUtagWND@@PAUtagRECT@@1K@Z.c)
 *     ?SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_GROUP_OPTIONS@@W4GROUP_WINDOW_ROLE@@@Z @ 0x19F490 (-SetWindowGroup@WindowGroupingWindowManagement@@YGJABUWINDOW_GROUP_ID@@PAUtagWND@@W4SET_WINDOW_G.c)
 */

char __userpurge xxxGetShellShowWindowAction@<al>(
        char a1@<dl>,
        int a2@<ecx>,
        struct tagWND *a3,
        unsigned __int8 a4,
        int *a5)
{
  int v8; // edi
  bool v9; // al
  int v10; // ecx
  int v11; // eax
  bool v12; // al
  ShellWindowManagement *v13; // [esp+0h] [ebp-3Ch]
  int v14; // [esp+0h] [ebp-3Ch]
  enum SHELL_SPECIFIED_SHOW_COMMAND *v15; // [esp+0h] [ebp-3Ch]
  struct tagRECT *v16; // [esp+0h] [ebp-3Ch]
  struct tagWND *v17; // [esp+4h] [ebp-38h]
  struct WINDOW_GROUP_ID *v18; // [esp+4h] [ebp-38h]
  unsigned int v19; // [esp+4h] [ebp-38h]
  unsigned int v20; // [esp+8h] [ebp-34h]
  struct tagRECT *v21; // [esp+8h] [ebp-34h]
  _BYTE v22[4]; // [esp+14h] [ebp-28h] BYREF
  struct tagRECT *v23; // [esp+18h] [ebp-24h]
  int v24; // [esp+1Ch] [ebp-20h] BYREF
  int v25; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v26[4]; // [esp+24h] [ebp-18h] BYREF

  *(_DWORD *)a3 = 0;
  if ( ShellWindowManagement::WindowSubjectToBehavior(v13, v17, v20) )
  {
    v8 = 1;
    if ( !ShouldConsultShell(v14) )
      goto LABEL_13;
    v23 = (struct tagRECT *)(a1 == 8 || a1 == 7);
    v24 = 0;
    v25 = 0;
    memset(v26, 0, sizeof(v26));
    v9 = CallShell::xxxShowWindowPolicyHandler(
           (CallShell *)&v25,
           (struct tagWND *)&v24,
           (unsigned int)v26,
           v15,
           v18,
           v21);
    v8 = v9;
    if ( !v9 )
      goto LABEL_13;
    v10 = v25;
    if ( !(_WORD)v25 )
    {
      if ( v24 && !*(_DWORD *)(a2 + 180) )
      {
        UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v22);
        WindowGroupingWindowManagement::SetWindowGroup(&v24, a2, 0, 0);
        UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v22);
        v10 = v25;
      }
      goto LABEL_10;
    }
    if ( (unsigned __int16)v25 != 1 )
    {
      switch ( (unsigned __int16)v25 )
      {
        case 2u:
          a1 = v23 != 0 ? 17 : 3;
          goto LABEL_10;
        case 3u:
          v12 = xxxEndSetWindowArrangement(0, v23, v16, v19);
          v10 = v25;
          if ( !v12 )
          {
            v8 = 0;
            goto LABEL_10;
          }
          break;
        case 4u:
          if ( !v24
            || *(_DWORD *)(a2 + 180)
            || (v11 = WindowGroupingWindowManagement::SetWindowGroup(&v24, a2, 1, 0), v10 = v25, v11 < 0) )
          {
LABEL_10:
            if ( v8 && (v10 & 0x10000) != 0 )
            {
              *(_DWORD *)(a2 + 196) |= 4u;
              goto LABEL_13;
            }
LABEL_12:
            *(_DWORD *)(a2 + 196) &= ~4u;
LABEL_13:
            *(_DWORD *)a3 = v8;
            return a1;
          }
          break;
        default:
          v8 = 0;
          goto LABEL_12;
      }
    }
    a1 = -1;
    goto LABEL_10;
  }
  return a1;
}
