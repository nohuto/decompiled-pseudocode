/*
 * XREFs of ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801EC8D8
 * Callers:
 *     ?CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z @ 0x1801EC424 (-CreateRenderTasks@CSpriteVectorShape@@QEAAJPEAVCShapeDrawingContext@@@Z.c)
 * Callees:
 *     ??$?0URampPair@CoordMap@@$0?0X@?$span@$$CBURampPair@CoordMap@@$0?0@gsl@@QEAA@AEBV?$span@URampPair@CoordMap@@$0?0@1@@Z @ 0x180017E74 (--$-0URampPair@CoordMap@@$0-0X@-$span@$$CBURampPair@CoordMap@@$0-0@gsl@@QEAA@AEBV-$span@URampPai.c)
 *     ??$narrow@_J_K@gsl@@YA_J_K@Z @ 0x18004F1F4 (--$narrow@_J_K@gsl@@YA_J_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x1800C7124 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$vector@MV?$allocator@M@std@@@std@@AEAAXXZ @ 0x180173A14 (-_Tidy@-$vector@MV-$allocator@M@std@@@std@@AEAAXXZ.c)
 *     ?reserve@?$vector@MV?$allocator@M@std@@@std@@QEAAX_K@Z @ 0x180173B50 (-reserve@-$vector@MV-$allocator@M@std@@@std@@QEAAX_K@Z.c)
 *     ??$_Emplace_reallocate@AEBM@?$vector@MV?$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z @ 0x1801DBEF0 (--$_Emplace_reallocate@AEBM@-$vector@MV-$allocator@M@std@@@std@@QEAAPEAMQEAMAEBM@Z.c)
 */

__int64 __fastcall CSpriteVectorShape::EnsureStrokeStyleForRender(CSpriteVectorShape *this)
{
  __int64 *v1; // r14
  unsigned int v3; // ebx
  float v4; // xmm0_4
  __int64 v5; // rdx
  float v6; // xmm6_4
  __int64 v7; // r15
  float *v8; // rsi
  float *v9; // rbx
  unsigned __int64 v10; // r12
  float v11; // xmm0_4
  float v12; // xmm0_4
  float *v13; // rsi
  bool v14; // zf
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  float *v19; // [rsp+38h] [rbp-59h] BYREF
  float *v20; // [rsp+40h] [rbp-51h]
  float *v21; // [rsp+48h] [rbp-49h]
  float v22; // [rsp+50h] [rbp-41h] BYREF
  __int64 v23[2]; // [rsp+58h] [rbp-39h] BYREF
  __int64 v24[2]; // [rsp+68h] [rbp-29h] BYREF
  _DWORD v25[4]; // [rsp+78h] [rbp-19h] BYREF
  int v26; // [rsp+88h] [rbp-9h]
  int v27; // [rsp+8Ch] [rbp-5h]
  float v28; // [rsp+90h] [rbp-1h]
  BOOL v29; // [rsp+94h] [rbp+3h]

  v1 = (__int64 *)((char *)this + 128);
  v3 = 0;
  if ( !*((_QWORD *)this + 16) )
  {
    v4 = fmaxf(0.0, *((float *)this + 50));
    v5 = *((_QWORD *)this + 20) - *((_QWORD *)this + 19);
    v19 = 0LL;
    v6 = 1.0 / v4;
    v20 = 0LL;
    v21 = 0LL;
    std::vector<float>::reserve(&v19, v5 >> 2);
    v7 = 0LL;
    v8 = (float *)*((_QWORD *)this + 19);
    v9 = v20;
    v10 = (unsigned __int64)(*((_QWORD *)this + 20) - (_QWORD)v8 + 3LL) >> 2;
    if ( (unsigned __int64)v8 > *((_QWORD *)this + 20) )
      v10 = 0LL;
    if ( v10 )
    {
      do
      {
        v11 = v6 * *v8;
        v22 = v11;
        if ( v21 == v9 )
        {
          std::vector<float>::_Emplace_reallocate<float const &>((const void **)&v19, v9, &v22);
          v9 = v20;
        }
        else
        {
          *v9++ = v11;
          v20 = v9;
        }
        ++v8;
        ++v7;
      }
      while ( v7 != v10 );
    }
    v12 = *((float *)this + 49);
    v25[0] = *((_DWORD *)this + 45);
    v25[1] = *((_DWORD *)this + 46);
    v25[2] = *((_DWORD *)this + 44);
    v25[3] = *((_DWORD *)this + 47);
    if ( v12 >= 1.0 )
      v26 = LODWORD(v12);
    else
      v26 = 1065353216;
    v13 = v19;
    v28 = v6 * *((float *)this + 48);
    v14 = *((_BYTE *)this + 204) == 0;
    v27 = v9 != v19 ? 5 : 0;
    v29 = !v14;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v1);
    v15 = gsl::narrow<__int64,unsigned __int64>(v9 - v13);
    v23[0] = v15;
    if ( v15 < 0 || (v23[1] = (__int64)v13) == 0 && v15 )
    {
      ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
      __debugbreak();
    }
    gsl::span<CoordMap::RampPair const,-1>::span<CoordMap::RampPair const,-1>(v24, v23);
    v16 = (*(__int64 (__fastcall **)(void *, _DWORD *, __int64, _QWORD, __int64 *))(*(_QWORD *)g_DeviceManager + 144LL))(
            g_DeviceManager,
            v25,
            v24[1],
            LODWORD(v24[0]),
            v1);
    v3 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v16, 0x1FAu, 0LL);
    std::vector<float>::_Tidy((__int64)&v19);
  }
  return v3;
}
