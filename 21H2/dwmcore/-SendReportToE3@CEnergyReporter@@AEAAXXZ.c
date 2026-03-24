/*
 * XREFs of ?SendReportToE3@CEnergyReporter@@AEAAXXZ @ 0x1800CD518
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ @ 0x18006FCF0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAXXZ.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSITOR_PROCESS_INFO@@I@Z @ 0x1800B858C (-AddMultipleAndSet@-$DynArray@U_CIT_SI_COMPOSITOR_PROCESS_INFO@@$0A@@@QEAAJPEFBU_CIT_SI_COMPOSIT.c)
 *     std::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)_::function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const_&)___lambda_1ddd33c55d82b8cc6d4854a5a942093f__void_ @ 0x1800EA790 (std--function_void___cdecl(void___unsigned_long_unsigned___int64_unsigned_short_con_ea_1800EA790.c)
 *     ?ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV?$function@$$A6AXPEAXK_KPEBGW4ProcessAttributionFlags@@AEBUProcessAttributionResourceCounters@@@Z@std@@@Z @ 0x1800EB3C0 (-ForEachChangedProcessAttribution@CProcessAttributionObserver@@QEAAXPEAXV-$function@$$A6AXPEAXK_.c)
 */

void __fastcall CEnergyReporter::SendReportToE3(RTL_SRWLOCK *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // r9
  int v6; // esi
  PVOID Ptr; // rax
  int Ptr_high; // ecx
  int v9; // ecx
  struct _TP_WORK *v10; // rcx
  _BYTE v11[72]; // [rsp+20h] [rbp-48h] BYREF

  v4 = std::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const____::function_void___cdecl_void___unsigned_long_unsigned___int64_unsigned_short_const___enum_ProcessAttributionFlags_ProcessAttributionResourceCounters_const______lambda_1ddd33c55d82b8cc6d4854a5a942093f__void_(
         v11,
         0LL,
         a3,
         this[6].Ptr);
  CProcessAttributionObserver::ForEachChangedProcessAttribution(v5, this, v4);
  if ( LODWORD(this[5].Ptr) )
  {
    v6 = 0;
    AcquireSRWLockExclusive(this + 7);
    LODWORD(this[8].Ptr) = GetCurrentThreadId();
    if ( LOBYTE(this[10].Ptr) )
    {
      if ( BYTE1(this[10].Ptr) )
      {
        if ( (unsigned int)dword_180344E3C < MEMORY[0x7FFE037C] && !(unsigned __int8)EtwCheckCoverage(&off_180344E30) )
          NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_180344E30, 0x18u);
      }
      else if ( LODWORD(this[14].Ptr) >= 0xFFFF )
      {
        v6 = -2147467259;
      }
      else
      {
        v6 = DynArray<_CIT_SI_COMPOSITOR_PROCESS_INFO,0>::AddMultipleAndSet(
               (__int64)&this[11],
               this[2].Ptr,
               LODWORD(this[5].Ptr));
      }
    }
    else
    {
      Ptr = this[2].Ptr;
      this[2].Ptr = this[11].Ptr;
      Ptr_high = HIDWORD(this[13].Ptr);
      this[11].Ptr = Ptr;
      LODWORD(Ptr) = HIDWORD(this[4].Ptr);
      HIDWORD(this[4].Ptr) = Ptr_high;
      v9 = (int)this[14].Ptr;
      HIDWORD(this[13].Ptr) = (_DWORD)Ptr;
      LODWORD(Ptr) = this[5].Ptr;
      LODWORD(this[5].Ptr) = v9;
      v10 = (struct _TP_WORK *)this[9].Ptr;
      LODWORD(this[14].Ptr) = (_DWORD)Ptr;
      SubmitThreadpoolWork(v10);
      LOBYTE(this[10].Ptr) = 1;
    }
    LODWORD(this[8].Ptr) = 0;
    ReleaseSRWLockExclusive(this + 7);
    if ( v6 < 0
      && (unsigned int)dword_180344E24 < MEMORY[0x7FFE037C]
      && !(unsigned __int8)EtwCheckCoverage(&off_180344E18) )
    {
      NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessAffinityMask|0x40, &off_180344E18, 0x18u);
    }
    LODWORD(this[5].Ptr) = 0;
  }
}
