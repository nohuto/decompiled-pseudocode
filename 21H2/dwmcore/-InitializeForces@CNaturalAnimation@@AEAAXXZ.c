/*
 * XREFs of ?InitializeForces@CNaturalAnimation@@AEAAXXZ @ 0x1801D82CC
 * Callers:
 *     ?SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ @ 0x1801D9550 (-SetupAnimationIfNecessary@CNaturalAnimation@@AEAAJXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180062598 (--2@YAPEAX_K@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x1800CC6C4 (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     __security_check_cookie @ 0x1800E6E00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333@Z @ 0x1801D6E64 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1.c)
 *     ??0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z @ 0x1801D72E8 (--0CVector3Force@@QEAA@PEAUIAccelerator@@00@Z.c)
 *     ??4?$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z @ 0x1801D73A0 (--4-$ComPtr@VCManipulationContext@@@WRL@Microsoft@@QEAAAEAV012@PEAVCManipulationContext@@@Z.c)
 *     ?GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ @ 0x1801D7C08 (-GenerateVector3Basis@CNaturalAnimation@@AEAA_NXZ.c)
 *     ModuleFailFastForHRESULT @ 0x18020FB94 (ModuleFailFastForHRESULT.c)
 *     ?D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021E330 (-D3DXVec3TransformNormal@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

void __fastcall CNaturalAnimation::InitializeForces(CNaturalAnimation *this)
{
  int v1; // eax
  const struct D2DVector3 *v3; // rbx
  __m128 v4; // xmm1
  __m128 v5; // xmm2
  __m128 v6; // xmm0
  float v7; // eax
  float v8; // eax
  __m128 v9; // xmm2
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  float v12; // eax
  float v13; // eax
  _OWORD *v14; // r15
  float v15; // xmm1_4
  float v16; // xmm0_4
  const struct D2DMatrix *v17; // r8
  _DWORD *v18; // r14
  struct IAccelerator *v19; // rax
  struct IAccelerator *v20; // rsi
  CVector3Force *v21; // rax
  __int64 v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  int v29; // [rsp+128h] [rbp-80h] BYREF
  int v30; // [rsp+12Ch] [rbp-7Ch] BYREF
  int v31; // [rsp+130h] [rbp-78h] BYREF
  int v32; // [rsp+134h] [rbp-74h] BYREF
  int v33; // [rsp+138h] [rbp-70h] BYREF
  int v34; // [rsp+13Ch] [rbp-6Ch] BYREF
  int v35; // [rsp+140h] [rbp-68h] BYREF
  int v36; // [rsp+144h] [rbp-64h] BYREF
  int v37; // [rsp+148h] [rbp-60h] BYREF
  int v38; // [rsp+14Ch] [rbp-5Ch] BYREF
  int v39; // [rsp+150h] [rbp-58h] BYREF
  int v40; // [rsp+154h] [rbp-54h] BYREF
  int v41; // [rsp+158h] [rbp-50h] BYREF
  int v42; // [rsp+15Ch] [rbp-4Ch] BYREF
  int v43; // [rsp+160h] [rbp-48h] BYREF
  int v44; // [rsp+164h] [rbp-44h] BYREF
  int v45; // [rsp+168h] [rbp-40h] BYREF
  int v46; // [rsp+16Ch] [rbp-3Ch] BYREF
  int v47; // [rsp+170h] [rbp-38h] BYREF
  int v48; // [rsp+174h] [rbp-34h] BYREF
  int v49; // [rsp+178h] [rbp-30h] BYREF
  int v50; // [rsp+17Ch] [rbp-2Ch] BYREF
  int v51; // [rsp+180h] [rbp-28h] BYREF
  int v52; // [rsp+184h] [rbp-24h] BYREF
  int v53; // [rsp+188h] [rbp-20h] BYREF
  int v54; // [rsp+18Ch] [rbp-1Ch] BYREF
  int v55; // [rsp+190h] [rbp-18h] BYREF
  int v56; // [rsp+194h] [rbp-14h] BYREF
  int v57; // [rsp+198h] [rbp-10h] BYREF
  int v58; // [rsp+19Ch] [rbp-Ch] BYREF
  int v59; // [rsp+1A0h] [rbp-8h] BYREF
  int TracingCookie; // [rsp+1A4h] [rbp-4h] BYREF
  float v61[2]; // [rsp+1A8h] [rbp+0h] BYREF
  float v62; // [rsp+1B0h] [rbp+8h]
  __int64 v63; // [rsp+1B8h] [rbp+10h] BYREF
  int v64; // [rsp+1C0h] [rbp+18h]
  __int64 v65; // [rsp+1C8h] [rbp+20h] BYREF
  int v66; // [rsp+1D0h] [rbp+28h]
  void *retaddr; // [rsp+220h] [rbp+78h]

  v1 = *((_DWORD *)this + 36);
  if ( v1 == 18 )
  {
    v4 = (__m128)*((unsigned int *)this + 84);
    v5 = (__m128)*((unsigned int *)this + 79);
    v62 = *((float *)this + 80);
    v6 = (__m128)*((unsigned int *)this + 87);
    v7 = v62;
    v62 = 0.0;
    *((_QWORD *)this + 42) = _mm_unpacklo_ps(v4, v5).m128_u64[0];
    *((float *)this + 86) = v7;
    v8 = v62;
    *(_QWORD *)((char *)this + 348) = _mm_unpacklo_ps(v6, (__m128)0LL).m128_u64[0];
    *((float *)this + 89) = v8;
    goto LABEL_7;
  }
  if ( v1 == 35 )
  {
LABEL_7:
    v9 = (__m128)*((unsigned int *)this + 85);
    v3 = (CNaturalAnimation *)((char *)this + 348);
    v10 = (__m128)*((unsigned int *)this + 84);
    v62 = *((float *)this + 80);
    v11 = (__m128)*((unsigned int *)this + 87);
    v12 = v62;
    v62 = 0.0;
    *((_QWORD *)this + 42) = _mm_unpacklo_ps(v10, v9).m128_u64[0];
    v11.m128_u64[0] = _mm_unpacklo_ps(v11, (__m128)*((unsigned int *)this + 88)).m128_u64[0];
    *((float *)this + 86) = v12;
    v13 = v62;
    *(_QWORD *)((char *)this + 348) = v11.m128_u64[0];
    *((float *)this + 89) = v13;
    goto LABEL_8;
  }
  if ( v1 != 52 )
    ModuleFailFastForHRESULT(2147500037LL, retaddr);
  v3 = (CNaturalAnimation *)((char *)this + 348);
LABEL_8:
  CNaturalAnimation::GenerateVector3Basis(this);
  v14 = (_OWORD *)((char *)this + 436);
  v15 = *((float *)this + 79) - *((float *)this + 85);
  v61[0] = *((float *)this + 78) - *((float *)this + 84);
  v16 = *((float *)this + 80) - *((float *)this + 86);
  v61[1] = v15;
  v62 = v16;
  D3DXVec3TransformNormal(
    (struct D2DVector3 *)&v63,
    (const struct D2DVector3 *)v61,
    (CNaturalAnimation *)((char *)this + 436));
  D3DXVec3TransformNormal((struct D2DVector3 *)&v65, v3, v17);
  v18 = operator new(0x20uLL);
  if ( v18 )
  {
    v18[4] = 0;
    *(_QWORD *)v18 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    *((_QWORD *)v18 + 1) = &CFrictionAccelerator::`vftable'{for `CMILRefCountBase'};
    v18[6] = -1035468800;
    (**(void (__fastcall ***)(LPVOID))v18)(v18);
  }
  v19 = (struct IAccelerator *)operator new(0x20uLL);
  v20 = v19;
  if ( v19 )
  {
    *((_DWORD *)v19 + 4) = 0;
    *(_QWORD *)v19 = &CFrictionAccelerator::`vftable'{for `IAccelerator'};
    *((_QWORD *)v19 + 1) = &CFrictionAccelerator::`vftable'{for `CMILRefCountBase'};
    *((_DWORD *)v19 + 6) = -1035468800;
  }
  else
  {
    v20 = 0LL;
  }
  if ( v20 )
    (**(void (__fastcall ***)(struct IAccelerator *))v20)(v20);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 53) + 32LL))(*((_QWORD *)this + 53));
  v21 = (CVector3Force *)operator new(0x168uLL);
  if ( v21 )
    v21 = CVector3Force::CVector3Force(v21, (struct IAccelerator *)v18, v20, *((struct IAccelerator **)this + 53));
  Microsoft::WRL::ComPtr<CManipulationContext>::operator=(
    (__int64 (__fastcall ****)(_QWORD))this + 52,
    (__int64 (__fastcall ***)(_QWORD))v21);
  v22 = *((_QWORD *)this + 52);
  v23 = v64;
  v24 = v66;
  *(_QWORD *)(v22 + 316) = v63;
  *(_QWORD *)(v22 + 328) = v65;
  *(_DWORD *)(v22 + 336) = v24;
  *(_DWORD *)(v22 + 324) = v23;
  *(_OWORD *)(v22 + 220) = *v14;
  *(_OWORD *)(v22 + 236) = *(_OWORD *)((char *)this + 452);
  *(_OWORD *)(v22 + 252) = *(_OWORD *)((char *)this + 468);
  *(_OWORD *)(v22 + 268) = *(_OWORD *)((char *)this + 484);
  *(_DWORD *)(v22 + 312) = 0;
  v25 = *((_QWORD *)this + 52);
  *(_QWORD *)(v25 + 340) = *((_QWORD *)this + 42);
  LODWORD(v22) = *((_DWORD *)this + 86);
  *(_BYTE *)(v25 + 352) |= 2u;
  *(_DWORD *)(v25 + 348) = v22;
  if ( *(int *)(*((_QWORD *)this + 38) + 4LL) < 0
    && (unsigned int)dword_180344EF0 > 4
    && (qword_180344F00 & 4) != 0
    && (qword_180344F08 & 4) == qword_180344F08 )
  {
    v29 = *((_DWORD *)this + 124);
    v30 = *((_DWORD *)this + 123);
    v31 = *((_DWORD *)this + 122);
    v32 = *((_DWORD *)this + 121);
    v33 = *((_DWORD *)this + 120);
    v34 = *((_DWORD *)this + 119);
    v35 = *((_DWORD *)this + 118);
    v36 = *((_DWORD *)this + 117);
    v37 = *((_DWORD *)this + 116);
    v38 = *((_DWORD *)this + 115);
    v39 = *((_DWORD *)this + 114);
    v40 = *((_DWORD *)this + 113);
    v41 = *((_DWORD *)this + 112);
    v42 = *((_DWORD *)this + 111);
    v43 = *((_DWORD *)this + 110);
    v44 = *(_DWORD *)v14;
    v46 = HIDWORD(v63);
    v47 = v63;
    v49 = HIDWORD(v65);
    v50 = v65;
    v51 = *((_DWORD *)this + 86);
    v52 = *((_DWORD *)this + 85);
    v53 = *((_DWORD *)this + 84);
    v54 = *((_DWORD *)this + 80);
    v55 = *((_DWORD *)this + 79);
    v56 = *((_DWORD *)this + 78);
    v57 = *((_DWORD *)this + 89);
    v58 = *((_DWORD *)this + 88);
    v59 = *((_DWORD *)this + 87);
    v45 = v23;
    v48 = v24;
    TracingCookie = CBaseExpression::GetTracingCookie(this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v26,
      byte_1802E92E9,
      v27,
      v28,
      (__int64)&TracingCookie,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v51,
      (__int64)&v50,
      (__int64)&v49,
      (__int64)&v48,
      (__int64)&v47,
      (__int64)&v46,
      (__int64)&v45,
      (__int64)&v44,
      (__int64)&v43,
      (__int64)&v42,
      (__int64)&v41,
      (__int64)&v40,
      (__int64)&v39,
      (__int64)&v38,
      (__int64)&v37,
      (__int64)&v36,
      (__int64)&v35,
      (__int64)&v34,
      (__int64)&v33,
      (__int64)&v32,
      (__int64)&v31,
      (__int64)&v30,
      (__int64)&v29);
  }
  if ( v20 )
    (*(void (__fastcall **)(struct IAccelerator *))(*(_QWORD *)v20 + 8LL))(v20);
  if ( v18 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 8LL))(v18);
}
