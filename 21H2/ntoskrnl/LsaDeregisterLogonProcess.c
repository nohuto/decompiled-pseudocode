/*
 * XREFs of LsaDeregisterLogonProcess @ 0x1409C5E90
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseExtensionTable @ 0x1403614E0 (ExReleaseExtensionTable.c)
 *     ExGetExtensionTable @ 0x1403614FC (ExGetExtensionTable.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
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
