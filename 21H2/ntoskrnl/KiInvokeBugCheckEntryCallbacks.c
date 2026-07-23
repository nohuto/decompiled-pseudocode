/*
 * XREFs of KiInvokeBugCheckEntryCallbacks @ 0x1405189E8
 * Callers:
 *     KeBugCheck2 @ 0x140516D10 (KeBugCheck2.c)
 *     KiAttemptBugcheckRecovery @ 0x140524FC4 (KiAttemptBugcheckRecovery.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     KeValidateBugCheckCallbackRecord @ 0x140517DD8 (KeValidateBugCheckCallbackRecord.c)
 */

char __fastcall KiInvokeBugCheckEntryCallbacks(unsigned int a1, __int64 a2, unsigned int a3)
{
  _UNKNOWN **v3; // rax
  PVOID *v7; // rbx
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  PVOID *v10; // [rsp+88h] [rbp+20h] BYREF

  v3 = &retaddr;
  v7 = (PVOID *)KeBugCheckReasonCallbackListHead;
  if ( KeBugCheckReasonCallbackListHead && qword_140C32128 )
  {
    v10 = &KeBugCheckReasonCallbackListHead;
    while ( v7 != &KeBugCheckReasonCallbackListHead )
    {
      LOBYTE(v3) = KeValidateBugCheckCallbackRecord((__int64)v7, a1, &v10);
      if ( (_BYTE)v3 )
      {
        LOBYTE(v3) = ((__int64 (__fastcall *)(_QWORD, PVOID *, __int64, _QWORD))v7[2])(a1, v7, a2, a3);
        *((_BYTE *)v7 + 44) = 3;
      }
      else if ( !v10 )
      {
        return (char)v3;
      }
      v7 = (PVOID *)*v7;
    }
  }
  return (char)v3;
}
