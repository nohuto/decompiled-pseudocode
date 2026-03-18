/*
 * XREFs of ??$ComputeHandledInteractionsFromLocal@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@CInteractionProcessor@@AEAA?AUInteractionAxis@@PEAV?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x180187AA0
 * Callers:
 *     ?ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA?AUInteractionAxis@@AEBUD2DVector3@@PEAUD2DMatrix@@@Z @ 0x18018B364 (-ComputeHandledInteractionsFromLocal@CInteractionProcessor@@AEAA-AUInteractionAxis@@AEBUD2DVecto.c)
 * Callees:
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444444444@Z @ 0x180189B38 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U.c)
 *     _anonymous_namespace_::ReverseAndLeftShift @ 0x18018EA64 (_anonymous_namespace_--ReverseAndLeftShift.c)
 *     ?D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z @ 0x18026DD0C (-D2DMatrixTranspose@@YAPEAUD2DMatrix@@PEAU1@PEBU1@@Z.c)
 *     ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x18026E788 (-D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::ComputeHandledInteractionsFromLocal<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        const struct D2DVector3 *a4,
        struct D2DMatrix *a5)
{
  _OWORD *v9; // rax
  const struct D2DMatrix *v10; // rax
  float v11; // ebx
  int v12; // ecx
  int v13; // r8d
  int v14; // r9d
  __int64 v15; // xmm0_8
  __int64 result; // rax
  int v17; // [rsp+E0h] [rbp-80h] BYREF
  int v18; // [rsp+E4h] [rbp-7Ch] BYREF
  int v19; // [rsp+E8h] [rbp-78h] BYREF
  int v20; // [rsp+ECh] [rbp-74h] BYREF
  int v21; // [rsp+F0h] [rbp-70h] BYREF
  int v22; // [rsp+F4h] [rbp-6Ch] BYREF
  int v23; // [rsp+F8h] [rbp-68h] BYREF
  int v24; // [rsp+FCh] [rbp-64h] BYREF
  int v25; // [rsp+100h] [rbp-60h] BYREF
  int v26; // [rsp+104h] [rbp-5Ch] BYREF
  int v27; // [rsp+108h] [rbp-58h] BYREF
  int v28; // [rsp+10Ch] [rbp-54h] BYREF
  int v29; // [rsp+110h] [rbp-50h] BYREF
  int v30; // [rsp+114h] [rbp-4Ch] BYREF
  int v31; // [rsp+118h] [rbp-48h] BYREF
  int v32; // [rsp+11Ch] [rbp-44h] BYREF
  int v33; // [rsp+120h] [rbp-40h] BYREF
  int v34; // [rsp+124h] [rbp-3Ch] BYREF
  float v35; // [rsp+128h] [rbp-38h] BYREF
  int v36; // [rsp+12Ch] [rbp-34h] BYREF
  int v37; // [rsp+130h] [rbp-30h] BYREF
  int v38; // [rsp+134h] [rbp-2Ch] BYREF
  __int64 v39; // [rsp+138h] [rbp-28h] BYREF
  __int64 v40; // [rsp+140h] [rbp-20h] BYREF
  char v41[64]; // [rsp+150h] [rbp-10h] BYREF
  __int64 v42; // [rsp+190h] [rbp+30h] BYREF
  float v43; // [rsp+198h] [rbp+38h]
  _DWORD v44[16]; // [rsp+1A0h] [rbp+40h] BYREF

  v9 = (_OWORD *)anonymous_namespace_::ReverseAndLeftShift(v41, (char *)a3 + 20);
  *(_OWORD *)a5 = *v9;
  *((_OWORD *)a5 + 1) = v9[1];
  *((_OWORD *)a5 + 2) = v9[2];
  *((_OWORD *)a5 + 3) = v9[3];
  v10 = D2DMatrixTranspose((struct D2DMatrix *)v44, a5);
  D3DXVec3TransformCoord((struct D2DVector3 *)&v42, a4, v10);
  v11 = v43;
  if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
  {
    v17 = *((_DWORD *)a3 + 15);
    v18 = *((_DWORD *)a3 + 14);
    v19 = *((_DWORD *)a3 + 13);
    v20 = *((_DWORD *)a3 + 11);
    v21 = *((_DWORD *)a3 + 10);
    v22 = *((_DWORD *)a3 + 9);
    v23 = *((_DWORD *)a3 + 7);
    v24 = *((_DWORD *)a3 + 6);
    v25 = *((_DWORD *)a3 + 5);
    v26 = v44[10];
    v27 = v44[9];
    v28 = v44[8];
    v29 = v44[6];
    v30 = v44[5];
    v31 = v44[4];
    v32 = v44[2];
    v33 = v44[1];
    v34 = v44[0];
    v36 = HIDWORD(v42);
    v37 = v42;
    v38 = *(_DWORD *)(a1 + 788);
    v39 = *a3;
    v35 = v11;
    v40 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v12,
      (unsigned int)&unk_18036A436,
      v13,
      v14,
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
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17);
  }
  if ( *(float *)&v42 > 0.0 && (a3[2] & 1) == 0 || *(float *)&v42 < 0.0 && (a3[2] & 2) == 0 )
    LODWORD(v42) = 0;
  if ( *((float *)&v42 + 1) > 0.0 && (a3[2] & 4) == 0 || *((float *)&v42 + 1) < 0.0 && (a3[2] & 8) == 0 )
    HIDWORD(v42) = 0;
  if ( v43 < 0.0 && (a3[2] & 0x10) == 0 || v43 > 0.0 && (a3[2] & 0x20) == 0 )
  {
    v43 = 0.0;
    v11 = 0.0;
  }
  v15 = v42;
  result = a2;
  *(_WORD *)a2 = 0;
  *(_QWORD *)(a2 + 4) = v15;
  *(float *)(a2 + 12) = v11;
  return result;
}
