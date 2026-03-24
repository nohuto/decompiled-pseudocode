/*
 * XREFs of ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DFFB4
 * Callers:
 *     ?EnableVSync@BLTQUEUE@@QEAAXXZ @ 0x1C00DF974 (-EnableVSync@BLTQUEUE@@QEAAXXZ.c)
 *     ?UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ @ 0x1C00DFEB4 (-UpdateDisplayModeInfoWorker@BLTQUEUE@@AEAAXXZ.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C011A6B4 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FD46C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0002B94 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C016DF18 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z.c)
 */

void __fastcall BLTQUEUE::StartVSync(BLTQUEUE *this, int a2)
{
  int v2; // eax
  struct _KTHREAD **v5; // rdx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rax
  _BYTE v11[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+30h] [rbp-18h]

  v2 = *((_DWORD *)this + 234);
  if ( (v2 & 8) != 0 && (v2 & 2) == 0 )
  {
    v5 = 0LL;
    if ( !a2 )
      v5 = (struct _KTHREAD **)((char *)this + 400);
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, v5, 0);
    if ( !a2 )
    {
      DXGPUSHLOCK::AcquireExclusive(v12);
      v13 = 2;
    }
    if ( (*(int (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 16) + 32LL))(
           *((_QWORD *)this + 16),
           *((_QWORD *)this + 45),
           *((unsigned int *)this + 63)) >= 0
      || (*((_DWORD *)this + 34) = 2,
          BLTQUEUE::RecreateVsyncSource(this, 1),
          v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 16) + 32LL))(
                 *((_QWORD *)this + 16),
                 *((_QWORD *)this + 45),
                 *((unsigned int *)this + 63)),
          v9 = v6,
          v6 >= 0) )
    {
      *((_DWORD *)this + 234) |= 2u;
    }
    else
    {
      v10 = WdLogNewEntry5_WdAssertion(v8, v7);
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = v9;
      WdLogEvent5_WdAssertion(v10);
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  }
}
