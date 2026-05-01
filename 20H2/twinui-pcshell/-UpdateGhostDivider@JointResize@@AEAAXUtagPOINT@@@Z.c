/*
 * XREFs of ?UpdateGhostDivider@JointResize@@AEAAXUtagPOINT@@@Z @ 0x18041E948
 * Callers:
 *     _lambda_f8a4012ea914e544f53ba03328832034_::operator() @ 0x18041C6F0 (_lambda_f8a4012ea914e544f53ba03328832034_--operator().c)
 *     ?OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z @ 0x18041DCD0 (-OnArrangedWindowSizeUpdated@JointResize@@UEAAXUtagRECT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

void __fastcall JointResize::UpdateGhostDivider(JointResize *this, struct tagPOINT a2)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 21);
  if ( v2 )
    (*(void (__fastcall **)(__int64, struct tagPOINT))(*(_QWORD *)v2 + 48LL))(v2, a2);
}
