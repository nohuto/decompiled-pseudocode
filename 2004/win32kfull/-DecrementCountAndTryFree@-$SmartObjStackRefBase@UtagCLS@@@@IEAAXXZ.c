/*
 * XREFs of ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C008E1DC
 * Callers:
 *     SetRedirectedWindow @ 0x1C00210E8 (SetRedirectedWindow.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0021424 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     xxxGetWindowSmIcon @ 0x1C002BFF8 (xxxGetWindowSmIcon.c)
 *     _RegisterClassEx @ 0x1C008B430 (_RegisterClassEx.c)
 *     DereferenceClass @ 0x1C008D950 (DereferenceClass.c)
 *     ?IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z @ 0x1C008DA48 (-IsClassAtomRegistered@@YA_NPEAUtagPROCESSINFO@@G@Z.c)
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 *     GetCPD @ 0x1C008DF74 (GetCPD.c)
 *     ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C008F050 (-DestroyClassBrush@@YAXAEBV-$SmartObjStackRef@UtagCLS@@@@@Z.c)
 *     _HasCaptionIcon @ 0x1C00A08F8 (_HasCaptionIcon.c)
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSetClassLongPtr @ 0x1C010CB8C (xxxSetClassLongPtr.c)
 *     GetClassIcoCur @ 0x1C0115200 (GetClassIcoCur.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E925C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     _SetClassWord @ 0x1C01E9834 (_SetClassWord.c)
 *     _WOWModuleUnload @ 0x1C0228830 (_WOWModuleUnload.c)
 *     xxxRecreateSmallIcons @ 0x1C02441FC (xxxRecreateSmallIcons.c)
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
