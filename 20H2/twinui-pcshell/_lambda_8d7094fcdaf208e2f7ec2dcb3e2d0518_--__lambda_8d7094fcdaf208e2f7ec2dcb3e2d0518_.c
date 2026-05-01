/*
 * XREFs of _lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_ @ 0x1800B0B0C
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___::_scalar_deleting_destructor_ @ 0x1800B21C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518___--_scala.c)
 *     ?PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ @ 0x18034EEE0 (-PreloadInputApp@TouchKeyboardExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ??1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x180347648 (--1OnPreloadInputAppActivity@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 */

void __fastcall lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_::__lambda_8d7094fcdaf208e2f7ec2dcb3e2d0518_(__int64 a1)
{
  TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity::~OnPreloadInputAppActivity((TouchKeyboardExperienceTelemetryLogger::OnPreloadInputAppActivity *)(a1 + 16));
  Microsoft::WRL::WeakRef::~WeakRef((Microsoft::WRL::WeakRef *)(a1 + 8));
}
