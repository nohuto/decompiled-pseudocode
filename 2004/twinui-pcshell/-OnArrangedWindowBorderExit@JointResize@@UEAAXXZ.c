/*
 * XREFs of ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x18041E080
 * Callers:
 *     <none>
 * Callees:
 *     ?Cleanup@JointResize@@AEAAXXZ @ 0x18041D398 (-Cleanup@JointResize@@AEAAXXZ.c)
 *     ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x18041D748 (-DestroyGhostDivider@JointResize@@AEAAXXZ.c)
 *     ?RegisterRawInput@JointResize@@AEAAX_N@Z @ 0x18041E63C (-RegisterRawInput@JointResize@@AEAAX_N@Z.c)
 */

void __fastcall JointResize::OnArrangedWindowBorderExit(JointResize *this)
{
  JointResize *v1; // rdi

  v1 = (JointResize *)((char *)this - 88);
  JointResize::RegisterRawInput((JointResize *)((char *)this - 88), 0);
  if ( !*((_BYTE *)this + 136) )
  {
    JointResize::DestroyGhostDivider(v1);
    JointResize::Cleanup(v1);
  }
}
