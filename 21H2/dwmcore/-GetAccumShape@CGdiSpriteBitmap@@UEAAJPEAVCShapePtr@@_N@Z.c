/*
 * XREFs of ?GetAccumShape@CGdiSpriteBitmap@@UEAAJPEAVCShapePtr@@_N@Z @ 0x1800D0B30
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z @ 0x1800805D0 (-CopyShape@CShape@@QEBAJPEBVCMILMatrix@@PEAPEAV1@@Z.c)
 *     ?Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800988EC (-Copy@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C891C (-Release@CShapePtr@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall CGdiSpriteBitmap::GetAccumShape(CGdiSpriteBitmap *this, struct CShapePtr *a2, char a3)
{
  unsigned int v3; // esi
  const struct FastRegion::Internal::CRgnData **v7; // r14
  __int64 v8; // rcx
  int v9; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  struct CShape *v15; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 75) )
  {
    v7 = (const struct FastRegion::Internal::CRgnData **)((char *)this + 256);
    **((_DWORD **)this + 32) = 0;
    v8 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 41) = 0LL;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    v9 = FastRegion::CRegion::Copy(v7, (const struct FastRegion::Internal::CRgnData **)this + 21);
    if ( v9 < 0 )
      ModuleFailFastForHRESULT((unsigned int)v9, retaddr);
    *((_BYTE *)this + 75) = 0;
  }
  if ( a3 )
  {
    v11 = CShape::CopyShape((CGdiSpriteBitmap *)((char *)this + 240), 0LL, &v15);
    v3 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2AFu, 0LL);
    }
    else
    {
      CShapePtr::Release(a2);
      *(_QWORD *)a2 = v15;
      *((_BYTE *)a2 + 8) = 1;
      **((_DWORD **)this + 21) = 0;
      **((_DWORD **)this + 32) = 0;
      v13 = *((_QWORD *)this + 41);
      *((_QWORD *)this + 41) = 0LL;
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
  }
  else
  {
    CShapePtr::Release(a2);
    *(_QWORD *)a2 = (char *)this + 240;
    *((_BYTE *)a2 + 8) = 0;
  }
  return v3;
}
