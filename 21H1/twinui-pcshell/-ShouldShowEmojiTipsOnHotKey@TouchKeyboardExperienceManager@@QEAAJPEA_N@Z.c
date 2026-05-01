/*
 * XREFs of ?ShouldShowEmojiTipsOnHotKey@TouchKeyboardExperienceManager@@QEAAJPEA_N@Z @ 0x18032EE94
 * Callers:
 *     ?OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z @ 0x18033F724 (-OnShellHotKey@TabTipAdapter@KeyboardHosting@@QEAAJW4_TouchKeyboardShellHotKeyType@@@Z.c)
 * Callees:
 *     ?GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180329418 (-GetForegroundAppId@TouchKeyboardExperienceManager@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$r.c)
 */

__int64 __fastcall TouchKeyboardExperienceManager::ShouldShowEmojiTipsOnHotKey(
        TouchKeyboardExperienceManager *this,
        bool *a2,
        __int64 a3,
        const char *a4)
{
  bool v5; // al
  void *v6; // rcx
  LPVOID pv; // [rsp+30h] [rbp+8h] BYREF

  pv = this;
  *a2 = 0;
  TouchKeyboardExperienceManager::GetForegroundAppId((__int64)this, &pv, a3, a4);
  v5 = !_o__wcsicmp(L"Chrome", (const wchar_t *)pv)
    || !_o__wcsicmp(L"MSEdge", (const wchar_t *)pv)
    || !_o__wcsicmp(L"MSEdgeDev", (const wchar_t *)pv);
  v6 = pv;
  *a2 = v5;
  if ( v6 )
    CoTaskMemFree(v6);
  return 0LL;
}
