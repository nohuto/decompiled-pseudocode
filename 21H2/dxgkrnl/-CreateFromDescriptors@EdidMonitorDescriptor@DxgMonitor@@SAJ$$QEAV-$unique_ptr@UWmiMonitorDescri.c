/*
 * XREFs of ?CreateFromDescriptors@EdidMonitorDescriptor@DxgMonitor@@SAJ$$QEAV?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@AEAV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@4@@Z @ 0x1C020A668
 * Callers:
 *     ?OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C020A818 (-OnInitializePhysicalMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 *     ?OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ @ 0x1C03B70B4 (-OnInitializeSimulatedMonitor@MonitorDescriptorState@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z @ 0x1C002355C (-EDIDV1_IsEDIDBaseBlock@@YAJPEBE@Z.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C0027530 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     MonitorLogBadEDID @ 0x1C03B090C (MonitorLogBadEDID.c)
 */

__int64 __fastcall DxgMonitor::EdidMonitorDescriptor::CreateFromDescriptors(
        void ***a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx
  __int64 v9; // rsi
  void **v10; // r11
  __int64 v11; // rbp
  int IsEDIDBaseBlock; // eax
  unsigned int v13; // edi
  __int64 v14; // rax
  bool v15; // cf
  unsigned __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdi
  char *v19; // rcx
  void **v20; // rax
  void **v21; // rdi
  __int64 v22; // rdx
  void **v23; // rax
  void **v24; // rbx
  void **v25; // rbx
  void (__fastcall ***v26)(_QWORD, __int64); // rcx
  char *v28; // rdi

  v6 = operator new[](0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = v6;
  if ( v6 )
  {
    *(_DWORD *)(v6 + 16) = 0;
    *(_DWORD *)(v6 + 20) = 0;
    LODWORD(v9) = 0;
    *(_QWORD *)(v6 + 24) = 0LL;
    *(_QWORD *)v6 = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
    *(_QWORD *)(v6 + 8) = &DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
    v10 = *a1;
    if ( *a1 )
    {
      v11 = v6;
      do
      {
        if ( !*v10 )
        {
          IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock((unsigned __int8 *)v10 + 24);
          v13 = IsEDIDBaseBlock;
          if ( IsEDIDBaseBlock < 0 )
          {
            WdLogSingleEntry1(3LL, IsEDIDBaseBlock);
            MonitorLogBadEDID(v13);
            goto LABEL_31;
          }
        }
        v10 = (void **)*v10;
        LODWORD(v9) = v9 + 1;
      }
      while ( v10 );
      if ( !(_DWORD)v9 )
        goto LABEL_36;
      v14 = 8LL * (unsigned int)v9;
      if ( !is_mul_ok((unsigned int)v9, 8uLL) )
        v14 = -1LL;
      v15 = __CFADD__(v14, 8LL);
      v16 = v14 + 8;
      if ( v15 )
        v16 = -1LL;
      v17 = operator new[](v16, 0x4D677844u, 256LL, v7);
      if ( v17 )
      {
        v18 = v17 + 8;
        *(_QWORD *)v17 = (unsigned int)v9;
        `vector constructor iterator'(
          (char *)(v17 + 8),
          8LL,
          (unsigned int)v9,
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      }
      else
      {
        v18 = 0LL;
      }
      v19 = *(char **)(v8 + 24);
      *(_QWORD *)(v8 + 24) = v18;
      if ( v19 )
      {
        v28 = v19 - 8;
        `vector destructor iterator'(
          v19,
          8LL,
          *((_QWORD *)v19 - 1),
          (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
        operator delete[](v28);
      }
      if ( *(_QWORD *)(v8 + 24) )
      {
        *(_DWORD *)(v8 + 16) = v9;
        do
        {
          v20 = *a1;
          if ( !*a1 )
          {
            WdLogSingleEntry0(1LL);
            v20 = *a1;
          }
          v21 = (void **)*v20;
          *v20 = 0LL;
          v22 = *(_QWORD *)(v11 + 24);
          v9 = (unsigned int)(v9 - 1);
          v23 = *a1;
          *a1 = 0LL;
          v24 = *(void ***)(v22 + 8 * v9);
          *(_QWORD *)(v22 + 8 * v9) = v23;
          if ( v24 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v24);
            operator delete(v24);
          }
          v25 = *a1;
          *a1 = v21;
          if ( v25 )
          {
            wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v25);
            operator delete(v25);
            v21 = *a1;
          }
        }
        while ( (_DWORD)v9 );
        if ( v21 )
          WdLogSingleEntry0(1LL);
        v26 = (void (__fastcall ***)(_QWORD, __int64))*a2;
        *a2 = v11;
        if ( v26 )
          (**v26)(v26, 1LL);
        return 0;
      }
      v13 = -1073741801;
      WdLogSingleEntry1(2LL, -1073741801LL);
    }
    else
    {
LABEL_36:
      v13 = -1071841279;
    }
  }
  else
  {
    WdLogSingleEntry0(2LL);
    v8 = 0LL;
    v13 = -1073741801;
  }
LABEL_31:
  if ( v8 )
    DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'((DxgMonitor::EdidMonitorDescriptor *)v8, 1);
  return v13;
}
