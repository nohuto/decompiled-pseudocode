/*
 * XREFs of PspNetRateControlDispatch @ 0x14090B854
 * Callers:
 *     PspJobDelete @ 0x14035D490 (PspJobDelete.c)
 *     PspQueryRateControlHistory @ 0x14066335C (PspQueryRateControlHistory.c)
 *     PspSetNetRateControl @ 0x14090C114 (PspSetNetRateControl.c)
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall PspNetRateControlDispatch(__int64 a1)
{
  __int64 (__fastcall **ExtensionTable)(__int64); // rax
  unsigned int v3; // ebx

  ExtensionTable = (__int64 (__fastcall **)(__int64))ExGetExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  if ( ExtensionTable )
  {
    v3 = (*ExtensionTable)(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)PspNetRateControlExtensionHost);
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v3;
}
