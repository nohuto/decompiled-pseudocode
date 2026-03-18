/*
 * XREFs of ?RecreateVsyncSource@BLTQUEUE@@AEAAX_N@Z @ 0x1C0167BD8
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C00DDD74 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 *     ?BltQueueWorker@BLTQUEUE@@QEAAXXZ @ 0x1C0117194 (-BltQueueWorker@BLTQUEUE@@QEAAXXZ.c)
 *     ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0167AA8 (-Startup@BLTQUEUE@@QEAAJXZ.c)
 *     ?DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ @ 0x1C02FC21C (-DisableHwVSyncWorker@BLTQUEUE@@AEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ??0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z @ 0x1C0167C78 (--0BLTQUEUE_EMULATED_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_EX_TIMER@@1@Z.c)
 *     ?IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ @ 0x1C0167D0C (-IsVmConnectedToHost@DXGGLOBAL@@QEBAEXZ.c)
 *     ??0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z @ 0x1C02FF360 (--0BLTQUEUE_HW_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@PEAU_KEVENT@@@Z.c)
 *     ??0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z @ 0x1C02FF4AC (--0BLTQUEUE_REMOTE_VSYNC_SOURCE@@QEAA@PEAVDXGDODPRESENT@@@Z.c)
 */

void __fastcall BLTQUEUE::RecreateVsyncSource(BLTQUEUE *this, __int64 a2)
{
  char v3; // di
  void (__fastcall ***v4)(_QWORD, _QWORD); // rcx
  DXGGLOBAL *Global; // rax
  BLTQUEUE_EMULATED_VSYNC_SOURCE *v6; // rax

  v3 = a2;
  v4 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)this + 16);
  if ( v4 )
  {
    (**v4)(v4, 0LL);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_DWORD *)this + 34) == 1 )
  {
    v6 = BLTQUEUE_HW_VSYNC_SOURCE::BLTQUEUE_HW_VSYNC_SOURCE(
           (BLTQUEUE *)((char *)this + 8),
           *(struct DXGDODPRESENT **)this,
           *((struct _KEVENT **)this + 46));
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal((__int64)v4, a2);
    if ( !DXGGLOBAL::IsVmConnectedToHost(Global) || v3 )
    {
      *((_DWORD *)this + 34) = 2;
      v6 = BLTQUEUE_EMULATED_VSYNC_SOURCE::BLTQUEUE_EMULATED_VSYNC_SOURCE(
             (BLTQUEUE *)((char *)this + 8),
             *(struct DXGDODPRESENT **)this,
             *((struct _EX_TIMER **)this + 18),
             *((struct _EX_TIMER **)this + 19));
    }
    else
    {
      *((_DWORD *)this + 34) = 3;
      v6 = BLTQUEUE_REMOTE_VSYNC_SOURCE::BLTQUEUE_REMOTE_VSYNC_SOURCE(
             (BLTQUEUE *)((char *)this + 8),
             *(struct DXGDODPRESENT **)this);
    }
  }
  *((_QWORD *)this + 16) = v6;
}
