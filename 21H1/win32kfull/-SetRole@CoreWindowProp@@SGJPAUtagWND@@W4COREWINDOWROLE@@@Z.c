/*
 * XREFs of ?SetRole@CoreWindowProp@@SGJPAUtagWND@@W4COREWINDOWROLE@@@Z @ 0x19C66E
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 * Callees:
 *     ?ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z @ 0xCC6B6 (-ChangeRole@CoreWindowProp@@KGJPAUtagWND@@W4COREWINDOWROLE@@_N@Z.c)
 */

int __fastcall CoreWindowProp::SetRole(int a1, int a2)
{
  return CoreWindowProp::ChangeRole(a1, a2, 1u);
}
