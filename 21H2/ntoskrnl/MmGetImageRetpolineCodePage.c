/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1407CDBA0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x1402E776C (MiLookupDataTableEntry.c)
 *     MiIsRetpolineEnabled @ 0x14035E904 (MiIsRetpolineEnabled.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  unsigned __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax
  __int64 v8; // rax

  if ( !MiIsRetpolineEnabled() || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v8 = MiLookupDataTableEntry(v4, 1LL, v5, v6);
    result = *(_QWORD *)(v8 + 48) + *(unsigned int *)(v8 + 64) + (unsigned int)dword_140C4CCB0;
    *a2 = (unsigned int)(dword_140C4CC88 << 12);
  }
  return result;
}
