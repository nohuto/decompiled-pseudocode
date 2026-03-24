/*
 * XREFs of ?ProcessSurfaceUpdate@CGlobalCompositionSurfaceInfo@@UEAAJAEBUCSM_SURFACE_UPDATE@@@Z @ 0x18009D320
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer @ 0x1801F92F0 (McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdate(
        CGlobalCompositionSurfaceInfo *this,
        const struct CSM_SURFACE_UPDATE *a2)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0nxxxqqxqqqqqqqqx_EventWriteTransfer(
      *((_DWORD *)a2 + 7),
      (*((_DWORD *)a2 + 47) >> 2) & 1,
      *((_DWORD *)this + 64) >= 3,
      (_DWORD)a2 + 4,
      *((_QWORD *)a2 + 2),
      *((_DWORD *)a2 + 7));
  return CGlobalCompositionSurfaceInfo::ProcessSurfaceUpdateInternal(this, a2);
}
