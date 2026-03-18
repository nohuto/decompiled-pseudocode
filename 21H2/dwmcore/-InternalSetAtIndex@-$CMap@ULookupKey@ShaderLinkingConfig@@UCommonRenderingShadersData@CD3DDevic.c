/*
 * XREFs of ?InternalSetAtIndex@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAXHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18003B854
 * Callers:
 *     ?Add@?$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V?$CMapEqualHelper@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@@@@@QEAAHAEBULookupKey@ShaderLinkingConfig@@AEBUCommonRenderingShadersData@CD3DDevice@@@Z @ 0x18003A778 (-Add@-$CMap@ULookupKey@ShaderLinkingConfig@@UCommonRenderingShadersData@CD3DDevice@@V-$CMapEqual.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CMap<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData,CMapEqualHelper<ShaderLinkingConfig::LookupKey,CD3DDevice::CommonRenderingShadersData>>::InternalSetAtIndex(
        _QWORD *a1,
        int a2,
        _OWORD *a3,
        __int64 *a4)
{
  __int64 v5; // r9
  _OWORD *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 result; // rax

  v5 = 16LL * a2;
  v6 = (_OWORD *)(v5 + *a1);
  if ( v6 )
    *v6 = *a3;
  v7 = v5 + a1[1];
  if ( v7 )
  {
    v8 = *a4;
    *(_QWORD *)v7 = *a4;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    result = *((unsigned int *)a4 + 2);
    *(_DWORD *)(v7 + 8) = result;
  }
  return result;
}
