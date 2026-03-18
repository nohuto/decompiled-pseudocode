/*
 * XREFs of ??_GCProcessAttribution@@UEAAPEAXI@Z @ 0x180093AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800585C8 (--3@YAXPEAX@Z.c)
 *     ??$lower_bound@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@std@@_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAURecord@CProcessAttributionManager@@@std@@@std@@@0@V10@V10@AEB_KP6A_NPEBUProcessAttributionRecord@CProcessAttributionManager@@_J@Z@Z @ 0x1800972A8 (--$lower_bound@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAURecord@CProcessAttributio.c)
 *     ??_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z @ 0x1800D63B8 (--_GRecord@CProcessAttributionManager@@QEAAPEAXI@Z.c)
 *     ?AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z @ 0x1800DD6A0 (-AddBeziers@CDrawListPolygonBuilder@@EEAAXPEBUD2D1_BEZIER_SEGMENT@@I@Z.c)
 *     memmove_0 @ 0x1800EED27 (memmove_0.c)
 */

CProcessAttribution *__fastcall CProcessAttribution::`scalar deleting destructor'(CProcessAttribution *this, char a2)
{
  CProcessAttributionManager *v2; // rsi
  unsigned int v5; // edx
  unsigned int v6; // r8d
  char *v7; // rbx
  __int64 v8; // rcx
  int v9; // eax
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = lpMem;
  *(_QWORD *)this = &CProcessAttribution::`vftable';
  std::lower_bound<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CProcessAttributionManager::Record *>>>,unsigned __int64,bool (*)(CProcessAttributionManager::ProcessAttributionRecord const *,__int64)>(
    &v11,
    *(_QWORD *)v2,
    *((_QWORD *)v2 + 1),
    (char *)this + 16);
  v7 = (char *)v11;
  v8 = *(_QWORD *)v11;
  if ( *(_DWORD *)(*(_QWORD *)v11 + 160LL) )
  {
    *(_OWORD *)(v8 + 8) = *(_OWORD *)((char *)this + 24);
    v9 = *((_DWORD *)this + 10);
    *(_QWORD *)(v8 + 112) = 0LL;
    *(_DWORD *)(v8 + 24) = v9;
  }
  else
  {
    CProcessAttributionManager::Record::`scalar deleting destructor'((CProcessAttributionManager::Record *)v8, v5);
    memmove_0(v7, v7 + 8, *((_QWORD *)v2 + 1) - (_QWORD)(v7 + 8));
    *((_QWORD *)v2 + 1) -= 8LL;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CDrawListPolygonBuilder::AddBeziers(this, (const struct D2D1_BEZIER_SEGMENT *)0x88, v6);
    else
      operator delete(this);
  }
  return this;
}
