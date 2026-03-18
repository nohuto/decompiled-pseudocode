/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C0050710
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C00DE140 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C012726C (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C00AFD88 && !byte_1C00AFD89 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C00AFD98 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C00AFD98 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C00AFD98 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C00AFD98 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C00AFD90 + 72), 0);
    _InterlockedExchange64(&qword_1C00AFA50, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
