/*
 * XREFs of PcwCloseInstance @ 0x1406E26A0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

void __stdcall PcwCloseInstance(PPCW_INSTANCE Instance)
{
  unsigned __int64 ExtensionTable; // rax

  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  if ( ExtensionTable )
  {
    (*(void (__fastcall **)(PPCW_INSTANCE))(ExtensionTable + 24))(Instance);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)ExpPcwExtensionHost);
  }
}
