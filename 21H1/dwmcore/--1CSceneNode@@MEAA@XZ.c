/*
 * XREFs of ??1CSceneNode@@MEAA@XZ @ 0x1801EF1C0
 * Callers:
 *     ??_GCSceneNode@@MEAAPEAXI@Z @ 0x1801EF270 (--_GCSceneNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1801EF970 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneNode::~CSceneNode(CSceneNode *this)
{
  CSceneNode **v2; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v5; // rcx

  *(_QWORD *)this = &CSceneNode::`vftable';
  v2 = (CSceneNode **)*((_QWORD *)this + 8);
  v3 = 0LL;
  v4 = (unsigned __int64)(*((_QWORD *)this + 9) - (_QWORD)v2 + 7LL) >> 3;
  if ( (unsigned __int64)v2 > *((_QWORD *)this + 9) )
    v4 = 0LL;
  if ( v4 )
  {
    do
    {
      if ( *((CSceneNode **)*v2 + 15) == this )
        CSceneNode::SetParent(*v2, 0LL);
      ++v2;
      ++v3;
    }
    while ( v3 != v4 );
  }
  v5 = *((_QWORD *)this + 16);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(this);
}
