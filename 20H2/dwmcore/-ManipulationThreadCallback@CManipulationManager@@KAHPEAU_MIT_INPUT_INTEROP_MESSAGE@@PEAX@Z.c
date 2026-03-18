/*
 * XREFs of ?ManipulationThreadCallback@CManipulationManager@@KAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x18001D420
 * Callers:
 *     <none>
 * Callees:
 *     ?s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z @ 0x18001D4A8 (-s_HoverHittestRequest@CInputManager@@SAHPEBU_HOVER_INPUT_INFO@@@Z.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18005B698 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18005B6FC (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1802237DC (-ProcessManipulationThreadCallbackInput@CManipulationManager@@KAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 */

__int64 __fastcall CManipulationManager::ManipulationThreadCallback(
        struct _MIT_INPUT_INTEROP_MESSAGE *a1,
        CManipulationManager *a2)
{
  unsigned int v3; // ebx
  unsigned int v5; // eax
  _BYTE v7[48]; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  if ( !*(_DWORD *)a1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion(
      (InputTraceLogging::PerfRegion *)v7,
      "GT:MIT_INPUT_INTEROP_MTCALLBACK",
      0LL);
    v5 = CManipulationManager::ProcessManipulationThreadCallbackInput(
           (struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8),
           a2);
    goto LABEL_4;
  }
  if ( *(_DWORD *)a1 == 1 )
  {
    InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v7, "GT:MIT_INPUT_INTEROP_HOVER", 0LL);
    v5 = CInputManager::s_HoverHittestRequest((struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a1 + 8));
LABEL_4:
    v3 = v5;
    InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v7);
  }
  return v3;
}
