/*
 * XREFs of ?SyncTabProxyWindows@WindowData@implementation@Shell@Internal@Windows@winrt@@AEAAXW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800BF94C
 * Callers:
 *     ?SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFilterScope@MultiTasking@SystemSettings@@_K@Z @ 0x1800BFA58 (-SyncWindowTabDataModel@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAA_KW4AltTabFi.c)
 * Callees:
 *     _CxxThrowException_0 @ 0x18008D664 (_CxxThrowException_0.c)
 *     ?at@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z @ 0x1800C03F4 (-at@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@_K@Z.c)
 *     ?at@?$unordered_map@Uguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@5@V?$allocator@U?$pair@$$CBUguid@winrt@@U?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@2@@std@@@5@@std@@QEAAAEAU?$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEBUguid@4@@Z @ 0x1800C0458 (-at@-$unordered_map@Uguid@winrt@@U-$com_ptr@UTabProxyWindow@implementation@Shell@Internal@Window.c)
 *     ?front@?$deque@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ @ 0x1800C09D8 (-front@-$deque@Uguid@winrt@@V-$allocator@Uguid@winrt@@@std@@@std@@QEAAAEAUguid@winrt@@XZ.c)
 *     ?HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z @ 0x1800C28B0 (-HideFromAltTab@TabProxyWindow@implementation@Shell@Internal@Windows@winrt@@QEAAX_N@Z.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::SyncTabProxyWindows(
        __int64 a1,
        int a2,
        unsigned __int64 a3)
{
  int v4; // edx
  int v5; // edx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v8; // rax
  unsigned __int64 i; // rsi
  __int64 v10; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v11; // rax
  __int64 v12; // rax
  winrt::Windows::Internal::Shell::implementation::TabProxyWindow **v13; // rax
  int pExceptionObject; // [rsp+48h] [rbp+10h] BYREF

  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 && (v5 = v4 - 1) != 0 )
    {
      if ( v5 != 1 )
      {
        pExceptionObject = -2147467263;
        throw (long *)&pExceptionObject;
      }
      v6 = 0LL;
    }
    else
    {
      v6 = *(_QWORD *)(a1 + 184);
      if ( a3 < v6 )
        v6 = a3;
    }
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 184);
  }
  if ( *(_QWORD *)(a1 + 40) )
  {
    v7 = std::deque<winrt::guid>::front(a1 + 152);
    v8 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                               a1 + 24,
                                                                               v7);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v8, 1);
  }
  for ( i = 1LL; i < v6; ++i )
  {
    v10 = std::deque<winrt::guid>::at(a1 + 152, i);
    v11 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 24,
                                                                                v10);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v11, 0);
  }
  while ( v6 < *(_QWORD *)(a1 + 184) )
  {
    v12 = std::deque<winrt::guid>::at(a1 + 152, v6);
    v13 = (winrt::Windows::Internal::Shell::implementation::TabProxyWindow **)std::unordered_map<winrt::guid,winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::TabProxyWindow>>::at(
                                                                                a1 + 24,
                                                                                v12);
    winrt::Windows::Internal::Shell::implementation::TabProxyWindow::HideFromAltTab(*v13, 1);
    ++v6;
  }
}
