/*
 * XREFs of ?PushHoverPointer@CHoverPointerSource@@UEAAJAEBUD2D_POINT_2F@@@Z @ 0x1800E4E60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z @ 0x18006D8F4 (-GetManipulationManager@CComposition@@QEAAJPEAPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalAddRef@?$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ @ 0x1800D5E60 (-InternalAddRef@-$ComPtr@UIMessageCallSendHost@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1801000AC (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CHoverPointerSource::PushHoverPointer(struct D2D_POINT_2F *this, const struct D2D_POINT_2F *a2)
{
  int v2; // edi
  struct IMessageCallSendHost *v5; // rbx
  CComposition *v6; // rdi
  int ManipulationManager; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // [rsp+40h] [rbp-10h] BYREF
  struct CManipulationManager *v11; // [rsp+80h] [rbp+30h] BYREF
  struct IMessageCallSendHost *v12; // [rsp+88h] [rbp+38h] BYREF
  struct D2D_POINT_2F v13; // [rsp+90h] [rbp+40h]
  struct D2D_POINT_2F *v14; // [rsp+98h] [rbp+48h]

  v2 = 0;
  if ( this[9].x != a2->x || this[9].y != a2->y )
  {
    this[9] = *a2;
    if ( CMit::s_pMessageSession
      && !CMit::s_pMessageCallSendHost
      && (int)CoreUICallCreateEndpointHost(CMit::s_pMessageSession, &CMit::s_pMessageCallSendHost, 0LL) < 0 )
    {
      RaiseFailFastException(0LL, 0LL, 0);
    }
    v5 = CMit::s_pMessageCallSendHost;
    v12 = CMit::s_pMessageCallSendHost;
    Microsoft::WRL::ComPtr<IMessageCallSendHost>::InternalAddRef((__int64 *)&v12);
    if ( v5 )
    {
      v11 = 0LL;
      v6 = (CComposition *)this[3];
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
      ManipulationManager = CComposition::GetManipulationManager(v6, &v11);
      v2 = ManipulationManager;
      if ( ManipulationManager < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, ManipulationManager, 0x49u);
      }
      else
      {
        v9 = *((_QWORD *)v11 + 7);
        if ( v9 )
        {
          (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 8LL))(this + 1);
          v13 = this[9];
          v14 = this;
          v10 = v9;
          v2 = CoreUICallSend(v5, &v10, 1LL, 12LL, 4, &unk_18032C408);
          if ( v2 < 0 )
            (*(void (__fastcall **)(struct D2D_POINT_2F *))(*(_QWORD *)&this[1] + 16LL))(this + 1);
        }
        else
        {
          v2 = -2147467259;
          MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0LL, -2147467259, 0x4Au);
        }
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v11);
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v12);
  }
  return (unsigned int)v2;
}
