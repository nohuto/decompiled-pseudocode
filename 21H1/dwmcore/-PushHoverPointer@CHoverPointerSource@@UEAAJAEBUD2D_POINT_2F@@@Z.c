/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x180099C10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006FEEC (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x180092F04 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(struct D2D_POINT_2F *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct IMessageCallSendHost *v5; // rbx
  CComposition *v6; // rdi
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int v10; // [rsp+20h] [rbp-30h]
  __int64 v11; // [rsp+40h] [rbp-10h] BYREF
  struct CManipulationManager *v12; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v13; // [rsp+88h] [rbp+38h] BYREF
  struct D2D_POINT_2F v14; // [rsp+90h] [rbp+40h] BYREF
  struct D2D_POINT_2F *v15; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  if ( this[8].x != a2->x || this[8].y != a2->y )
  {
    this[8] = *a2;
    if ( CMit::s_pMessageSession
      && !CMit::s_pMessageCallSendHost
      && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
    {
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v5 = CMit::s_pMessageCallSendHost;
    v13 = CMit::s_pMessageCallSendHost;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v13);
    if ( v5 )
    {
      v12 = 0LL;
      v6 = (CComposition *)this[3];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
      ManipulationManager = CComposition::GetManipulationManager(v6, &v12);
      v2 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, ManipulationManager, 0x49u, 0LL);
      }
      else
      {
        v9 = *((_QWORD *)v12 + 7);
        if ( v9 )
        {
          (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 8LL))(this + 1);
          v14 = this[8];
          LOWORD(v10) = 4;
          v15 = this;
          v11 = v9;
          v2 = CoreUICallSend(v5, &v11, 1LL, 10LL, v10, &unk_1802CFB22, (unsigned int)&v15, &v14);
          if ( v2 < 0 )
            (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 16LL))(this + 1);
        }
        else
        {
          v2 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147467259, 0x4Au, 0LL);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v13);
  }
  return (unsigned int)v2;
}
