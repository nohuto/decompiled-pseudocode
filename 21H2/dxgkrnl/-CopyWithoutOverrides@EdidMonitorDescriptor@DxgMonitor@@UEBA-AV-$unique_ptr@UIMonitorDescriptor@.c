/*
 * XREFs of ?CopyWithoutOverrides@EdidMonitorDescriptor@DxgMonitor@@UEBA?AV?$unique_ptr@UIMonitorDescriptor@DxgMonitor@@U?$default_delete@UIMonitorDescriptor@DxgMonitor@@@wistd@@@wistd@@XZ @ 0x1C020AEF0
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

DxgMonitor::EdidMonitorDescriptor **__fastcall DxgMonitor::EdidMonitorDescriptor::CopyWithoutOverrides(
        __int64 a1,
        DxgMonitor::EdidMonitorDescriptor **a2,
        __int64 a3,
        __int64 a4)
{
  char **v6; // rax
  __int64 v7; // r9
  DxgMonitor::EdidMonitorDescriptor *v8; // rdi
  char **v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // r9
  char *v16; // rbx
  char *v17; // rcx
  unsigned int i; // ebp
  __int64 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // r15
  void **v23; // rcx
  char *v25; // rbx
  __int64 *v26; // [rsp+20h] [rbp-48h]
  void ***v27; // [rsp+80h] [rbp+18h]
  void **v28; // [rsp+88h] [rbp+20h]

  v6 = (char **)operator new[](0x20uLL, 0x4D677844u, 256LL, a4);
  v8 = (DxgMonitor::EdidMonitorDescriptor *)v6;
  if ( v6 )
  {
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
      v25 = v17 - 8;
      `vector destructor iterator'(
        v17,
        8LL,
        *((_QWORD *)v17 - 1),
        (void (__fastcall *)(char *))wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>);
      operator delete[](v25);
    }
    if ( *v9 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        v19 = *(__int64 **)(*(_QWORD *)(a1 + 24) + 8LL * i);
        if ( v19 )
        {
          v20 = (__int64)&(*v9)[8 * i];
          v27 = (void ***)v20;
          do
          {
            v26 = (__int64 *)v20;
            if ( *((_DWORD *)v19 + 2) == 2 )
            {
              v21 = operator new[](0x98uLL, 0x4D677844u, 256LL, v15);
              v22 = v21;
              if ( !v21 )
              {
                *a2 = 0LL;
                goto LABEL_28;
              }
              memset((void *)(v21 + 24), 0, 0x80uLL);
              *(_QWORD *)(v22 + 16) = 128LL;
              *(_QWORD *)v22 = 0LL;
              *(_QWORD *)(v22 + 8) = 0LL;
              *(_DWORD *)(v22 + 12) = *((_DWORD *)v19 + 3);
              *(_DWORD *)(v22 + 8) = *((_DWORD *)v19 + 2);
              memmove((void *)(v22 + 24), v19 + 3, v19[2]);
              v23 = *v27;
              *v27 = (void **)v22;
              v20 = v22;
              v28 = v23;
              v27 = (void ***)v22;
              if ( v23 )
              {
                wistd::unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>::~unique_ptr<DxgMonitor::WmiMonitorDescriptor,wistd::default_delete<DxgMonitor::WmiMonitorDescriptor>>(v23);
                operator delete(v28);
                v20 = *v26;
                v27 = (void ***)*v26;
              }
            }
            v19 = (__int64 *)*v19;
          }
          while ( v19 );
          if ( *(_QWORD *)&(*v9)[8 * i] )
            ++*((_DWORD *)v8 + 4);
        }
      }
      *a2 = v8;
    }
    else
    {
      *a2 = 0LL;
LABEL_28:
      DxgMonitor::EdidMonitorDescriptor::`vector deleting destructor'(v8, 1);
    }
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
