/*
 * XREFs of ??4?$ComPtr@VDataSourcePrincipal@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800F84D4
 * Callers:
 *     ?StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z @ 0x1800FACC8 (-StartAnimation@DragNDropProcessor@@QEAAJKPEAVBamoDragManagerClientProxy@@@Z.c)
 *     ?StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z @ 0x1800FEA10 (-StartAnimation@ResizeProcessor@@QEAAJKPEAVBamoResizeControllerClientProxy@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004A6B0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<DataSourcePrincipal>::operator=(__int64 *a1, _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD); // rbx
  __int64 v4; // rcx

  v2 = (void (__fastcall ***)(_QWORD))*a2;
  v4 = *a1;
  if ( v4 != *a2 )
  {
    if ( v2 )
    {
      (**v2)(*a2);
      v4 = *a1;
    }
    *a1 = (__int64)v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return a1;
}
