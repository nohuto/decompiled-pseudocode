/*
 * XREFs of PoEnergyContextStart @ 0x14062F73C
 * Callers:
 *     PspInsertThread @ 0x1406867E0 (PspInsertThread.c)
 *     PopEtInit @ 0x140A70A24 (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402111E0 (ExAcquireRundownProtection_0.c)
 *     KiUnstackDetachProcess @ 0x140268320 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x1402D6FA0 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x14062F82C (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rbp
  char v3; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  int ProcessAppId; // ebx
  _OWORD v7[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 2280);
  v3 = 0;
  memset(v7, 0, sizeof(v7));
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v7);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess((__int64)v7, 0);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
