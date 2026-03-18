/*
 * XREFs of ?CopyInstance@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C03BA580
 * Callers:
 *     <none>
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1C0002C48 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z @ 0x1C0027530 (--_EEdidMonitorDescriptor@DxgMonitor@@UEAAPEAXI@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C0027574 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1?$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U?$default_delete@UWmiMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@QEAA@XZ @ 0x1C00275E0 (--1-$unique_ptr@UWmiMonitorDescriptor@DxgMonitor@@U-$default_delete@UWmiMonitorDescriptor@DxgMon.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

DxgMonitor::EdidMonitorDescriptor **__fastcall DxgMonitor::EdidMonitorDescriptor::CopyInstance(
        __int64 a1,
        DxgMonitor::EdidMonitorDescriptor **a2,
        __int64 a3,
        __int64 a4)
{
  char **v6; // rax
  __int64 v7; // r9
  DxgMonitor::EdidMonitorDescriptor *v8; // rdi
  char **v9; // r12
  unsigned __int64 v10; // r14
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  char *v16; // rbx
  char *v17; // rcx
  char *v18; // rbx
  unsigned int v19; // r14d
  __int64 *v20; // rbx
  void ***v21; // r13
  __int64 v22; // rax
  __int64 v23; // r15
  void **v24; // rax
  void **v26; // [rsp+70h] [rbp+18h]
  void ****v27; // [rsp+78h] [rbp+20h]

  v6 = (char **)operator new[](0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = (DxgMonitor::EdidMonitorDescriptor *)v6;
  if ( !v6 )
  {
    *a2 = 0LL;
    return a2;
  }
  v6[2] = 0LL;
  v6[3] = 0LL;
  *v6 = (char *)&DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptor'};
  v6[1] = (char *)&DxgMonitor::EdidMonitorDescriptor::`vftable'{for `DxgMonitor::IMonitorDescriptorEnumerator'};
  v9 = v6 + 3;
  v10 = *(unsigned int *)(a1 + 16);
  v11 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v11 = -1LL;
  v12 = __CFADD__(v11, 8LL);
  v13 = v11 + 8;
  if ( v12 )
    v13 = -1LL;
  v14 = operator new[](v13, 0x4D677844u, 256LL, v7);
  if ( v14 )
  {
    v16 = (char *)(v14 + 8);
    *(_QWORD *)v14 = v10;
    `vector constructor iterator'(
      (char *)(v14 + 8),
      8LL,
      (unsigned int)v10,
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
  }
  else
  {
    v16 = 0LL;
  }
  v17 = *v9;
  *v9 = v16;
  if ( v17 )
  {
    v18 = v17 - 8;
    `vector destructor iterator'(
      v17,
      8LL,
      *((_QWORD *)v17 - 1),
      (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
    operator delete[](v18);
  }
  if ( *v9 )
  {
    v19 = 0;
    *((_DWORD *)v8 + 4) = *(_DWORD *)(a1 + 16);
    *((_DWORD *)v8 + 5) = *(_DWORD *)(a1 + 20);
    if ( !*(_DWORD *)(a1 + 16) )
    {
LABEL_22:
      *a2 = v8;
      return a2;
    }
    while ( 1 )
    {
      v20 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * v19);
      if ( v20 )
        break;
LABEL_21:
      if ( ++v19 >= *(_DWORD *)(a1 + 16) )
        goto LABEL_22;
    }
    v21 = (void ***)&(*v9)[8 * v19];
    while ( 1 )
    {
      v27 = (void ****)v21;
      v22 = operator new[](0x98uLL, 0x4D677844u, 256LL, v15);
      v23 = v22;
      if ( !v22 )
        break;
      memset((void *)(v22 + 24), 0, 0x80uLL);
      *(_QWORD *)(v23 + 16) = 128LL;
      *(_QWORD *)v23 = 0LL;
      *(_QWORD *)(v23 + 8) = 0LL;
      *(_DWORD *)(v23 + 12) = *((_DWORD *)v20 + 3);
      *(_DWORD *)(v23 + 8) = *((_DWORD *)v20 + 2);
      memmove((void *)(v23 + 24), v20 + 3, v20[2]);
      v24 = *v21;
      *v21 = (void **)v23;
      v21 = (void ***)v23;
      v26 = v24;
      if ( v24 )
      {
        wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v24);
        operator delete(v26);
        v21 = *v27;
      }
      v20 = (__int64 *)*v20;
      if ( !v20 )
        goto LABEL_21;
    }
    *a2 = 0LL;
  }
  else
  {
    *a2 = 0LL;
  }
  DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v8, 1);
  return a2;
}
