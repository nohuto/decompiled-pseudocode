/*
 * XREFs of ?DestroyPeriodicFrameNotification@BLTQUEUE@@QEAAJPEA_K@Z @ 0x1C02FBDE4
 * Callers:
 *     ?DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C028F524 (-DestroyPeriodicFrameNotification@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B54 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0018834 (-Assign@DXGADAPTER_REFERENCE@@QEAAXPEAVDXGADAPTER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BLTQUEUE::DestroyPeriodicFrameNotification(struct _KTHREAD **this, unsigned __int64 *a2)
{
  struct _KTHREAD *v4; // rdx
  unsigned int v5; // esi
  __int64 v6; // rcx
  unsigned __int64 v7; // rbx
  _QWORD *v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // rbx
  struct _KTHREAD *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  char v20[8]; // [rsp+30h] [rbp-38h] BYREF
  DXGPUSHLOCK *v21; // [rsp+38h] [rbp-30h]
  int v22; // [rsp+40h] [rbp-28h]
  __int64 v23; // [rsp+70h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v20, this + 356, 0);
  DXGPUSHLOCK::AcquireExclusive(v21);
  v4 = this[362];
  v5 = 0;
  v6 = *a2;
  v7 = 0LL;
  v22 = 2;
  v8 = (_QWORD *)((char *)v4 + 48);
  while ( *v8 != v6 )
  {
    ++v7;
    v8 += 8;
    if ( v7 >= 8 )
    {
      v9 = WdLogNewEntry5_WdError(v6, v4);
      *(_QWORD *)(v9 + 24) = *a2;
      WdLogEvent5_WdError(v9);
      v5 = -1073741811;
      goto LABEL_12;
    }
  }
  v10 = v7 << 6;
  *((_BYTE *)v4 + v10 + 56) = 1;
  *((_BYTE *)this[362] + v10 + 57) = 0;
  v11 = this[362];
  --*((_DWORD *)this + 722);
  ExCancelTimer(*(_QWORD *)((char *)v11 + v10), 0LL);
  v14 = *(_QWORD *)((char *)this[362] + v10 + 16);
  if ( *(_DWORD *)(v14 + 200) != 1 && *(_DWORD *)(v14 + 200) != 5 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v13, v12);
    *(_QWORD *)(v15 + 24) = 3580LL;
    WdLogEvent5_WdAssertion(v15);
  }
  v23 = -1LL;
  if ( (*(int (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64 *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 2704) + 616LL)
                                                                                       + 8LL)
                                                                           + 656LL))(
         1LL,
         (unsigned __int64)this[362] + v10 + 8,
         0LL,
         &v23) < 0 )
  {
    v18 = WdLogNewEntry5_WdError(v17, v16);
    *(_QWORD *)(v18 + 24) = *a2;
    WdLogEvent5_WdError(v18);
  }
  else
  {
    *(_QWORD *)((char *)this[362] + v10 + 40) = v23;
  }
  DXGADAPTER_REFERENCE::Assign((DXGADAPTER **)((char *)this[362] + v10 + 16), 0LL);
  *a2 = 0LL;
LABEL_12:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v5;
}
