/*
 * XREFs of ?ReportState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C02158A4
 * Callers:
 *     ?ReportState@DXGADAPTER@@QEAAXXZ @ 0x1C020DC8C (-ReportState@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ @ 0x1C0252DE0 (-ClearStateReportingFlags@DXGDEVICE@@QEAAXXZ.c)
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C0255390 (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 */

void __fastcall ADAPTER_RENDER::ReportState(ADAPTER_RENDER *this)
{
  DXGDEVICE **v1; // r14
  DXGDEVICE *i; // rcx
  DXGDEVICE **v4; // rcx
  DXGDEVICE **v5; // rsi
  DXGDEVICE *j; // rcx
  DXGDEVICE **v7; // rcx
  DXGDEVICE *k; // rbx
  DXGDEVICE *m; // rbx

  v1 = (DXGDEVICE **)((char *)this + 144);
  for ( i = (DXGDEVICE *)*((_QWORD *)this + 18); i != (DXGDEVICE *)v1 && i; i = *v4 )
    DXGDEVICE::ClearStateReportingFlags(i);
  v5 = (DXGDEVICE **)((char *)this + 160);
  for ( j = (DXGDEVICE *)*((_QWORD *)this + 20); j != (DXGDEVICE *)v5 && j; j = *v7 )
    DXGDEVICE::ClearStateReportingFlags(j);
  for ( k = *v1; k != (DXGDEVICE *)v1 && k; k = *(DXGDEVICE **)k )
    DXGDEVICE::ReportState(k);
  for ( m = *v5; m != (DXGDEVICE *)v5 && m; m = *(DXGDEVICE **)m )
    DXGDEVICE::ReportState(m);
  if ( !*(_BYTE *)(*((_QWORD *)this + 2) + 209LL) )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 80) + 8LL) + 48LL))(*((_QWORD *)this + 81));
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)this + 77) + 8LL) + 48LL))(*((_QWORD *)this + 78));
  }
}
