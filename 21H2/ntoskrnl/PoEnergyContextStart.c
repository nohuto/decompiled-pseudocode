/*
 * XREFs of PoEnergyContextStart @ 0x140697F38
 * Callers:
 *     PspInsertThread @ 0x140649028 (PspInsertThread.c)
 *     PopEtInit @ 0x140A6D9A4 (PopEtInit.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140207000 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14025C2E0 (KiStackAttachProcess.c)
 *     ExReleaseRundownProtection_0 @ 0x14027C4F0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14027C9B0 (ExAcquireRundownProtection_0.c)
 *     __security_check_cookie @ 0x1403D0460 (__security_check_cookie.c)
 *     PopEtGetProcessAppId @ 0x140698028 (PopEtGetProcessAppId.c)
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
      if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(BugCheckParameter1 + 1112)) )
        return (unsigned int)-1073741558;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)v8, v5);
      v3 = 1;
    }
    ProcessAppId = PopEtGetProcessAppId(BugCheckParameter1, v1 + 448);
    if ( ProcessAppId >= 0 )
      ProcessAppId = 0;
    if ( v3 )
    {
      KiUnstackDetachProcess((__int64)v8, 0);
      ExReleaseRundownProtection_0(v4);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)ProcessAppId;
}
