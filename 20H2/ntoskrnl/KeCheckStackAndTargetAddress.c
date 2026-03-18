/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x140311670
 * Callers:
 *     __C_specific_handler @ 0x1403CFB20 (__C_specific_handler.c)
 *     longjmp @ 0x1403CFD00 (longjmp.c)
 *     RtlRestoreContext @ 0x140405690 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140405960 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1402265F0 (KeQueryCurrentStackInformationEx.c)
 *     _guard_icall_bugcheck @ 0x140405E90 (_guard_icall_bugcheck.c)
 */

bool __fastcall KeCheckStackAndTargetAddress(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  bool result; // al
  char v5; // [rsp+30h] [rbp+8h] BYREF
  struct _KPRCB *v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( BugCheckParameter4 >= 0
    || !(result = KeQueryCurrentStackInformationEx(a2, &v5, &v6, &v7))
    || a2 < (unsigned __int64)v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(BugCheckParameter4);
  }
  return result;
}
