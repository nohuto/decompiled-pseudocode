/*
 * XREFs of ?GetCpuVa@VIDMM_SCH_LOG@@QEAAPEAXXZ @ 0x1C0047868
 * Callers:
 *     VidSchiSerializeSchedulingLog @ 0x1C00F61F8 (VidSchiSerializeSchedulingLog.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDMM_SCH_LOG::GetCpuVa(VIDMM_SCH_LOG *this)
{
  return (void *)*((_QWORD *)this + 6);
}
