/*
 * XREFs of ?NavigationEnabled@ControllerNavigationManager@InputETW@@SAXUtagRECT@@UtagPOINT@@@Z @ 0x18011CC04
 * Callers:
 *     ?EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z @ 0x18011CAB4 (-EnableNavigation@ControllerNavigationManager@@AEAAXPEAVBamoControllerNavigationClientProxy@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1800190D0 (_tlgKeywordOn.c)
 *     ?IsEnabled@InputETW@@SA_NE_K@Z @ 0x180028D94 (-IsEnabled@InputETW@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z @ 0x180029640 (-get@-$static_lazy@VInputETW@@@details@wil@@QEAAPEAVInputETW@@P6AXXZ@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33333@Z @ 0x1800FCE3C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 */

void __fastcall InputETW::ControllerNavigationManager::NavigationEnabled(struct tagRECT *a1, struct tagPOINT a2)
{
  LONG x; // ebx
  __int64 v4; // rcx
  LPVOID v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 right; // [rsp+50h] [rbp-20h] BYREF
  __int64 bottom; // [rsp+58h] [rbp-18h] BYREF
  __int64 left; // [rsp+60h] [rbp-10h] BYREF
  __int64 top; // [rsp+68h] [rbp-8h] BYREF
  LONG y; // [rsp+9Ch] [rbp+2Ch]
  __int64 v13; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v14; // [rsp+A8h] [rbp+38h] BYREF

  y = a2.y;
  x = a2.x;
  if ( InputETW::IsEnabled((__int64)a1) )
  {
    v5 = wil::details::static_lazy<InputETW>::get(v4, _lambda_ffe5d831185bf77c783480ebf240a46d_::_lambda_invoker_cdecl_);
    if ( **((_DWORD **)v5 + 1) > 5u && tlgKeywordOn(*((_QWORD *)v5 + 1), 1LL) )
    {
      v13 = y;
      v14 = x;
      right = a1->right;
      bottom = a1->bottom;
      left = a1->left;
      top = a1->top;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v6,
        byte_1801CDF6F,
        v6,
        v7,
        (__int64)&top,
        (__int64)&left,
        (__int64)&bottom,
        (__int64)&right,
        (__int64)&v14,
        (__int64)&v13);
    }
  }
}
