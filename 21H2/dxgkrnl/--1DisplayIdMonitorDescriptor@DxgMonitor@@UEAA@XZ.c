/*
 * XREFs of ??1DisplayIdMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C03BAA44
 * Callers:
 *     ??_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C006C320 (--_GDisplayIdMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DxgMonitor::DisplayIdMonitorDescriptor::~DisplayIdMonitorDescriptor(
        DxgMonitor::DisplayIdMonitorDescriptor *this)
{
  void *v1; // rax

  *(_QWORD *)this = &DxgMonitor::DisplayIdMonitorDescriptor::`vftable';
  v1 = (void *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 2) = 0LL;
  if ( v1 )
    operator delete[](v1);
}
