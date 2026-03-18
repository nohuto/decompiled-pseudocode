/*
 * XREFs of ?GetTargetId@IMonitorTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1800FA060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IMonitorTarget::GetTargetId(IMonitorTarget *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  *(_OWORD *)a2 = 0LL;
  *((_QWORD *)a2 + 2) = 0LL;
  *((_DWORD *)a2 + 6) = 0;
  return 2147500033LL;
}
