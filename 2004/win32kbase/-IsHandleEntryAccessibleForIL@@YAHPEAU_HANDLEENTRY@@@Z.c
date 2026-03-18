/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0094D44
 * Callers:
 *     ValidateHandleSecure @ 0x1C0094C80 (ValidateHandleSecure.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     CheckAccessEx @ 0x1C0095808 (CheckAccessEx.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C00ADC64 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v9; // cx
  PVOID *v10; // rbx
  __int64 v12; // rbx
  __int64 v13; // rdx
  _BYTE v14[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14LL, a2, a3, a4);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a1 - qword_1C024AD48) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v7);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v9 = *((_WORD *)&unk_1C02056CC + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v9 & 2) != 0 )
  {
    v10 = (PVOID *)v5[v6 + 1];
  }
  else
  {
    if ( (v9 & 1) == 0 )
      return 1LL;
    v12 = v5[v6 + 1];
    if ( !v12 )
      return 1LL;
    v10 = *(PVOID **)(v12 + 416);
  }
  if ( !v10
    || *v10 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 880, v10 + 110, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v14);
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process);
  UserSetLastError(5LL, v13);
  return 0LL;
}
