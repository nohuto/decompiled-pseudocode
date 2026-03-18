/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C0051660
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00E103C (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C011E01C (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C00B0E88 && !byte_1C00B0E89 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00B0E98 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C00B0E98 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C00B0E98 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C00B0E98 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C00B0E90 + 72), 0);
    _InterlockedExchange64(&qword_1C00B0B50, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
