/*
 * XREFs of ??0VIDSCH_PROCESS_ADAPTER_INFO@@QEAA@XZ @ 0x1C00104B4
 * Callers:
 *     VidSchiOpenProcessAdapterInfo @ 0x1C00686A4 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     memset @ 0x1C00185C0 (memset.c)
 */

VIDSCH_PROCESS_ADAPTER_INFO *__fastcall VIDSCH_PROCESS_ADAPTER_INFO::VIDSCH_PROCESS_ADAPTER_INFO(
        VIDSCH_PROCESS_ADAPTER_INFO *this)
{
  *(_DWORD *)this = 0;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 20) = 0;
  memset((char *)this + 88, 0, 0x90uLL);
  return this;
}
