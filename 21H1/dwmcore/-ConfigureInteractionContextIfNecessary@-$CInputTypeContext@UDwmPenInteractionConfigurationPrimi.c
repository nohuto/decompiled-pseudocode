/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmPenInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypePenPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18022DAE4
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18022F434 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x1801560E0 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18022ECC0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchpadPrimitiveType@@@@QEAAXAEBUDwmTouchpadInteractionConfigurationPrimitive@@@Z @ 0x180230970 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchpadInteractionConfigurationPrimitive@@U-$TMILFl.c)
 */

__int64 __fastcall CInputTypeContext<DwmPenInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypePenPrimitiveType::FlagsEnum>,enum DwmInteractionTypePenPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  char v6; // di
  signed int v7; // r14d
  unsigned int v8; // r8d
  char v9; // r12
  unsigned __int8 v10; // si
  bool v11; // al
  char v12; // al
  char v13; // al
  bool v14; // al
  int v15; // ecx
  unsigned __int8 v16; // r8
  char v17; // al
  int v18; // ecx
  int v19; // eax
  unsigned int v20; // eax
  unsigned __int8 v21; // r8
  int v22; // xmm1_4
  char v23; // dl
  char v24; // dl
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // xmm1_8
  __int128 v29; // [rsp+30h] [rbp-29h] BYREF
  __int64 v30; // [rsp+40h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+48h] [rbp-11h] BYREF
  __int128 *v32; // [rsp+68h] [rbp+Fh]
  int v33; // [rsp+70h] [rbp+17h]
  int v34; // [rsp+74h] [rbp+1Bh]

  v6 = 0;
  v7 = *a1 == 0LL ? 0x8007139F : 0;
  if ( *a1 )
  {
    LOBYTE(v8) = *((_BYTE *)a1 + 148);
    v9 = 8;
    if ( (v8 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
    {
      CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
        a1,
        &v29,
        (unsigned int)a2[2],
        a3);
      if ( (a2[6] & 8) == 0 && (unsigned int)(*a2 - 2) <= 2 )
        DWORD2(v29) &= 0xFFFFFF3F;
      CInputTypeContext<DwmTouchpadInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchpadPrimitiveType::FlagsEnum>::UpdateActiveConfig(
        a1,
        &v29);
      if ( (unsigned int)(*a2 - 2) > 2 )
        v10 = BYTE8(v29) | 0xC0;
      else
        v10 = BYTE8(v29) & 0x3F;
      v11 = (v10 & 1) != 0 || (v10 & 2) != 0;
      if ( ((*((_BYTE *)a1 + 124) & 3) != 0) != v11
        || ((v10 & 4) != 0 || (v10 & 8) != 0 ? (v12 = 1) : (v12 = 0),
            ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v12
         || ((v10 & 0x10) != 0 || (v10 & 0x20) != 0 ? (v13 = 1) : (v13 = 0), ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v13)) )
      {
        v6 = 1;
      }
      if ( *(_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                        *a1,
                        &v31) != 1
        && (v6 || ((v10 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || ((v10 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
      {
        v6 = 1;
      }
      v8 = *((unsigned __int8 *)a1 + 148);
      if ( (*((_BYTE *)a1 + 148) & 0x20) == 0 )
      {
        v14 = ((v8 >> 6) & 1) != (*((float *)a1 + 32) == 45.0) || v8 >> 7 != (*((float *)a1 + 33) == 45.0);
        v6 |= v14;
      }
      if ( ((*((_BYTE *)a1 + 148) & 0x20) == 0 || v6) && *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
        v6 = 1;
      if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 8) != 0 )
        v6 = 1;
    }
    v15 = *((_DWORD *)a1 + 39);
    if ( v15 == 2 && ((*((_BYTE *)a1 + 136) ^ ((unsigned __int8)v8 >> 1)) & 1) != 0 )
    {
      v6 = 1;
      if ( (v8 & 2) != 0
        && (unsigned int)dword_180346EF0 > 4
        && (qword_180346F00 & 2) != 0
        && (qword_180346F08 & 2) == qword_180346F08 )
      {
        v34 = 0;
        v32 = &v29;
        *(_QWORD *)&v29 = a1;
        v33 = 8;
        tlgWriteTransfer_EventWriteTransfer(
          (__int64)&dword_180346EF0,
          (unsigned __int8 *)dword_1802EC46C,
          0LL,
          0LL,
          3u,
          &v31);
        v15 = *((_DWORD *)a1 + 39);
      }
    }
    if ( v15 == 3 )
    {
      v16 = *((_BYTE *)a1 + 136);
      if ( ((v16 ^ (*((_BYTE *)a1 + 148) >> 1)) & 2) != 0 || ((v16 ^ (*((_BYTE *)a1 + 148) >> 1)) & 4) != 0 )
        v6 = 1;
    }
    if ( !v6 )
    {
      v17 = *((_BYTE *)a1 + 148);
      if ( (v17 & 0x10) == 0 )
        goto LABEL_75;
    }
    LODWORD(v30) = 0;
    LODWORD(v29) = v15;
    v18 = *a2;
    v19 = *((_DWORD *)a1 + 4);
    if ( (unsigned int)(*a2 - 2) <= 2 )
      v20 = v19 & 0xFFFFFF3F;
    else
      v20 = v19 | 0xC0;
    v21 = *((_BYTE *)a1 + 148);
    DWORD1(v29) = v20;
    if ( (v21 & 0x20) != 0 )
    {
      v22 = *((_DWORD *)a1 + 33);
      DWORD2(v29) = *((_DWORD *)a1 + 32);
      HIDWORD(v29) = v22;
    }
    else
    {
      if ( (v21 & 0x40) != 0 )
        DWORD2(v29) = 1110704128;
      else
        DWORD2(v29) = 0;
      if ( (v21 & 0x80u) == 0 )
        HIDWORD(v29) = 0;
      else
        HIDWORD(v29) = 1110704128;
    }
    v23 = 0;
    if ( (unsigned int)(v18 - 2) > 2 )
      v23 = v21 >> 1;
    v24 = (v30 ^ (v21 >> 1)) & 6 ^ v30 ^ ((v30 ^ (v21 >> 1)) & 6 ^ v30 ^ v23) & 1;
    *((_BYTE *)a1 + 148) = v21 ^ (v21 ^ (2 * v24)) & 2;
    if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
      v9 = 0;
    v25 = *((_DWORD *)a1 + 38);
    v26 = *a1;
    LOBYTE(v30) = v9 | v24 & 0xF7;
    HIDWORD(v30) = v25;
    v7 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v26 + 16LL))(v26, &v29);
    if ( v7 >= 0 )
    {
      v17 = *((_BYTE *)a1 + 148);
      v27 = v30;
      *(_OWORD *)(a1 + 15) = v29;
      a1[17] = v27;
LABEL_75:
      *((_BYTE *)a1 + 148) = v17 & 0xEF;
    }
  }
  return (unsigned int)v7;
}
