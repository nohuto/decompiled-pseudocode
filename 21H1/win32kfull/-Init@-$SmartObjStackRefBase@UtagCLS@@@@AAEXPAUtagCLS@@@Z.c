/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagCLS@@@@AAEXPAUtagCLS@@@Z @ 0x97FDC
 * Callers:
 *     _xxxGetWindowSmIcon@8 @ 0x1D0E0 (_xxxGetWindowSmIcon@8.c)
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     __HasCaptionIcon@4 @ 0x321BC (__HasCaptionIcon@4.c)
 *     ?IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z @ 0x47148 (-IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z.c)
 *     _DestroyClass@8 @ 0x472A4 (_DestroyClass@8.c)
 *     _DereferenceClass@8 @ 0x48042 (_DereferenceClass@8.c)
 *     _GetClassIcoCur@8 @ 0xA7526 (_GetClassIcoCur@8.c)
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 *     _xxxSetClassLong@16 @ 0xCBBE2 (_xxxSetClassLong@16.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QAE@PAUtagCLS@@@Z @ 0xF1838 (--0-$SmartObjStackRef@UtagCLS@@@@QAE@PAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 *     __SetClassWord@12 @ 0x15472A (__SetClassWord@12.c)
 *     __WOWModuleUnload@4 @ 0x188E7A (__WOWModuleUnload@4.c)
 *     _xxxRecreateSmallIcons@4 @ 0x1A12BF (_xxxRecreateSmallIcons@4.c)
 * Callees:
 *     _IsThreadCrossSessionAttached@0 @ 0xEF2EA (_IsThreadCrossSessionAttached@0.c)
 */

int __thiscall SmartObjStackRefBase<tagCLS>::Init(_DWORD *this, int a2)
{
  PKTHREAD CurrentThread; // ebx
  int v4; // esi
  int *ThreadWin32Thread; // eax
  _DWORD *v6; // ecx
  int result; // eax

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  if ( !IsThreadCrossSessionAttached() )
  {
    ThreadWin32Thread = (int *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v4 = *ThreadWin32Thread;
  }
  v6 = this + 1;
  this[1] = 0;
  *this = gSmartObjNullRef;
  if ( a2 )
  {
    *this = *(_DWORD *)(a2 + 72);
    ++*(_DWORD *)(*(_DWORD *)(a2 + 72) + 4);
  }
  result = *(_DWORD *)(v4 + 840);
  *v6 = result;
  *(_DWORD *)(v4 + 840) = v6;
  return result;
}
