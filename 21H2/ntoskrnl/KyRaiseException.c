/*
 * XREFs of KyRaiseException @ 0x140576820
 * Callers:
 *     KiRaiseException @ 0x140576640 (KiRaiseException.c)
 * Callees:
 *     RtlInitializeExtendedContext @ 0x140295100 (RtlInitializeExtendedContext.c)
 *     RtlGetExtendedContextLength @ 0x140295190 (RtlGetExtendedContextLength.c)
 *     KeVerifyContextXStateCetU @ 0x140298378 (KeVerifyContextXStateCetU.c)
 *     KeVerifyContextRecord @ 0x1402985E4 (KeVerifyContextRecord.c)
 *     RtlpSanitizeContextFlags @ 0x140298720 (RtlpSanitizeContextFlags.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     KeContextToKframes @ 0x14041F500 (KeContextToKframes.c)
 *     _alloca_probe @ 0x14042A4D0 (_alloca_probe.c)
 *     RtlpReadExtendedContext @ 0x140703290 (RtlpReadExtendedContext.c)
 */

__int64 __fastcall KyRaiseException(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rdi
  char PreviousMode; // r15
  __int64 v7; // rax
  __int64 result; // rax
  unsigned int v9; // ebx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  void *v12; // rsp
  void *v13; // rsp
  int v14; // edx
  int v15; // ecx
  _DWORD *v16; // rsi
  struct _KTHREAD *CurrentThread; // r14
  int v18; // r12d
  unsigned __int8 CurrentIrql; // si
  int v20; // r8d
  unsigned __int64 ExtendedFeatureDisableMask; // rcx
  unsigned int v22; // edi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v25; // zf
  __int64 v26; // [rsp+20h] [rbp-10h]
  unsigned int v27; // [rsp+30h] [rbp+0h] BYREF
  unsigned int v28; // [rsp+34h] [rbp+4h] BYREF
  __int64 v29; // [rsp+38h] [rbp+8h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp+10h] BYREF
  __int64 v31; // [rsp+48h] [rbp+18h]
  __int64 v32; // [rsp+50h] [rbp+20h]
  __int128 v33; // [rsp+58h] [rbp+28h] BYREF
  __int64 v34; // [rsp+68h] [rbp+38h]

  v32 = a4;
  v31 = a3;
  v4 = a2;
  v29 = 0LL;
  v27 = 0;
  v28 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( !PreviousMode )
    goto LABEL_11;
  v7 = (__int64)(a2 + 12);
  if ( (unsigned __int64)(a2 + 12) >= 0x7FFFFFFF0000LL )
    v7 = 0x7FFFFFFF0000LL;
  v27 = *(_DWORD *)v7;
  result = RtlpSanitizeContextFlags(&v27, PreviousMode);
  if ( (int)result >= 0 )
  {
    v9 = v27;
    result = RtlGetExtendedContextLength(v27, (__int64)&v28);
    if ( (int)result >= 0 )
    {
      v10 = v28 + 15LL;
      if ( v10 <= v28 )
        v10 = 0xFFFFFFFFFFFFFF0LL;
      v11 = v10 & 0xFFFFFFFFFFFFFFF0uLL;
      v12 = alloca(v11);
      v13 = alloca(v11);
      result = RtlInitializeExtendedContext((__int64)&v27, v9, (__int64)&v29);
      if ( (int)result >= 0 )
      {
        v16 = (_DWORD *)(v29 - 1232);
        LOBYTE(v14) = 1;
        result = RtlpReadExtendedContext(v15, v14, v29, v9, (__int64)v4, 0LL);
        if ( (int)result >= 0 )
        {
          v4 = v16;
LABEL_11:
          CurrentThread = KeGetCurrentThread();
          v18 = 1;
          CurrentIrql = KeGetCurrentIrql();
          if ( !CurrentIrql )
          {
            KeGetCurrentIrql();
            __writecr8(1uLL);
          }
          if ( PreviousMode )
          {
            if ( (CurrentThread->MiscFlags & 0x100000) != 0 )
            {
              v30 = 0LL;
              if ( (int)KeVerifyContextXStateCetU((__int64)CurrentThread, v4, &v30) < 0
                || (v33 = 0LL,
                    v34 = 0LL,
                    (int)KeVerifyContextRecord((__int64)CurrentThread, (__int64)v4, v20, (int)&v33, (__int64)&v30) < 0) )
              {
                *(_DWORD *)(a1 + 4) |= 1u;
                v18 = 0;
              }
            }
          }
          ExtendedFeatureDisableMask = CurrentThread->ExtendedFeatureDisableMask;
          if ( ExtendedFeatureDisableMask
            && (v4[12] & 0x100040) == 0x100040
            && (ExtendedFeatureDisableMask & *(_QWORD *)((_BYTE *)v4 + v4[312] + 1232)) != 0 )
          {
            v22 = -1073741811;
          }
          else
          {
            if ( v18 )
            {
              LOBYTE(v26) = PreviousMode;
              KeContextToKframes(v32, v31, (__int64)v4, v4[12], v26);
            }
            v22 = 0;
          }
          if ( !CurrentIrql )
          {
            if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && (unsigned __int8)(KeGetCurrentIrql() - 2) <= 0xDu )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v25 = (SchedulerAssist[5] & 0xFFFF0001) == 0;
              SchedulerAssist[5] &= 0xFFFF0001;
              if ( v25 )
                KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
            }
            __writecr8(0LL);
          }
          return v22;
        }
      }
    }
  }
  return result;
}
