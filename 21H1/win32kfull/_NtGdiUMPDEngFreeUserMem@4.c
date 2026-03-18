/*
 * XREFs of _NtGdiUMPDEngFreeUserMem@4 @ 0x21B18D
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __stdcall NtGdiUMPDEngFreeUserMem(void **a1)
{
  void *v1; // ecx

  v1 = 0;
  if ( a1 )
  {
    if ( a1 + 1 < a1 || (unsigned int)(a1 + 1) > _MmUserProbeAddress )
      *(_BYTE *)_MmUserProbeAddress = 0;
    if ( (((unsigned __int8)*a1 - 16) & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v1 = *a1;
  }
  if ( v1 )
    EngFreeUserMem(v1);
  return 1;
}
