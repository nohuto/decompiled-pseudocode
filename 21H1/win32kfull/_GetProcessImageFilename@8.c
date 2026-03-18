/*
 * XREFs of _GetProcessImageFilename@8 @ 0x15121A
 * Callers:
 *     _TraceChildWindowDpiTelemetry@12 @ 0x1519C8 (_TraceChildWindowDpiTelemetry@12.c)
 *     ?TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z @ 0x172453 (-TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     _GetProcessImageFileName@4 @ 0x1D1030 (_GetProcessImageFileName@4.c)
 */

int __fastcall GetProcessImageFilename(PVOID *a1, wchar_t **a2)
{
  int v2; // esi
  int ProcessImageFileName; // eax
  wchar_t *v5; // eax
  wchar_t *v6; // eax
  void *Handle; // [esp+8h] [ebp-4h] BYREF

  v2 = 0;
  Handle = 0;
  if ( ObOpenObjectByPointer(*a1, 0x200u, 0, 0x400u, (POBJECT_TYPE)PsProcessType, 0, &Handle) >= 0 )
  {
    ProcessImageFileName = GetProcessImageFileName(Handle);
    v2 = ProcessImageFileName;
    if ( ProcessImageFileName )
    {
      v5 = _wcsrchr(*(const wchar_t **)(ProcessImageFileName + 4), 0x5Cu);
      if ( v5 )
        v6 = v5 + 1;
      else
        v6 = *(wchar_t **)(v2 + 4);
      *a2 = v6;
    }
    ZwClose(Handle);
  }
  return v2;
}
