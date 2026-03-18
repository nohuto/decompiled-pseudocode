/*
 * XREFs of ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x1801EF2BC
 * Callers:
 *     ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x180177D9C (-SetTransform@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EF48C (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1801EF660 (-OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x1800B6888 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSceneNode::ApplyTransformToSpectreResources(CSceneNode *this)
{
  __int64 v1; // rax
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v5; // rcx
  _OWORD v6[4]; // [rsp+20h] [rbp-49h] BYREF
  __int16 v7; // [rsp+60h] [rbp-9h]
  _OWORD v8[4]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 7);
  if ( !v1 || (v3 = *(CTransform3D **)(v1 + 56)) == 0LL || (Matrix = CTransform3D::GetMatrix(v3, 0LL)) == 0LL )
  {
    Matrix = (const struct CMILMatrix *)v6;
    v6[0] = _xmm;
    v6[1] = _xmm;
    v6[2] = _xmm;
    v6[3] = _xmm;
    v7 = 32085;
  }
  v5 = *((_QWORD *)this + 16);
  v8[0] = *(_OWORD *)Matrix;
  v8[1] = *((_OWORD *)Matrix + 1);
  v8[2] = *((_OWORD *)Matrix + 2);
  v8[3] = *((_OWORD *)Matrix + 3);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 64LL))(v5, v8);
}
