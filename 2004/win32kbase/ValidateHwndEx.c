/*
 * XREFs of ValidateHwndEx @ 0x1C0091FF0
 * Callers:
 *     UserIsWindowGdiScaled @ 0x1C0031F00 (UserIsWindowGdiScaled.c)
 *     UserGetDesktopDC @ 0x1C0040DE8 (UserGetDesktopDC.c)
 *     NtUserGetDC @ 0x1C0090AC0 (NtUserGetDC.c)
 *     ValidateHwnd @ 0x1C0091FD0 (ValidateHwnd.c)
 *     ??0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z @ 0x1C01830B0 (--0CInputDest@@QEAA@PEAUHWND__@@W4INPUT_DESTINATION_WINDOW_TYPE@@W4HandleValidationType@0@@Z.c)
 *     ?IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z @ 0x1C0183428 (-IsEqualByWindowHandle@CInputDest@@QEBA_NPEAXW4HandleValidationType@1@@Z.c)
 *     ?SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z @ 0x1C0183598 (-SetupFromInputDestAndWindow@CInputDest@@QEAA_NAEBV1@PEAUHWND__@@W4HandleValidationType@1@@Z.c)
 *     ?GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z @ 0x1C0193BCC (-GetPointerTransform@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GIPEAUtagINPUT_TRANSFORM@@@Z.c)
 * Callees:
 *     IsHandleEntrySecure @ 0x1C003D94C (IsHandleEntrySecure.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C00ADC64 (EtwTraceUIPIHandleValidationError.c)
 *     IsGetDesktopViewSupported @ 0x1C00B0738 (IsGetDesktopViewSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ValidateHwndEx(__int64 a1, int a2, int a3)
{
  int v4; // r10d
  char *v7; // rsi
  __int64 v8; // rcx
  __int64 *v9; // r12
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v15; // rbx
  __int64 v16; // rbp
  __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v20; // edx
  unsigned int v21; // r8d
  int v22; // r9d
  int v23; // r10d
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v26; // rcx
  __int64 CurrentThreadProcess; // rax

  v4 = (unsigned __int16)a1;
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_25;
  v7 = (char *)qword_1C024AD48 + (unsigned int)(unsigned __int16)a1 * dword_1C024AD50;
  v8 = 3 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C024AD50) >> 5);
  v9 = (__int64 *)((char *)gpKernelHandleTable + 24 * ((__int64)(unsigned int)(v4 * dword_1C024AD50) >> 5));
  if ( WORD1(a1) != *((_WORD *)v7 + 13) )
  {
    v8 = 0xFFFFLL;
    if ( WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
      goto LABEL_25;
  }
  if ( v7[24] != 1 )
    goto LABEL_25;
  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v13, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v26),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v11 = *ThreadWin32Thread;
  }
  v15 = *v9;
  if ( *v9
    && (v16 = *(_QWORD *)(v15 + 16), (v7[25] & 1) == 0)
    && (!a2
     || v16 == v11
     || *(_QWORD *)(v15 + 24) == *(_QWORD *)(v11 + 448)
     || (*(_DWORD *)(v11 + 480) & 4) != 0
     || (int)IsGetDesktopViewSupported() >= 0
     && qword_1C0251C68
     && ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_1C0251C68)(*(_QWORD *)(v11 + 416), *(_QWORD *)(v15 + 24))) )
  {
    if ( a3 && *(_DWORD *)(*(_QWORD *)(v16 + 416) + 888LL) != 1 )
      a3 = 0;
    if ( !gbValidateHandleForIL
      || !v16
      || (v18 = *(_QWORD *)(v16 + 416), v19 = *(_QWORD *)(v11 + 416), !UIPrivelegeIsolation::fEnforce)
      || (v20 = *(_DWORD *)(v19 + 880), v21 = *(_DWORD *)(v18 + 880), v20 > v21)
      || v20 == v21
      && ((v22 = *(_DWORD *)(v19 + 884), v23 = *(_DWORD *)(v18 + 884), v22 == v23) || v22 == -1 || v23 == -1)
      || a3
      && v20 == v21
      && (unsigned __int8)SeIsParentOfChildAppContainer(
                            (unsigned int)gSessionId,
                            *(unsigned int *)(v19 + 884),
                            *(unsigned int *)(v18 + 884))
      || **(PVOID **)(v16 + 416) == gpepCSRSS )
    {
      if ( (*(_DWORD *)(v11 + 480) & 0x20000000) != 0
        && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 416) + 768LL) + 24LL) & 1) != 0
        && !(unsigned int)IsHandleEntrySecure(a1, (__int64)v7) )
      {
        UserSetLastError(1400LL);
        return 0LL;
      }
      return v15;
    }
    else
    {
      EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v11 + 416));
      UserSetLastError(5LL);
      return 0LL;
    }
  }
  else
  {
LABEL_25:
    UserSetLastError(1400LL);
    return 0LL;
  }
}
