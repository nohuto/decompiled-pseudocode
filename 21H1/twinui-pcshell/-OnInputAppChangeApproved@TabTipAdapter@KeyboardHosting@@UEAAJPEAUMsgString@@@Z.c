/*
 * XREFs of ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@UEAAJPEAUMsgString@@@Z @ 0x18033DDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180129748 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x18028286C (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ?OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z @ 0x18033DB98 (-OnInputAppChangeApproved@TabTipAdapter@KeyboardHosting@@QEAAJPEBG@Z.c)
 */

__int64 __fastcall KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved(
        KeyboardHosting::TabTipAdapter *this,
        struct MsgString *a2)
{
  unsigned __int16 *Data; // rax
  __int64 v3; // r8
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  Data = (unsigned __int16 *)MsgStringGetData(a2);
  result = KeyboardHosting::TabTipAdapter::OnInputAppChangeApproved((KeyboardHosting::TabTipAdapter *)(v3 - 8), Data);
  if ( (_DWORD)result != -2147024255 && (_DWORD)result != -805305819 && (_DWORD)result != -2147024809 )
  {
    if ( (int)result >= 0 )
      return result;
    wil::details::in1diag3::Log_Hr(
      retaddr,
      1481LL,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)result);
  }
  return 0LL;
}
