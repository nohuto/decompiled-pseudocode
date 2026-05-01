/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18034BAF8
 * Callers:
 *     _lambda_4cbe742715b394437ec6208d218cee82_::operator() @ 0x1800B11C0 (_lambda_4cbe742715b394437ec6208d218cee82_--operator().c)
 *     _lambda_9ab68852e2b72d35890b3d375991eaf9_::operator() @ 0x1800B1A2C (_lambda_9ab68852e2b72d35890b3d375991eaf9_--operator().c)
 *     _lambda_9f8c9b30a255187f7fdba174b5588192_::operator() @ 0x1800B1C68 (_lambda_9f8c9b30a255187f7fdba174b5588192_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall TouchKeyboardExperienceManager::IsFrameReady(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrame *a2)
{
  __int128 v4; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)&v4 = this;
  if ( !a2 )
    return 0;
  (*(void (__fastcall **)(struct IApplicationFrame *, __int128 *))(*(_QWORD *)a2 + 24LL))(a2, &v4);
  (*(void (__fastcall **)(struct IApplicationFrame *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)&v4 + 8);
  return v4 != 0;
}
