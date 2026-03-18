/*
 * XREFs of HvResetDirtyData @ 0x140689BDC
 * Callers:
 *     CmpDoParseKey @ 0x140624810 (CmpDoParseKey.c)
 *     HvStoreModifiedData @ 0x140689398 (HvStoreModifiedData.c)
 * Callees:
 *     RtlClearAllBits @ 0x1402E0FC0 (RtlClearAllBits.c)
 *     HvpResetPageProtection @ 0x140695FDC (HvpResetPageProtection.c)
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
