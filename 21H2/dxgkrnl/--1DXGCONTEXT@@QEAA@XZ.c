/*
 * XREFs of ??1DXGCONTEXT@@QEAA@XZ @ 0x1C016AB70
 * Callers:
 *     ??_GDXGCONTEXT@@QEAAPEAXI@Z @ 0x1C000A5E4 (--_GDXGCONTEXT@@QEAAPEAXI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ @ 0x1C0009C20 (-DxgkGetVirtualMemoryInterface@@YAPEBUDXGK_VIRTUAL_MEMORY_INTERFACE@@XZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000C10C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ??_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z @ 0x1C001E3F0 (--_GDXGDEVICESYNCOBJECT@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     ??1DXGPRESENT@@QEAA@XZ @ 0x1C01EF3B0 (--1DXGPRESENT@@QEAA@XZ.c)
 *     ?DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C01EF924 (-DestroyStagingBuffer@DXGPRESENT@@QEAAXPEAVDXGDEVICE@@@Z.c)
 *     ?DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C030E37C (-DestroyHwQueue@DXGCONTEXT@@QEAAXPEAVDXGHWQUEUE@@PEAVCOREDEVICEACCESS@@@Z.c)
 */

void __fastcall DXGCONTEXT::~DXGCONTEXT(DXGCONTEXT *this)
{
  __int64 v2; // rcx
  DXGPRESENT *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *VirtualMemoryInterface; // rax
  void *v7; // rcx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v8; // rax
  void *v9; // rcx
  DXGDEVICESYNCOBJECT *v10; // rcx
  PVOID *i; // rbx
  void *v12; // rcx
  unsigned int v13; // edx
  void *v14; // rbx
  const struct DXGK_VIRTUAL_MEMORY_INTERFACE *v15; // rax

  WdLogSingleEntry3(4LL, this, *((unsigned int *)this + 6), *(_QWORD *)(*((_QWORD *)this + 2) + 40LL));
  v2 = *((_QWORD *)this + 2);
  if ( !*(_BYTE *)(v2 + 72) && !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)(v2 + 136)) )
  {
    WdLogSingleEntry1(1LL, 678LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetDevice()->IsDeviceLockExclusiveOwner()",
      678LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    WdLogSingleEntry1(1LL, 679LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"GetRenderCore()->IsCoreResourceSharedOwner()",
      679LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !*((_BYTE *)this + 436) )
  {
    WdLogSingleEntry1(1LL, 685LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_bDestroyed", 685LL, 0LL, 0LL, 0LL, 0LL);
  }
  v3 = (DXGPRESENT *)*((_QWORD *)this + 19);
  if ( v3 )
  {
    DXGPRESENT::DestroyStagingBuffer(v3, *((struct DXGDEVICE **)this + 2));
    v14 = (void *)*((_QWORD *)this + 19);
    if ( v14 )
    {
      DXGPRESENT::~DXGPRESENT(*((DXGPRESENT **)this + 19));
      ExFreePoolWithTag(v14, 0);
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 17);
  if ( v4 )
  {
    MmUnsecureVirtualMemory(v4);
    *((_QWORD *)this + 17) = 0LL;
  }
  v5 = (void *)*((_QWORD *)this + 16);
  if ( v5 )
  {
    if ( !*((_QWORD *)this + 15) )
    {
      WdLogSingleEntry1(1LL, 719LL);
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_pPatchLocationTable != NULL", 719LL, 0LL, 0LL, 0LL, 0LL);
      v5 = (void *)*((_QWORD *)this + 16);
    }
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    VirtualMemoryInterface = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))VirtualMemoryInterface + 2))(
      -1LL,
      (char *)this + 120,
      (char *)this + 112,
      0x8000LL);
    *((_QWORD *)this + 15) = 0LL;
    *((_DWORD *)this + 26) = 0;
    *((_QWORD *)this + 14) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 12);
  if ( v7 )
  {
    MmUnsecureVirtualMemory(v7);
    *((_QWORD *)this + 12) = 0LL;
  }
  if ( *((_QWORD *)this + 11) )
  {
    v8 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v8 + 2))(
      -1LL,
      (char *)this + 88,
      (char *)this + 80,
      0x8000LL);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 18) = 0;
    *((_QWORD *)this + 10) = 0LL;
  }
  if ( *((_QWORD *)this + 44) )
  {
    WdLogSingleEntry1(1LL, 761LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_pCommandDmaBuffer", 761LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_QWORD *)this + 48) )
  {
    (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 648LL) + 8LL) + 632LL))();
    *((_QWORD *)this + 48) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 8);
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0);
    *((_QWORD *)this + 8) = 0LL;
  }
  if ( *((_QWORD *)this + 7) )
  {
    v15 = DxgkGetVirtualMemoryInterface();
    (*((void (__fastcall **)(__int64, char *, char *, __int64))v15 + 2))(
      -1LL,
      (char *)this + 56,
      (char *)this + 48,
      0x8000LL);
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 6) = 0LL;
  }
  v10 = (DXGDEVICESYNCOBJECT *)*((_QWORD *)this + 30);
  if ( v10 )
    DXGDEVICESYNCOBJECT::`scalar deleting destructor'(v10);
  for ( i = (PVOID *)((char *)this + 408); *i != i; DXGCONTEXT::DestroyHwQueue(this, *i, 0LL) )
    ;
  if ( *((DXGCONTEXT **)this + 42) != (DXGCONTEXT *)((char *)this + 336) )
    WdLogSingleEntry5(0LL, 275LL, 44LL, this, 0LL, 0LL);
  v12 = (void *)*((_QWORD *)this + 60);
  if ( v12 )
    ExFreePoolWithTag(v12, 0x4B677844u);
  v13 = *((_DWORD *)this + 6);
  *((_QWORD *)this + 60) = 0LL;
  if ( v13 )
  {
    DXGPROCESS::FreeHandleSafe(*(DXGPROCESS **)(*((_QWORD *)this + 2) + 40LL), v13);
    *((_DWORD *)this + 6) = 0;
  }
  if ( *i != i )
  {
    WdLogSingleEntry1(1LL, 764LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsEmpty()", 764LL, 0LL, 0LL, 0LL, 0LL);
  }
  *((_QWORD *)this + 2) = 0LL;
}
