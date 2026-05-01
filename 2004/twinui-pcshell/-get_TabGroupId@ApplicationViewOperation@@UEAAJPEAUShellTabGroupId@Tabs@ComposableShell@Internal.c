/*
 * XREFs of ?get_TabGroupId@ApplicationViewOperation@@UEAAJPEAUShellTabGroupId@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18008ABA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::get_TabGroupId(
        ApplicationViewOperation *this,
        struct Windows::Internal::ComposableShell::Tabs::ShellTabGroupId *a2)
{
  __int64 result; // rax

  result = 0LL;
  *(_OWORD *)a2 = *((_OWORD *)this + 15);
  return result;
}
