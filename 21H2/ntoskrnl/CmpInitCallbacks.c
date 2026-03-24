/*
 * XREFs of CmpInitCallbacks @ 0x1407D3B70
 * Callers:
 *     CmInitSystem1 @ 0x140A59F78 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14027C520 (RtlInitUnicodeString.c)
 *     RtlRaiseStatus @ 0x14029AF80 (RtlRaiseStatus.c)
 */

union _SLIST_HEADER *CmpInitCallbacks()
{
  union _SLIST_HEADER *result; // rax

  CmpCallBackCount = 0;
  CmpCallbackListLock = 0LL;
  CmpContextListLock = 0LL;
  CallbackListDeleteEvent = 0LL;
  qword_140C48488 = (__int64)&CallbackListHead;
  CallbackListHead = (__int64)&CallbackListHead;
  RtlInitUnicodeString(&CmLegacyAltitude, L"425000");
  CmpCallbackCookie = MEMORY[0xFFFFF78000000014];
  result = &CmpCallbackContextSList;
  if ( ((unsigned __int8)&CmpCallbackContextSList & 0xF) != 0 )
    RtlRaiseStatus(0x80000002);
  CmpCallbackContextSList = 0LL;
  return result;
}
