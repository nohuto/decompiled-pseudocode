/*
 * XREFs of IoIs32bitProcess @ 0x1402021F0
 * Callers:
 *     IoIsInitiator32bitProcess @ 0x14036A730 (IoIsInitiator32bitProcess.c)
 *     FsRtlGetMarkHandleInfo @ 0x1404EADA8 (FsRtlGetMarkHandleInfo.c)
 *     EtwpGetScsiPassThroughCdb @ 0x1405A3624 (EtwpGetScsiPassThroughCdb.c)
 *     PiDqDispatch @ 0x1405D20D0 (PiDqDispatch.c)
 *     PiCMFastIoDeviceDispatch @ 0x1405D8130 (PiCMFastIoDeviceDispatch.c)
 *     WmipIoControl @ 0x140645B80 (WmipIoControl.c)
 *     WmipProbeWmiOpenGuidBlock @ 0x1406470C0 (WmipProbeWmiOpenGuidBlock.c)
 *     WmipProbeAndCaptureGuidObjectAttributes @ 0x140647178 (WmipProbeAndCaptureGuidObjectAttributes.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoIs32bitProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  unsigned __int64 Process; // rax
  __int64 v3; // rcx
  unsigned __int64 v5; // rax
  __int16 v6; // cx
  CCHAR ApcEnvironment; // al
  __int16 v8; // dx

  if ( !Irp )
  {
    if ( KeGetCurrentThread()->PreviousMode == 1 )
    {
      v5 = KeGetCurrentThread()->ApcState.Process[1].AffinityPadding[10];
      if ( v5 )
      {
        v6 = *(_WORD *)(v5 + 8);
        if ( v6 == 332 || v6 == 452 )
          return 1;
      }
    }
    return 0;
  }
  if ( Irp->RequestorMode != 1 )
    return 0;
  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) == 0 )
  {
    if ( Thread )
    {
      ApcEnvironment = Irp->ApcEnvironment;
      if ( !ApcEnvironment )
      {
        Process = (unsigned __int64)Thread->Process;
        goto LABEL_5;
      }
      if ( ApcEnvironment == 1 )
      {
        Process = (unsigned __int64)Thread->ApcState.Process;
        goto LABEL_5;
      }
    }
    return 0;
  }
  Process = Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL;
LABEL_5:
  if ( !Process )
    return 0;
  v3 = *(_QWORD *)(Process + 1408);
  if ( !v3 )
    return 0;
  v8 = *(_WORD *)(v3 + 8);
  return v8 == 332 || v8 == 452;
}
