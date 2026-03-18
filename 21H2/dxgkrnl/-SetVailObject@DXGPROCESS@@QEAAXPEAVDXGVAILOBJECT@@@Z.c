/*
 * XREFs of ?SetVailObject@DXGPROCESS@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1C033770C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     NtDxgkRegisterVailProcess @ 0x1C0353BC0 (NtDxgkRegisterVailProcess.c)
 * Callees:
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x1C001EF50 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?AddRef@DxgkCompositionObject@@QEBAJXZ @ 0x1C006C430 (-AddRef@DxgkCompositionObject@@QEBAJXZ.c)
 *     ?SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0351A20 (-SetHandleProcess@DXGVAILOBJECT@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void __fastcall DXGPROCESS::SetVailObject(DXGPROCESS *this, struct DXGVAILOBJECT *a2)
{
  DXGVAILOBJECT *v4; // rcx

  v4 = (DXGVAILOBJECT *)*((_QWORD *)this + 74);
  if ( a2 != v4 )
  {
    if ( v4 )
    {
      DXGVAILOBJECT::SetHandleProcess(v4, 0LL);
      DxgkCompositionObject::Release(*((DxgkCompositionObject **)this + 74));
      *((_QWORD *)this + 74) = 0LL;
    }
    if ( a2 )
    {
      *((_QWORD *)this + 74) = a2;
      DxgkCompositionObject::AddRef(a2);
      DXGVAILOBJECT::SetHandleProcess(*((DXGVAILOBJECT **)this + 74), *((struct _EPROCESS **)this + 7));
    }
  }
}
