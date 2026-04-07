/*
 * XREFs of ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x180014C88
 * Callers:
 *     ??_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z @ 0x180014310 (--_ECSecondaryWindowRepresentation@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18000987C (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x180014358 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180015018 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017894 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ @ 0x1800287CC (-ReleaseAllResources@CSecondaryWindowRepresentation@@AEAAXXZ.c)
 *     McTemplateU0pp_EtwEventWriteTransfer @ 0x1800936F8 (McTemplateU0pp_EtwEventWriteTransfer.c)
 */

void __fastcall CSecondaryWindowRepresentation::~CSecondaryWindowRepresentation(CSecondaryWindowRepresentation *this)
{
  __int64 v2; // r8
  __int64 v3; // r9
  CBaseObject *v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  CBaseObject *v7; // rcx
  unsigned int i; // edi
  CWindowData *v9; // rcx
  CBaseObject *v10; // rcx
  CBaseObject *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // r9

  *(_QWORD *)this = &CSecondaryWindowRepresentation::`vftable'{for `CBaseObject'};
  *((_QWORD *)this + 2) = &CSecondaryWindowRepresentation::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  CSecondaryWindowRepresentation::ReleaseAllResources(this);
  v4 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v4 )
    CBaseObject::Release(v4);
  v5 = (CBaseObject *)*((_QWORD *)this + 51);
  if ( v5 )
    CBaseObject::Release(v5);
  v6 = (CBaseObject *)*((_QWORD *)this + 47);
  if ( v6 )
    CBaseObject::Release(v6);
  v7 = (CBaseObject *)*((_QWORD *)this + 48);
  if ( v7 )
    CBaseObject::Release(v7);
  for ( i = *((_DWORD *)this + 38); i; CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation(this, i) )
    --i;
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
  {
    v12 = *((_QWORD *)this + 4);
    if ( v12 )
      v13 = *(_QWORD *)(v12 + 40);
    else
      v13 = 0LL;
    McTemplateU0pp_EtwEventWriteTransfer(v7, &RemoveSecondaryWindowRepresentation_Destroy, this, v13);
  }
  v9 = (CWindowData *)*((_QWORD *)this + 4);
  if ( v9 )
    CWindowData::RemoveSecondaryWindowRepresentation(v9, this, v2, v3);
  v10 = (CBaseObject *)*((_QWORD *)this + 6);
  if ( v10 )
    CBaseObject::Release(v10);
  v11 = (CBaseObject *)*((_QWORD *)this + 7);
  if ( v11 )
    CBaseObject::Release(v11);
  DynArrayImpl<0>::~DynArrayImpl<0>((char *)this + 128);
  *(_QWORD *)this = &CGlassColorizationResources::`vftable';
}
