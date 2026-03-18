/*
 * XREFs of UserGetDesktopDC @ 0x1C0031E28
 * Callers:
 *     NtGdiCreateMetafileDC @ 0x1C0031DC0 (NtGdiCreateMetafileDC.c)
 *     NtGdiOpenDCW @ 0x1C0069C10 (NtGdiOpenDCW.c)
 * Callees:
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C0067980 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     _GetDCEx @ 0x1C0086DA0 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C008A4E0 (UserSessionSwitchLeaveCrit.c)
 *     GreCreateDisplayDC @ 0x1C008A9B0 (GreCreateDisplayDC.c)
 *     ValidateHwndEx @ 0x1C008BD80 (ValidateHwndEx.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  __int64 v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 DisplayDC; // rax
  __int64 v12; // rbx
  _QWORD *v14; // rcx
  int v15; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v15);
  v6 = *(_QWORD *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 120) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 52) + 768LL) + 24LL) & 1 )
  {
    v14 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 56) + 8LL) + 24LL);
    if ( v14 )
      v14 = (_QWORD *)*v14;
    if ( !ValidateHwndEx(v14, 1LL) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v6, a1, a2 != 0);
    goto LABEL_11;
  }
  v10 = *((_QWORD *)gptiCurrent + 56);
  if ( v10 )
  {
    DisplayDC = GetDCEx(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 24LL), 0LL, 2155872259LL);
LABEL_11:
    v12 = DisplayDC;
    goto LABEL_12;
  }
LABEL_16:
  v12 = 0LL;
LABEL_12:
  if ( !v15 )
    UserSessionSwitchLeaveCrit(v9);
  return v12;
}
