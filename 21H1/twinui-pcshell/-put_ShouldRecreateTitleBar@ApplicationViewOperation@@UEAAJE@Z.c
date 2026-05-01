/*
 * XREFs of ?put_ShouldRecreateTitleBar@ApplicationViewOperation@@UEAAJE@Z @ 0x1801849B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApplicationViewOperation::put_ShouldRecreateTitleBar(ApplicationViewOperation *this, char a2)
{
  *((_BYTE *)this + 257) = a2 != 0;
  return 0LL;
}
