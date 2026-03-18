/*
 * XREFs of HvResetDirtyData @ 0x14063C05C
 * Callers:
 *     CmpDoParseKey @ 0x1405EF1F0 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x14063B818 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x140271930 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x14069C778 (HvpResetPageProtection.c)
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
