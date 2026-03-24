/*
 * XREFs of HvResetDirtyData @ 0x140721924
 * Callers:
 *     CmpDoParseKey @ 0x1406F9170 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140721060 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x140362270 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140646428 (HvpResetPageProtection.c)
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
