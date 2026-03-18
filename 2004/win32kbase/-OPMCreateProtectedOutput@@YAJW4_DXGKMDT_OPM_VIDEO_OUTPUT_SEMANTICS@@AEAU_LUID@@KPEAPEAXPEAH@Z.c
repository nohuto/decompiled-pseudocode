/*
 * XREFs of ?OPMCreateProtectedOutput@@YAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C7648
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C00C73A0 (DrvCreatePhysicalMonitorObjects.c)
 *     NtGdiCreateOPMProtectedOutput @ 0x1C0143F00 (NtGdiCreateOPMProtectedOutput.c)
 * Callees:
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C00C7680 (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 */

__int64 __fastcall OPMCreateProtectedOutput(COPM *a1, struct _LUID *a2, unsigned int a3, void **a4, int *a5)
{
  int ProtectedOutput; // eax
  unsigned int v6; // ecx

  ProtectedOutput = COPM::CreateProtectedOutput(a1, (enum _DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS)a1, a2, a3, a4, a5);
  v6 = 0;
  if ( ProtectedOutput < 0 )
    return (unsigned int)ProtectedOutput;
  return v6;
}
