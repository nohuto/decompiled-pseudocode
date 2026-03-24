/*
 * XREFs of ??0DXGDISPLAYMANAGERSOURCEOBJECT@@QEAA@PEAVDXGDISPLAYMANAGEROBJECT@@U_LUID@@I@Z @ 0x1C02B0DA0
 * Callers:
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C02B12A8 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002D2C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?reset@?$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z @ 0x1C0012DC4 (-reset@-$auto_ptr@VDXGFASTMUTEX@@@@QEAAXPEAVDXGFASTMUTEX@@@Z.c)
 */

DXGDISPLAYMANAGERSOURCEOBJECT *__fastcall DXGDISPLAYMANAGERSOURCEOBJECT::DXGDISPLAYMANAGERSOURCEOBJECT(
        DXGDISPLAYMANAGERSOURCEOBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT *a2,
        struct _LUID a3,
        int a4)
{
  _QWORD *v5; // rax

  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *(_QWORD *)this = &DXGDISPLAYMANAGERSOURCEOBJECT::`vftable';
  *((struct _LUID *)this + 4) = a3;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 6) = a2;
  *((_DWORD *)this + 10) = a4;
  *((_BYTE *)this + 56) = 1;
  _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  v5 = operator new[](0x28uLL, 0x4B677844u, (POOL_TYPE)512);
  if ( v5 )
  {
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
    *((_DWORD *)v5 + 6) = 0;
    *((_DWORD *)v5 + 7) = 80;
    *((_DWORD *)v5 + 8) = 1;
  }
  auto_ptr<DXGFASTMUTEX>::reset((void **)this + 8, v5);
  return this;
}
