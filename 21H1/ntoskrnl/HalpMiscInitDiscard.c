/*
 * XREFs of HalpMiscInitDiscard @ 0x140A6951C
 * Callers:
 *     HalpMiscInitSystem @ 0x14099C460 (HalpMiscInitSystem.c)
 * Callees:
 *     KeRegisterBugCheckReasonCallback @ 0x14039B140 (KeRegisterBugCheckReasonCallback.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 */

__int64 HalpMiscInitDiscard()
{
  ULONG_PTR MajorVersion; // rcx

  MajorVersion = KeGetCurrentPrcb()->MajorVersion;
  if ( (_WORD)MajorVersion != 1 )
    KeBugCheckEx(0x79u, 1uLL, MajorVersion, 1uLL, 0LL);
  HalpMiscCallbackRecord.State = 0;
  off_140C00A68[0] = (__int64 (__fastcall *)())HaliQuerySystemInformation;
  off_140C00A70[0] = (__int64 (__fastcall *)())HalpSetSystemInformation;
  KeRegisterBugCheckReasonCallback(
    &HalpMiscCallbackRecord,
    (PKBUGCHECK_REASON_CALLBACK_ROUTINE)HalpMiscBugCheckCallback,
    KbCallbackReserved1,
    (PUCHAR)"HAL");
  if ( HalpMiscDebugBreakRequested )
    __debugbreak();
  return 0LL;
}
