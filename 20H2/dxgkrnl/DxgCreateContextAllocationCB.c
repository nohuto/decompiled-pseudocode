/*
 * XREFs of DxgCreateContextAllocationCB @ 0x1C014CD10
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C000D490 (DpiGetDxgAdapter.c)
 *     ??0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ @ 0x1C000D4DC (--0DXGVALIDATIONPROCESSREATTACH@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgCreateContextAllocationCB(unsigned int *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 DxgAdapter; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // r9
  unsigned int v12; // ebx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+80h] [rbp-68h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+88h] [rbp-60h] BYREF

  DXGVALIDATIONPROCESSREATTACH::DXGVALIDATIONPROCESSREATTACH((DXGVALIDATIONPROCESSREATTACH *)v17);
  if ( KeGetCurrentIrql() )
  {
    v14 = WdLogNewEntry5_WdAssertion(v3, v2);
    *(_QWORD *)(v14 + 24) = 160LL;
    WdLogEvent5_WdAssertion(v14);
  }
  DxgAdapter = DpiGetDxgAdapter(*((_QWORD *)a1 + 1), v2);
  v7 = DxgAdapter;
  if ( !DxgAdapter )
    goto LABEL_18;
  if ( !*(_QWORD *)(DxgAdapter + 2704) )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v6, v5);
    v15[3] = 275LL;
    v15[4] = 7LL;
    v15[5] = 0LL;
    v15[6] = 0LL;
    v15[7] = 0LL;
    WdLogEvent5_WdCriticalError(v15);
  }
  v8 = *((_QWORD *)a1 + 2);
  if ( v8 )
  {
    if ( !*(_DWORD *)(v8 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v8 + 136)) )
    {
      v16 = WdLogNewEntry5_WdCriticalError(v10, v9);
      *(_QWORD *)(v16 + 24) = 275LL;
      *(_QWORD *)(v16 + 32) = 4LL;
      *(_QWORD *)(v16 + 40) = v8;
      *(_OWORD *)(v16 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v16);
    }
    v11 = (_QWORD *)*((_QWORD *)a1 + 3);
    if ( v11 )
    {
      if ( *(int *)(v7 + 2328) >= 9472 )
        v11 = (_QWORD *)*v11;
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD *, _QWORD, _QWORD, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 2704) + 640LL) + 8LL) + 656LL))(
            *(_QWORD *)(*(_QWORD *)(v7 + 2704) + 648LL),
            a1[20],
            *a1,
            v8,
            v11,
            *((_QWORD *)a1 + 4),
            *((_QWORD *)a1 + 5),
            a1[12],
            a1[13],
            a1[14],
            a1[15],
            a1[16],
            a1[17],
            a1 + 18);
  }
  else
  {
LABEL_18:
    v12 = -1073741811;
  }
  if ( v17[0] )
    KeUnstackDetachProcess(&ApcState);
  return v12;
}
