/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18032AA5C
 * Callers:
 *     _lambda_62c9f7536e76f85d48c474b5f2f194d8_::operator() @ 0x1800A1590 (_lambda_62c9f7536e76f85d48c474b5f2f194d8_--operator().c)
 *     _lambda_95a8ea034506ab1e4f4125e3936ae1b3_::operator() @ 0x1800A1BE8 (_lambda_95a8ea034506ab1e4f4125e3936ae1b3_--operator().c)
 *     _lambda_ae8220f02ed2a4c19b01bc805f2788a4_::operator() @ 0x1800A1D34 (_lambda_ae8220f02ed2a4c19b01bc805f2788a4_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
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
