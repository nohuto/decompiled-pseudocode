/*
 * XREFs of ?_CleanupNonStaticsResources@CAccent@@IEAAXXZ @ 0x18002C330
 * Callers:
 *     ?_UpdateResources@CAccent@@IEAAJXZ @ 0x18000CC44 (-_UpdateResources@CAccent@@IEAAJXZ.c)
 *     ?ValidateVisual@CAccent@@UEAAJXZ @ 0x18000E740 (-ValidateVisual@CAccent@@UEAAJXZ.c)
 *     ??1CAccent@@MEAA@XZ @ 0x18002C1C8 (--1CAccent@@MEAA@XZ.c)
 * Callees:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x1800098D4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180017394 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x18003B450 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180056410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAccent::_CleanupNonStaticsResources(CAccent *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx
  __int64 v4; // rcx
  CBaseObject *v5; // rcx
  CBaseObject *v6; // rcx
  __int64 v7; // rcx
  CBaseObject *v8; // rcx
  CBaseObject *v9; // rcx
  CBaseObject *v10; // rcx
  unsigned int v11; // edi
  CBaseObject **v12; // rbx

  if ( (*((_BYTE *)this + 284) & 4) != 0 )
    CDesktopManager::SetBackStop(0LL);
  VisualCollection::RemoveAll((CAccent *)((char *)this + 32));
  v2 = (CBaseObject *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    CBaseObject::Release(v2);
    *((_QWORD *)this + 40) = 0LL;
  }
  v3 = (CBaseObject *)*((_QWORD *)this + 41);
  if ( v3 )
  {
    CBaseObject::Release(v3);
    *((_QWORD *)this + 41) = 0LL;
  }
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
  {
    CBaseObject::Release((CBaseObject *)(v4 + 8));
    *((_QWORD *)this + 48) = 0LL;
  }
  v5 = (CBaseObject *)*((_QWORD *)this + 42);
  if ( v5 )
  {
    CBaseObject::Release(v5);
    *((_QWORD *)this + 42) = 0LL;
  }
  v6 = (CBaseObject *)*((_QWORD *)this + 43);
  if ( v6 )
  {
    CBaseObject::Release(v6);
    *((_QWORD *)this + 43) = 0LL;
  }
  v7 = *((_QWORD *)this + 44);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 44) = 0LL;
  }
  v8 = (CBaseObject *)*((_QWORD *)this + 52);
  if ( v8 )
  {
    CBaseObject::Release(v8);
    *((_QWORD *)this + 52) = 0LL;
  }
  v9 = (CBaseObject *)*((_QWORD *)this + 53);
  if ( v9 )
  {
    CBaseObject::Release(v9);
    *((_QWORD *)this + 53) = 0LL;
  }
  v10 = (CBaseObject *)*((_QWORD *)this + 54);
  if ( v10 )
  {
    CBaseObject::Release(v10);
    *((_QWORD *)this + 54) = 0LL;
  }
  v11 = 0;
  v12 = (CBaseObject **)((char *)this + 440);
  do
  {
    if ( *v12 )
    {
      CBaseObject::Release(*v12);
      *v12 = 0LL;
    }
    ++v11;
    ++v12;
  }
  while ( v11 < 0x16 );
}
