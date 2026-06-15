/*
 * XREFs of ??$make_shared@V?$function@$$A6AXXZ@std@@AEAV12@@std@@YA?AV?$shared_ptr@V?$function@$$A6AXXZ@std@@@0@AEAV?$function@$$A6AXXZ@0@@Z @ 0x18000F3E8
 * Callers:
 *     ?Initialize@_WorkTask@@QEAAJV?$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z @ 0x18000F494 (-Initialize@_WorkTask@@QEAAJV-$function@$$A6AXXZ@std@@PEAVCSerialWorkQueue@@@Z.c)
 *     ??0CGenericWorkItem@@QEAA@V?$function@$$A6AXXZ@std@@@Z @ 0x18002D3E8 (--0CGenericWorkItem@@QEAA@V-$function@$$A6AXXZ@std@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::make_shared<std::function<void (void)>,std::function<void (void)> &>(_QWORD *a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _DWORD *v5; // rax
  _DWORD *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD, char *); // rcx

  ProcessHeap = GetProcessHeap();
  v5 = HeapAlloc(ProcessHeap, 0, 0x50uLL);
  v6 = v5;
  if ( v5 )
  {
    v5[2] = 1;
    v5[3] = 1;
    *(_QWORD *)v5 = &std::_Ref_count_obj<std::function<void (void)>>::`vftable';
    *((_QWORD *)v5 + 9) = 0LL;
    v7 = *(__int64 (__fastcall ****)(_QWORD, char *))(a2 + 56);
    if ( v7 )
      *((_QWORD *)v5 + 9) = (**v7)(v7, (char *)v5 + 16);
  }
  else
  {
    v6 = 0LL;
  }
  *a1 = v6 + 4;
  a1[1] = v6;
  return a1;
}
