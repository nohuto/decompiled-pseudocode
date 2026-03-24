/*
 * XREFs of ?ReportState@DXGCONTEXT@@QEAAXXZ @ 0x1C022EB14
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C02564B8 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pppp_EtwWriteTransfer @ 0x1C003FCD4 (McTemplateK0pppp_EtwWriteTransfer.c)
 *     McTemplateK0pqqqqqqqqppp_EtwWriteTransfer @ 0x1C003FD74 (McTemplateK0pqqqqqqqqppp_EtwWriteTransfer.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0047104 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     ?ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ @ 0x1C0294A00 (-ReportState@DXGDEVICESYNCOBJECT@@QEAAXXZ.c)
 */

void __fastcall DXGCONTEXT::ReportState(DXGCONTEXT *this, __int64 a2, __int64 a3)
{
  __int128 v4; // xmm0
  __int64 v5; // r9
  __int128 v6; // xmm1
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 *i; // rbx
  DXGDEVICESYNCOBJECT *v10; // rcx
  DXGDEVICESYNCOBJECT *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8

  if ( bTracingEnabled )
  {
    v4 = *(_OWORD *)((char *)this + 200);
    v5 = *((_QWORD *)this + 2);
    v6 = *(_OWORD *)((char *)this + 216);
    v7 = *((unsigned int *)this + 6);
    a2 = *((unsigned int *)this + 103);
    a3 = *((unsigned int *)this + 102);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pqqqqqqqqppp_EtwWriteTransfer(
        v7,
        &EventReportContext,
        a3,
        v5,
        *((_DWORD *)this + 102),
        *((_DWORD *)this + 103),
        (_DWORD)v4,
        DWORD1(v4),
        DWORD2(v4),
        HIDWORD(v4),
        (_DWORD)v6,
        0,
        this,
        v7,
        0LL);
  }
  if ( *((_QWORD *)this + 29) )
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL) + 8LL) + 464LL))();
  if ( (*((_DWORD *)this + 105) & 0x10) != 0 )
  {
    v8 = *((_QWORD *)this + 37);
    if ( v8 && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(v8, a2, a3, this, v8, *((_QWORD *)this + 23), *((_QWORD *)this + 24));
    if ( *((_QWORD *)this + 38) )
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 288LL))();
    for ( i = (__int64 *)*((_QWORD *)this + 53); i != (__int64 *)((char *)this + 424) && i; i = (__int64 *)*i )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0ppp_EtwWriteTransfer(
          *((unsigned int *)i + 6),
          &EventReportHwQueue,
          a3,
          i[2],
          *((unsigned int *)i + 6),
          i);
      if ( i[5] )
        (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(i[2] + 16) + 16LL) + 616LL) + 8LL) + 288LL))();
    }
    v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
    if ( v10 )
      DXGDEVICESYNCOBJECT::ReportState(v10);
    v11 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 32);
    if ( v11 )
      DXGDEVICESYNCOBJECT::ReportState(v11);
  }
  else if ( *((_QWORD *)this + 34) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 616LL) + 8LL) + 280LL))();
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
      McTemplateK0pppp_EtwWriteTransfer(
        v13,
        v12,
        v14,
        this,
        *((_QWORD *)this + 34),
        *((_QWORD *)this + 23),
        *((_QWORD *)this + 24));
  }
  if ( !*((_BYTE *)this + 457) )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGCONTEXT *)((char *)this + 320));
    (*(void (__fastcall **)(_QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 640LL)
                                                       + 8LL)
                                           + 720LL))(
      *((_QWORD *)this + 2),
      (char *)this + 352);
    *((_QWORD *)this + 41) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 320, 0LL);
    KeLeaveCriticalRegion();
  }
}
