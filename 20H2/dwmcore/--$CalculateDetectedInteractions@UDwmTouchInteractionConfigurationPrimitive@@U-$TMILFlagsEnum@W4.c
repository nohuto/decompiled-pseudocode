/*
 * XREFs of ??$CalculateDetectedInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@PEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH23@Z @ 0x180226300
 * Callers:
 *     ?CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUInteractionAxisGroup@@PEAH12PEAV?$DynArray@PEAUInteractionConfigurationGroup@@$0A@@@2@Z @ 0x1802289DC (-CalculateDetectedInteractions@CInteractionProcessor@@QEAAJPEAUIInteractionContextWrapper@@PEAUI.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapperByVal@$03@@444@Z @ 0x180228190 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 *     ?AddMultipleAndSet@?$DynArray@UAxisWithType@@$0A@@@QEAAJPEFBUAxisWithType@@I@Z @ 0x180228898 (-AddMultipleAndSet@-$DynArray@UAxisWithType@@$0A@@@QEAAJPEFBUAxisWithType@@I@Z.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x18022C9DC (_anonymous_namespace_--TransformAndNormalize.c)
 *     _anonymous_namespace_::VectorInsideAngleThreshold @ 0x18022CBC4 (_anonymous_namespace_--VectorInsideAngleThreshold.c)
 */

__int64 __fastcall CInteractionProcessor::CalculateDetectedInteractions<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>(
        __int64 a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6,
        int *a7)
{
  int v7; // edi
  unsigned int *v8; // r13
  char *v10; // rsi
  __int64 v13; // rcx
  unsigned int v14; // r8d
  unsigned int v15; // r9d
  __int64 v16; // rcx
  unsigned int v17; // r12d
  int v18; // eax
  char v19; // r15
  int v20; // eax
  bool v21; // dl
  int v22; // eax
  bool v23; // r13
  bool v24; // si
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // r15
  __int64 v28; // r15
  __int64 v29; // r15
  __int64 v30; // r15
  __int64 v31; // r14
  int v32; // eax
  int *v33; // rdx
  char v35; // [rsp+60h] [rbp-A0h]
  char v36; // [rsp+61h] [rbp-9Fh]
  char v37; // [rsp+62h] [rbp-9Eh]
  int v38; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v39; // [rsp+74h] [rbp-8Ch] BYREF
  unsigned int v40; // [rsp+78h] [rbp-88h] BYREF
  int v41; // [rsp+7Ch] [rbp-84h] BYREF
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h] BYREF
  __int64 v44; // [rsp+90h] [rbp-70h] BYREF
  int v45; // [rsp+98h] [rbp-68h]
  int v46; // [rsp+9Ch] [rbp-64h]
  __int64 v47; // [rsp+A0h] [rbp-60h] BYREF
  int v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h] BYREF
  int v50; // [rsp+BCh] [rbp-44h]
  char *v51; // [rsp+C0h] [rbp-40h] BYREF
  int v52; // [rsp+CCh] [rbp-34h]
  _BYTE v53[16]; // [rsp+D0h] [rbp-30h] BYREF
  float v54; // [rsp+E0h] [rbp-20h]
  int v55; // [rsp+E4h] [rbp-1Ch]
  int v56; // [rsp+110h] [rbp+10h] BYREF
  char v57; // [rsp+114h] [rbp+14h]

  v7 = 0;
  v8 = a5;
  v43 = a6;
  v10 = a2;
  *a5 = 0;
  v51 = a2;
  *a7 = 0;
  v13 = *(_QWORD *)a2;
  v42 = a3;
  v47 = (__int64)a5;
  v38 = 0;
  (*(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v13 + 40LL))(v13, v53);
  (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 40LL))(a3, &v56);
  LODWORD(v16) = *(_DWORD *)(a1 + 784);
  v17 = 3;
  if ( (unsigned int)(v16 - 2) <= 2 || (v53[4] & 1) != 0 || (v57 & 1) != 0 )
  {
    *(_DWORD *)(a1 + 784) = 3;
    LODWORD(v16) = 3;
  }
  if ( ((unsigned int)(v16 - 2) > 2 || v56 == 2) && (v10[16] & 0x40) != 0 )
  {
    *(_BYTE *)a4 = 1;
    LODWORD(v16) = *(_DWORD *)(a1 + 784);
  }
  if ( ((unsigned int)(v16 - 2) > 2 || v56 == 4) && v10[16] < 0 )
    *(_BYTE *)(a4 + 1) = 1;
  v18 = *((_DWORD *)v10 + 4);
  LOBYTE(v16) = 0;
  v19 = 0;
  v36 = 0;
  v37 = 0;
  v35 = 0;
  if ( (v18 & 3) != 0 )
  {
    v45 = 0;
    v44 = 1065353216LL;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v49);
    v50 = *(_DWORD *)(a1 + 1344);
    v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v49);
    v7 = v38;
    if ( v38 < 0 )
      goto LABEL_70;
    ++*a5;
    v19 = 1;
    v18 = *((_DWORD *)v10 + 4);
    LOBYTE(v16) = 0;
    v37 = 1;
  }
  if ( (v18 & 4) != 0 || (v18 & 8) != 0 )
  {
    v44 = 0x3F80000000000000LL;
    v45 = 0;
    anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v49);
    v50 = *(_DWORD *)(a1 + 1344);
    v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v49);
    v7 = v38;
    if ( v38 < 0 )
      goto LABEL_70;
    ++*a5;
    LOBYTE(v16) = 1;
    v36 = 1;
  }
  if ( v7 < 0 )
    goto LABEL_70;
  if ( (v10[16] & 0x10) == 0 && (v10[16] & 0x20) == 0 )
  {
    v21 = 0;
    goto LABEL_26;
  }
  v20 = *(_DWORD *)(a1 + 1344);
  v44 = 0LL;
  v46 = v20;
  v45 = 1065353216;
  v38 = DynArray<AxisWithType,0>::AddMultipleAndSet(a4 + 8, &v44);
  v7 = v38;
  if ( v38 < 0 )
  {
LABEL_70:
    v30 = v42;
    goto LABEL_71;
  }
  ++*a5;
  v21 = 1;
  LOBYTE(v16) = v36;
  v35 = 1;
