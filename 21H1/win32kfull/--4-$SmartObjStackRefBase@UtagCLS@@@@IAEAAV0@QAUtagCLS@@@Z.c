/*
 * XREFs of ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8
 * Callers:
 *     _SetRedirectedWindow@8 @ 0x1FBFA (_SetRedirectedWindow@8.c)
 *     _InternalRegisterClassEx@16 @ 0x46B9C (_InternalRegisterClassEx@16.c)
 *     ?IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z @ 0x47148 (-IsClassAtomRegistered@@YG_NPAUtagPROCESSINFO@@G@Z.c)
 *     ?DestroyClassBrush@@YGXABV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x47A58 (-DestroyClassBrush@@YGXABV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     __RegisterClassEx@20 @ 0x47B74 (__RegisterClassEx@20.c)
 *     __GetClassInfoEx@20 @ 0x8052E (__GetClassInfoEx@20.c)
 *     _GetCPD@12 @ 0xC4588 (_GetCPD@12.c)
 *     _xxxSetClassLong@16 @ 0xCBBE2 (_xxxSetClassLong@16.c)
 *     _xxxSetClassData@16 @ 0xCBC4C (_xxxSetClassData@16.c)
 *     ??4?$SmartObjStackRef@UtagCLS@@@@QAEAAV0@QAUtagCLS@@@Z @ 0x152DC4 (--4-$SmartObjStackRef@UtagCLS@@@@QAEAAV0@QAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z @ 0x154427 (-xxxSetClassCursor@@YGKPAUtagWND@@PAUtagCLS@@KK@Z.c)
 *     __SetClassWord@12 @ 0x15472A (__SetClassWord@12.c)
 *     __WOWModuleUnload@4 @ 0x188E7A (__WOWModuleUnload@4.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall SmartObjStackRefBase<tagCLS>::operator=(_DWORD *this, int a2)
{
  if ( a2 != *(_DWORD *)*this )
  {
    if ( *this != gSmartObjNullRef && !--*(_DWORD *)(*this + 4) )
    {
      if ( *(_BYTE *)(*this + 8) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, *this);
    }
    if ( a2 )
    {
      *this = *(_DWORD *)(a2 + 72);
      ++*(_DWORD *)(*this + 4);
    }
    else
    {
      *this = gSmartObjNullRef;
    }
  }
  return this;
}
