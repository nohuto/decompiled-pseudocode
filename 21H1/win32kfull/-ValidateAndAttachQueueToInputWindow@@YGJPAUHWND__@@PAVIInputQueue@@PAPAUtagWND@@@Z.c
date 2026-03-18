/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YGJPAUHWND__@@PAVIInputQueue@@PAPAUtagWND@@@Z @ 0xB37AA
 * Callers:
 *     _UserValidateAndAttachQueueToInputWindowApiExt@12 @ 0xB3792 (_UserValidateAndAttachQueueToInputWindowApiExt@12.c)
 * Callees:
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     ??0ReEnterLeaveCrit@@QAE@XZ @ 0x6FC2E (--0ReEnterLeaveCrit@@QAE@XZ.c)
 *     ?AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z @ 0xB3874 (-AttachInputQueueToWindow@@YGJPAUtagWND@@PAVIInputQueue@@@Z.c)
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 */

int __userpurge ValidateAndAttachQueueToInputWindow@<eax>(
        int a1@<edx>,
        unsigned int a2@<ecx>,
        HWND a3,
        struct IInputQueue *a4,
        struct tagWND **a5)
{
  int v6; // eax
  int v7; // edi
  int v8; // eax
  _DWORD *CurrentProcessWin32Process; // eax
  _DWORD *v10; // ebx
  _DWORD *v11; // esi
  int v12; // esi
  int v14; // eax
  struct tagWND *v15; // [esp+0h] [ebp-14h]
  struct IInputQueue *v16; // [esp+4h] [ebp-10h]
  _DWORD v17[2]; // [esp+Ch] [ebp-8h] BYREF

  v17[1] = a1;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)v17);
  *(_DWORD *)a3 = 0;
  v6 = HMValidateHandleNoSecure(a2, 1);
  v7 = v6;
  if ( !v6 || (v8 = *(_WORD *)(*(_DWORD *)(v6 + 20) + 30) & 0x3FFF, v8 == 669) || v8 == 671 )
  {
    v12 = -1073741811;
  }
  else
  {
    CurrentProcessWin32Process = (_DWORD *)PsGetCurrentProcessWin32Process();
    v10 = *(_DWORD **)(v7 + 8);
    v11 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_DWORD *)v10[58]
      || IsProcessDwm(*CurrentProcessWin32Process)
      || v10[199] == _GetAncestor(v7, 1) && (v14 = v10[200]) != 0 && v11 == *(_DWORD **)(*(_DWORD *)(v14 + 8) + 232) )
    {
      v12 = AttachInputQueueToWindow(v15, v16);
      if ( v12 >= 0 )
        *(_DWORD *)a3 = v7;
    }
    else
    {
      v12 = -1073741790;
    }
  }
  if ( !v17[0] )
    UserSessionSwitchLeaveCrit();
  return v12;
}
