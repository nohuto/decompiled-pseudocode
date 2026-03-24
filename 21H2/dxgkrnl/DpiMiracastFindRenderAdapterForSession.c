/*
 * XREFs of DpiMiracastFindRenderAdapterForSession @ 0x1C017624C
 * Callers:
 *     ?DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z @ 0x1C001CC94 (-DpiPdoHandleOpmIoctlsInternal@@YAJPEAU_FDO_CONTEXT@@PEAU_PDO_CONTEXT@@KPEAXK2KPEA_K@Z.c)
 *     DpiIndirectCbOpmGetSrmListVersion @ 0x1C00582A0 (DpiIndirectCbOpmGetSrmListVersion.c)
 *     DpiIndirectCbOpmSetSrmList @ 0x1C0058430 (DpiIndirectCbOpmSetSrmList.c)
 *     DxgkMiracastQueryMiracastSupportInternal @ 0x1C0175F44 (DxgkMiracastQueryMiracastSupportInternal.c)
 * Callees:
 *     DpiGetFdoFromDevice @ 0x1C001E580 (DpiGetFdoFromDevice.c)
 */

__int64 DpiMiracastFindRenderAdapterForSession()
{
  __int64 result; // rax
  __int64 v1; // rcx
  __int64 v2; // r8
  __int64 v3; // rdx
  __int64 v4; // rax

  result = DpiGetFdoFromDevice(qword_1C00B2DB8);
  if ( result )
  {
    v3 = *(unsigned int *)(result + 236);
    if ( (_DWORD)v3 != 2 )
    {
      if ( *(_DWORD *)(result + 240) != 2 || (v1 = (unsigned int)(v3 - 3), (v1 & 0xFFFFFFFC) != 0) || (_DWORD)v3 == 4 )
      {
        v4 = WdLogNewEntry5_WdWarning(v1, v3, v2);
        WdLogEvent5_WdWarning(v4);
        return 0LL;
      }
    }
  }
  return result;
}
