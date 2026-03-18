/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x18018716C
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x18018A1CC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x1800CB358 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x1801899A0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18018F164 (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18018F458 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        int *a5,
        __int64 a6,
        _DWORD *a7)
{
  int v8; // ebx
  char *v11; // r15
  __int64 v12; // rcx
  __int64 v13; // rcx
  bool v14; // zf
  int v15; // eax
  char v16; // r12
  bool v17; // r13
  unsigned int v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // r8d
  int *v23; // r9
  int *v25; // r8
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // eax
  __int64 v34; // rcx
  bool v35; // cl
  int v36; // eax
  int v37; // edx
  unsigned int v38; // r8d
  bool v39; // bl
  __int64 v40; // r12
  unsigned int v41; // r15d
  __int64 v42; // r14
  __int64 v43; // r14
  __int64 v44; // r14
  __int64 v45; // rax
  unsigned __int64 v46; // rbx
  __int64 v47; // rcx
  unsigned int v48; // eax
  unsigned int v49; // edx
  int v50; // eax
  __int64 v51; // rcx
  char v52; // [rsp+60h] [rbp-A0h]
  char v53; // [rsp+61h] [rbp-9Fh]
  int v54; // [rsp+64h] [rbp-9Ch] BYREF
  _DWORD *v55; // [rsp+68h] [rbp-98h]
  unsigned int v56; // [rsp+70h] [rbp-90h] BYREF
  __int64 v57; // [rsp+78h] [rbp-88h]
  unsigned int v58; // [rsp+80h] [rbp-80h] BYREF
  int v59; // [rsp+84h] [rbp-7Ch] BYREF
  int *v60; // [rsp+88h] [rbp-78h]
  __int64 v61; // [rsp+90h] [rbp-70h]
  __int128 v62; // [rsp+98h] [rbp-68h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-58h] BYREF
  int v64; // [rsp+B0h] [rbp-50h]
  __int128 v65; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v66[16]; // [rsp+C8h] [rbp-38h] BYREF
  float v67; // [rsp+D8h] [rbp-28h]
  int v68; // [rsp+DCh] [rbp-24h]
  int v69; // [rsp+108h] [rbp+8h] BYREF
  char v70; // [rsp+10Ch] [rbp+Ch]

  v8 = 0;
  v61 = a6;
  *a5 = 0;
  v11 = a2;
  v55 = a7;
  v60 = a5;
  *a7 = 0;
  v12 = *(_QWORD *)a2;
  v57 = a3;
  v63 = (__int64)a2;
  v54 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v12 + 40LL))(v12, v66);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v69);
  v13 = *(unsigned int *)(a1 + 784);
  if ( (unsigned int)(v13 - 2) > 2 && (v66[4] & 1) == 0 && (v70 & 1) == 0
    || (v14 = v69 == 2, v13 = 3LL, *(_DWORD *)(a1 + 784) = 3, v14) )
  {
    if ( (v11[16] & 0x40) != 0 )
    {
      *(_BYTE *)a4 = 1;
      v13 = *(unsigned int *)(a1 + 784);
    }
    if ( (unsigned int)(v13 - 2) > 2 )
      goto LABEL_9;
  }
  if ( v69 == 4 )
  {
LABEL_9:
    if ( v11[16] < 0 )
      *(_BYTE *)(a4 + 1) = 1;
  }
  v15 = *((_DWORD *)v11 + 4);
  v16 = 0;
  v17 = 0;
  v53 = 0;
  v52 = 0;
  if ( (v15 & 3) != 0 )
  {
    DWORD2(v62) = 0;
    *(_QWORD *)&v62 = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    HIDWORD(v65) = *(_DWORD *)(a1 + 1344);
    v18 = *(_DWORD *)(a4 + 32);
    v19 = v18 + 1;
    if ( v18 + 1 < v18 )
      goto LABEL_13;
    if ( v19 > *(_DWORD *)(a4 + 28) )
    {
      v8 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0x10u, 1, &v65);
      if ( v8 < 0 )
        goto LABEL_24;
    }
    else
    {
      v13 = 2LL * *(unsigned int *)(a4 + 32);
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * *(unsigned int *)(a4 + 32)) = v65;
      *(_DWORD *)(a4 + 32) = v19;
    }
    v25 = v60;
    v17 = 1;
    v54 = v8;
    ++*v60;
    v15 = *((_DWORD *)v11 + 4);
  }
  else
  {
    v25 = v60;
  }
  if ( (v15 & 4) != 0 || (v15 & 8) != 0 )
  {
    LODWORD(v62) = 0;
    *(_QWORD *)((char *)&v62 + 4) = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v65);
    HIDWORD(v65) = *(_DWORD *)(a1 + 1344);
    v26 = *(_DWORD *)(a4 + 32);
    v27 = v26 + 1;
    if ( v26 + 1 < v26 )
      goto LABEL_13;
    if ( v27 <= *(_DWORD *)(a4 + 28) )
    {
      v13 = 2LL * *(unsigned int *)(a4 + 32);
      v8 = 0;
      *(_OWORD *)(*(_QWORD *)(a4 + 8) + 16LL * *(unsigned int *)(a4 + 32)) = v65;
      *(_DWORD *)(a4 + 32) = v27;
LABEL_33:
      v25 = v60;
      v16 = 1;
      v54 = v8;
      v53 = 1;
      ++*v60;
      goto LABEL_34;
    }
    v8 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0x10u, 1, &v65);
    if ( v8 >= 0 )
      goto LABEL_33;
LABEL_24:
    MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, v8, 0xC0u);
    goto LABEL_15;
  }
