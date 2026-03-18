/*
 * XREFs of HvResetDirtyData @ 0x1405DF25C
 * Callers:
 *     HvStoreModifiedData @ 0x1405DEA18 (HvStoreModifiedData.c)
 *     CmpDoParseKey @ 0x140619BF0 (CmpDoParseKey.c)
 * Callees:
 *     RtlClearAllBits @ 0x140204890 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x14070436C (HvpResetPageProtection.c)
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
