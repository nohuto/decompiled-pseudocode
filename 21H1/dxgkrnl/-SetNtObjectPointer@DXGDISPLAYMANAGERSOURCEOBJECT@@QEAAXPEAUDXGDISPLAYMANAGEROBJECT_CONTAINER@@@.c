/*
 * XREFs of ?SetNtObjectPointer@DXGDISPLAYMANAGERSOURCEOBJECT@@QEAAXPEAUDXGDISPLAYMANAGEROBJECT_CONTAINER@@@Z @ 0x1C02AD16C
 * Callers:
 *     ?CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z @ 0x1C02AC858 (-CreateSourceObject@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@IPEAU_OBJECT_ATTRIBUTES@@KPEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDISPLAYMANAGERSOURCEOBJECT::SetNtObjectPointer(
        DXGDISPLAYMANAGERSOURCEOBJECT *this,
        struct DXGDISPLAYMANAGEROBJECT_CONTAINER *a2)
{
  __int64 v4; // rax

  if ( *((_QWORD *)this + 3) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v4 + 24) = 702LL;
    WdLogEvent5_WdAssertion(v4);
  }
  *((_QWORD *)this + 3) = a2;
}
