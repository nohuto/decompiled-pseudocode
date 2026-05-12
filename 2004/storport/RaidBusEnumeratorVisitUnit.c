/*
 * XREFs of RaidBusEnumeratorVisitUnit @ 0x1C0016470
 * Callers:
 *     RaidAdapterEnumerateBus @ 0x1C0016824 (RaidAdapterEnumerateBus.c)
 *     RaidAdapterTargetedRescan @ 0x1C002F46C (RaidAdapterTargetedRescan.c)
 *     RaidUnitIdentityUpdateWorkRoutine @ 0x1C0049DB0 (RaidUnitIdentityUpdateWorkRoutine.c)
 * Callees:
 *     RaidIsUnitControlSupported @ 0x1C0007340 (RaidIsUnitControlSupported.c)
 *     RaidAllocatePool @ 0x1C0008278 (RaidAllocatePool.c)
 *     RaidRemoveTrailingBlanks @ 0x1C000CB88 (RaidRemoveTrailingBlanks.c)
 *     RaidBusEnumeratorReleaseUnit @ 0x1C0016B80 (RaidBusEnumeratorReleaseUnit.c)
 *     RaidBusEnumeratorGenericInquiry @ 0x1C0016FE4 (RaidBusEnumeratorGenericInquiry.c)
 *     RaidBusEnumeratorGetUnit @ 0x1C0017734 (RaidBusEnumeratorGetUnit.c)
 *     RaidBusEnumeratorProcessBusUnit @ 0x1C0017F24 (RaidBusEnumeratorProcessBusUnit.c)
 *     RaCallMiniportUnitControl @ 0x1C0018104 (RaCallMiniportUnitControl.c)
 *     __security_check_cookie @ 0x1C001BE70 (__security_check_cookie.c)
 *     memset @ 0x1C001DA00 (memset.c)
 *     WPP_SF_D @ 0x1C00323F8 (WPP_SF_D.c)
 *     WPP_SF_ddd @ 0x1C003248C (WPP_SF_ddd.c)
 */

__int64 __fastcall RaidBusEnumeratorVisitUnit(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  int v5; // edi
  int v6; // r14d
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  _OWORD *Pool; // rax
  int v11; // r8d
  int v12; // r8d
  char v13; // dl
  int v14; // eax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17[12]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v18[112]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v19; // [rsp+100h] [rbp+0h]

  memset(v17, 0, sizeof(v17));
  result = RaidBusEnumeratorGetUnit(a1, a2, v17);
  if ( (int)result < 0 )
    return result;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_ddd(
      WPP_GLOBAL_Control->AttachedDevice,
      10LL,
      &WPP_1d6032c9664a36275945883370c93be0_Traceguids,
      BYTE1(v17[0]),
      BYTE2(v17[0]),
      BYTE3(v17[0]));
  }
  v5 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiryCallback, a1, a2, (unsigned int)v17, 36);
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x4000) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    WPP_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      11LL,
      &WPP_1d6032c9664a36275945883370c93be0_Traceguids,
      (unsigned int)v5);
  }
  if ( v5 >= 0 )
  {
    v6 = 255;
    v7 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSupportedPagesCallback, a1, a2, (unsigned int)v17, 255);
    v5 = v7;
    if ( v7 == -1073741801 )
      goto LABEL_25;
    if ( v7 == -1073741670 )
      goto LABEL_25;
    if ( (v17[0] & 1) != 0 )
    {
      v14 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumDeviceIdCallback, a1, a2, (unsigned int)v17, 255);
      v5 = v14;
      if ( v14 == -1073741801 || v14 == -1073741670 )
        goto LABEL_25;
    }
    if ( (v17[0] & 2) != 0 )
    {
      v15 = RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumSerialNumber, a1, a2, (unsigned int)v17, 255);
      v5 = v15;
      if ( v15 == -1073741801 || v15 == -1073741670 )
        goto LABEL_25;
    }
    if ( (*(_BYTE *)v17[4] & 0x1F) == 0 || (*(_BYTE *)v17[4] & 0x1F) == 0x14 )
    {
      v8 = *(unsigned __int8 *)(v17[4] + 4);
      if ( (unsigned __int8)v8 >= 0x37u )
      {
        if ( (unsigned __int64)(v8 + 5) <= 0xFF )
          v6 = v8 + 5;
        RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumInquiry1667Callback, a1, a2, (unsigned int)v17, v6);
      }
    }
    if ( (v17[0] & 4) != 0 )
    {
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumAtaInformation, a1, a2, (unsigned int)v17, 572);
    }
    else if ( v17[1] && RaidIsUnitControlSupported(v17[1], 11) )
    {
      memset(&v18[8], 0, 0x68uLL);
      v9 = *(_QWORD *)a1 + 304LL;
      v19 = v17[1] + 88;
      *(_QWORD *)v18 = 0x7800000002LL;
      v5 = RaCallMiniportUnitControl(v9, 11LL);
      if ( v5 < 0 )
      {
        v16 = *(_QWORD *)a1 + 304LL;
        *(_QWORD *)v18 = 0x6C00000001LL;
        v5 = RaCallMiniportUnitControl(v16, 11LL);
      }
      if ( v5 < 0 )
      {
        v5 = 0;
      }
      else
      {
        Pool = RaidAllocatePool(NonPagedPoolNx, 0x6CuLL, 0x32316152u, *(_QWORD *)(*(_QWORD *)a1 + 8LL));
        v17[10] = (__int64)Pool;
        if ( !Pool )
        {
          v5 = -1073741801;
          goto LABEL_25;
        }
        *Pool = *(_OWORD *)v18;
        Pool[1] = *(_OWORD *)&v18[16];
        Pool[2] = *(_OWORD *)&v18[32];
        Pool[3] = *(_OWORD *)&v18[48];
        Pool[4] = *(_OWORD *)&v18[64];
        Pool[5] = *(_OWORD *)&v18[80];
        *((_QWORD *)Pool + 12) = *(_QWORD *)&v18[96];
        *((_DWORD *)Pool + 26) = *(_DWORD *)&v18[104];
        RaidRemoveTrailingBlanks(v17[10] + 8, 17);
        RaidRemoveTrailingBlanks(v17[10] + 25, v11 + 48);
        RaidRemoveTrailingBlanks(v17[10] + 90, v12);
      }
    }
    v13 = *(_BYTE *)v17[4] & 0x1F;
    if ( v13 == 20 )
    {
      BYTE1(v17[7]) = 1;
    }
    else if ( (v17[0] & 0x18) == 24 && v13 == 0 )
    {
      RaidBusEnumeratorGenericInquiry((unsigned int)&RaidEnumBlockDeviceCharacteristics, a1, a2, (unsigned int)v17, 64);
    }
  }
  RaidBusEnumeratorProcessBusUnit(a1, v17);
LABEL_25:
  RaidBusEnumeratorReleaseUnit(a1, v17);
  if ( v5 == -1073741801 || v5 == -1073741670 )
    return (unsigned int)v5;
  else
    return 0LL;
}
