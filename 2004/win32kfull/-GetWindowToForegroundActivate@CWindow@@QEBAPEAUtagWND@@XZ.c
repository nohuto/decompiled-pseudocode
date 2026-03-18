/*
 * XREFs of ?GetWindowToForegroundActivate@CWindow@@QEBAPEAUtagWND@@XZ @ 0x1C02413A0
 * Callers:
 *     CWindowGroupManager::_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___ @ 0x1C0240798 (CWindowGroupManager--_ExecuteGroupAction__lambda_0b15c9f6ca8e948c976540f347ffa214___.c)
 *     ?ForceForeground@CWindow@@QEAA_NXZ @ 0x1C0241268 (-ForceForeground@CWindow@@QEAA_NXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007059C (HMValidateHandleNoSecure.c)
 */

struct tagWND *__fastcall CWindow::GetWindowToForegroundActivate(CWindow *this)
{
  struct tagWND *result; // rax
  __int64 v2; // r8

  result = (struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)this + 2), 1);
  if ( result )
  {
    v2 = *((_QWORD *)result + 25);
    if ( v2 )
    {
      if ( (*(_BYTE *)(*(_QWORD *)(v2 + 40) + 31LL) & 0x18) == 0x10 )
        return (struct tagWND *)*((_QWORD *)result + 25);
    }
  }
  return result;
}
