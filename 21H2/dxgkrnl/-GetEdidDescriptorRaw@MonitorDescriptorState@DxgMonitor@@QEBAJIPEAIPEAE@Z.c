/*
 * XREFs of ?GetEdidDescriptorRaw@MonitorDescriptorState@DxgMonitor@@QEBAJIPEAIPEAE@Z @ 0x1C01E6678
 * Callers:
 *     MonitorGetEdidFromMonitor @ 0x1C01E65CC (MonitorGetEdidFromMonitor.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 */

__int64 __fastcall DxgMonitor::MonitorDescriptorState::GetEdidDescriptorRaw(
        DxgMonitor::MonitorDescriptorState *this,
        unsigned int a2,
        unsigned int *a3,
        unsigned __int8 *a4)
{
  __int64 v4; // rcx
  void *v8; // rdi
  unsigned int v9; // ebx
  void *Src; // [rsp+30h] [rbp+8h] BYREF

  v4 = *((_QWORD *)this + 16);
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64, void **))(*(_QWORD *)v4 + 232LL))(v4, &Src);
    v8 = Src;
    if ( Src )
    {
      if ( a4 && a2 && a2 >= *a3 )
      {
        memmove(a4, Src, *a3);
        v9 = 0;
      }
      else
      {
        v9 = -1073741789;
      }
    }
    else
    {
      v9 = -1073741801;
    }
    Src = 0LL;
    if ( v8 )
      operator delete[](v8);
    return v9;
  }
  else
  {
    *a3 = 0;
    return 3223126017LL;
  }
}