LABEL_26:
  if ( (int)*a5 > 0 )
  {
    v22 = *(_DWORD *)(a4 + 32) - *a5;
    v41 = v22;
    v14 = v22 + 1;
    if ( !v19 )
      v14 = v22;
    v40 = v14;
    v15 = v14 + 1;
    if ( !(_BYTE)v16 )
      v15 = v14;
    *(_DWORD *)(a1 + 812) = 0;
    *(_DWORD *)(a1 + 816) = 0;
    *(_DWORD *)(a1 + 820) = 0;
    v39 = v15;
    if ( v22 > 3LL )
    {
      v23 = v37;
      v16 = 3LL;
      v24 = v36;
      v25 = 48LL;
      v26 = v41;
      v44 = 3LL;
      v49 = 48LL;
      while ( 1 )
      {
        if ( v23 )
        {
          v27 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(
                                  v27 + 16LL * (unsigned int)v26,
                                  v27 + 16LL * v17) )
            *(_DWORD *)(a1 + 812) |= *(_DWORD *)(v49 + v27 + 12);
          v23 = *(_DWORD *)(a1 + 812) != 7;
          if ( !v24 )
            goto LABEL_44;
          v14 = v40;
        }
        else if ( !v24 )
        {
          if ( !v21 )
            goto LABEL_50;
          goto LABEL_45;
        }
        v28 = *(_QWORD *)(a4 + 8);
        if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v28 + 16LL * v14, v28 + 16LL * v17) )
          *(_DWORD *)(a1 + 816) |= *(_DWORD *)(v49 + v28 + 12);
        v24 = *(_DWORD *)(a1 + 816) != 7;
LABEL_44:
        v15 = v39;
        v16 = v44;
        v21 = v35;
        v25 = v49;
LABEL_45:
        if ( v21 )
        {
          v29 = *(_QWORD *)(a4 + 8);
          if ( (unsigned __int8)anonymous_namespace_::VectorInsideAngleThreshold(v29 + 16LL * v15, v29 + 16LL * v17) )
            *(_DWORD *)(a1 + 820) |= *(_DWORD *)(v49 + v29 + 12);
          v25 = v49;
          v16 = v44;
          v21 = *(_DWORD *)(a1 + 820) != 7;
          v35 = v21;
        }
        v14 = v40;
        ++v16;
        v15 = v39;
        v25 += 16LL;
        ++v17;
        v44 = v16;
        v49 = v25;
        if ( v16 >= v26 )
        {
LABEL_50:
          v7 = v38;
          v10 = v51;
          v8 = (unsigned int *)v47;
          break;
        }
      }
    }
  }
  v30 = v42;
  if ( *(_BYTE *)a4 || *(_BYTE *)(a4 + 1) || v42 == *(_QWORD *)v10 )
    goto LABEL_71;
  if ( (*(_BYTE *)(a1 + 808) & 4) == 0 && v54 == 1.0 )
  {
    v31 = v43;
  }
  else
  {
    v31 = v43;
    if ( (v10[16] & 0x30) != 0 )
      *(_BYTE *)(v43 + 2) = 1;
  }
  if ( *(_BYTE *)(v31 + 2) )
    goto LABEL_71;
  if ( v55 == 1 )
  {
    if ( (v10[16] & 1) != 0 || (v10[16] & 2) != 0 )
    {
      v47 = 1065353216LL;
      goto LABEL_64;
    }
LABEL_71:
    v33 = a7;
    goto LABEL_72;
  }
  if ( v55 != 2 || (v10[16] & 4) == 0 && (v10[16] & 8) == 0 )
    goto LABEL_71;
  v47 = 0x3F80000000000000LL;
LABEL_64:
  v48 = 0;
  anonymous_namespace_::TransformAndNormalize((struct D2DVector3 *)&v51);
  v52 = *(_DWORD *)(a1 + 1344);
  v32 = DynArray<AxisWithType,0>::AddMultipleAndSet(v31 + 8, &v51);
  v33 = a7;
  v7 = v32;
  if ( v32 >= 0 )
    ++*a7;
LABEL_72:
  if ( (unsigned int)dword_180341E80 > 4 && (qword_180341E90 & 2) != 0 && (qword_180341E98 & 2) == qword_180341E98 )
  {
    v41 = *v33;
    v40 = *v8;
    v39 = *(_DWORD *)(a1 + 784);
    v38 = *(_DWORD *)(a1 + 788);
    v51 = *(char **)v10;
    v47 = v30;
    v43 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v16,
      (unsigned int)&unk_1802E8920,
      v14,
      v15,
      (__int64)&v43,
      (__int64)&v51,
      (__int64)&v47,
      (__int64)&v38,
      (__int64)&v39,
      (__int64)&v40,
      (__int64)&v41);
  }
  return (unsigned int)v7;
}
