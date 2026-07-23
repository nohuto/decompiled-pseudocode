/*
 * XREFs of EtwpCoverageRecordAtHighIrql @ 0x1405A6C24
 * Callers:
 *     EtwSetProcessTelemetryCoverage @ 0x140771D78 (EtwSetProcessTelemetryCoverage.c)
 * Callees:
 *     EtwTelemetryCoverageReport @ 0x140246D10 (EtwTelemetryCoverageReport.c)
 *     EtwpCoverageValidateCP @ 0x140246E40 (EtwpCoverageValidateCP.c)
 *     RtlStringCchCopyA @ 0x140246F94 (RtlStringCchCopyA.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall EtwpCoverageRecordAtHighIrql(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // xmm1_8
  unsigned __int8 CurrentIrql; // bl
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+20h] [rbp-78h] BYREF
  __int128 v12; // [rsp+28h] [rbp-70h] BYREF
  __int64 v13; // [rsp+38h] [rbp-60h]
  char pszDest[64]; // [rsp+40h] [rbp-58h] BYREF

  v11 = 0;
  result = EtwpCoverageValidateCP(a1, &v11);
  if ( (_DWORD)result )
  {
    v3 = a1[2];
    v12 = *(_OWORD *)a1;
    v13 = v3;
    RtlStringCchCopyA(pszDest, 0x40uLL, (NTSTRSAFE_PCSTR)v12);
    HIDWORD(v12) = 0;
    *(_QWORD *)&v12 = pszDest;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    EtwTelemetryCoverageReport((__int64 *)&v12);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
    result = HIDWORD(v12);
    *((_DWORD *)a1 + 3) = HIDWORD(v12);
  }
  return result;
}
