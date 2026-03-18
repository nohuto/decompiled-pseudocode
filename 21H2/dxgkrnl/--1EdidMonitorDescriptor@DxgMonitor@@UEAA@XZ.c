/*
 * XREFs of ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C020B0D4
 * Callers:
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C0027530 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C020B15C (-_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::~EdidMonitorDescriptor(DxgMonitor::EdidMonitorDescriptor *this)
{
  char *v2; // rcx
  char *v3; // rbx
  char *v4; // rcx
  char *v5; // rbx

  *(_QWORD *)this = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  *((_QWORD *)this + 1) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(this);
  v2 = (char *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v2 )
  {
    v3 = v2 - 8;
    `vector destructor iterator'(
      v2,
      8LL,
      *((_QWORD *)v2 - 1),
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    operator delete[](v3);
  }
  *((_DWORD *)this + 4) = 0;
  v4 = (char *)*((_QWORD *)this + 3);
  *((_QWORD *)this + 3) = 0LL;
  if ( v4 )
  {
    v5 = v4 - 8;
    `vector destructor iterator'(
      v4,
      8LL,
      *((_QWORD *)v4 - 1),
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    operator delete[](v5);
  }
  *((_QWORD *)this + 1) = &DxgMonitor::IMonitorDescriptorEnumerator::`vftable';
}
