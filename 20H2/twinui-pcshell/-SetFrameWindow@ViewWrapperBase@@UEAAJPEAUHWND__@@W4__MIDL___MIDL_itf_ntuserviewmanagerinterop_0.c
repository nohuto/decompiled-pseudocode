/*
 * XREFs of ?SetFrameWindow@ViewWrapperBase@@UEAAJPEAUHWND__@@W4__MIDL___MIDL_itf_ntuserviewmanagerinterop_0000_0002_0001@@@Z @ 0x1802D0AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z @ 0x1802A3854 (-HandleFrameWindowChange@ViewEventDispatcher@@QEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ??$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAUHWND__@@AEBKAEAK@Z @ 0x1802CB24C (--$FrameWindowChanged@AEAIAEAPEAUHWND__@@AEBKAEAK@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEAU.c)
 *     ?CommitImportanceVector@ViewWrapperBase@@IEBAXXZ @ 0x1802CE0EC (-CommitImportanceVector@ViewWrapperBase@@IEBAXXZ.c)
 *     ?IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z @ 0x1802CF23C (-IsEnabled@ViewManagerInteropTraceLogging@@SA_NE_K@Z.c)
 */

__int64 __fastcall ViewWrapperBase::SetFrameWindow(__int64 a1, HWND a2, char a3)
{
  RTL_SRWLOCK *v4; // rsi
  char v7; // cl
  DWORD WindowThreadProcessId; // eax
  __int16 v9; // ax
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  DWORD v14; // [rsp+50h] [rbp+8h] BYREF
  HWND v15; // [rsp+58h] [rbp+10h] BYREF
  DWORD dwProcessId; // [rsp+60h] [rbp+18h] BYREF

  v15 = a2;
  v4 = (RTL_SRWLOCK *)(*(_QWORD *)(a1 + 120) + 280LL);
  AcquireSRWLockExclusive(v4);
  if ( *(HWND *)(a1 + 232) != a2 && ViewManagerInteropTraceLogging::IsEnabled(v7) )
  {
    dwProcessId = 0;
    if ( a2 )
      WindowThreadProcessId = GetWindowThreadProcessId(a2, &dwProcessId);
    else
      WindowThreadProcessId = 0;
    v14 = WindowThreadProcessId;
    ViewManagerInteropTraceLogging::FrameWindowChanged<unsigned int &,HWND__ * &,unsigned long const &,unsigned long &>(
      (int *)(a1 + 100),
      (__int64 *)&v15,
      (int *)&v14,
      (int *)&dwProcessId);
  }
  *(_QWORD *)(a1 + 232) = a2;
  if ( (a3 & 1) != 0 || !a2 )
    v9 = 0;
  else
    v9 = 128;
  *(_WORD *)(a1 + 308) &= ~0x80u;
  *(_WORD *)(a1 + 308) |= v9;
  ViewWrapperBase::CommitImportanceVector((ViewWrapperBase *)(a1 - 48));
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  v10 = ViewEventDispatcher::HandleFrameWindowChange(
          *(RTL_SRWLOCK **)(a1 + 120),
          (struct IViewWrapperInternal *)((a1 - 40) & -(__int64)(a1 != 48)));
  v11 = v10;
  if ( v10 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x87B,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
      (const char *)(unsigned int)v10);
  return v11;
}
