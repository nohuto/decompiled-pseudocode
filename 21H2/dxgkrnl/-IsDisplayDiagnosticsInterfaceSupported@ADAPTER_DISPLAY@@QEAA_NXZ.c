/*
 * XREFs of ?IsDisplayDiagnosticsInterfaceSupported@ADAPTER_DISPLAY@@QEAA_NXZ @ 0x1C0043DF4
 * Callers:
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025F574 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 *     ?AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ @ 0x1C02B9798 (-AddDriverWhiteboxInfo@DISPLAYDIAGNOSTICADAPTERDATA@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ADAPTER_DISPLAY::IsDisplayDiagnosticsInterfaceSupported(ADAPTER_DISPLAY *this)
{
  __int64 v1; // rcx
  bool result; // al

  v1 = *(_QWORD *)(*((_QWORD *)this + 2) + 1352LL);
  result = 0;
  if ( v1 )
  {
    if ( *(_QWORD *)(v1 + 32) )
      return *(_QWORD *)(v1 + 40) != 0LL;
  }
  return result;
}
