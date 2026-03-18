/*
 * XREFs of UserGetDesktopDC @ 0x1C00A3358
 * Callers:
 *     NtGdiOpenDCW @ 0x1C005DBC0 (NtGdiOpenDCW.c)
 *     NtGdiCreateMetafileDC @ 0x1C00A32F0 (NtGdiCreateMetafileDC.c)
 * Callees:
 *     _GetDCEx @ 0x1C0047DC0 (_GetDCEx.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C004CB60 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     GreCreateDisplayDC @ 0x1C004DC90 (GreCreateDisplayDC.c)
 */

__int64 __fastcall UserGetDesktopDC(unsigned int a1, int a2, int a3)
{
  HDEV v6; // rbp
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 DisplayDC; // rax
  __int64 v15; // rbx
  _QWORD *v17; // rcx
  int v18; // [rsp+40h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v18);
  v6 = *(HDEV *)(gpDispInfo + 40);
  if ( a3
    && a1 != 2
    && (*((_DWORD *)gptiCurrent + 122) & 0x20000000) != 0
    && *(_DWORD *)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 53) + 768LL) + 24LL) & 1 )
  {
    v17 = *(_QWORD **)(*(_QWORD *)(*((_QWORD *)gptiCurrent + 57) + 8LL) + 24LL);
    if ( v17 )
      v17 = (_QWORD *)*v17;
    if ( !ValidateHwndEx((__int64)v17, 1, 0) )
      goto LABEL_16;
  }
  CurrentThread = KeGetCurrentThread();
  if ( a1 || PsIsSystemThread(CurrentThread) || PsGetThreadProcess(CurrentThread) == gpepCSRSS )
  {
    DisplayDC = GreCreateDisplayDC(v6, a1, a2 != 0);
    goto LABEL_11;
  }
  v13 = *((_QWORD *)gptiCurrent + 57);
  if ( v13 )
  {
    DisplayDC = GetDCEx(*(_QWORD **)(*(_QWORD *)(v13 + 8) + 24LL), 0LL, 2155872259LL, v12);
LABEL_11:
    v15 = DisplayDC;
    goto LABEL_12;
  }
LABEL_16:
  v15 = 0LL;
LABEL_12:
  if ( !v18 )
    UserSessionSwitchLeaveCrit(v10, v9, v11, v12);
  return v15;
}
