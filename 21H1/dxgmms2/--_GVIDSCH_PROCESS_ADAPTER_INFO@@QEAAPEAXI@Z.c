/*
 * XREFs of ??_GVIDSCH_PROCESS_ADAPTER_INFO@@QEAAPEAXI@Z @ 0x1C0014088
 * Callers:
 *     VidSchiCloseProcessAdapterInfo @ 0x1C007F5A8 (VidSchiCloseProcessAdapterInfo.c)
 *     VidSchiOpenProcessAdapterInfo @ 0x1C007F764 (VidSchiOpenProcessAdapterInfo.c)
 * Callees:
 *     <none>
 */

void *__fastcall VIDSCH_PROCESS_ADAPTER_INFO::`scalar deleting destructor'(VIDSCH_PROCESS_ADAPTER_INFO *this)
{
  char *v2; // rcx
  void *result; // rax

  v2 = (char *)*((_QWORD *)this + 1);
  if ( v2 != (char *)this + 16 && v2 )
    ExFreePoolWithTag(v2, 0);
  *((_QWORD *)this + 1) = 0LL;
  result = this;
  *((_DWORD *)this + 20) = 0;
  return result;
}
