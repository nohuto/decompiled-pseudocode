/*
 * XREFs of PoEnergyContextStart @ 0x1406C69C8
 * Callers:
 *     PspInsertThread @ 0x1406F3184 (PspInsertThread.c)
 *     PopEtInit @ 0x140A69EB8 (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402068E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x14025E290 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402A88C0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x1406C6AB8 (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rbp
  char v3; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  _DWORD *v5; // r9
  int ProcessAppId; // ebx
  __int64 v7; // r8
  _DWORD *v8; // r9
  _OWORD v10[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 2280);
  v3 = 0;
  memset(v10, 0, sizeof(v10));
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v10, v5);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess((__int64)v10, 0LL, v7, v8);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
