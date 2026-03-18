/*
 * XREFs of ?ConfigureInteractionContextIfNecessary@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@PEAUTemporaryConfiguration@@@Z @ 0x18018BCE0
 * Callers:
 *     ?ProcessInput@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAJAEBUInteractionStateInfo@@AEBUtagPOINTER_INFO@@PEAUTemporaryConfiguration@@@Z @ 0x18018DDC8 (-ProcessInput@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180025194 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     _tlgKeywordOn @ 0x180074108 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x180100650 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAA?AUDwmTouchInteractionConfigurationPrimitive@@IPEAUTemporaryConfiguration@@@Z @ 0x18018D3E0 (-GetConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4Fl.c)
 *     ?UpdateActiveConfig@?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@QEAAXAEBUDwmTouchInteractionConfigurationPrimitive@@@Z @ 0x18018F350 (-UpdateActiveConfig@-$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlags.c)
 */

__int64 __fastcall CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::ConfigureInteractionContextIfNecessary(
        _QWORD *a1,
        int *a2,
        __int64 a3)
{
  int v5; // r15d
  unsigned int v6; // edx
  char v7; // r12
  char v8; // di
  char v9; // r10
  unsigned __int8 v10; // si
  char v11; // al
  char v12; // al
  char v13; // al
  _DWORD *v14; // rax
  char v15; // al
  int v16; // r9d
  __int64 v17; // rcx
  unsigned __int8 v18; // dl
  char v19; // al
  int v20; // r9d
  int v21; // eax
  unsigned int v22; // eax
  unsigned __int8 v23; // dl
  char v24; // cl
  int v25; // xmm1_4
  char v26; // cl
  __int64 v27; // xmm1_8
  __int128 v29; // [rsp+30h] [rbp-39h] BYREF
  __int64 v30; // [rsp+40h] [rbp-29h]
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+48h] [rbp-21h] BYREF
  __int128 *v32; // [rsp+68h] [rbp-1h]
  __int64 v33; // [rsp+70h] [rbp+7h]

  if ( !*a1 )
    return (unsigned int)-2147019873;
  LOBYTE(v6) = *((_BYTE *)a1 + 148);
  v7 = 8;
  v5 = 0;
  v8 = 0;
  v9 = 1;
  if ( (v6 & 1) != 0 || *((_DWORD *)a1 + 36) != a2[2] )
  {
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::GetConfig(
      a1,
      &v29,
      (unsigned int)a2[2],
      a3);
    if ( (a2[6] & 8) == 0 && (unsigned int)(*a2 - 2) <= 2 )
      DWORD2(v29) &= 0xFFFFFF3F;
    CInputTypeContext<DwmTouchInteractionConfigurationPrimitive,TMILFlagsEnum<enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>,enum DwmInteractionTypeTouchPrimitiveType::FlagsEnum>::UpdateActiveConfig(
      a1,
      &v29);
    if ( (unsigned int)(*a2 - 2) > 2 )
      v10 = BYTE8(v29) | 0xC0;
    else
      v10 = BYTE8(v29) & 0x3F;
    if ( (v10 & 1) != 0 || (v11 = 0, (v10 & 2) != 0) )
      v11 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 3) != 0) != v11 )
      goto LABEL_23;
    if ( (v10 & 4) != 0 || (v12 = 0, (v10 & 8) != 0) )
      v12 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 0xC) != 0) != v12 )
      goto LABEL_23;
    if ( (v10 & 0x10) != 0 || (v13 = 0, (v10 & 0x20) != 0) )
      v13 = 1;
    if ( ((*((_BYTE *)a1 + 124) & 0x30) != 0) != v13 )