LABEL_34:
  if ( (v11[16] & 0x10) != 0 || (v11[16] & 0x20) != 0 )
  {
    v28 = *(_DWORD *)(a1 + 1344);
    *(_QWORD *)&v62 = 0LL;
    HIDWORD(v62) = v28;
    v29 = *(_DWORD *)(a4 + 32);
    DWORD2(v62) = 1065353216;
    v30 = v29 + 1;
    if ( v29 + 1 < v29 )
    {
LABEL_13:
      v8 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0LL, -2147024362, 0xB5u);
      goto LABEL_15;
    }
    if ( v30 > *(_DWORD *)(a4 + 28) )
    {
      v33 = DynArrayImpl<0>::AddMultipleAndSet(a4 + 8, 0x10u, 1, &v62);
      v8 = v33;
      if ( v33 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0LL, v33, 0xC0u);
        goto LABEL_15;
      }
      v25 = v60;
      v54 = v33;
    }
    else
    {
      v31 = v29;
      v32 = *(_QWORD *)(a4 + 8);
      v8 = 0;
      v54 = 0;
      *(_OWORD *)(v32 + 16 * v31) = v62;
      *(_DWORD *)(a4 + 32) = v30;
    }
    ++*v25;
    v35 = 1;
    v52 = 1;
  }
  else
  {
    v35 = 0;
  }
  if ( *v25 > 0 )
  {
    v36 = *(_DWORD *)(a4 + 32) - *v25;
    v59 = v36;
    v37 = v36 + 1;
    if ( !v17 )
      v37 = v36;
    v58 = v37;
    v38 = v37 + 1;
    if ( !v16 )
      v38 = v37;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v56 = v38;
    *(_QWORD *)&v62 = v36;
    if ( v36 > 3LL )
    {
      v39 = v53;
      v40 = 48LL;
      *(_QWORD *)&v65 = 3LL;
      v41 = 3;
      while ( v17 )
      {
        v42 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                v42 + 16LL * (unsigned int)v36,
                                v42 + 16LL * v41) )
          *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v42 + v40 + 12);
        v17 = *(_DWORD *)(a1 + 812) != 7;
        if ( v39 )
          goto LABEL_58;
LABEL_61:
        v35 = v52;
        if ( v52 )
        {
          v38 = v56;
LABEL_63:
          v44 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v44 + 16LL * v38, v44 + 16LL * v41) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v44 + v40 + 12);
          v35 = *(_DWORD *)(a1 + 820) != 7;
          v52 = v35;
        }
        ++v41;
        v38 = v56;
        v40 += 16LL;
        *(_QWORD *)&v65 = v65 + 1;
        v36 = v59;
        if ( (__int64)v65 >= (__int64)v62 )
        {
LABEL_67:
          v8 = v54;
          v11 = (char *)v63;
          goto LABEL_68;
        }
      }
      if ( !v39 )
      {
        if ( !v35 )
          goto LABEL_67;
        goto LABEL_63;
      }
LABEL_58:
      v43 = *(_QWORD *)(a4 + 8);
      if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v43 + 16LL * v58, v43 + 16LL * v41) )
        *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v43 + v40 + 12);
      v39 = *(_DWORD *)(a1 + 816) != 7;
      goto LABEL_61;
    }
  }
LABEL_68:
  if ( *(_BYTE *)a4 )
  {
LABEL_15:
    v20 = v57;
    goto LABEL_16;
  }
  v14 = *(_BYTE *)(a4 + 1) == 0;
  v20 = v57;
  if ( v14 && v57 != *(_QWORD *)v11 )
  {
    if ( (*(_BYTE *)(a1 + 808) & 4) == 0 && v67 == 1.0 )
    {
      v45 = v61;
    }
    else
    {
      v45 = v61;
      if ( (v11[16] & 0x30) != 0 )
        *(_BYTE *)(v61 + 2) = 1;
    }
    if ( !*(_BYTE *)(v45 + 2) )
    {
      if ( v68 == 1 )
      {
        if ( (v11[16] & 1) == 0 && (v11[16] & 2) == 0 )
          goto LABEL_16;
        v63 = 1065353216LL;
      }
      else
      {
        if ( v68 != 2 || (v11[16] & 4) == 0 && (v11[16] & 8) == 0 )
          goto LABEL_16;
        v63 = 0x3F80000000000000LL;
      }
      v64 = 0;
      v46 = v45 + 8;
      anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v62);
      HIDWORD(v62) = *(_DWORD *)(a1 + 1344);
      v48 = *(_DWORD *)(v46 + 24);
      v49 = v48 + 1;
      if ( v48 + 1 >= v48 )
      {
        if ( v49 > *(_DWORD *)(v46 + 20) )
        {
          v50 = DynArrayImpl<0>::AddMultipleAndSet(v46, 0x10u, 1, &v62);
          v8 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0LL, v50, 0xC0u);
            goto LABEL_16;
          }
        }
        else
        {
          *(_OWORD *)(*(_QWORD *)v46 + 16LL * *(unsigned int *)(v46 + 24)) = v62;
          *(_DWORD *)(v46 + 24) = v49;
          v8 = 0;
        }
        ++*v55;
      }
      else
      {
        v8 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0LL, -2147024362, 0xB5u);
      }
    }
  }
LABEL_16:
  if ( (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
  {
    v59 = *v23;
    v63 = v20;
    *(_QWORD *)&v65 = a1;
    v58 = *v60;
    v56 = *(_DWORD *)(a1 + 784);
    v54 = *(_DWORD *)(a1 + 788);
    *(_QWORD *)&v62 = *(_QWORD *)v11;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v21,
      (unsigned int)&unk_18036A543,
      v22,
      (_DWORD)v23,
      (__int64)&v65,
      (__int64)&v62,
      (__int64)&v63,
      (__int64)&v54,
      (__int64)&v56,
      (__int64)&v58,
      (__int64)&v59);
  }
  return (unsigned int)v8;
}
