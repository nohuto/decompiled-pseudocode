/*
 * XREFs of KiIntSteerInit @ 0x140A4BC2C
 * Callers:
 *     KeInitSystem @ 0x140A4ABFC (KeInitSystem.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x140219190 (KeQueryActiveProcessorCountEx.c)
 *     KeAddProcessorAffinityEx @ 0x140287E00 (KeAddProcessorAffinityEx.c)
 *     HviIsAnyHypervisorPresent @ 0x1403A5150 (HviIsAnyHypervisorPresent.c)
 *     HviIsXboxNanovisorPresent @ 0x1403CDCD4 (HviIsXboxNanovisorPresent.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 KiIntSteerInit()
{
  bool v0; // bl
  __int64 result; // rax
  int v2; // [rsp+40h] [rbp+8h] BYREF

  v0 = 0;
  KiIntSteerMask = 1310721;
  KiIntTrackRootCount = 0;
  qword_140C2AF78 = (__int64)&KiIntTrackRootList;
  KiIntTrackRootList = (__int64)&KiIntTrackRootList;
  KiIntTrackSpinlock = 0LL;
  memset(&unk_140C2AFA4, 0, 0xA4uLL);
  KeAddProcessorAffinityEx(&KiIntSteerMask, 0);
  KiIntSteerAffinitizedInterrupts[0] = 1310721;
  memset(&unk_140C2B064, 0, 0xA4uLL);
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
