/*
 * XREFs of ?_CleanupRegistryOverridedMonitorDescriptors@EdidMonitorDescriptor@DxgMonitor@@AEAAXXZ @ 0x1C020B15C
 * Callers:
 *     ?LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry@2@@Z @ 0x1C020ADC0 (-LoadDescriptorOverridesFromRegistry@EdidMonitorDescriptor@DxgMonitor@@UEAAJAEBVIMonitorRegistry.c)
 *     ??1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ @ 0x1C020B0D4 (--1EdidMonitorDescriptor@DxgMonitor@@UEAA@XZ.c)
 *     ?UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ @ 0x1C03BA920 (-UnloadDescriptorOverrides@EdidMonitorDescriptor@DxgMonitor@@UEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 */

void __fastcall DxgMonitor::EdidMonitorDescriptor::_CleanupRegistryOverridedMonitorDescriptors(
        DxgMonitor::EdidMonitorDescriptor *this)
{
  __int64 v2; // rsi
  void ***v3; // rdi
  void **v4; // rax
  unsigned int v5; // eax
  __int64 v6; // rcx
  unsigned int v7; // eax
  void **v8; // r15
  void **v9; // rbp
  void **v10; // r14
  char *v11; // rcx
  char *v12; // rbx

  if ( *((_DWORD *)this + 4) )
  {
    v2 = 0LL;
    do
    {
      v3 = (void ***)(*((_QWORD *)this + 3) + 8 * v2);
      v4 = *v3;
      if ( *v3 )
      {
        while ( v4 )
        {
          if ( *((_DWORD *)v4 + 2) == 3 )
          {
            v8 = (void **)*v4;
            v9 = 0LL;
            *v4 = 0LL;
            v10 = *v3;
            *v3 = 0LL;
            if ( v10 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v10);
              operator delete(v10);
              v9 = *v3;
            }
            *v3 = v8;
            if ( v9 )
            {
              wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v9);
              operator delete(v9);
            }
            --*((_DWORD *)this + 5);
          }
          else
          {
            v3 = (void ***)v4;
          }
          v4 = *v3;
        }
      }
      v5 = *((_DWORD *)this + 4);
      v2 = (unsigned int)(v2 + 1);
    }
    while ( (unsigned int)v2 < v5 );
    v6 = 0LL;
    if ( !v5 )
      goto LABEL_22;
    while ( *(_QWORD *)(*((_QWORD *)this + 3) + 8 * v6) )
    {
      v7 = *((_DWORD *)this + 4);
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= v7 )
        goto LABEL_12;
    }
    *((_DWORD *)this + 4) = v6;
    v7 = v6;
LABEL_12:
    if ( !v7 )
    {
LABEL_22:
      v11 = (char *)*((_QWORD *)this + 3);
      *((_QWORD *)this + 3) = 0LL;
      if ( v11 )
      {
        v12 = v11 - 8;
        `vector destructor iterator'(
          v11,
          8LL,
          *((_QWORD *)v11 - 1),
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        operator delete[](v12);
      }
    }
  }
  else if ( *((_QWORD *)this + 3) )
  {
    WdLogSingleEntry0(1LL);
  }
}
