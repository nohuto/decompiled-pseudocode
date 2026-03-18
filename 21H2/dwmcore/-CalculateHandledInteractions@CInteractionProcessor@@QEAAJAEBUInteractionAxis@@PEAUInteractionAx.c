/*
 * XREFs of ?CalculateHandledInteractions@CInteractionProcessor@@QEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x18018A678
 * Callers:
 *     ?CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x180182490 (-CalculateHandledInteractions@CInteractionRoot@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGro.c)
 *     ?CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@1AEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@@Z @ 0x1801F1F70 (-CalculateHandledInteractions@CInteraction@@UEAAJAEBUInteractionAxis@@PEAUInteractionAxisGroup@@.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1800DFF30 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 *     ?GetD3DMatrix@CMILMatrix@@QEBA?AU_D3DMATRIX@@XZ @ 0x1800E0B5C (-GetD3DMatrix@CMILMatrix@@QEBA-AU_D3DMATRIX@@XZ.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x180187810 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@44444444444444444@Z @ 0x180189F44 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@_ea_180189F44.c)
 *     ?AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ @ 0x18018A118 (-AllowPenGestureDetection@CInteractionProcessor@@AEBA_NXZ.c)
 *     ?ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018E5D0 (-ResolveMustHandleMotion@CInteractionProcessor@@AEAA_NAEBUD2DMatrix@@0PEAUInteractionAxisGroup@@.c)
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018E8F8 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateHandledInteractions(
        CInteractionProcessor *this,
        __int128 *a2,
        _BYTE *a3,
        struct InteractionAxisGroup *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        _OWORD *a8)
{
  int v11; // r12d
  char v12; // r13
  int v13; // eax
  struct _D3DMATRIX *v14; // rcx
  struct _D3DMATRIX *D3DMatrix; // rax
  int v16; // r8d
  int v17; // ecx
  __int128 v18; // xmm1
  int v19; // ecx
  int v20; // ecx
  int v21; // ecx
  int v22; // ecx
  int v23; // eax
  bool v24; // zf
  int v25; // eax
  unsigned __int8 v26; // r15
  unsigned __int8 v27; // si
  unsigned __int8 v28; // r14
  int v29; // edi
  __int64 v30; // r8
  __int64 v31; // r9
  unsigned int v32; // ecx
  __int64 v33; // rcx
  _DWORD *v34; // rax
  __int128 v35; // xmm0
  _DWORD v37[4]; // [rsp+C0h] [rbp-80h] BYREF
  struct _D3DMATRIX v38; // [rsp+D0h] [rbp-70h] BYREF
  int v39; // [rsp+110h] [rbp-30h] BYREF
  int v40; // [rsp+114h] [rbp-2Ch] BYREF
  int v41; // [rsp+118h] [rbp-28h] BYREF
  int v42; // [rsp+11Ch] [rbp-24h] BYREF
  int v43; // [rsp+120h] [rbp-20h] BYREF
  int v44; // [rsp+124h] [rbp-1Ch] BYREF
  int v45; // [rsp+128h] [rbp-18h] BYREF
  int v46; // [rsp+12Ch] [rbp-14h] BYREF
  int v47; // [rsp+130h] [rbp-10h] BYREF
  int v48; // [rsp+134h] [rbp-Ch] BYREF
  int v49; // [rsp+138h] [rbp-8h] BYREF
  int v50; // [rsp+13Ch] [rbp-4h] BYREF
  int v51; // [rsp+140h] [rbp+0h] BYREF
  int v52; // [rsp+144h] [rbp+4h] BYREF
  int v53; // [rsp+148h] [rbp+8h] BYREF
  int v54; // [rsp+14Ch] [rbp+Ch] BYREF
  struct InteractionAxisGroup *v55; // [rsp+150h] [rbp+10h] BYREF
  CInteractionProcessor *v56; // [rsp+158h] [rbp+18h] BYREF
  __int64 v57; // [rsp+160h] [rbp+20h]
  _OWORD *v58; // [rsp+168h] [rbp+28h]
  struct _D3DMATRIX v59; // [rsp+170h] [rbp+30h] BYREF
  __int128 v60; // [rsp+1B0h] [rbp+70h] BYREF
  __int128 v61; // [rsp+1C0h] [rbp+80h] BYREF
  __int128 v62; // [rsp+1D0h] [rbp+90h]
  __int128 v63; // [rsp+1E0h] [rbp+A0h]
  __int128 v64; // [rsp+1F0h] [rbp+B0h]

  v11 = 0;
  v57 = a7;
  v12 = 0;
  v58 = a8;
  v13 = *((_DWORD *)this + 196);
  v55 = a4;
  v37[0] = v13;
  v60 = 0uLL;
  v38 = *CMILMatrix::GetD3DMatrix((struct _D3DMATRIX *)&CMILMatrix::Identity, &v59);
  D3DMatrix = CMILMatrix::GetD3DMatrix(v14, &v59);
  v17 = *((_DWORD *)this + 197);
  v61 = *(_OWORD *)&D3DMatrix->_11;
  v62 = *(_OWORD *)&D3DMatrix->_21;
  v63 = *(_OWORD *)&D3DMatrix->_31;
  v18 = *(_OWORD *)&D3DMatrix->_41;
  v59 = (struct _D3DMATRIX)zmmword_1803647B0;
  v64 = v18;
  v19 = v17 - 2;
  if ( v19 )
  {
    v20 = v19 - 1;
    if ( v20 )
    {
      v21 = v20 - 1;
      if ( v21 )
      {
        v22 = v21 - 1;
        if ( !v22 )
        {
          v24 = *((_DWORD *)this + 160) == -805306369;
          if ( *((_DWORD *)this + 160) == -805306369 )
            LOWORD(v60) = 257;
          v25 = v16;
          v38._44 = 1.0;
          LOBYTE(v25) = !v24;
          v38._33 = 1.0;
          LODWORD(v38._43) &= v16;
          LODWORD(v38._42) &= v16;
          LODWORD(v38._41) &= v16;
          LODWORD(v38._34) &= v16;
          LODWORD(v38._32) &= v16;
          LODWORD(v38._31) &= v16;
          LODWORD(v38._24) &= v16;
          LODWORD(v38._23) &= v16;
          LODWORD(v38._21) &= v16;
          LODWORD(v38._14) &= v16;
          LODWORD(v38._13) &= v16;
          LODWORD(v38._12) &= v16;
          DWORD2(v64) &= v16;
          DWORD1(v64) &= v16;
          LODWORD(v64) = v16 & v64;
          HIDWORD(v63) &= v16;
          DWORD1(v63) &= v16;
          LODWORD(v63) = v16 & v63;
          HIDWORD(v62) &= v16;
          DWORD2(v62) &= v16;
          LODWORD(v62) = v16 & v62;
          HIDWORD(v61) &= v16;
          DWORD2(v61) &= v16;
          DWORD1(v61) &= v16;
          v37[0] = v25 + 2;
          v38._22 = 1.0;
          v38._11 = 1.0;
          HIDWORD(v64) = 1065353216;
          DWORD2(v63) = 1065353216;
          DWORD1(v62) = 1065353216;
          LODWORD(v61) = 1065353216;
          goto LABEL_17;
        }
        if ( v22 != 1 )
          goto LABEL_17;
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 480,
                a2,
                a3,
                a6,
                v37,
                &v60,
                (__int64)&v38,
                (__int64)&v61,
                (__int64)&v59);
      }
      else
      {
        if ( !CInteractionProcessor::AllowPenGestureDetection(this) )
        {
          v12 = 1;
          *(_QWORD *)&v38._42 = 0LL;
          v38._41 = 0.0;
          *(_QWORD *)&v38._31 = 0LL;
          *(_OWORD *)&v38._21 = 0x3F80000000000000uLL;
          *(_QWORD *)((char *)&v64 + 4) = 0LL;
          LODWORD(v64) = 0;
          *(_QWORD *)&v63 = 0LL;
          v62 = 0x3F80000000000000uLL;
          v37[0] = 2;
          LOWORD(v60) = 257;
          v38._44 = 1.0;
          *(_QWORD *)&v38._33 = 1065353216LL;
          *(_OWORD *)&v38._11 = 0x3F800000uLL;
          HIDWORD(v64) = 1065353216;
          *((_QWORD *)&v63 + 1) = 1065353216LL;
          v61 = 0x3F800000uLL;
          goto LABEL_16;
        }
        v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
                (__int64)this,
                (_BYTE *)this + 320,
                a2,
                a3,
                a6,
                v37,
                &v60,
                (__int64)&v38,
                (__int64)&v61,
                (__int64)&v59);
      }
    }
    else
    {
      v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
              (__int64)this,
              (_BYTE *)this + 160,
              a2,
              a3,
              a6,
              v37,
              &v60,
              (__int64)&v38,
              (__int64)&v61,
              (__int64)&v59);
    }
  }
  else
  {
    v23 = CInteractionProcessor::CalculateHandledInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
            (__int64)this,
            this,
            a2,
            a3,
            a6,
            v37,
            &v60,
            (__int64)&v38,
            (__int64)&v61,
            (__int64)&v59);
  }
  v11 = v23;
LABEL_16:
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_17:
  v26 = CInteractionProcessor::ResolveProhibitedMotion(this, a5, &v60, v37);
  if ( v12 )
  {
    if ( v26 )
      goto LABEL_33;
  }
  else
  {
    if ( v26
      && CInteractionProcessor::ResolveMustHandleMotion(
           this,
           (const struct D2DMatrix *)&v61,
           (const struct D2DMatrix *)&v59,
           v55,
           (struct InteractionAxis *)&v60,
           (enum InteractionState *)v37) )
    {
      v26 = 1;
LABEL_33:
      v27 = v60;
      v28 = BYTE1(v60);
      if ( *((_BYTE *)this + 1248) )
        v27 = 1;
      if ( *((_BYTE *)this + 1249) )
        v28 = 1;
      LOBYTE(v60) = v27;
      BYTE1(v60) = v28;
      if ( *((float *)&v60 + 1) != 0.0 )
        *((_BYTE *)this + 808) |= 1u;
      if ( *((float *)&v60 + 2) != 0.0 )
        *((_BYTE *)this + 808) |= 2u;
      if ( *((float *)&v60 + 3) != 0.0 )
        *((_BYTE *)this + 808) |= 4u;
      if ( v27 || v28 )
        *((_BYTE *)this + 808) |= 8u;
      goto LABEL_23;
    }
    v26 = 0;
  }
  v28 = BYTE1(v60);
  v27 = v60;
LABEL_23:
  v29 = v37[0];
  if ( v37[0] == 3
    && (*((_BYTE *)this + 1264) & 4) != 0
    && (unsigned int)CInteractionProcessor::SupportsPointerType(this, *((_DWORD *)this + 197), 0) )
  {
    v29 = 4;
  }
  if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
  {
    v32 = *((unsigned __int8 *)this + 808);
    v37[0] = *((_DWORD *)this + 315);
    v39 = *((_DWORD *)this + 314);
    v40 = *((_DWORD *)this + 313);
    v41 = *((unsigned __int8 *)this + 1249);
    v42 = *((unsigned __int8 *)this + 1248);
    v43 = HIDWORD(v60);
    v44 = DWORD2(v60);
    v45 = DWORD1(v60);
    v46 = v28;
    v47 = v27;
    v48 = v26;
    v53 = v29;
    v49 = (v32 >> 3) & 1;
    v56 = this;
    v50 = (v32 >> 2) & 1;
    v51 = (v32 >> 1) & 1;
    v33 = v32 & 1;
    v54 = *((_DWORD *)this + 196);
    LODWORD(v55) = *((_DWORD *)this + 197);
    v52 = v33;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v33,
      byte_18036A7F8,
      v30,
      v31,
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
      (__int64)v37);
  }
  v34 = (_DWORD *)v57;
  v35 = v60;
  *((_DWORD *)this + 196) = v29;
  *v34 = v29;
  *v58 = v35;
  return (unsigned int)v11;
}
