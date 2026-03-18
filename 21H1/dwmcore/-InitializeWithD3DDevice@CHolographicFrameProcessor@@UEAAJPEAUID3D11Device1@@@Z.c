/*
 * XREFs of ?InitializeWithD3DDevice@CHolographicFrameProcessor@@UEAAJPEAUID3D11Device1@@@Z @ 0x18025D8E0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18002E8BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C1234 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHolographicFrameProcessor::InitializeWithD3DDevice(
        CHolographicFrameProcessor *this,
        struct ID3D11Device1 *a2)
{
  struct ID3D11Device1 *v2; // rax
  unsigned int v3; // ebp
  int v6; // esi
  int v7; // eax
  __int64 v8; // rcx
  struct ID3D11Device1 *v9; // rsi
  __int64 v10; // rcx
  void (__stdcall *GetImmediateContext)(ID3D11Device1 *, ID3D11DeviceContext **); // rbx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // rsi
  __int64 (__fastcall *v13)(_QWORD, GUID *, char *); // rdi
  HRESULT (__stdcall *QueryInterface)(ID3D11Device1 *, const IID *const, void **); // rbx
  __int64 v15; // rbx
  __int64 *v16; // r15
  int (__fastcall *v17)(__int64, _QWORD, _QWORD, GUID *, __int64 *); // rdi
  __int64 v18; // rbx
  __int64 (__fastcall *v19)(__int64, _QWORD, __int64, GUID *, __int64 *); // rdi
  unsigned int v21; // [rsp+20h] [rbp-28h]
  __int64 v22; // [rsp+50h] [rbp+8h] BYREF

  v2 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
  v3 = 0;
  v22 = 0LL;
  if ( !v2 )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 11);
    v7 = OpenFlipConsumer(*((_QWORD *)this + 10), (char *)this + 88, (char *)this + 40);
    v6 = v7;
    if ( v7 < 0 )
    {
      v21 = 116;
    }
    else
    {
      v9 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
      if ( v9 != a2 )
      {
        v10 = *((_QWORD *)this + 6);
        if ( a2 )
        {
          ((void (__fastcall *)(struct ID3D11Device1 *))a2->lpVtbl->AddRef)(a2);
          v10 = *((_QWORD *)this + 6);
        }
        *((_QWORD *)this + 6) = a2;
        v9 = a2;
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
          v9 = (struct ID3D11Device1 *)*((_QWORD *)this + 6);
        }
      }
      GetImmediateContext = v9->lpVtbl->GetImmediateContext;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 7);
      ((void (__fastcall *)(struct ID3D11Device1 *, char *))GetImmediateContext)(v9, (char *)this + 56);
      v12 = (__int64 (__fastcall ***)(_QWORD, GUID *, char *))*((_QWORD *)this + 7);
      v13 = **v12;
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)this + 8);
      v7 = v13(v12, &GUID_917600da_f58c_4c33_98d8_3e15b390fa24, (char *)this + 64);
      v6 = v7;
      if ( v7 < 0 )
      {
        v21 = 121;
      }
      else
      {
        QueryInterface = a2->lpVtbl->QueryInterface;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
        v7 = ((__int64 (__fastcall *)(struct ID3D11Device1 *, GUID *, __int64 *))QueryInterface)(
               a2,
               &GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0,
               &v22);
        v6 = v7;
        if ( v7 < 0 )
        {
          v21 = 123;
        }
        else
        {
          v15 = v22;
          v16 = (__int64 *)((char *)this + 96);
          v17 = *(int (__fastcall **)(__int64, _QWORD, _QWORD, GUID *, __int64 *))(*(_QWORD *)v22 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
          if ( v17(v15, 0LL, 0LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v16) >= 0 )
            goto LABEL_19;
          v18 = v22;
          v19 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64, GUID *, __int64 *))(*(_QWORD *)v22 + 544LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v16);
          v7 = v19(v18, 0LL, 8LL, &GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80, v16);
          v6 = v7;
          if ( v7 >= 0 )
            goto LABEL_19;
          v21 = 132;
        }
      }
    }
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, v7, v21, 0LL);
LABEL_19:
    v3 = v6;
    goto LABEL_20;
  }
  if ( v2 != a2 )
  {
    v6 = -2147418113;
    MilInstrumentationCheckHR_MaybeFailFast((__int64)this, 0LL, 0, -2147418113, 0x71u, 0LL);
    goto LABEL_19;
  }
LABEL_20:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v22);
  return v3;
}
