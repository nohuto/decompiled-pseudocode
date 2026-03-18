/*
 * XREFs of NtDxgkPinResources @ 0x1C016DE70
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00271E0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z @ 0x1C016DEA0 (-DxgkPinResourcesInternal@@YAJPEAU_D3DKMT_PINRESOURCES@@@Z.c)
 *     ?DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z @ 0x1C02210A0 (-DxgCreateLiveDumpWithWdLogs@@YAJK_K000E@Z.c)
 */

__int64 __fastcall NtDxgkPinResources(struct _D3DKMT_PINRESOURCES *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  unsigned int v3; // edi
  struct DXGPROCESS *Current; // rax
  unsigned __int64 v6; // rbx

  v3 = DxgkPinResourcesInternal(a1);
  if ( v3 == -1073741811 )
  {
    if ( byte_1C00B0FF8 )
    {
      Current = DXGPROCESS::GetCurrent(v2, v1);
      v6 = (unsigned __int64)Current;
      if ( !Current || (*(unsigned int (**)(void))(*((_QWORD *)Current + 11) + 216LL))() )
      {
        DxgCreateLiveDumpWithWdLogs(0x193u, 0x80EuLL, (unsigned __int64)KeGetCurrentThread(), v6, 0LL, 0);
        byte_1C00B0FF8 = 0;
      }
    }
  }
  return v3;
}
