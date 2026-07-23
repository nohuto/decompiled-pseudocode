/*
 * XREFs of MmGetImageRetpolineCodePage @ 0x1407C98E0
 * Callers:
 *     <none>
 * Callees:
 *     MiLookupDataTableEntry @ 0x14030CDEC (MiLookupDataTableEntry.c)
 *     MiIsRetpolineEnabled @ 0x140357968 (MiIsRetpolineEnabled.c)
 */

__int64 __fastcall MmGetImageRetpolineCodePage(__int64 a1, _QWORD *a2)
{
  _QWORD *v3; // rdx
  PVOID v4; // rcx
  __int64 result; // rax
  __int64 v6; // rax

  if ( !MiIsRetpolineEnabled() || v4 == PsNtosImageBase || v4 == PsHalImageBase )
  {
    *v3 = 0LL;
    return 0LL;
  }
  else
  {
    v6 = MiLookupDataTableEntry((unsigned __int64)v4, 1);
    result = *(_QWORD *)(v6 + 48) + *(unsigned int *)(v6 + 64) + (unsigned int)dword_140C4CB30;
    *a2 = (unsigned int)(dword_140C4CB08 << 12);
  }
  return result;
}
