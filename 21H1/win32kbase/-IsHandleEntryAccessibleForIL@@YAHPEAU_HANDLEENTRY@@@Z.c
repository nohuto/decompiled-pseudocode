/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0070614
 * Callers:
 *     ValidateHandleSecure @ 0x1C0070550 (ValidateHandleSecure.c)
 * Callees:
 *     CheckAccessEx @ 0x1C00713D8 (CheckAccessEx.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0084930 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C008C01C (UserSetLastError.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C009FF74 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1)
{
  _QWORD *v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // rcx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v6; // cx
  PVOID *v7; // rbx
  __int64 v9; // rbx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14LL);
  v2 = gpKernelHandleTable;
  v3 = 3LL * (unsigned int)((a1 - qword_1C0250D48) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v4);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v6 = *((_WORD *)&unk_1C020B6DC + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v6 & 2) != 0 )
  {
    v7 = (PVOID *)v2[v3 + 1];
  }
  else
  {
    if ( (v6 & 1) == 0 )
      return 1LL;
    v9 = v2[v3 + 1];
    if ( !v9 )
      return 1LL;
    v7 = *(PVOID **)(v9 + 416);
  }
  if ( !v7
    || *v7 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 880, v7 + 110, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v10);
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process);
  UserSetLastError(5LL);
  return 0LL;
}
