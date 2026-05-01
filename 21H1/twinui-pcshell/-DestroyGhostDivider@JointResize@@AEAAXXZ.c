/*
 * XREFs of ?DestroyGhostDivider@JointResize@@AEAAXXZ @ 0x1803F9DA8
 * Callers:
 *     ?ObservedKeyDown@JointResize@@UEAAJI@Z @ 0x1803FA410 (-ObservedKeyDown@JointResize@@UEAAJI@Z.c)
 *     ?OnArrangedWindowBorderExit@JointResize@@UEAAXXZ @ 0x1803FA6E0 (-OnArrangedWindowBorderExit@JointResize@@UEAAXXZ.c)
 *     ?OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z @ 0x1803FA730 (-OnArrangedWindowSizeCompleted@JointResize@@UEAAXH@Z.c)
 *     ?OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z @ 0x1803FA810 (-OnArrangedWindowSizeStarted@JointResize@@UEAAJPEAUIApplicationView@@UtagRECT@@HI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::DestroyGhostDivider(JointResize *this)
{
  __int64 *v1; // rbx
  __int64 v2; // rcx

  v1 = (__int64 *)((char *)this + 168);
  v2 = *((_QWORD *)this + 21);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 32LL))(v2);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v1);
  }
}
