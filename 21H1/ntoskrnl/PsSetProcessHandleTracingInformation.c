/*
 * XREFs of PsSetProcessHandleTracingInformation @ 0x1409032C8
 * Callers:
 *     NtSetInformationProcess @ 0x14069A210 (NtSetInformationProcess.c)
 *     ViSettingsEnableKernelHandleChecking @ 0x1409DD534 (ViSettingsEnableKernelHandleChecking.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140206420 (ExReleaseRundownProtection_0.c)
 *     ExDisableHandleTracing @ 0x1405ACD18 (ExDisableHandleTracing.c)
 *     ObReferenceProcessHandleTable @ 0x14061F2E4 (ObReferenceProcessHandleTable.c)
 *     ExEnableHandleTracing @ 0x140947D84 (ExEnableHandleTracing.c)
 */

__int64 __fastcall PsSetProcessHandleTracingInformation(struct _EX_RUNDOWN_REF *a1, __int64 a2)
{
  unsigned __int64 v4; // rax
  unsigned int v5; // ebx

  v4 = ObReferenceProcessHandleTable(a1);
  v5 = 0;
  if ( v4 )
  {
    if ( a2 )
      v5 = ExEnableHandleTracing(v4, *(unsigned int *)(a2 + 4));
    else
      ExDisableHandleTracing(v4);
    ExReleaseRundownProtection_0(a1 + 139);
  }
  else
  {
    return (unsigned int)-1073741558;
  }
  return v5;
}
