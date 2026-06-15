/*
 * XREFs of ??1CaptureMonitor@CMonitorManager@@IEAA@XZ @ 0x1800FA7F0
 * Callers:
 *     ?Release@CaptureMonitor@CMonitorManager@@UEAAKXZ @ 0x1800FF6C0 (-Release@CaptureMonitor@CMonitorManager@@UEAAKXZ.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BE0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?Close@CHandle@ATL@@QEAAXXZ @ 0x180074890 (-Close@CHandle@ATL@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMonitorManager::CaptureMonitor::~CaptureMonitor(CMonitorManager::CaptureMonitor *this)
{
  struct _TP_WAIT *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx

  *(_QWORD *)this = &CMonitorManager::CaptureMonitor::`vftable';
  v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
  if ( v2 )
  {
    v3 = *((_QWORD *)this + 25);
    if ( v3 )
    {
      *(_QWORD *)(v3 + 272) = 0LL;
      v2 = (struct _TP_WAIT *)*((_QWORD *)this + 2);
    }
    CloseThreadpoolWait(v2);
  }
  v4 = *((_QWORD *)this + 25);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 23);
  if ( v5 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 20), (const struct std::nothrow_t *)(2 * v5 + 2));
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 7LL;
  *((_WORD *)this + 80) = 0;
  v6 = *((_QWORD *)this + 19);
  if ( v6 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 16), (const struct std::nothrow_t *)(2 * v6 + 2));
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 7LL;
  *((_WORD *)this + 64) = 0;
  v7 = *((_QWORD *)this + 14);
  if ( v7 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 11), (const struct std::nothrow_t *)(2 * v7 + 2));
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 7LL;
  *((_WORD *)this + 44) = 0;
  v8 = *((_QWORD *)this + 10);
  if ( v8 >= 8 )
    std::_Deallocate<16,0>(*((void **)this + 7), (const struct std::nothrow_t *)(2 * v8 + 2));
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 7LL;
  *((_WORD *)this + 28) = 0;
  v9 = *((_QWORD *)this + 5);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( *((_QWORD *)this + 4) )
    ATL::CHandle::Close((void **)this + 4);
}
