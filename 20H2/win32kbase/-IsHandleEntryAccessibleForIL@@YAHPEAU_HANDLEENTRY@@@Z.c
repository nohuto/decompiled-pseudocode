/*
 * XREFs of ?IsHandleEntryAccessibleForIL@@YAHPEAU_HANDLEENTRY@@@Z @ 0x1C0056464
 * Callers:
 *     ValidateHandleSecure @ 0x1C00563A0 (ValidateHandleSecure.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0045F40 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     CheckAccessEx @ 0x1C0056E08 (CheckAccessEx.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0077624 (EtwTraceUIPIHandleValidationError.c)
 */

__int64 __fastcall IsHandleEntryAccessibleForIL(struct _HANDLEENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v5; // rsi
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rbp
  __int16 v12; // cx
  PVOID *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // rbx
  __int64 v19; // rdx
  _BYTE v20[24]; // [rsp+20h] [rbp-18h] BYREF

  GetDomainLockRef(14LL, a2, a3, a4);
  v5 = gpKernelHandleTable;
  v6 = 3LL * (unsigned int)((a1 - qword_1C0248D48) >> 5);
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(v8, v7, v9, v10);
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v12 = *((_WORD *)&unk_1C020365C + 12 * *((unsigned __int8 *)a1 + 24));
  if ( (v12 & 2) != 0 )
  {
    v13 = (PVOID *)v5[v6 + 1];
  }
  else
  {
    if ( (v12 & 1) == 0 )
      return 1LL;
    v18 = v5[v6 + 1];
    if ( !v18 )
      return 1LL;
    v13 = *(PVOID **)(v18 + 424);
  }
  if ( !v13
    || *v13 == gpepCSRSS
    || (unsigned __int8)CheckAccessEx((char *)CurrentProcessWin32Process + 880, v13 + 110, 0LL) )
  {
    return 1LL;
  }
  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)v20,
    v14,
    v15,
    v16);
  EtwTraceUIPIHandleValidationError(CurrentProcessWin32Process);
  UserSetLastError(5LL, v19);
  return 0LL;
}
