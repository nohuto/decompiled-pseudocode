/*
 * XREFs of ?OpenRenderFence@CD3DDevice@@QEBAPEAXXZ @ 0x18008D020
 * Callers:
 *     ??$_Emplace_back_with_unused_capacity@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@AEAAAEAVAdapterInfo@CGlobalSurfaceManager@@AEAU_LUID@@@Z @ 0x18008CF18 (--$_Emplace_back_with_unused_capacity@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V.c)
 *     ??$_Emplace_reallocate@AEAU_LUID@@@?$vector@VAdapterInfo@CGlobalSurfaceManager@@V?$allocator@VAdapterInfo@CGlobalSurfaceManager@@@std@@@std@@QEAAPEAVAdapterInfo@CGlobalSurfaceManager@@QEAV23@AEAU_LUID@@@Z @ 0x1800CF6C8 (--$_Emplace_reallocate@AEAU_LUID@@@-$vector@VAdapterInfo@CGlobalSurfaceManager@@V-$allocator@VAd.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

HANDLE __fastcall CD3DDevice::OpenRenderFence(CD3DDevice *this)
{
  HANDLE CurrentProcess; // rax
  void *v3; // rbx
  void *v4; // rdi
  HANDLE v5; // rax
  signed int LastError; // eax
  HANDLE TargetHandle; // [rsp+50h] [rbp+8h] BYREF

  TargetHandle = 0LL;
  SetLastError(0);
  CurrentProcess = GetCurrentProcess();
  v3 = (void *)*((_QWORD *)this + 122);
  v4 = CurrentProcess;
  v5 = GetCurrentProcess();
  if ( !DuplicateHandle(v5, v3, v4, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    if ( LastError >= 0 )
      LastError = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(2291662851LL, 0LL, 0, LastError, 0xF0u, 0LL);
  }
  return TargetHandle;
}
