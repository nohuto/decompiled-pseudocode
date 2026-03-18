/*
 * XREFs of KiIntSteerInit @ 0x140A40168
 * Callers:
 *     KeInitSystem @ 0x140A3F138 (KeInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140277170 (KeAddProcessorAffinityEx.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A2600 (HviIsAnyHypervisorPresent.c)
 *     HviIsXboxNanovisorPresent @ 0x1403CA2D4 (HviIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 KiIntSteerInit()
{
  bool v0; // bl
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KiIntSteerMask = 1310721;
  KiIntTrackRootCount = 0;
  qword_140C2B0B8 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (ULONG_PTR)&KiIntTrackRootList;
  KiIntTrackSpinlock = 0LL;
  memset(&unk_140C2B0E4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_140C2B1A4, 0, 0xA4uLL);
  v2 = 0;
  ((void (__fastcall *)(__int64, __int64, int *, int *))off_140C00A68[0])(39LL, 4LL, &KiInterruptControllerInfo, &v2);
  if ( !KiInterruptSteeringDisabled
    && (unsigned __int16)KiActiveGroups <= 1u
    && KeQueryActiveProcessorCountEx(0) >= 2
    && !(_BYTE)dword_140CFB19C
    && !HviIsXboxNanovisorPresent() )
  {
    if ( HvlHypervisorConnected )
    {
      if ( (HvlpFlags & 2) != 0 && (HvlpRootFlags & 0x400) == 0 )
        goto LABEL_8;
    }
    else if ( !HviIsAnyHypervisorPresent() )
    {
LABEL_8:
      v0 = KeQueryActiveProcessorCountEx(0) <= 0x10;
    }
  }
  result = 0LL;
  KiIntSteerEnabled = v0;
  return result;
}
