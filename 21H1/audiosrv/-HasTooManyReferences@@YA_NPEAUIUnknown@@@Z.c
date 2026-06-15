/*
 * XREFs of ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x180044A98
 * Callers:
 *     ?get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z @ 0x180044980 (-get_AudioSession@CVADServer@@UEAAJPEAPEAVCServerAudioSessionControl@@@Z.c)
 *     ?GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixProxy@@@Z @ 0x1800F1B70 (-GetProcessSubmixById@CProcessSubmixManager@@UEAAJPEAVCAppSubmixClient@@_JPEAPEAUIProcessSubmixP.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall HasTooManyReferences(struct IUnknown *a1)
{
  unsigned int v2; // ebx

  v2 = ((__int64 (__fastcall *)(struct IUnknown *))a1->lpVtbl->AddRef)(a1);
  ((void (__fastcall *)(struct IUnknown *))a1->lpVtbl->Release)(a1);
  return v2 >= 0x3FFFFFFF;
}
