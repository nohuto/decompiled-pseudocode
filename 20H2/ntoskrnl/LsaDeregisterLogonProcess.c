/*
 * XREFs of LsaDeregisterLogonProcess @ 0x14091ECF0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x140262BAC (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x140262BC8 (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall LsaDeregisterLogonProcess(__int64 a1)
{
  unsigned int v2; // ebx
  unsigned __int64 ExtensionTable; // rax

  v2 = -1073741822;
  ExtensionTable = ExGetExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  if ( ExtensionTable )
  {
    v2 = (*(__int64 (__fastcall **)(__int64))(ExtensionTable + 8))(a1);
    ExReleaseExtensionTable((struct _EX_RUNDOWN_REF *)SepAuthExtensionHost);
  }
  return v2;
}
