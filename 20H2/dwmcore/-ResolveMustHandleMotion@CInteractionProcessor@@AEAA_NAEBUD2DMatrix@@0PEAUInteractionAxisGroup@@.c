/*
 * XREFs of ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18022BD20
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180228EB8 (-CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAx.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18021B568 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 *     ?GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z @ 0x18022B060 (-GetRailsEnabled@CInteractionProcessor@@QEAA_NW4RailsAxis@@@Z.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18022CBC4 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveMustHandleMotion(
        CInteractionProcessor *this,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3,
        struct InteractionAxisGroup *a4,
        struct InteractionAxis *a5,
        enum InteractionState *a6)
{
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // r13
  unsigned __int8 v11; // al
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r12d
  int v16; // eax
  unsigned int v17; // r15d
  __int64 v18; // rax
  __int64 v19; // xmm0_8
  char RailsEnabled; // [rsp+D8h] [rbp-80h]
  int v22; // [rsp+DCh] [rbp-7Ch] BYREF
  int v23; // [rsp+E0h] [rbp-78h] BYREF
  int v24; // [rsp+E4h] [rbp-74h] BYREF
  int v25; // [rsp+E8h] [rbp-70h] BYREF
  int v26; // [rsp+ECh] [rbp-6Ch] BYREF
  int v27; // [rsp+F0h] [rbp-68h] BYREF
  int v28; // [rsp+F4h] [rbp-64h] BYREF
  int v29; // [rsp+F8h] [rbp-60h] BYREF
  int v30; // [rsp+FCh] [rbp-5Ch] BYREF
  int v31; // [rsp+100h] [rbp-58h] BYREF
  int v32; // [rsp+104h] [rbp-54h] BYREF
  int v33; // [rsp+108h] [rbp-50h] BYREF
  int v34; // [rsp+10Ch] [rbp-4Ch] BYREF
  int v35; // [rsp+110h] [rbp-48h] BYREF
  enum InteractionState *v36; // [rsp+118h] [rbp-40h] BYREF
  struct D2DMatrix *v37; // [rsp+120h] [rbp-38h] BYREF
  __int64 v38; // [rsp+128h] [rbp-30h] BYREF
  __int64 v39; // [rsp+130h] [rbp-28h] BYREF
  __int64 v40; // [rsp+138h] [rbp-20h] BYREF
  CInteractionProcessor *v41; // [rsp+140h] [rbp-18h] BYREF
  int v42; // [rsp+148h] [rbp-10h]
  __int64 v43; // [rsp+150h] [rbp-8h] BYREF
  int v44; // [rsp+158h] [rbp+0h]

  v37 = a2;
  v36 = a6;
  v9 = 1;
  if ( *((_BYTE *)a4 + 1) )
    v9 = *((_BYTE *)a5 + 1) != 0;
  if ( *(_BYTE *)a4 )
    v9 &= -(*(_BYTE *)a5 != 0);
  if ( *((_BYTE *)a4 + 2) && *((float *)a5 + 3) == 0.0 )
    v9 &= -((*((_BYTE *)this + 808) & 4) != 0);
  RailsEnabled = CInteractionProcessor::GetRailsEnabled((__int64)this, 0);
  v10 = RailsEnabled;
  v11 = CInteractionProcessor::GetRailsEnabled((__int64)this, 1);
  v15 = v11;
  if ( RailsEnabled || v11 )
  {
    v16 = *((_DWORD *)a5 + 3);
    v41 = *(CInteractionProcessor **)((char *)a5 + 4);
    v42 = v16;
    D3DXVec3TransformCoord((struct D2DVector3 *)&v41, (const struct D2DVector3 *)&v41, a3);
    v17 = 0;
    if ( !v9 )
    {
LABEL_15:
      v12 = *((unsigned int *)this + 196);
      *(_DWORD *)v36 = v12;
      *(_WORD *)a5 = 0;
      v44 = 0;
      *(_QWORD *)((char *)a5 + 4) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
      *((_DWORD *)a5 + 3) = 0;
      goto LABEL_16;
    }
    do
    {
      if ( v17 >= *((_DWORD *)a4 + 8) )
        break;
      v18 = *((_QWORD *)a4 + 1);
      v19 = *(_QWORD *)(v18 + 16LL * v17);
      LODWORD(v18) = *(_DWORD *)(v18 + 16LL * v17 + 8);
      v43 = v19;
      v44 = v18;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v43, (const struct D2DVector3 *)&v43, v37);
      ++v17;
      v9 = anonymous_namespace_::VectorInsideAngleThreshold(&v41, &v43);
    }
    while ( v9 );
    v10 = RailsEnabled;
  }
  if ( !v9 )
    goto LABEL_15;
LABEL_16:
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v22 = v42;
    v23 = HIDWORD(v41);
    v24 = (int)v41;
    v25 = *((_DWORD *)a5 + 3);
    v26 = *((_DWORD *)a5 + 2);
    v27 = *((_DWORD *)a5 + 1);
    v28 = *((unsigned __int8 *)a5 + 1);
    v29 = *(unsigned __int8 *)a5;
    v30 = *((_DWORD *)a4 + 8);
    v31 = *((unsigned __int8 *)a4 + 2);
    v32 = *((unsigned __int8 *)a4 + 1);
    v33 = *(unsigned __int8 *)a4;
    v35 = v10;
    LODWORD(v36) = v9;
    LODWORD(v37) = *((_DWORD *)this + 197);
    v38 = *((_QWORD *)this + 60);
    v39 = *((_QWORD *)this + 40);
    v40 = *((_QWORD *)this + 20);
    v43 = *(_QWORD *)this;
    v34 = v15;
    v41 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (int)&unk_1802E8E40,
      v13,
      v14,
      (__int64)&v41,
      (__int64)&v43,
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
      (__int64)&v23,
      (__int64)&v22);
  }
  return v9;
}
