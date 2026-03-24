/*
 * XREFs of ?Update@CManipulation@@QEAAJPEAUManipulationData@@@Z @ 0x1801D4D74
 * Callers:
 *     ?InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z @ 0x1801D4458 (-InjectManipulation@CManipulation@@QEAAJAEBUInjectManipulationArgs@@@Z.c)
 *     ?Thunk_UpdateManipulation_118@?$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z @ 0x180228120 (-Thunk_UpdateManipulation_118@-$IManipulation_Receive@VCManipulationManager@@@@SAJPEAXPEAPEAX@Z.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x180065B20 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F4800 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4444444444444444444444444444@Z @ 0x1801D391C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 */

__int64 __fastcall CManipulation::Update(CManipulation *this, struct ManipulationData *a2, __int64 a3, __int64 a4)
{
  _OWORD *v4; // r8
  int v6; // edi
  __m128 v7; // xmm3
  __m128 v8; // xmm2
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm6_4
  float v12; // xmm7_4
  char *v13; // rcx
  __int128 v14; // xmm0
  char *v15; // rdx
  float v16; // eax
  unsigned __int8 v17; // cl
  __int64 v18; // rcx
  int v19; // eax
  CManipulation *v20; // r8
  __int64 v21; // rdx
  int v23; // [rsp+118h] [rbp-80h] BYREF
  int v24; // [rsp+11Ch] [rbp-7Ch] BYREF
  int v25; // [rsp+120h] [rbp-78h] BYREF
  int v26; // [rsp+124h] [rbp-74h] BYREF
  int v27; // [rsp+128h] [rbp-70h] BYREF
  int v28; // [rsp+12Ch] [rbp-6Ch] BYREF
  int v29; // [rsp+130h] [rbp-68h] BYREF
  int v30; // [rsp+134h] [rbp-64h] BYREF
  int v31; // [rsp+138h] [rbp-60h] BYREF
  int v32; // [rsp+13Ch] [rbp-5Ch] BYREF
  int v33; // [rsp+140h] [rbp-58h] BYREF
  int v34; // [rsp+144h] [rbp-54h] BYREF
  int v35; // [rsp+148h] [rbp-50h] BYREF
  int v36; // [rsp+14Ch] [rbp-4Ch] BYREF
  int v37; // [rsp+150h] [rbp-48h] BYREF
  int v38; // [rsp+154h] [rbp-44h] BYREF
  int v39; // [rsp+158h] [rbp-40h] BYREF
  int v40; // [rsp+15Ch] [rbp-3Ch] BYREF
  int v41; // [rsp+160h] [rbp-38h] BYREF
  int v42; // [rsp+164h] [rbp-34h] BYREF
  int v43; // [rsp+168h] [rbp-30h] BYREF
  int v44; // [rsp+16Ch] [rbp-2Ch] BYREF
  int v45; // [rsp+170h] [rbp-28h] BYREF
  int v46; // [rsp+174h] [rbp-24h] BYREF
  int v47; // [rsp+178h] [rbp-20h] BYREF
  int v48; // [rsp+17Ch] [rbp-1Ch] BYREF
  int v49; // [rsp+180h] [rbp-18h] BYREF
  int v50; // [rsp+184h] [rbp-14h] BYREF
  int v51; // [rsp+188h] [rbp-10h] BYREF
  CManipulation *v52; // [rsp+190h] [rbp-8h] BYREF
  float v53; // [rsp+198h] [rbp+0h]

  v4 = (_OWORD *)((char *)this + 256);
  v6 = *((_DWORD *)this + 103);
  v7 = (__m128)*((unsigned int *)a2 + 9);
  v8 = (__m128)*((unsigned int *)a2 + 10);
  v9 = *((float *)a2 + 3);
  v7.m128_f32[0] = v7.m128_f32[0] * *((float *)this + 73);
  v8.m128_f32[0] = v8.m128_f32[0] * *((float *)this + 74);
  v10 = *((float *)this + 69) + *((float *)a2 + 5);
  v53 = *((float *)a2 + 11) * *((float *)this + 75);
  v11 = *((float *)this + 68) + *((float *)a2 + 4);
  v12 = *((float *)this + 67);
  v13 = (char *)this + 384;
  *v4 = *(_OWORD *)a2;
  v4[1] = *((_OWORD *)a2 + 1);
  v4[2] = *((_OWORD *)a2 + 2);
  v4[3] = *((_OWORD *)a2 + 3);
  v4[4] = *((_OWORD *)a2 + 4);
  v4[5] = *((_OWORD *)a2 + 5);
  v4[6] = *((_OWORD *)a2 + 6);
  v14 = *((_OWORD *)a2 + 7);
  v15 = (char *)a2 + 128;
  *((_OWORD *)v13 - 1) = v14;
  *(_OWORD *)v13 = *(_OWORD *)v15;
  *((_OWORD *)v13 + 1) = *((_OWORD *)v15 + 1);
  *((_OWORD *)v13 + 2) = *((_OWORD *)v15 + 2);
  *((_QWORD *)v13 + 6) = *((_QWORD *)v15 + 6);
  *((float *)this + 67) = v12 + v9;
  *((float *)this + 68) = v11;
  *((float *)this + 69) = v10;
  v16 = v53;
  *(_QWORD *)((char *)this + 292) = _mm_unpacklo_ps(v7, v8).m128_u64[0];
  *((float *)this + 75) = v16;
  if ( (unsigned int)dword_180344EF0 > 4 && (qword_180344F00 & 2) != 0 && (qword_180344F08 & 2) == qword_180344F08 )
  {
    v17 = *((_BYTE *)this + 436);
    v52 = this;
    v23 = (v17 >> 1) & 1;
    v18 = v17 & 1;
    v25 = *((_DWORD *)this + 108);
    v26 = *((_DWORD *)this + 107);
    v27 = *((_DWORD *)this + 106);
    v28 = *((_DWORD *)this + 103);
    v29 = *((_DWORD *)this + 101);
    v30 = *((_DWORD *)this + 100);
    v31 = *((_DWORD *)this + 99);
    v32 = *((_DWORD *)this + 98);
    v33 = *((_DWORD *)this + 97);
    v34 = *((_DWORD *)this + 96);
    v35 = *((_DWORD *)this + 102);
    v36 = *((_DWORD *)this + 76);
    v37 = *((_DWORD *)this + 79);
    v38 = *((_DWORD *)this + 78);
    v39 = *((_DWORD *)this + 77);
    v40 = *((_DWORD *)this + 75);
    v41 = *((_DWORD *)this + 74);
    v42 = *((_DWORD *)this + 73);
    v43 = *((_DWORD *)this + 72);
    v44 = *((_DWORD *)this + 71);
    v45 = *((_DWORD *)this + 70);
    v46 = *((_DWORD *)this + 69);
    v47 = *((_DWORD *)this + 68);
    v48 = *((_DWORD *)this + 67);
    v49 = *((_DWORD *)this + 66);
    v50 = *((_DWORD *)this + 65);
    v51 = *(_DWORD *)v4;
    v24 = v18;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v18,
      byte_1802E8E99,
      (__int64)v4,
      a4,
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
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23);
  }
  v19 = *((_DWORD *)this + 103);
  if ( v19 == v6 )
  {
    if ( v19 || v6 )
    {
      v20 = 0LL;
      v21 = 0LL;
    }
    else
    {
      v20 = this;
      v21 = 10LL;
    }
  }
  else
  {
    v20 = this;
    v21 = 7LL;
  }
  (*(void (__fastcall **)(CManipulation *, __int64, CManipulation *))(*(_QWORD *)this + 72LL))(this, v21, v20);
  CResource::InvalidateAnimationSources(this, 0);
  CResource::InvalidateAnimationSources(this, 1);
  CResource::InvalidateAnimationSources(this, 2);
  CResource::InvalidateAnimationSources(this, 3);
  CResource::InvalidateAnimationSources(this, 4);
  CResource::InvalidateAnimationSources(this, 5);
  CResource::InvalidateAnimationSources(this, 6);
  CResource::InvalidateAnimationSources(this, 7);
  return 0LL;
}
