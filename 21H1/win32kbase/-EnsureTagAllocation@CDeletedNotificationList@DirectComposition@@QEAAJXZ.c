/*
 * XREFs of ?EnsureTagAllocation@CDeletedNotificationList@DirectComposition@@QEAAJXZ @ 0x1C0030E74
 * Callers:
 *     ?SetResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAJ_KPEAVCDeletedNotificationList@2@@Z @ 0x1C0030E1C (-SetResourceLifetimeTag@CResourceMarshaler@DirectComposition@@QEAAJ_KPEAVCDeletedNotificationLis.c)
 * Callees:
 *     ?Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z @ 0x1C008F3D4 (-Grow@CDCompDynamicArrayBase@DirectComposition@@QEAAJ_KK@Z.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall DirectComposition::CDeletedNotificationList::EnsureTagAllocation(
        DirectComposition::CDeletedNotificationList *this)
{
  int v1; // esi
  unsigned __int64 v2; // r14
  __int64 v4; // rbp
  __int64 v5; // rbx
  __int64 v7; // rdx
  size_t v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 Src; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  v2 = *((unsigned int *)this + 11);
  v4 = *((_QWORD *)this + 3);
  if ( (_DWORD)v2 + *((_DWORD *)this + 12) != v4 )
    goto LABEL_5;
  v5 = *((unsigned int *)this + 10);
  v1 = DirectComposition::CDCompDynamicArrayBase::Grow(this, 1uLL, 0x626E4344u);
  if ( v2 > v4 - v5 )
  {
    v7 = *((unsigned int *)this + 10);
    v8 = *((_QWORD *)this + 4);
    v9 = *(_QWORD *)this;
    *((_DWORD *)this + 10) = v7 + 1;
    v10 = v8 * (*((_QWORD *)this + 3) - 1LL);
    Src = *(_QWORD *)(v7 * v8 + v9);
    memmove((void *)(v9 + v10), &Src, v8);
  }
  if ( v1 >= 0 )
LABEL_5:
    ++*((_DWORD *)this + 12);
  return (unsigned int)v1;
}
