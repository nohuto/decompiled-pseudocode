/*
 * XREFs of ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoEdgyControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180045820
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateGestureDirection@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z @ 0x1800FFD80 (-UpdateGestureDirection@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?UpdateGestureDistance@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800FFE28 (-UpdateGestureDistance@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateRouting@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJI@Z @ 0x1800FFECC (-UpdateRouting@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJI@Z.c)
 *     ?UpdateVertex0@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z @ 0x180100014 (-UpdateVertex0@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z.c)
 *     ?UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z @ 0x1801000BC (-UpdateVertex1@BamoEdgyControllerClientProxyImpl@BamoImpl@@QEAAJPEAUD2D_VECTOR_2F@@@Z.c)
 */

void __fastcall BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateStateOfProxyOnPlaceholderProxyHookUp(
        BamoImpl::BamoEdgyControllerClientProxyImpl *this,
        struct Microsoft::BamoImpl::BamoProxyImpl *a2)
{
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateVertex0(this, (struct D2D_VECTOR_2F *)a2 + 4);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateVertex1(this, (struct D2D_VECTOR_2F *)a2 + 5);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateGestureDirection(this, (struct D2D_VECTOR_2F *)a2 + 6);
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateGestureDistance(this, *((_DWORD *)a2 + 14));
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateRouting(this, *((_DWORD *)a2 + 15));
  BamoImpl::BamoEdgyControllerClientProxyImpl::UpdateRunState(this, *((_DWORD *)a2 + 16));
}
