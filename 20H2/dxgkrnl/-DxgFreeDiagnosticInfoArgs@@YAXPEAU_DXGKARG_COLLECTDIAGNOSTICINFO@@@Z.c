/*
 * XREFs of ?DxgFreeDiagnosticInfoArgs@@YAXPEAU_DXGKARG_COLLECTDIAGNOSTICINFO@@@Z @ 0x1C0220060
 * Callers:
 *     DpiAddDevice @ 0x1C017DE10 (DpiAddDevice.c)
 *     DpiFdoStartAdapter @ 0x1C01815E4 (DpiFdoStartAdapter.c)
 *     ?DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z @ 0x1C025E2E4 (-DxgkDrtTestEscape@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRT_ESCAPE_HEAD@@PEAVCOREADAPTERACCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgFreeDiagnosticInfoArgs(struct _DXGKARG_COLLECTDIAGNOSTICINFO *a1)
{
  void *v2; // rcx

  if ( a1 )
  {
    v2 = (void *)*((_QWORD *)a1 + 28);
    if ( v2 )
      operator delete[](v2);
    operator delete(a1);
  }
}
