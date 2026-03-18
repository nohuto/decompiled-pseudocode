/*
 * XREFs of SmKmEtwLogStoreRundown @ 0x1407B7FA8
 * Callers:
 *     SmEtwEnableCallback @ 0x1407B7F50 (SmEtwEnableCallback.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140210D20 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x140256DEC (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140256E28 (SmKmStoreRefFromStoreIndex.c)
 *     SmKmEtwLogStoreChange @ 0x14092D89C (SmKmEtwLogStoreChange.c)
 *     SmKmEtwLogStoreStats @ 0x14092D9AC (SmKmEtwLogStoreStats.c)
 */

void __fastcall SmKmEtwLogStoreRundown(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdi
  struct _EX_RUNDOWN_REF *v7; // rax

  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a2, i);
    v6 = v5;
    if ( v5 )
    {
      SmKmEtwLogStoreStats(a1, v5);
      SmKmEtwLogStoreChange(a1, v6, SmEventStoreRundown);
      v7 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a2, i & 0x3FF);
      ExReleaseRundownProtection_0(v7 + 1);
    }
  }
}
