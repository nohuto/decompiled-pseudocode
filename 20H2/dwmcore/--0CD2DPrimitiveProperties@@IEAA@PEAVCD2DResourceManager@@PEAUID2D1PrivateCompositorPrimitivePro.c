/*
 * XREFs of ??0CD2DPrimitiveProperties@@IEAA@PEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@@Z @ 0x18024835C
 * Callers:
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x1802484DC (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 * Callees:
 *     ??0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z @ 0x180046DB0 (--0CD2DResource@@IEAA@PEAVCD2DResourceManager@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

CD2DPrimitiveProperties *__fastcall CD2DPrimitiveProperties::CD2DPrimitiveProperties(
        CD2DPrimitiveProperties *this,
        struct CD2DResourceManager *a2,
        struct ID2D1PrivateCompositorPrimitiveProperties *a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx

  *((_QWORD *)this + 2) = &CD2DGenericInk::`vbtable'{for `CD2DResource'};
  *((_QWORD *)this + 15) = &CInk::`vbtable'{for `IContent'};
  CD2DResource::CD2DResource(this, a2, 0);
  v5 = *((_QWORD *)this + 2);
  *(_QWORD *)this = &CD2DPrimitiveProperties::`vftable';
  *(_QWORD *)((char *)this + *(int *)(v5 + 4) + 16) = &CD2DPrimitiveProperties::`vftable'{for `IUnknown'};
  *(_QWORD *)((char *)this + *(int *)(*((_QWORD *)this + 2) + 8LL) + 16) = &CD2DEffect::`vftable'{for `IDeviceResource'};
  v6 = *(int *)(*((_QWORD *)this + 2) + 4LL);
  *(_DWORD *)((char *)this + v6 + 12) = v6 - 80;
  v7 = *(int *)(*((_QWORD *)this + 2) + 8LL);
  *(_DWORD *)((char *)this + v7 + 12) = v7 - 96;
  *((_QWORD *)this + 10) = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)a3 + 8LL))(a3);
  return this;
}
