/*
 * XREFs of ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EBEF0
 * Callers:
 *     ??1CSceneNode@@MEAA@XZ @ 0x1801EB740 (--1CSceneNode@@MEAA@XZ.c)
 *     ?OnChildrenChanged@CSceneNode@@QEAAXXZ @ 0x1801EBC2C (-OnChildrenChanged@CSceneNode@@QEAAXXZ.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1801EBD54 (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1801EB910 (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1801EBA0C (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 */

void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  __int64 v4; // rcx

  if ( *((struct CSceneNode **)this + 15) != a2 )
  {
    if ( !a2 || *((_QWORD *)this + 14) != *((_QWORD *)a2 + 14) )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 15) = a2;
    if ( a2 && *((_QWORD *)a2 + 16) )
    {
      v4 = *((_QWORD *)this + 16);
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 24LL))(v4);
      else
        CSceneNode::HydrateSpectreResources(this, *((struct CSceneWorld **)a2 + 14));
    }
  }
}
