/*
 * XREFs of HvResetDirtyData @ 0x1406F917C
 * Callers:
 *     HvStoreModifiedData @ 0x1406F88B8 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x140710550 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402F70D0 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x14063B214 (HvpResetPageProtection.c)
 */

__int64 __fastcall HvResetDirtyData(ULONG_PTR a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 96) )
  {
    HvpResetPageProtection(a1);
    RtlClearAllBits((PRTL_BITMAP)(a1 + 88));
    result = (unsigned int)_InterlockedExchangeAdd(&CmpDirtySectorCount, -*(_DWORD *)(a1 + 104));
    *(_DWORD *)(a1 + 104) = 0;
  }
  return result;
}
