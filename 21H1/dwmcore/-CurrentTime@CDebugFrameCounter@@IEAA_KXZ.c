/*
 * XREFs of ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x180167118
 * Callers:
 *     ?WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z @ 0x18003E230 (-WaitForNextFrameStart@CPartitionVerticalBlankScheduler@@AEAAJ_N@Z.c)
 *     ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18003E62C (-WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18003E980 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

unsigned __int64 __fastcall CDebugFrameCounter::CurrentTime(CDebugFrameCounter *this)
{
  unsigned __int64 result; // rax
  LARGE_INTEGER v2; // rbx
  unsigned __int64 v3; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 24) )
  {
    v2 = g_qpcFrequency;
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 581) + 120LL))(*((_QWORD *)this + 581));
    return 10000000 * (v3 / v2.QuadPart) + 10000000 * (v3 % v2.QuadPart) / v2.QuadPart;
  }
  return result;
}
