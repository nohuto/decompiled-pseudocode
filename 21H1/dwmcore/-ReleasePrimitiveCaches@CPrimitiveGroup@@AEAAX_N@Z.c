/*
 * XREFs of ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x1800382C8
 * Callers:
 *     ?ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARSURFACERESOURCES@@@Z @ 0x180038004 (-ProcessClearSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEG.c)
 *     ?ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDSURFACERESOURCES@@PEBXI@Z @ 0x18003816C (-ProcessAddSurfaceResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 *     ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x180038368 (-ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADD.c)
 *     ??1CPrimitiveGroup@@MEAA@XZ @ 0x180095110 (--1CPrimitiveGroup@@MEAA@XZ.c)
 *     ?ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ @ 0x1800CA834 (-ReleaseHeatMap@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z @ 0x1801E7410 (-NotifyInvalidResource@CPrimitiveGroup@@UEAAXPEBVIDeviceResource@@@Z.c)
 *     ?ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_ADDCOLORRESOURCES@@PEBXI@Z @ 0x1801E7448 (-ProcessAddColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP.c)
 *     ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x1801E7600 (-ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_PRIMITIVEGRO.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B5618 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPrimitiveGroup::ReleasePrimitiveCaches(CPrimitiveGroup *this, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // rbp
  _QWORD *v7; // rbx
  char *v8; // rcx

  if ( *((_DWORD *)this + 36) )
  {
    v5 = 0LL;
    v6 = *((unsigned int *)this + 36);
    do
    {
      v7 = *(_QWORD **)(v5 + *((_QWORD *)this + 15));
      v8 = (char *)v7 + *(int *)(v7[2] + 8LL) + 16;
      (*(void (__fastcall **)(char *, char *))(*(_QWORD *)v8 + 48LL))(v8, (char *)this + 64);
      (*(void (__fastcall **)(_QWORD *))(*v7 + 16LL))(v7);
      v5 += 8LL;
      --v6;
    }
    while ( v6 );
  }
  *((_DWORD *)this + 36) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 120, 8LL);
  v4 = *((_QWORD *)this + 21);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    *((_QWORD *)this + 21) = 0LL;
    if ( a2 )
      (*(void (__fastcall **)(CPrimitiveGroup *, __int64))(*(_QWORD *)this + 72LL))(this, 5LL);
  }
}
