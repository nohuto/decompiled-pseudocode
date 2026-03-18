/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C02B9738
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C0053730 (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000D96C (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ??1MOCKDRIVERSTATE@@QEAA@XZ @ 0x1C00433F4 (--1MOCKDRIVERSTATE@@QEAA@XZ.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0043450 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0043484 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?DeallocateElements@?$PagedPoolZeroedArray@PEAUSYSMM_PHYSICAL_OBJECT@@$00@@QEAAXXZ @ 0x1C02B9F58 (-DeallocateElements@-$PagedPoolZeroedArray@PEAUSYSMM_PHYSICAL_OBJECT@@$00@@QEAAXXZ.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C02BA5BC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C02BAA6C (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1C02BAC6C (-DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(DXGADAPTER *this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rdi

  DXGADAPTER::Destroy(this);
  v2 = (ADAPTER_DISPLAY *)*((_QWORD *)this + 349);
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 349) = 0LL;
  }
  v3 = (ADAPTER_RENDER *)*((_QWORD *)this + 350);
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 350) = 0LL;
  }
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 34);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(*((void **)this + 34));
    *((_QWORD *)this + 34) = 0LL;
  }
  v5 = (struct _ERESOURCE *)*((_QWORD *)this + 21);
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(*((void **)this + 21));
    *((_QWORD *)this + 21) = 0LL;
  }
  v6 = (void *)*((_QWORD *)this + 362);
  if ( v6 )
  {
    operator delete[](v6);
    *((_QWORD *)this + 362) = 0LL;
  }
  v7 = (void *)*((_QWORD *)this + 513);
  if ( v7 )
    operator delete[](v7);
  if ( *((_QWORD *)this + 335) )
  {
    DXGADAPTER::DestroyPhysicalAdapterData(this);
    operator delete[](*((void **)this + 335));
    *((_QWORD *)this + 335) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 580);
  if ( v8 )
  {
    MOCKDRIVERSTATE::~MOCKDRIVERSTATE(*((MOCKDRIVERSTATE **)this + 580));
    operator delete(v8);
  }
  DXGADAPTER::DestroyVSyncPhaseState(this);
  PagedPoolZeroedArray<SYSMM_PHYSICAL_OBJECT *,1>::DeallocateElements((char *)this + 4504);
  operator delete(*((void **)this + 550));
  *((_QWORD *)this + 2) = 0LL;
}
