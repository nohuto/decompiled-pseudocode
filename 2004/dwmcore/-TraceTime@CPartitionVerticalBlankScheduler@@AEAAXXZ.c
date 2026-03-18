/*
 * XREFs of ?TraceTime@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800DAA6C
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18005B890 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 * Callees:
 *     McTemplateU0xxxxx_EventWriteTransfer @ 0x180155CEC (McTemplateU0xxxxx_EventWriteTransfer.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::TraceTime(CPartitionVerticalBlankScheduler *this)
{
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0xxxxx_EventWriteTransfer(
      *((_QWORD *)this + 1991),
      (unsigned int)&EVTDESC_SCHEDULE_TIME,
      (unsigned __int64)(10000000 * (*((_QWORD *)this + 1990) % g_qpcFrequency.QuadPart)) / g_qpcFrequency.QuadPart
    + 10000000 * (*((_QWORD *)this + 1990) / g_qpcFrequency.QuadPart),
      (unsigned __int64)(10000000 * ((*((_QWORD *)this + 1990) - *((_QWORD *)this + 1989)) % g_qpcFrequency.QuadPart))
    / g_qpcFrequency.QuadPart
    + 10000000 * ((*((_QWORD *)this + 1990) - *((_QWORD *)this + 1989)) / g_qpcFrequency.QuadPart),
      *((_QWORD *)this + 1990),
      *((_QWORD *)this + 1991),
      *((_QWORD *)this + 1988));
}
