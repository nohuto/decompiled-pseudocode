/*
 * XREFs of ?CreateLegacyCommandList@CD2DContext@@UEAAJPEAUID2D1PrivateCompositorBuffer@@0PEAPEAUID2D1Bitmap@@_K12PEAPEAUID2D1PrivateCompositorPrimitiveProperties@@2PEAPEAVCD2DCommandList@@@Z @ 0x18023C370
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z @ 0x1800546C4 (-TranslateDXGIorD3DErrorInContext@CD3DDevice@@QEAAJJW4Enum@DXGIFunctionContext@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAPEAV1@@Z @ 0x18024C290 (-Create@CD2DCommandList@@SAJPEAVCD2DResourceManager@@PEAUID2D1PrivateCompositorCommandList@@PEAP.c)
 */

__int64 __fastcall CD2DContext::CreateLegacyCommandList(
        CD2DContext *this,
        struct ID2D1PrivateCompositorBuffer *a2,
        struct ID2D1PrivateCompositorBuffer *a3,
        struct ID2D1Bitmap **a4,
        unsigned __int64 a5,
        struct ID2D1Bitmap **a6,
        unsigned __int64 a7,
        struct ID2D1PrivateCompositorPrimitiveProperties **a8,
        unsigned __int64 a9,
        struct CD2DCommandList **a10)
{
  __int64 v10; // rax
  struct CD2DCommandList **v11; // r14
  struct CD2DCommandList *v12; // rdi
  int v14; // ebx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  struct CD2DCommandList *v20; // [rsp+80h] [rbp+8h] BYREF

  v10 = (__int64)this + 1112;
  v11 = a10;
  v12 = 0LL;
  v20 = 0LL;
  *a10 = 0LL;
  if ( !this )
    v10 = 1128LL;
  v14 = *(_DWORD *)v10;
  if ( *(int *)v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(1128LL, 0LL, 0, v14, 0x67Du, 0LL);
  }
  else
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PrivateCompositorBuffer *, struct ID2D1PrivateCompositorBuffer *, struct ID2D1Bitmap **, _DWORD))(**((_QWORD **)this + 31) + 24LL))(
            *((_QWORD *)this + 31),
            a2,
            a3,
            a4,
            a5);
    v14 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x687u, 0LL);
    }
    else
    {
      v17 = CD2DCommandList::Create(*((struct CD2DResourceManager **)this + 26), 0LL, &v20);
      v14 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x68Bu, 0LL);
        v12 = v20;
      }
      else
      {
        *v11 = v20;
      }
    }
  }
  if ( v12 )
    (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)v12 + 16LL))(v12);
  return CD3DDevice::TranslateDXGIorD3DErrorInContext(((unsigned __int64)this - 16) & -(__int64)(this != 0LL), v14, 0);
}
