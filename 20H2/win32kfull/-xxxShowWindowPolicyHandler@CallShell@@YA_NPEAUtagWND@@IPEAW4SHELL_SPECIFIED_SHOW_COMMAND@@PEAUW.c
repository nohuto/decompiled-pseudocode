/*
 * XREFs of ?xxxShowWindowPolicyHandler@CallShell@@YA_NPEAUtagWND@@IPEAW4SHELL_SPECIFIED_SHOW_COMMAND@@PEAUWINDOW_GROUP_ID@@PEAUtagRECT@@@Z @ 0x1C007F050
 * Callers:
 *     ?xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z @ 0x1C00942E4 (-xxxGetShellShowWindowAction@@YAEPEAUtagWND@@EPEAH@Z.c)
 * Callees:
 *     _anonymous_namespace_::GroupManagementEnabledForDesktop @ 0x1C007F1B0 (_anonymous_namespace_--GroupManagementEnabledForDesktop.c)
 *     _anonymous_namespace_::xxxCallIAMWindowManagementHandler @ 0x1C007F1D0 (_anonymous_namespace_--xxxCallIAMWindowManagementHandler.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

char __fastcall CallShell::xxxShowWindowPolicyHandler(
        CallShell *this,
        struct tagWND *a2,
        _DWORD *a3,
        enum SHELL_SPECIFIED_SHOW_COMMAND *a4,
        struct WINDOW_GROUP_ID *a5)
{
  char v6; // bl
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // al
  int v13; // ecx
  int v15; // ecx
  int v16[2]; // [rsp+20h] [rbp-58h] BYREF
  int v17; // [rsp+28h] [rbp-50h]
  _OWORD v18[3]; // [rsp+2Ch] [rbp-4Ch] BYREF
  int v19; // [rsp+5Ch] [rbp-1Ch]

  memset(v18, 0, 32);
  LODWORD(v18[0]) = (_DWORD)a2;
  v6 = 1;
  *(_OWORD *)a5 = 0LL;
  *a3 = 0;
  *(_DWORD *)a4 = 0;
  *(_QWORD *)v16 = *(_QWORD *)this;
  v19 = 0;
  v9 = *((_QWORD *)this + 5);
  v17 = 1;
  v18[2] = 0LL;
  *(_BYTE *)(v9 + 234) |= 2u;
  if ( !(unsigned int)anonymous_namespace_::xxxCallIAMWindowManagementHandler((int)v16) )
    return 0;
  *((_DWORD *)this + 81) |= 2u;
  v10 = *(_QWORD *)(gptiCurrent + 456LL);
  if ( v10 )
    v11 = ***(_QWORD ***)(v10 + 8);
  else
    v11 = -1LL;
  v12 = anonymous_namespace_::GroupManagementEnabledForDesktop(v11);
  v13 = DWORD1(v18[0]);
  *a3 = DWORD1(v18[0]);
  if ( v13 )
  {
    v15 = v13 - 3;
    if ( !v15 )
    {
      *(_OWORD *)a5 = *(_OWORD *)((char *)v18 + 8);
      return v6;
    }
    if ( v15 != 1 )
      return v6;
  }
  if ( v12 )
    *(_DWORD *)a4 = DWORD2(v18[1]);
  return v6;
}
