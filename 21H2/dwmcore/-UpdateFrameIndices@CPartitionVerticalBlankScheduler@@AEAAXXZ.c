/*
 * XREFs of ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180078D88
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18007A020 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?Clear@CFrameInfo@@QEAAXXZ @ 0x18007CA98 (-Clear@CFrameInfo@@QEAAXXZ.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::UpdateFrameIndices(CPartitionVerticalBlankScheduler *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  CFrameInfo *v4; // rcx

  v1 = *((unsigned int *)this + 1124);
  v3 = ((_BYTE)v1 + 1) & 0xF;
  if ( *((_DWORD *)this + 1127) == (_DWORD)v3 )
    *((_DWORD *)this + 1127) = -1;
  if ( *((_DWORD *)this + 1126) == (_DWORD)v3 )
    *((_DWORD *)this + 1126) = -1;
  *((_DWORD *)this + 1124) = v3;
  *((_DWORD *)this + 1125) = v1;
  v4 = (CPartitionVerticalBlankScheduler *)((char *)this + 272 * v3 + 144);
  *((_QWORD *)this + 564) = v4;
  *((_QWORD *)this + 565) = (char *)this + 272 * v1 + 144;
  CFrameInfo::Clear(v4);
  *(_BYTE *)(*((_QWORD *)this + 564) + 224LL) = 0;
  *(_QWORD *)(*((_QWORD *)this + 564) + 232LL) = 0LL;
  *(_BYTE *)(*((_QWORD *)this + 564) + 240LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 564) + 242LL) = 0;
  *(_BYTE *)(*((_QWORD *)this + 564) + 241LL) = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qqqq_EventWriteTransfer(
      0,
      (unsigned int)&EVTDESC_SCHEDULE_UPDATE_FRAME_INDEXES,
      *((_DWORD *)this + 1125),
      *((_DWORD *)this + 1124),
      *((_DWORD *)this + 1127),
      *((_DWORD *)this + 1126));
}
