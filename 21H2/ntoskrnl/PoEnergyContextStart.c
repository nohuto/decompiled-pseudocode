/*
 * XREFs of PoEnergyContextStart @ 0x140673B4C
 * Callers:
 *     PspInsertThread @ 0x140701218 (PspInsertThread.c)
 *     PopEtInit @ 0x140B27E7C (PopEtInit.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KiUnstackDetachProcess @ 0x1402D0930 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14030D5C0 (KiStackAttachProcess.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x140673C3C (PopEtGetProcessAppId.c)
 */

__int64 __fastcall PoEnergyContextStart(ULONG_PTR BugCheckParameter1)
{
  __int64 v1; // rbp
  char v3; // si
  struct _EX_RUNDOWN_REF *v4; // rdi
  _DWORD *v5; // r9
  int ProcessAppId; // ebx
  _OWORD v8[3]; // [rsp+20h] [rbp-58h] BYREF

  v1 = *(_QWORD *)(BugCheckParameter1 + 2280);
  v3 = 0;
  memset(v8, 0, sizeof(v8));
  if ( PopEtGlobals )
  {
    v4 = (struct _EX_RUNDOWN_REF *)(BugCheckParameter1 + 1112);
    if ( KeGetCurrentThread()->ApcState.Process != (_KPROCESS *)BugCheckParameter1 )
    {
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v8, v5);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess((__int64)v8, 0LL);
      ExReleaseRundownProtection(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
