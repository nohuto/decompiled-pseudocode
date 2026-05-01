/*
 * XREFs of ?IsFrameReady@TouchKeyboardExperienceManager@@AEBA_NPEAUIApplicationFrame@@@Z @ 0x18034C558
 * Callers:
 *     _lambda_306f798c08cb193c312491547c38aafa_::operator() @ 0x1800AF328 (_lambda_306f798c08cb193c312491547c38aafa_--operator().c)
 *     _lambda_3c2570cc1d800aee28388d46c0371330_::operator() @ 0x1800AF474 (_lambda_3c2570cc1d800aee28388d46c0371330_--operator().c)
 *     _lambda_e1213522565a54bdf40b4b22e649b293_::operator() @ 0x1800AF9F0 (_lambda_e1213522565a54bdf40b4b22e649b293_--operator().c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
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
