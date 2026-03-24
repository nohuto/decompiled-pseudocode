/*
 * XREFs of ?CreatePrimitiveProperties@CD2DContext@@UEAAJPEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18023B7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18005D440 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x180078248 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitiveProperties@@PEAPEAV1@@Z @ 0x18024B18C (-Create@CD2DPrimitiveProperties@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorPrimitive.c)
 */

__int64 __fastcall CD2DContext::CreatePrimitiveProperties(CD2DContext *this, struct CD2DPrimitiveProperties **a2)
{
  __int64 v2; // rax
  bool v4; // zf
  __int64 v5; // rcx
  int v7; // ebx
  int v8; // eax
  int v9; // r9d
  unsigned int v11; // [rsp+20h] [rbp-18h]
  struct ID2D1PrivateCompositorPrimitiveProperties *v12; // [rsp+40h] [rbp+8h] BYREF

  *a2 = 0LL;
  v2 = (__int64)this + 1112;
  v12 = 0LL;
  v4 = this == 0LL;
  v5 = 1128LL;
  if ( v4 )
    v2 = 1128LL;
  v7 = *(_DWORD *)v2;
  if ( *(int *)v2 < 0 )
  {
    v9 = *(_DWORD *)v2;
    v11 = 1698;
  }
  else
  {
    v8 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorPrimitiveProperties **))(**((_QWORD **)this + 31)
                                                                                                + 40LL))(
           *((_QWORD *)this + 31),
           &v12);
    v7 = v8;
    if ( v8 < 0 )
    {
      v11 = 1700;
    }
    else
    {
      v8 = CD2DPrimitiveProperties::Create(*((struct CD2DResourceManager **)this + 26), v12, a2);
      v7 = v8;
      if ( v8 >= 0 )
        goto LABEL_11;
      v11 = 1704;
    }
    v9 = v8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, v9, v11, 0LL);
LABEL_11:
  if ( v12 )
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorPrimitiveProperties *))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v7, 0);
}
