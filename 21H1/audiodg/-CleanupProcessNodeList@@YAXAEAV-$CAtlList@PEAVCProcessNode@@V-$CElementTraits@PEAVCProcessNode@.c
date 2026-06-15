/*
 * XREFs of ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14003BF94
 * Callers:
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@AEAV?$unique_ptr@VCPipeInstance@@U?$default_delete@VCPipeInstance@@@wistd@@@wistd@@@Z @ 0x14000E150 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x14001F470 (_guard_dispatch_icall_nop.c)
 *     ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x14003D21C (-RemoveHead@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEA.c)
 */

void __fastcall CleanupProcessNodeList(__int64 a1)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rax

  while ( *(_QWORD *)(a1 + 16) )
  {
    v2 = (void (__fastcall ***)(_QWORD, __int64))ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(a1);
    if ( v2 )
      (**v2)(v2, 1LL);
  }
}
