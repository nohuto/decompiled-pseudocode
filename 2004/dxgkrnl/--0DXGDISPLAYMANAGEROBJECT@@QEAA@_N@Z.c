/*
 * XREFs of ??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z @ 0x1C016AB74
 * Callers:
 *     DxgkDispMgrCreate @ 0x1C016A960 (DxgkDispMgrCreate.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C001AD64 (-reset@-$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z.c)
 */

DXGDISPLAYMANAGEROBJECT *__fastcall DXGDISPLAYMANAGEROBJECT::DXGDISPLAYMANAGEROBJECT(
        DXGDISPLAYMANAGEROBJECT *this,
        char a2)
{
  _QWORD *v3; // rax

  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &ReferenceCounted::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &DXGDISPLAYMANAGEROBJECT::`vftable';
  *((_BYTE *)this + 24) = 1;
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 5) = &Set<DXGTARGETENTRY>::`vftable';
  *((_QWORD *)this + 6) = &DoublyLinkedList<DXGTARGETENTRY,DoubleLinkedListElementDeleter<DXGTARGETENTRY>>::`vftable';
  *((_QWORD *)this + 9) = (char *)this + 64;
  *((_QWORD *)this + 8) = (char *)this + 64;
  *((_DWORD *)this + 22) = 2;
  *((_DWORD *)this + 26) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 12) = &DoublyLinkedList<DXGDISPLAYMANAGERSOURCEOBJECT,DoubleLinkedListElementDeleter<DXGDISPLAYMANAGERSOURCEOBJECT>>::`vftable';
  *((_DWORD *)this + 34) = 2;
  *((_BYTE *)this + 144) = a2;
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  v3 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v3 )
  {
    *v3 = 0LL;
    v3[1] = 0LL;
    v3[2] = 0LL;
    *((_DWORD *)v3 + 6) = 0;
    *((_DWORD *)v3 + 7) = 79;
    *((_DWORD *)v3 + 8) = 1;
  }
  auto_ptr<DXGFASTMUTEX>::reset((void **)this + 2, v3);
  return this;
}
