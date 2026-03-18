/*
 * XREFs of ?GetForceEngineCurrentValue@CMotion@@QEBAMXZ @ 0x18021035C
 * Callers:
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x1801CD430 (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CMotion::GetForceEngineCurrentValue(CMotion *this)
{
  _BYTE v2[24]; // [rsp+20h] [rbp-28h] BYREF

  return *(float *)((*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 17) + 32LL))(
                      *((_QWORD *)this + 17),
                      v2)
                  + 4);
}
