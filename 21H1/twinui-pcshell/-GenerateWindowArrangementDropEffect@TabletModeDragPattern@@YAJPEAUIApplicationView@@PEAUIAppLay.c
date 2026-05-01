/*
 * XREFs of ?GenerateWindowArrangementDropEffect@TabletModeDragPattern@@YAJPEAUIApplicationView@@PEAUIAppLayout@@W4ARRANGEMENT_ACTION@@PEAV?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@PEAPEAG@Z @ 0x1803F5C64
 * Callers:
 *     ?UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z @ 0x1803EEA88 (-UpdateUIADropEffect@WindowArrangementView@@AEAAJW4ARRANGEMENT_ACTION@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x1800767F8 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x1803F597C (TabletModeDragPattern--GenerateStringWithMap.c)
 *     ?GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z @ 0x1803F5E44 (-GetViewAtIndex@TabletModeDragPattern@@YAJPEAUIAppLayout@@IPEAPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall TabletModeDragPattern::GenerateWindowArrangementDropEffect(
        ApplicationViewHelpers *a1,
        TabletModeDragPattern *a2,
        int a3,
        __int64 a4,
        _QWORD *a5)
{
  unsigned int v6; // edi
  char v9; // r12
  int v10; // r15d
  ApplicationViewHelpers *v11; // r8
  unsigned int v12; // esi
  struct IApplicationView **v13; // r9
  int ViewAtIndex; // eax
  int v15; // ebx
  __int64 v16; // rdx
  struct IApplicationView **v18; // r9
  struct IApplicationView **v19; // r9
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  ApplicationViewHelpers *v22; // [rsp+90h] [rbp+40h] BYREF
  __int64 v23; // [rsp+A8h] [rbp+58h]

  v23 = a4;
  v6 = 0;
  v20[0] = (__int64)a1;
  v9 = 0;
  *a5 = 0LL;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
  v10 = 1;
  v22 = 0LL;
  v11 = 0LL;
  if ( a3 == 1 )
  {
    if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *, _QWORD))(*(_QWORD *)a2 + 184LL))(
           a2,
           a1,
           0LL) )
    {
      v12 = 2008;
    }
    else
    {
      v12 = 2010;
      v9 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)&v22, v19);
      v15 = ViewAtIndex;
      if ( ViewAtIndex < 0 )
      {
        v16 = 149LL;
        goto LABEL_17;
      }
    }
LABEL_13:
    v11 = v22;
    if ( v22 )
      v10 = 2;
    goto LABEL_15;
  }
  if ( a3 == 2 )
  {
    if ( (*(unsigned int (__fastcall **)(TabletModeDragPattern *, ApplicationViewHelpers *, _QWORD))(*(_QWORD *)a2 + 184LL))(
           a2,
           a1,
           0LL) )
    {
      v12 = 2009;
    }
    else
    {
      v12 = 2011;
      v9 = 1;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, 0LL, (unsigned int)&v22, v18);
      v15 = ViewAtIndex;
      if ( ViewAtIndex < 0 )
      {
        v16 = 163LL;
        goto LABEL_17;
      }
    }
    goto LABEL_13;
  }
  if ( a3 <= 2 )
    goto LABEL_19;
  if ( a3 <= 4 )
  {
    v9 = 1;
    v12 = 2007;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    ViewAtIndex = TabletModeDragPattern::GetViewAtIndex(a2, (struct IAppLayout *)(a3 != 3), (unsigned int)&v22, v13);
    v15 = ViewAtIndex;
    if ( ViewAtIndex < 0 )
    {
      v16 = 172LL;
      goto LABEL_17;
    }
    goto LABEL_13;
  }
  if ( a3 == 5 )
  {
    v12 = 2005;
    goto LABEL_15;
  }
  if ( a3 == 6 )
  {
    v12 = 2006;
LABEL_15:
    ViewAtIndex = TabletModeDragPattern::GenerateStringWithMap(v10, a1, v11, v23, v12, v9, a5);
    v15 = ViewAtIndex;
    if ( ViewAtIndex >= 0 )
    {
LABEL_18:
      v6 = v15;
      goto LABEL_19;
    }
    v16 = 188LL;
LABEL_17:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
      (const char *)(unsigned int)ViewAtIndex);
    goto LABEL_18;
  }
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
  return v6;
}
