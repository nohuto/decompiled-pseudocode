/*
 * XREFs of sub_1C0041764 @ 0x1C0041764
 * Callers:
 *     sub_1C0041468 @ 0x1C0041468 (sub_1C0041468.c)
 * Callees:
 *     <none>
 */

struct _KBUGCHECK_REASON_CALLBACK_RECORD *__fastcall sub_1C0041764(PKBUGCHECK_REASON_CALLBACK_ROUTINE CallbackRoutine)
{
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *PoolWithTag; // rax
  struct _KBUGCHECK_REASON_CALLBACK_RECORD *v3; // rbx

  PoolWithTag = (struct _KBUGCHECK_REASON_CALLBACK_RECORD *)ExAllocatePoolWithTag(PoolType, 0x30uLL, 0x42554855u);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag->Entry = 0LL;
    *(_OWORD *)&PoolWithTag->CallbackRoutine = 0LL;
    *(_OWORD *)&PoolWithTag->Checksum = 0LL;
    if ( !KeRegisterBugCheckReasonCallback(PoolWithTag, CallbackRoutine, KbCallbackSecondaryDumpData, (PUCHAR)"USBHUB") )
    {
      ExFreePoolWithTag(v3, 0);
      return 0LL;
    }
  }
  return v3;
}
