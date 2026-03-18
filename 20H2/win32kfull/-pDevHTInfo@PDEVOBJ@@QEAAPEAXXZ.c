/*
 * XREFs of ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1C006D308
 * Callers:
 *     EngHTBlt @ 0x1C006C950 (EngHTBlt.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1C0072FE0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ @ 0x1C0100538 (-bCreateHalftoneBrushes@PDEVOBJ@@QEAAHXZ.c)
 *     ?bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOBJ@@K@Z@Z @ 0x1C010E424 (-bGetRealizedBrush@@YAHPEAVBRUSH@@PEAVEBRUSHOBJ@@P6AHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@33PEAU_XLATEOB.c)
 *     ?bDisableHalftone@PDEVOBJ@@QEAAHXZ @ 0x1C0117328 (-bDisableHalftone@PDEVOBJ@@QEAAHXZ.c)
 *     GreCreateHalftonePalette @ 0x1C02B635C (GreCreateHalftonePalette.c)
 * Callees:
 *     HT_DestroyDeviceHalftoneInfo @ 0x1C0117418 (HT_DestroyDeviceHalftoneInfo.c)
 */

void *__fastcall PDEVOBJ::pDevHTInfo(PDEVOBJ *this)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v7; // rbx
  _QWORD *v9; // rdi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v12; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  if ( (unsigned __int8)KeIsAttachedProcess(this) )
  {
    CurrentProcess = PsGetCurrentProcess(v4, v3, v5);
    ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess);
    CurrentThreadProcess = PsGetCurrentThreadProcess(v12);
    if ( ProcessSessionId != (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess) )
      return *(void **)(*(_QWORD *)this + 1512LL);
  }
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
  if ( !ThreadWin32Thread )
    return *(void **)(*(_QWORD *)this + 1512LL);
  v7 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread || !*(_DWORD *)(v7 + 104) && !*(_DWORD *)(v7 + 108) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( !PDEVOBJ::bAllowShareAccess(this) )
    return *(void **)(*(_QWORD *)this + 1512LL);
  if ( *(_DWORD *)(v7 + 296) != gcModeChanges )
  {
    v9 = *(_QWORD **)(v7 + 288);
    if ( v9 )
    {
      bDeletePalette(*v9, 0LL, 0LL);
      HT_DestroyDeviceHalftoneInfo(v9);
      *(_QWORD *)(v7 + 288) = 0LL;
    }
  }
  return *(void **)(v7 + 288);
}
