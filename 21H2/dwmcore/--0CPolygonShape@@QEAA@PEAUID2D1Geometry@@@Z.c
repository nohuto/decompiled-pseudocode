/*
 * XREFs of ??0CPolygonShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1800D3448
 * Callers:
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x18009B4C0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800D2F7C (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z @ 0x1801906F0 (-FlattenToLineSegments@CShape@@UEBAJMPEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18005007C (--2@YAPEAX_K@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800DF980 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

CPolygonShape *__fastcall CPolygonShape::CPolygonShape(CPolygonShape *this, struct ID2D1Geometry *a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rbx

  *((_QWORD *)this + 1) = 0LL;
  *(_QWORD *)this = &CPolygonShape::`vftable';
  v4 = operator new(0x30uLL);
  v5 = v4;
  if ( v4 )
  {
    *((_DWORD *)v4 + 2) = 0;
    v4[2] = a2;
    *v4 = &CPolygonShape::SharedData::`vftable';
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef(v4 + 2);
    v5[3] = 0LL;
    v5[4] = 0LL;
    v5[5] = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  *((_QWORD *)this + 2) = v5;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((char *)this + 16);
  return this;
}