LABEL_23:
      v8 = 1;
    v14 = (_DWORD *)(*(__int64 (__fastcall **)(_QWORD, struct _EVENT_DATA_DESCRIPTOR *))(*(_QWORD *)*a1 + 40LL))(
                      *a1,
                      &v31);
    v9 = 1;
    if ( *v14 != 1 )
    {
      if ( v8 || ((v10 ^ *((_BYTE *)a1 + 124)) & 0x40) != 0 || (v8 = 0, ((v10 ^ *((_DWORD *)a1 + 31)) & 0x80u) != 0) )
        v8 = 1;
    }
    v6 = *((unsigned __int8 *)a1 + 148);
    if ( (v6 & 0x20) != 0 )
    {
      if ( !v8 )
      {
LABEL_37:
        if ( (unsigned int)(*a2 - 2) > 2 && (a1[17] & 8) != 0 )
          v8 = 1;
        goto LABEL_40;
      }
    }
    else
    {
      if ( ((v6 >> 6) & 1) != (*((float *)a1 + 32) == 45.0) || (v15 = 0, v6 >> 7 != (*((float *)a1 + 33) == 45.0)) )
        v15 = 1;
      v8 |= v15;
    }
    if ( *((_DWORD *)a1 + 38) != *((_DWORD *)a1 + 35) )
      v8 = 1;
    goto LABEL_37;
  }
LABEL_40:
  v16 = *((_DWORD *)a1 + 39);
  if ( v16 == 2 && ((*((_BYTE *)a1 + 136) ^ ((unsigned __int8)v6 >> 1)) & 1) != 0 )
  {
    v8 = 1;
    if ( (v6 & 2) != 0 && (unsigned int)dword_1803D0EF0 > 4 && tlgKeywordOn((__int64)&dword_1803D0EF0, 2LL) )
    {
      *(_QWORD *)&v29 = a1;
      v32 = &v29;
      v33 = 8LL;
      tlgWriteTransfer_EventWriteTransfer(v17, (unsigned __int8 *)dword_18036A292, 0LL, 0LL, 3u, &v31);
      v16 = *((_DWORD *)a1 + 39);
      v9 = 1;
    }
  }
  if ( v16 != 3
    || (v18 = *((_BYTE *)a1 + 136), ((v18 ^ (*((_BYTE *)a1 + 148) >> 1)) & 2) == 0)
    && ((v18 ^ (*((_BYTE *)a1 + 148) >> 1)) & 4) == 0 )
  {
    if ( !v8 )
    {
      v19 = *((_BYTE *)a1 + 148);
      if ( (v19 & 0x10) == 0 )
        goto LABEL_69;
    }
  }
  LODWORD(v29) = v16;
  v20 = *a2;
  LODWORD(v30) = 0;
  v21 = *((_DWORD *)a1 + 4);
  if ( (unsigned int)(v20 - 2) <= 2 )
    v22 = v21 & 0xFFFFFF3F;
  else
    v22 = v21 | 0xC0;
  v23 = *((_BYTE *)a1 + 148);
  DWORD1(v29) = v22;
  v24 = v23 >> 1;
  if ( (v23 & 0x20) != 0 )
  {
    v25 = *((_DWORD *)a1 + 33);
    DWORD2(v29) = *((_DWORD *)a1 + 32);
    HIDWORD(v29) = v25;
  }
  else
  {
    if ( (v23 & 0x40) != 0 )
      DWORD2(v29) = 1110704128;
    else
      DWORD2(v29) = 0;
    if ( (v23 & 0x80u) == 0 )
      HIDWORD(v29) = 0;
    else
      HIDWORD(v29) = 1110704128;
  }
  if ( (unsigned int)(v20 - 2) <= 2 )
    v24 = 0;
  v26 = (v30 ^ (v23 >> 1)) & 6 ^ v30 ^ v9 & ((v30 ^ (v23 >> 1)) & 6 ^ v30 ^ v24);
  *((_BYTE *)a1 + 148) = v23 ^ (v23 ^ (2 * v26)) & 2;
  if ( (unsigned int)(*a2 - 2) > 2 || (a2[6] & 4) == 0 )
    v7 = 0;
  HIDWORD(v30) = *((_DWORD *)a1 + 38);
  LOBYTE(v30) = v7 | v26 & 0xF7;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *))(*(_QWORD *)*a1 + 16LL))(*a1, &v29);
  if ( v5 >= 0 )
  {
    v19 = *((_BYTE *)a1 + 148);
    v27 = v30;
    *(_OWORD *)(a1 + 15) = v29;
    a1[17] = v27;
LABEL_69:
    *((_BYTE *)a1 + 148) = v19 & 0xEF;
  }
  return (unsigned int)v5;
}
