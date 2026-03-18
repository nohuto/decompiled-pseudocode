/*
 * XREFs of ?ApplyTransformToSpectreResources@CSceneNode@@AEAAXXZ @ 0x18023E00C
 * Callers:
 *     ?SetTransform@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform@@@Z @ 0x1801A5E48 (-SetTransform@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@QEAAJPEAVCSceneModelTransform.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x18023E1B8 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     ?OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18023E350 (-OnChanged@CSceneNode@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180049214 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CSceneNode::ApplyTransformToSpectreResources(CSceneNode *this)
{
  __int64 v1; // rax
  CTransform3D *v3; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int64 v5; // rcx
  _OWORD v6[4]; // [rsp+20h] [rbp-49h] BYREF
  char v7; // [rsp+60h] [rbp-9h]
  char v8; // [rsp+61h] [rbp-8h]
  _OWORD v9[4]; // [rsp+70h] [rbp+7h] BYREF

  v1 = *((_QWORD *)this + 8);
  if ( !v1 || (v3 = *(CTransform3D **)(v1 + 64)) == 0LL || (Matrix = CTransform3D::GetMatrix(v3, 0LL)) == 0LL )
  {
    v6[0] = _xmm;
    v6[1] = _xmm;
    v8 = v8 & 0xC0 | 0x17;
    Matrix = (const struct CMILMatrix *)v6;
    v6[2] = _xmm;
    v6[3] = _xmm;
    v7 = 85;
  }
  v5 = *((_QWORD *)this + 17);
  v9[0] = *(_OWORD *)Matrix;
  v9[1] = *((_OWORD *)Matrix + 1);
  v9[2] = *((_OWORD *)Matrix + 2);
  v9[3] = *((_OWORD *)Matrix + 3);
  (*(void (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 64LL))(v5, v9);
}
