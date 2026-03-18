/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C0051720
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00E20CC (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C011F19C (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C00B1E88 && !byte_1C00B1E89 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00B1E98 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C00B1E98 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C00B1E98 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C00B1E98 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C00B1E90 + 72), 0);
    _InterlockedExchange64(&qword_1C00B1B50, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
