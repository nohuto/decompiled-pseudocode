/*
 * XREFs of _RtlpInvalidatePathCache@4 @ 0x4B2ED502
 * Callers:
 *     _LdrSetDllDirectory@4 @ 0x4B2ED420 (_LdrSetDllDirectory@4.c)
 *     _LdrAddDllDirectory@8 @ 0x4B33CA10 (_LdrAddDllDirectory@8.c)
 *     _LdrRemoveDllDirectory@4 @ 0x4B33CBF0 (_LdrRemoveDllDirectory@4.c)
 *     _RtlSetSearchPathMode@4 @ 0x4B33CDC0 (_RtlSetSearchPathMode@4.c)
 *     _RtlpSignalSystemDirsModification@0 @ 0x4B33D390 (_RtlpSignalSystemDirsModification@0.c)
 * Callees:
 *     <none>
 */

int __thiscall RtlpInvalidatePathCache(int *this)
{
  int v1; // edx

  v1 = *this;
  *this = 0;
  if ( !v1 )
    return 0;
  return --*(_DWORD *)(v1 + 52) == 0 ? v1 : 0;
}
