/*
 * XREFs of ??$ResolveProhibitedMotion@UDwmTouchpadInteractionConfigurationPrimitive@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA_NAEBV?$DynArray@UDwmTouchpadInteractionConfigurationPrimitive@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x180187D98
 * Callers:
 *     ?ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@PEAUInteractionAxis@@PEAW4InteractionState@@@Z @ 0x18018E8F8 (-ResolveProhibitedMotion@CInteractionProcessor@@AEAA_NAEBV-$DynArray@PEAUInteractionConfiguratio.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3333AEBU?$_tlgWrapperByVal@$03@@44444444444444444444@Z @ 0x180189434 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@_ea_180189434.c)
 *     _anonymous_namespace_::AxisContainsInteraction @ 0x18018A164 (_anonymous_namespace_--AxisContainsInteraction.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E788 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

unsigned __int8 __fastcall CInteractionProcessor::ResolveProhibitedMotion<DwmTouchpadInteractionConfigurationPrimitive,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 *a1,
        __int64 *a2,
        unsigned __int8 *a3,
        _DWORD *a4)
{
  unsigned __int8 v8; // si
  __int64 v9; // r14
  __int64 v10; // rax
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // r8d
  __int64 v16; // r9
  __int64 v17; // rcx
  int v19; // [rsp+F0h] [rbp-80h] BYREF
  int v20; // [rsp+F4h] [rbp-7Ch] BYREF
  int v21; // [rsp+F8h] [rbp-78h] BYREF
  int v22; // [rsp+FCh] [rbp-74h] BYREF
  int v23; // [rsp+100h] [rbp-70h] BYREF
  int v24; // [rsp+104h] [rbp-6Ch] BYREF
  int v25; // [rsp+108h] [rbp-68h] BYREF
  int v26; // [rsp+10Ch] [rbp-64h] BYREF
  int v27; // [rsp+110h] [rbp-60h] BYREF
  int v28; // [rsp+114h] [rbp-5Ch] BYREF
  int v29; // [rsp+118h] [rbp-58h] BYREF
  int v30; // [rsp+11Ch] [rbp-54h] BYREF
  int v31; // [rsp+120h] [rbp-50h] BYREF
  int v32; // [rsp+124h] [rbp-4Ch] BYREF
  int v33; // [rsp+128h] [rbp-48h] BYREF
  int v34; // [rsp+12Ch] [rbp-44h] BYREF
  int v35; // [rsp+130h] [rbp-40h] BYREF
  int v36; // [rsp+134h] [rbp-3Ch] BYREF
  int v37; // [rsp+138h] [rbp-38h] BYREF
  int v38; // [rsp+13Ch] [rbp-34h] BYREF
  int v39; // [rsp+140h] [rbp-30h] BYREF
  __int64 v40; // [rsp+148h] [rbp-28h] BYREF
  int v41; // [rsp+150h] [rbp-20h]
  __int64 v42; // [rsp+158h] [rbp-18h] BYREF
  __int64 v43; // [rsp+160h] [rbp-10h] BYREF
  __int64 v44; // [rsp+168h] [rbp-8h] BYREF
  __int64 v45; // [rsp+170h] [rbp+0h] BYREF
  __int64 *v46; // [rsp+178h] [rbp+8h] BYREF
  int v47; // [rsp+180h] [rbp+10h] BYREF
  int v48; // [rsp+184h] [rbp+14h]
  int v49; // [rsp+188h] [rbp+18h]
  int v50; // [rsp+18Ch] [rbp+1Ch]
  int v51; // [rsp+190h] [rbp+20h]
  int v52; // [rsp+194h] [rbp+24h]
  int v53; // [rsp+198h] [rbp+28h]
  int v54; // [rsp+19Ch] [rbp+2Ch]
  int v55; // [rsp+1A0h] [rbp+30h]
  int v56; // [rsp+1A4h] [rbp+34h]
  int v57; // [rsp+1A8h] [rbp+38h]
  int v58; // [rsp+1ACh] [rbp+3Ch]
  int v59; // [rsp+1B0h] [rbp+40h]
  int v60; // [rsp+1B4h] [rbp+44h]
  int v61; // [rsp+1B8h] [rbp+48h]
  int v62; // [rsp+1BCh] [rbp+4Ch]

  if ( *((_DWORD *)a2 + 6) && !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
    return 0;
  v8 = 1;
  v9 = 0LL;
  do
  {
    if ( (unsigned int)v9 >= *((_DWORD *)a2 + 6) )
      break;
    v10 = *a2;
    v11 = *((_DWORD *)a1 + 198);
    if ( v11 >= *(_DWORD *)(*a2 + 12 * v9) && v11 <= *(_DWORD *)(v10 + 12 * v9 + 4) )
    {
      if ( (*(_BYTE *)(v10 + 12 * v9 + 8) & 0x40) != 0 )
      {
        *a3 = 0;
        v10 = *a2;
      }
      if ( *(char *)(v10 + 12 * v9 + 8) < 0 )
      {
        a3[1] = 0;
        v10 = *a2;
      }
      v61 = 0;
      v60 = 0;
      v59 = 0;
      v58 = 0;
      v56 = 0;
      v55 = 0;
      v54 = 0;
      v53 = 0;
      v51 = 0;
      v50 = 0;
      v49 = 0;
      v48 = 0;
      v12 = *(_DWORD *)(v10 + 12 * v9 + 8);
      v62 = 1065353216;
      v57 = 1065353216;
      v52 = 1065353216;
      v47 = 1065353216;
      if ( (v12 & 1) != 0 && *((float *)a3 + 1) > 0.0 )
        v47 = 0;
      if ( (v12 & 2) != 0 && *((float *)a3 + 1) < 0.0 )
        v47 = 0;
      if ( (v12 & 4) != 0 && *((float *)a3 + 2) > 0.0 )
        v52 = 0;
      if ( (v12 & 8) != 0 && *((float *)a3 + 2) < 0.0 )
        v52 = 0;
      if ( (v12 & 0x10) != 0 && *((float *)a3 + 3) < 0.0 )
        v57 = 0;
      if ( (v12 & 0x20) != 0 && *((float *)a3 + 3) > 0.0 )
        v57 = 0;
      v13 = *((_DWORD *)a3 + 3);
      v40 = *(_QWORD *)(a3 + 4);
      v41 = v13;
      D3DXVec3TransformCoord((struct D2DVector3 *)&v40, (const struct D2DVector3 *)&v40, (const struct D2DMatrix *)&v47);
      v14 = v41;
      *(_QWORD *)(a3 + 4) = v40;
      *((_DWORD *)a3 + 3) = v14;
      if ( !(unsigned __int8)anonymous_namespace_::AxisContainsInteraction(a3) )
      {
        v8 = 0;
        *a4 = *((_DWORD *)a1 + 196);
      }
      if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
      {
        v19 = v57;
        v20 = v56;
        v21 = v55;
        v22 = v53;
        v17 = *a2;
        v23 = v52;
        v24 = v51;
        v25 = v49;
        v26 = v48;
        v27 = v47;
        v28 = *((_DWORD *)a3 + 3);
        v29 = *((_DWORD *)a3 + 2);
        v30 = *((_DWORD *)a3 + 1);
        v31 = a3[1];
        v32 = *a3;
        v33 = *(_DWORD *)(v17 + 4 * v16 + 8);
        v34 = *(_DWORD *)(v17 + 4 * v16 + 4);
        v35 = *(_DWORD *)(v17 + 4 * v16);
        v37 = v8;
        v38 = *((_DWORD *)a1 + 198);
        v39 = *((_DWORD *)a1 + 197);
        v42 = a1[60];
        v43 = a1[40];
        v44 = a1[20];
        v45 = *a1;
        v36 = v9;
        v46 = a1;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v17,
          (unsigned int)&unk_18036A2C0,
          v15,
          v16,
          (__int64)&v46,
          (__int64)&v45,
          (__int64)&v44,
          (__int64)&v43,
          (__int64)&v42,
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
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
    v9 = (unsigned int)(v9 + 1);
  }
  while ( v8 );
  return v8;
}
