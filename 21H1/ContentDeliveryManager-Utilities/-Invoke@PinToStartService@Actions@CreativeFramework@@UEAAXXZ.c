/*
 * XREFs of ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x180086F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::PinToStartService::Invoke(
        CreativeFramework::Actions::PinToStartService *this,
        __int64 a2,
        __int64 a3,
        const wchar_t *a4)
{
  const wchar_t *v4; // r8
  const wchar_t *v5; // rdx
  char *v6; // rcx

  LOBYTE(a4) = *((_BYTE *)this + 104);
  v4 = (const wchar_t *)((char *)this + 72);
  if ( *((_QWORD *)this + 12) >= 8uLL )
    v4 = *(const wchar_t **)v4;
  v5 = (const wchar_t *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v5 = *(const wchar_t **)v5;
  v6 = (char *)this + 8;
  if ( *((_QWORD *)v6 + 3) >= 8uLL )
    v6 = *(char **)v6;
  CreativeFramework::Actions::PinToStart((const WCHAR *)v6, v5, v4, a4);
}
