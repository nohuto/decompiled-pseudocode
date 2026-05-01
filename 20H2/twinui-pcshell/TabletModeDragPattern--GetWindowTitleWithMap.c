/*
 * XREFs of TabletModeDragPattern::GetWindowTitleWithMap @ 0x180418E18
 * Callers:
 *     TabletModeDragPattern::GenerateStringWithMap @ 0x180418848 (TabletModeDragPattern--GenerateStringWithMap.c)
 * Callees:
 *     ?GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z @ 0x1800303B0 (-GetWindowForView@ApplicationViewHelpers@@YAPEAUHWND__@@PEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18008CB20 (__security_check_cookie.c)
 *     ?s_LookupEntry@?$CSimpleHashTable@PEAUHWND__@@V?$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V?$CDefaultHashPolicy@PEAUHWND__@@@@V?$CDefaultKeyCompare@PEAUHWND__@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEAUHWND__@@@Z @ 0x1803B1B90 (-s_LookupEntry@-$CSimpleHashTable@PEAUHWND__@@V-$ComPtr@UISwitchItemElement@@@WRL@Microsoft@@V-$.c)
 *     ?_AddUpdateItem@?$CSimpleHashTable@PEAUIApplicationView@@PEBGV?$CDefaultHashPolicy@PEAUIApplicationView@@@@V?$CDefaultKeyCompare@PEAUIApplicationView@@@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@AEAAJHAEBQEAUIApplicationView@@AEBQEBGPEAPEBG@Z @ 0x180418F9C (-_AddUpdateItem@-$CSimpleHashTable@PEAUIApplicationView@@PEBGV-$CDefaultHashPolicy@PEAUIApplicat.c)
 */

__int64 __fastcall TabletModeDragPattern::GetWindowTitleWithMap(
        __int64 (__fastcall ***this)(ApplicationViewHelpers *, GUID *, __int64 *),
        __int64 a2,
        LPWSTR *a3)
{
  __int64 v5; // rcx
  __int64 v7; // rax
  HRESULT v8; // ebx
  __int64 v9; // rdx
  HWND WindowForView; // rax
  __int64 v11; // rdx
  __int64 (__fastcall ***v13)(ApplicationViewHelpers *, GUID *, __int64 *); // [rsp+30h] [rbp-D0h] BYREF
  LPWSTR ppwsz; // [rsp+38h] [rbp-C8h] BYREF
  LPWSTR v15[2]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR pString[264]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+288h] [rbp+188h]

  *a3 = 0LL;
  v13 = this;
  v5 = *(_QWORD *)(a2 + 16);
  if ( v5
    && (v7 = CSimpleHashTable<HWND__ *,Microsoft::WRL::ComPtr<ISwitchItemElement>,CDefaultHashPolicy<HWND__ *>,CDefaultKeyCompare<HWND__ *>,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
               v5,
               *(_DWORD *)(a2 + 4),
               &v13),
        *(_DWORD *)v7 == 1) )
  {
    v8 = SHStrDupW(*(LPCWSTR *)(v7 + 16), a3);
    if ( v8 < 0 )
    {
      v9 = 21LL;
LABEL_12:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\dragpattern.cpp",
        (const char *)(unsigned int)v8);
    }
  }
  else
  {
    WindowForView = (HWND)ApplicationViewHelpers::GetWindowForView(this, (struct IApplicationView *)a2);
    if ( !WindowForView )
    {
      v8 = -2147467259;
      v9 = 26LL;
      goto LABEL_12;
    }
    InternalGetWindowText(WindowForView, pString, 260);
    if ( SHStrDupW(pString, &ppwsz) >= 0 )
    {
      v15[0] = ppwsz;
      if ( (int)CSimpleHashTable<IApplicationView *,unsigned short const *,CDefaultHashPolicy<IApplicationView *>,CDefaultKeyCompare<IApplicationView *>,CDefaultResizePolicy,CDefaultRehashPolicy>::_AddUpdateItem(
                  a2,
                  v11,
                  &v13,
                  v15) < 0 )
        CoTaskMemFree(ppwsz);
    }
    v8 = SHStrDupW(pString, a3);
    if ( v8 < 0 )
    {
      v9 = 40LL;
      goto LABEL_12;
    }
  }
  return (unsigned int)v8;
}
