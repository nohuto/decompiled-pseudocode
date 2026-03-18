/*
 * XREFs of ?GetWindowForActivationWithFallbackLogic@CWindowGroup@@QAEPAUtagWND@@PBU2@@Z @ 0x19F137
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___ @ 0x19E91D (CWindowGroupManager--_ExecuteGroupAction__lambda_fe5adaad091bae322a0ae467cfe968c7___.c)
 * Callees:
 *     _anonymous_namespace_::FindObject_CWindow_HWND_____const_&__lambda_d62072de4026e54394810d48c60d742e___ @ 0x19E6E7 (_anonymous_namespace_--FindObject_CWindow_HWND_____const_-__lambda_d62072de4026e54394810d48c60d7.c)
 *     _lambda_6b132068d456328099b9be1436a530a1_::operator() @ 0x19EA98 (_lambda_6b132068d456328099b9be1436a530a1_--operator().c)
 *     ?GetWindowToForegroundActivate@CWindow@@QBEPAUtagWND@@XZ @ 0x19F1D5 (-GetWindowToForegroundActivate@CWindow@@QBEPAUtagWND@@XZ.c)
 */

struct tagWND *__thiscall CWindowGroup::GetWindowForActivationWithFallbackLogic(
        CWindowGroup *this,
        const struct tagWND *a2)
{
  int v2; // ebx
  const struct tagWND *v3; // eax
  CWindow *v4; // esi
  int v5; // edx
  CWindow *Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e; // eax
  _DWORD v8[3]; // [esp+8h] [ebp-14h] BYREF
  CWindow *v9; // [esp+14h] [ebp-8h] BYREF
  char v10; // [esp+1Bh] [ebp-1h] BYREF

  v8[0] = this;
  v8[1] = &v10;
  v2 = 0;
  v8[2] = &v9;
  v3 = *(const struct tagWND **)a2;
  v4 = 0;
  v5 = (unsigned __int16)*(_DWORD *)a2;
  v10 = 0;
  v9 = 0;
  a2 = v3;
  Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e = (CWindow *)anonymous_namespace_::FindObject_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e___(
                                                                                          (int)this + 16,
                                                                                          v5,
                                                                                          &a2,
                                                                                          (int)this);
  if ( Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e )
  {
    lambda_6b132068d456328099b9be1436a530a1_::operator()(
      v8,
      Object_CWindow_HWND_____const____lambda_d62072de4026e54394810d48c60d742e);
    v4 = v9;
  }
  if ( v10 )
    return CWindow::GetWindowToForegroundActivate(v4);
  return (struct tagWND *)v2;
}
