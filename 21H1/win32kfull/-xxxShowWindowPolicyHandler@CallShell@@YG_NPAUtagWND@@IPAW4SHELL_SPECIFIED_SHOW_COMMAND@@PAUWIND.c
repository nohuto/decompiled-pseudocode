/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YG_NPAUtagWND@@IPAW4SHELL_SPECIFIED_SHOW_COMMAND@@PAUWINDOW_GROUP_ID@@PAUtagRECT@@@Z @ 0x9267C
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z @ 0x9256E (-xxxGetShellShowWindowAction@@YGEPAUtagWND@@EPAH@Z.c)
 * Callees:
 *     _SetOrClrWF@16 @ 0x1B9C0 (_SetOrClrWF@16.c)
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x92750 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x92764 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

char __userpurge CallShell::xxxShowWindowPolicyHandler@<al>(
        int a1@<edx>,
        _DWORD *a2@<ecx>,
        CallShell *this,
        struct tagWND *a4,
        _DWORD *a5,
        enum SHELL_SPECIFIED_SHOW_COMMAND *a6,
        struct WINDOW_GROUP_ID *a7,
        struct tagRECT *a8)
{
  char v9; // bl
  char v12; // cl
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  _DWORD v17[15]; // [esp+1Ch] [ebp-40h] BYREF

  *a5 = 0;
  v9 = 1;
  a5[1] = 0;
  v17[1] = 1;
  a5[2] = 0;
  a5[3] = 0;
  *(_DWORD *)this = 0;
  *(_DWORD *)a4 = 0;
  v17[0] = *a2;
  memset(&v17[2], 0, 0x34u);
  v17[2] = a1;
  SetOrClrWF(1, (int)a2, 0x8A02u, 0);
  if ( !anonymous_namespace_::xxxCallIAMWindowManagementHandler(v17) )
    return 0;
  a2[49] |= 2u;
  v14 = *(_DWORD *)(_gptiCurrent + 248);
  if ( v14 )
    v15 = ***(_DWORD ***)(v14 + 4);
  else
    v15 = -1;
  v12 = anonymous_namespace_::GroupManagementEnabledForDesktop(v15);
  v13 = v17[3];
  *(_DWORD *)this = v17[3];
  if ( v13 )
  {
    v16 = v13 - 3;
    if ( !v16 )
    {
      *a5 = v17[4];
      a5[1] = v17[5];
      a5[2] = v17[6];
      a5[3] = v17[7];
      return v9;
    }
    if ( v16 != 1 )
      return v9;
  }
  if ( v12 )
    *(_DWORD *)a4 = v17[8];
  return v9;
}
