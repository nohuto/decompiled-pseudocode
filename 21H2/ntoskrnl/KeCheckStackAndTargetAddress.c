/*
 * XREFs of KeCheckStackAndTargetAddress @ 0x1402B2030
 * Callers:
 *     __C_specific_handler @ 0x1403D0490 (__C_specific_handler.c)
 *     longjmp @ 0x1403D0670 (longjmp.c)
 *     RtlRestoreContext @ 0x140407D00 (RtlRestoreContext.c)
 *     RcFrameConsolidation @ 0x140407FD0 (RcFrameConsolidation.c)
 * Callees:
 *     KeQueryCurrentStackInformationEx @ 0x1403504A0 (KeQueryCurrentStackInformationEx.c)
 *     _guard_icall_bugcheck @ 0x140408500 (_guard_icall_bugcheck.c)
 */

__int64 __fastcall KeCheckStackAndTargetAddress(signed __int64 BugCheckParameter4, unsigned __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  unsigned __int64 v6; // [rsp+40h] [rbp+18h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  v6 = 0LL;
  if ( BugCheckParameter4 >= 0
    || (result = KeQueryCurrentStackInformationEx(a2, &v5, &v6, &v7), !(_BYTE)result)
    || a2 < v6
    || a2 >= v7 )
  {
    __debugbreak();
    guard_icall_bugcheck(BugCheckParameter4);
  }
  return result;
}
