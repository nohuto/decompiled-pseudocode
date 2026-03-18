/*
 * XREFs of ?Generate@CGradientSource@@IEAAJPEAVCD3DDevice@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N33W4D2D1_EXTEND_MODE@@@Z @ 0x180207334
 * Callers:
 *     ?Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z @ 0x1801E5F54 (-Generate@CGradientBrush@@AEAAJPEAVCD3DDevice@@AEBVRetrievalParams@CGradientSource@@@Z.c)
 * Callees:
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180066E94 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18009F4CC (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?find@?$_Tree@V?$_Tset_traits@PEAVCInteractionTracker@@U?$less@PEAVCInteractionTracker@@@std@@V?$allocator@PEAVCInteractionTracker@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCInteractionTracker@@@std@@@std@@@2@AEBQEAVCInteractionTracker@@@Z @ 0x180189C6C (-find@-$_Tree@V-$_Tset_traits@PEAVCInteractionTracker@@U-$less@PEAVCInteractionTracker@@@std@@V-.c)
 *     ?Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z @ 0x180207984 (-Create@CAtlasBitmapResource@@SAJPEAVIAtlasEntryOwner@@PEAVCD3DDevice@@PEAPEAV1@@Z.c)
 *     ?Update@CAtlasBitmapResource@@QEAAJV?$span@$$CBE$0?0@gsl@@_N@Z @ 0x180207D50 (-Update@CAtlasBitmapResource@@QEAAJV-$span@$$CBE$0-0@gsl@@_N@Z.c)
 *     ?CreateGradientStopCollection@CD2DContext@@QEAAJV?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@W4D2D1_GAMMA@@W4D2D1_EXTEND_MODE@@PEAPEAUID2D1GradientStopCollection@@@Z @ 0x1802388F8 (-CreateGradientStopCollection@CD2DContext@@QEAAJV-$span@$$CBUD2D1_GRADIENT_STOP@@$0-0@gsl@@W4D2D.c)
 */

__int64 __fastcall CGradientSource::Generate(
        __int64 **a1,
        struct CD3DDevice *a2,
        __int64 a3,
        unsigned int *a4,
        unsigned __int8 a5,
        char a6,
        unsigned __int8 a7,
        int a8)
{
  unsigned int v11; // r14d
  __int64 *v12; // rsi
  struct CAtlasBitmapResource **v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  LPVOID v16; // rax
  __int64 v17; // rcx
  void *v18; // rbx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  struct CAtlasBitmapResource *v22; // rdi
  int v23; // eax
  __int64 v24; // rcx
  struct CAtlasBitmapResource **v25; // rax
  _QWORD *v26; // rax
  int GradientStopCollection; // eax
  __int64 v28; // rcx
  int v29; // eax
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rbx
  __int64 v34; // rax
  unsigned int *v36; // [rsp+70h] [rbp-49h] BYREF
  __int64 *v37; // [rsp+78h] [rbp-41h] BYREF
  __int64 v38[2]; // [rsp+80h] [rbp-39h] BYREF
  __int128 v39; // [rsp+90h] [rbp-29h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v41; // [rsp+B0h] [rbp-9h]

  v38[0] = (__int64)a2;
  v36 = a4;
  v11 = 0;
  std::_Tree<std::_Tset_traits<CInteractionTracker *,std::less<CInteractionTracker *>,std::allocator<CInteractionTracker *>,0>>::find(
    a1 + 1,
    &v37,
    v38);
  v12 = v37;
  v13 = (struct CAtlasBitmapResource **)(v37 + 5);
  if ( !v37[5] )
  {
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v37 + 5);
    v14 = CAtlasBitmapResource::Create((struct IAtlasEntryOwner *)a1, a2, v13);
    v11 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v15, 0LL, 0, v14, 0x7Fu, 0LL);
      return v11;
    }
  }
  if ( *(_QWORD *)a3 && !**(_QWORD **)a3 )
  {
    v16 = DefaultHeap::Alloc(0x2000uLL);
    v18 = v16;
    if ( !v16 )
    {
      v11 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, -2147024882, 0x89u, 0LL);
      return v11;
    }
    v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, int, unsigned int, int, int, _DWORD, int, LPVOID, int))(*(_QWORD *)*(&g_DeviceManager + 1) + 40LL))(
            *(&g_DeviceManager + 1),
            *((_QWORD *)v36 + 1),
            *v36,
            a7 ^ 1u,
            1,
            (unsigned int)a5 + 1,
            1,
            a8,
            0,
            87,
            v16,
            0x2000);
    v11 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0x95u, 0LL);
    }
    else
    {
      v22 = *v13;
      v38[0] = (__int64)v22;
      if ( v22 )
        (*(void (__fastcall **)(struct CAtlasBitmapResource *))(*(_QWORD *)v22 + 8LL))(v22);
      LOBYTE(v21) = a6;
      *(_QWORD *)&v39 = 0x2000LL;
      *((_QWORD *)&v39 + 1) = v18;
      v23 = CAtlasBitmapResource::Update(v22, &v39, v21);
      v11 = v23;
      if ( v23 >= 0 )
      {
        v25 = *(struct CAtlasBitmapResource ***)a3;
        v38[0] = 0LL;
        *v25 = v22;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v38);
        operator delete(v18);
        goto LABEL_13;
      }
      MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v23, 0x9Cu, 0LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v38);
    }
    operator delete(v18);
    return v11;
  }
LABEL_13:
  v26 = *(_QWORD **)(a3 + 8);
  if ( v26 && !*v26 )
  {
    v37 = 0LL;
    v38[0] = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
    v39 = *(_OWORD *)v36;
    GradientStopCollection = CD2DContext::CreateGradientStopCollection(
                               (int)a2 + 16,
                               (unsigned int)&v39,
                               a5,
                               a8,
                               (__int64)&v37);
    v11 = GradientStopCollection;
    if ( GradientStopCollection < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, GradientStopCollection, 0xAAu, 0LL);
    }
    else
    {
      v40 = 0LL;
      v36 = 0LL;
      if ( a7 )
      {
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
        v29 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64 *, unsigned int **))(**((_QWORD **)a2 + 32)
                                                                                                + 80LL))(
                *((_QWORD *)a2 + 32),
                &v40,
                0LL,
                v37,
                &v36);
        v11 = v29;
        if ( v29 >= 0 )
          goto LABEL_24;
        MilInstrumentationCheckHR_MaybeFailFast(v30, 0LL, 0, v29, 0xB6u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
      }
      else
      {
        v41 = 0LL;
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
        v31 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, _QWORD, __int64 *, unsigned int **))(**((_QWORD **)a2 + 32)
                                                                                                + 88LL))(
                *((_QWORD *)a2 + 32),
                &v40,
                0LL,
                v37,
                &v36);
        v11 = v31;
        if ( v31 >= 0 )
        {
LABEL_24:
          v33 = (__int64)v36;
          v36 = 0LL;
          *(_QWORD *)&v39 = 0LL;
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
          v34 = v12[6];
          if ( v34 != v33 )
          {
            if ( v33 )
            {
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 8LL))(v33);
              v34 = v12[6];
            }
            *(_QWORD *)&v39 = v34;
            v12[6] = v33;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v39);
          }
          **(_QWORD **)(a3 + 8) = v33;
          goto LABEL_31;
        }
        MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, v31, 0xC3u, 0LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v36);
      }
    }
LABEL_31:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v38);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v37);
  }
  return v11;
}
