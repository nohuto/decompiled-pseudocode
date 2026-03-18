/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C
 * Callers:
 *     _HasCaptionIcon @ 0x1C005C5D8 (_HasCaptionIcon.c)
 *     SetRedirectedWindow @ 0x1C009100C (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxGetWindowSmIcon @ 0x1C00C37C8 (xxxGetWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C00D077C (_RegisterClassEx.c)
 *     DereferenceClass @ 0x1C00D2C70 (DereferenceClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C00D2DF0 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     GetCPD @ 0x1C00D3314 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00D4198 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     xxxSetClassLongPtr @ 0x1C010E984 (xxxSetClassLongPtr.c)
 *     GetClassIcoCur @ 0x1C0116790 (GetClassIcoCur.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E85CC (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01E8BA4 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C02279A0 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 != gSmartObjNullRef )
  {
    --*(_DWORD *)(*a1 + 8);
    result = *a1;
    if ( !*(_DWORD *)(*a1 + 8) )
    {
      result = *a1;
      if ( *(_BYTE *)(*a1 + 12) )
        return Win32FreeToPagedLookasideList(gpStackRefLookAside, *a1);
    }
  }
  return result;
}
