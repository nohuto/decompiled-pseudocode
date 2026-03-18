/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@SAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x180016DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x180016E3C (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18002B370 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18002B3D4 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18017E1F4 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CManipulationManager *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  const char *v7; // rdx
  _BYTE v8[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)a1 )
  {
    v7 = "GT:MIT_INPUT_INTEROP_MTCALLBACK";
LABEL_9:
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, v7, 0LL);
    v5 = CManipulationManager::ProcessManipulationThreadCallbackInput(
           (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
           a2);
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 != 1 )
  {
    if ( *(_DWORD *)a1 != 2 )
      return v3;
    v7 = "GT:MIT_INPUT_INTEROP_INERTIA";
    goto LABEL_9;
  }
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v8, "GT:MIT_INPUT_INTEROP_HOVER", 0LL);
  v5 = CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_4:
  v3 = v5;
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v8);
  return v3;
}
