/*
 * XREFs of ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x1800921D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::TaskbarPinService::Invoke(
        CreativeFramework::Actions::TaskbarPinService *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char *v4; // rcx
  const WCHAR *v5; // rdx
  char *v6; // rcx

  LOBYTE(a3) = *((_BYTE *)this + 104);
  if ( *((_QWORD *)this + 11) )
  {
    v4 = (char *)this + 72;
    if ( *((_QWORD *)v4 + 3) >= 8uLL )
      v4 = *(char **)v4;
    LOBYTE(a4) = (_BYTE)a3;
    CreativeFramework::Actions::PinApp((const WCHAR *)v4, a2, (__int64)a3, a4);
  }
  else
  {
    v5 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    v6 = (char *)this + 8;
    if ( *((_QWORD *)v6 + 3) >= 8uLL )
      v6 = *(char **)v6;
    CreativeFramework::Actions::PinPackagedAppToTaskbar((PCWSTR)v6, v5, a3);
  }
}
