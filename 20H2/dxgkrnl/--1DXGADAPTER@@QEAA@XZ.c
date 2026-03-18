/*
 * XREFs of ??1DXGADAPTER@@QEAA@XZ @ 0x1C020A0C0
 * Callers:
 *     ??_GDXGADAPTER@@QEAAPEAXI@Z @ 0x1C004551C (--_GDXGADAPTER@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00027E4 (--3@YAXPEAX@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C001C3D8 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??_GADAPTER_DISPLAY@@QEAAPEAXI@Z @ 0x1C0035F10 (--_GADAPTER_DISPLAY@@QEAAPEAXI@Z.c)
 *     ??_GADAPTER_RENDER@@QEAAPEAXI@Z @ 0x1C0035F44 (--_GADAPTER_RENDER@@QEAAPEAXI@Z.c)
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C020AFF4 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ @ 0x1C020B454 (-DestroyPhysicalAdapterData@DXGADAPTER@@QEAAXXZ.c)
 *     ?DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ @ 0x1C020B5D4 (-DestroyVSyncPhaseState@DXGADAPTER@@AEAAXXZ.c)
 */

void __fastcall DXGADAPTER::~DXGADAPTER(void **this)
{
  ADAPTER_DISPLAY *v2; // rcx
  ADAPTER_RENDER *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  struct _ERESOURCE *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  char *v8; // rcx
  char *v9; // rbx
  void *v10; // rcx

  DXGADAPTER::Destroy((DXGADAPTER *)this);
  v2 = (ADAPTER_DISPLAY *)this[337];
  if ( v2 )
  {
    ADAPTER_DISPLAY::`scalar deleting destructor'(v2);
    this[337] = 0LL;
  }
  v3 = (ADAPTER_RENDER *)this[338];
  if ( v3 )
  {
    ADAPTER_RENDER::`scalar deleting destructor'(v3);
    this[338] = 0LL;
  }
  v4 = (struct _ERESOURCE *)this[33];
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    operator delete(this[33]);
    this[33] = 0LL;
  }
  v5 = (struct _ERESOURCE *)this[21];
  if ( v5 )
  {
    ExDeleteResourceLite(v5);
    operator delete(this[21]);
    this[21] = 0LL;
  }
  v6 = this[350];
  if ( v6 )
  {
    operator delete[](v6);
    this[350] = 0LL;
  }
  v7 = this[500];
  if ( v7 )
    operator delete[](v7);
  if ( this[323] )
  {
    DXGADAPTER::DestroyPhysicalAdapterData((DXGADAPTER *)this);
    v8 = (char *)this[323];
    if ( v8 )
    {
      v9 = v8 - 8;
      `vector destructor iterator'(
        v8,
        360LL,
        *((_QWORD *)v8 - 1),
        (void (__fastcall *)(char *))CompositionSurfaceObject::SetPaired);
      operator delete[](v9);
    }
    this[323] = 0LL;
  }
  v10 = this[561];
  if ( v10 )
    operator delete(v10);
  DXGADAPTER::DestroyVSyncPhaseState((DXGADAPTER *)this);
  operator delete(this[536]);
  this[2] = 0LL;
}
