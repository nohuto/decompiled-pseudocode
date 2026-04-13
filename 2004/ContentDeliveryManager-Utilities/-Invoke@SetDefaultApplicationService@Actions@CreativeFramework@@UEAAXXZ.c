/*
 * XREFs of ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x18008CD90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::Invoke(
        CreativeFramework::Actions::SetDefaultApplicationService *this)
{
  unsigned int v1; // r8d
  const WCHAR *v2; // rdx
  char *v3; // rcx

  v1 = *((_DWORD *)this + 26);
  v2 = (const WCHAR *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v3 = (char *)this + 8;
  if ( *((_QWORD *)v3 + 3) >= 8uLL )
    v3 = *(char **)v3;
  CreativeFramework::Actions::SetDefaultApplication((const WCHAR *)v3, v2, v1);
}
