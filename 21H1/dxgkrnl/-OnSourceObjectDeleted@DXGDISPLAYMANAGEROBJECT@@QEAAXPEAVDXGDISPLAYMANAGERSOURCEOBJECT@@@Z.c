/*
 * XREFs of ?OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT@@QEAAXPEAVDXGDISPLAYMANAGERSOURCEOBJECT@@@Z @ 0x1C02ACDE0
 * Callers:
 *     ??1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ @ 0x1C02AC3EC (--1DXGDISPLAYMANAGERSOURCEOBJECT@@UEAA@XZ.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000CF20 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000D070 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DBC4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 */

void __fastcall DXGDISPLAYMANAGEROBJECT::OnSourceObjectDeleted(
        struct DXGFASTMUTEX *const *this,
        struct DXGDISPLAYMANAGERSOURCEOBJECT *a2)
{
  _QWORD *v4; // rdx
  DXGDISPLAYMANAGEROBJECT *v5; // rcx
  struct DXGDISPLAYMANAGERSOURCEOBJECT *v6; // rcx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rcx
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, this[2], 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10);
  if ( a2 )
  {
    v4 = this + 14;
    v5 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 14);
    if ( v5 != (DXGDISPLAYMANAGEROBJECT *)(this + 14) )
    {
      v6 = (DXGDISPLAYMANAGEROBJECT *)((char *)v5 - 8);
      if ( v6 )
      {
        do
        {
          if ( v6 == a2 )
            break;
          v7 = (_QWORD *)*((_QWORD *)v6 + 1);
          v6 = (struct DXGDISPLAYMANAGERSOURCEOBJECT *)(v7 - 1);
          if ( v7 == v4 )
            v6 = 0LL;
        }
        while ( v6 );
        if ( v6 )
        {
          v8 = (_QWORD *)((char *)a2 + 8);
          v9 = *((_QWORD *)a2 + 1);
          if ( *(struct DXGDISPLAYMANAGERSOURCEOBJECT **)(v9 + 8) != (struct DXGDISPLAYMANAGERSOURCEOBJECT *)((char *)a2 + 8)
            || (v4 = (_QWORD *)*((_QWORD *)a2 + 2), (_QWORD *)*v4 != v8) )
          {
            __fastfail(3u);
          }
          *v4 = v9;
          *(_QWORD *)(v9 + 8) = v4;
          *v8 = 0LL;
          *((_QWORD *)a2 + 2) = 0LL;
          --*((_QWORD *)this + 16);
        }
      }
    }
  }
  if ( v10[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, (__int64)v4);
}
