/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C0025B44
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C0026B60 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C0025980 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0026584 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C011B464 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdi
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
  v11 = v7;
  if ( v7 && (v9 = *(_QWORD *)(v7 + 40), v8 = (*(_WORD *)(v9 + 42) & 0x3FFFu) - 669, (v8 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
    v13 = *(_QWORD **)(v11 + 16);
    v14 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v13[52]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v13[173] == GetAncestor(v11, 1LL)
      && (v17 = v13[174]) != 0
      && v14 == *(_QWORD **)(*(_QWORD *)(v17 + 16) + 416LL) )
    {
      v15 = AttachInputQueueToWindow((struct tagWND *)v11, a2);
      if ( v15 >= 0 )
        *a3 = (struct tagWND *)v11;
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
    UserSessionSwitchLeaveCrit(v9, v8, v10);
  return (unsigned int)v15;
}
