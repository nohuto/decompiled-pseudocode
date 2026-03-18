/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C003BF28
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C003BF10 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C003C030 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C003E8B4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C011BE54 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  __int64 v11; // rdx
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v13; // rsi
  _QWORD *v14; // rbx
  int v15; // ebx
  __int64 v17; // rax
  int v18; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v18);
  *a3 = 0LL;
  LOBYTE(v6) = 1;
  v7 = HMValidateHandleNoSecure(a1, v6);
  v10 = v7;
  if ( v7 && (v8 = *(_QWORD *)(v7 + 40), v11 = (*(_WORD *)(v8 + 42) & 0x2FFFu) - 669, (v11 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8, v11, v9);
    v13 = *(_QWORD **)(v10 + 16);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v13[53]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v13[174] == GetAncestor(v10, 1LL)
      && (v17 = v13[175]) != 0
      && v14 == *(_QWORD **)(*(_QWORD *)(v17 + 16) + 424LL) )
    {
      v15 = AttachInputQueueToWindow((struct tagWND *)v10, a2);
      if ( v15 >= 0 )
        *a3 = (struct tagWND *)v10;
    }
    else
    {
      v15 = -1073741790;
    }
  }
  else
  {
    v15 = -1073741811;
  }
  if ( !v18 )
    UserSessionSwitchLeaveCrit(v8);
  return (unsigned int)v15;
}
