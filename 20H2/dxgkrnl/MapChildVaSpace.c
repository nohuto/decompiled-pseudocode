/*
 * XREFs of MapChildVaSpace @ 0x1C0250120
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildVaSpace(
        __int64 a1,
        void *a2,
        __int64 a3,
        unsigned __int64 a4,
        int a5,
        int a6,
        _QWORD *a7,
        _QWORD *a8)
{
  _OWORD *PoolWithTag; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _OWORD *v17; // rbx
  __int64 v18; // rax
  char v20; // al
  __int64 v21; // rax
  void **v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  NTSTATUS v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  int v28; // edx
  int v29; // r9d
  char v30; // al
  __int64 v31; // rcx
  _QWORD *v32; // rcx
  void *v33; // rcx
  __int64 v34; // rax
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-88h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x4B677844u);
  v17 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v18 = WdLogNewEntry5_WdLowResource(v14, v13, v15, v16);
    *(_QWORD *)(v18 + 24) = 13191LL;
    WdLogEvent5_WdLowResource(v18);
    return 3221225495LL;
  }
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  v20 = *(_BYTE *)(a1 + 347);
  if ( (v20 & 0x20) != 0 )
    v21 = *(_QWORD *)(a1 + 496);
  else
    v21 = a1 & -(__int64)((v20 & 0x10) != 0);
  *((_QWORD *)v17 + 5) = *(_QWORD *)(*(_QWORD *)(v21 + 496) + 240LL);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v17 + 5), &ApcState);
  v22 = (void **)(v17 + 1);
  if ( !a2 )
  {
    v28 = a6;
    v29 = a5;
LABEL_11:
    *a8 = 0LL;
    v30 = *(_BYTE *)(a1 + 347);
    if ( (v30 & 0x20) != 0 )
    {
      v31 = *(_QWORD *)(*(_QWORD *)(a1 + 496) + 496LL);
    }
    else
    {
      if ( (v30 & 0x10) == 0 )
      {
        v32 = 0LL;
        goto LABEL_17;
      }
      v31 = *(_QWORD *)(a1 + 496);
    }
    v32 = (_QWORD *)(v31 + 128);
LABEL_17:
    v25 = ((__int64 (__fastcall *)(_QWORD, __int64, unsigned __int64, _OWORD *, int, int, _OWORD *, _QWORD *))qword_1C00B22F8)(
            *v32,
            a3,
            a4 >> 12,
            v17 + 1,
            v29,
            v28,
            v17,
            a8);
    goto LABEL_18;
  }
  v25 = ObOpenObjectByPointer(a2, 0x200u, 0LL, 0, 0LL, 0, (PHANDLE)v17 + 2);
  if ( v25 >= 0 )
  {
    v28 = 0;
    v29 = 0;
    *((_DWORD *)v17 + 6) = a6;
    goto LABEL_11;
  }
  v26 = WdLogNewEntry5_WdError(v24, v23);
  *(_QWORD *)(v26 + 24) = 13221LL;
  WdLogEvent5_WdError(v26);
LABEL_18:
  if ( v25 >= 0 )
  {
    *a7 = v17;
    _InterlockedIncrement(&g_VgpuNumVaToGpaMappings);
    _InterlockedExchangeAdd64(&g_VgpuSizeVaToGpaMappings, a4);
  }
  else
  {
    v33 = *v22;
    if ( *v22 )
      ObCloseHandle(v33, 0);
    v34 = WdLogNewEntry5_WdError(v33, v27);
    *(_QWORD *)(v34 + 24) = v25;
    WdLogEvent5_WdError(v34);
    ExFreePoolWithTag(v17, 0x4B677844u);
  }
  KeUnstackDetachProcess(&ApcState);
  return (unsigned int)v25;
}
