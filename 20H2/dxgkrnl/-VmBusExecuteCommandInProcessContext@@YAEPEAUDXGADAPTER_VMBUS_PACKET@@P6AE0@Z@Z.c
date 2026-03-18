/*
 * XREFs of ?VmBusExecuteCommandInProcessContext@@YAEPEAUDXGADAPTER_VMBUS_PACKET@@P6AE0@Z@Z @ 0x1C023FC34
 * Callers:
 *     ?VmBusProcessPacket@@YAXPEAX@Z @ 0x1C0243CF0 (-VmBusProcessPacket@@YAXPEAX@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000713C (--0DXGHANDLETABLELOCKSHARED@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C003AC08 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 */

char __fastcall VmBusExecuteCommandInProcessContext(
        struct DXGADAPTER_VMBUS_PACKET *a1,
        __int64 (__fastcall *a2)(struct DXGADAPTER_VMBUS_PACKET *))
{
  __int64 v2; // rbp
  _DWORD *v3; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r15
  BOOLEAN v9; // r14
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rcx
  __int64 v14; // rcx
  struct _EX_RUNDOWN_REF *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v25; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+28h] [rbp-80h]
  _BYTE v27[24]; // [rsp+30h] [rbp-78h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-60h] BYREF

  v2 = *((_QWORD *)a1 + 7);
  v3 = (_DWORD *)*((_QWORD *)a1 + 10);
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v2 + 56), &ApcState);
  v8 = 0;
  v9 = 0;
  if ( v3[2] )
  {
    DXGHANDLETABLELOCKSHARED::DXGHANDLETABLELOCKSHARED((DXGHANDLETABLELOCKSHARED *)v27, (struct _KTHREAD **)v2);
    v10 = (v3[2] >> 6) & 0xFFFFFF;
    if ( (unsigned int)v10 < *(_DWORD *)(v2 + 256) )
    {
      v11 = *(_QWORD *)(v2 + 240);
      v12 = *(_DWORD *)(v11 + 16 * v10 + 8);
      if ( ((v3[2] >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60) && (v12 & 0x2000) == 0 && (v12 & 0x1F) != 0 )
      {
        v13 = v12 & 0x1F;
        if ( (_BYTE)v13 == 12 )
        {
          v15 = *(struct _EX_RUNDOWN_REF **)(v11 + 16LL * (unsigned int)v10);
          if ( !v15 )
            goto LABEL_13;
          v9 = ExAcquireRundownProtection(v15 + 25);
          if ( v9 )
            goto LABEL_13;
          v14 = WdLogNewEntry5_WdError(v17, v16);
          *(_QWORD *)(v14 + 24) = (unsigned int)v3[2];
          *(_QWORD *)(v14 + 32) = 208LL;
        }
        else
        {
          v14 = WdLogNewEntry5_WdError(v13, (v3[2] >> 25) & 0x60);
          *(_QWORD *)(v14 + 24) = 267LL;
        }
        WdLogEvent5_WdError(v14);
      }
    }
    v15 = 0LL;
LABEL_13:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v27);
    goto LABEL_18;
  }
  if ( v3[3] )
    goto LABEL_26;
  v18 = (int)v3[4];
  if ( (unsigned int)v18 > 0x30 )
    goto LABEL_26;
  v7 = 0x1000000000104LL;
  if ( !_bittest64(&v7, v18) )
    goto LABEL_26;
  v15 = (struct _EX_RUNDOWN_REF *)*((_QWORD *)a1 + 7);
LABEL_18:
  if ( !v15 )
  {
LABEL_26:
    v23 = WdLogNewEntry5_WdError(v7, v6);
    *(_QWORD *)(v23 + 24) = (unsigned int)v3[2];
    WdLogEvent5_WdError(v23);
    goto LABEL_27;
  }
  CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v25, (struct DXGPROCESS *)v15);
  v21 = v26;
  if ( v26 )
  {
    *((_QWORD *)a1 + 6) = v15;
    v8 = a2(a1);
  }
  else
  {
    v22 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v22 + 24) = 242LL;
    WdLogEvent5_WdError(v22);
  }
  if ( v21 )
    *(_QWORD *)(v21 + 8) = v25;
  if ( v9 )
    ExReleaseRundownProtection(v15 + 25);
LABEL_27:
  KeUnstackDetachProcess(&ApcState);
  return v8;
}
