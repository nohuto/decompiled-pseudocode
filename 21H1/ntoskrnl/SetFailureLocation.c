/*
 * XREFs of SetFailureLocation @ 0x140315198
 * Callers:
 *     CmpLoadKeyCommon @ 0x1402E1B78 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x14031861C (CmpDoFileRead.c)
 *     CmLoadKey @ 0x1405D5730 (CmLoadKey.c)
 *     CmpCheckLeaf @ 0x1405F71F0 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x1405F84F0 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x1405F87A0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x1405F8D60 (CmpCheckKey.c)
 *     CmpInitHiveFromFile @ 0x1406636E8 (CmpInitHiveFromFile.c)
 *     HvLoadHive @ 0x1406858AC (HvLoadHive.c)
 *     HvpInitMap @ 0x140686C5C (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x140688524 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x140688850 (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x140689A00 (CmCheckRegistry.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14068B7D8 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpLinkHiveToMaster @ 0x14068C2C8 (CmpLinkHiveToMaster.c)
 *     CmLoadAppKey @ 0x140694928 (CmLoadAppKey.c)
 *     HvpEnlistFreeCells @ 0x1406986C0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x1406987E4 (HvCheckHive.c)
 *     HvCheckBin @ 0x140698E30 (HvCheckBin.c)
 *     HvHiveStartMemoryBacked @ 0x14075AEB0 (HvHiveStartMemoryBacked.c)
 *     CmpLoadHiveThread @ 0x140781490 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140791858 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14079A06C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086A178 (CmpResolveHiveLoadConflict.c)
 *     HvpMapHiveImage @ 0x14086EF68 (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x14086F190 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402D5DD4 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

void __fastcall SetFailureLocation(__int64 a1, int a2, int a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rax
  char v11; // [rsp+30h] [rbp-51h] BYREF
  int v12; // [rsp+34h] [rbp-4Dh] BYREF
  int v13; // [rsp+38h] [rbp-49h] BYREF
  int v14; // [rsp+3Ch] [rbp-45h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+40h] [rbp-41h] BYREF
  char *v16; // [rsp+60h] [rbp-21h]
  int v17; // [rsp+68h] [rbp-19h]
  int v18; // [rsp+6Ch] [rbp-15h]
  int *v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  int v21; // [rsp+7Ch] [rbp-5h]
  int *v22; // [rsp+80h] [rbp-1h]
  int v23; // [rsp+88h] [rbp+7h]
  int v24; // [rsp+8Ch] [rbp+Bh]
  int *v25; // [rsp+90h] [rbp+Fh]
  int v26; // [rsp+98h] [rbp+17h]
  int v27; // [rsp+9Ch] [rbp+1Bh]

  if ( (unsigned int)dword_140C02130 > 5 )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v11;
    v19 = &v12;
    v22 = &v13;
    v25 = &v14;
    v12 = a3;
    v20 = 4;
    v13 = a4;
    v23 = 4;
    v26 = 4;
    v11 = a2;
    v17 = 1;
    v14 = a5;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_14002CFF2, 0LL, 0LL, 6u, &v15);
  }
  if ( a1 )
  {
    if ( a2 )
    {
      v10 = *(unsigned __int16 *)(a1 + 10);
      if ( (unsigned int)v10 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v10 + 9)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 10) + 112) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 10))++ + 116) = a5;
      }
    }
    else
    {
      v9 = *(unsigned __int16 *)(a1 + 8);
      if ( (unsigned int)v9 < 8 )
      {
        *(_DWORD *)(a1 + 12 * (v9 + 1)) = a3;
        *(_DWORD *)(a1 + 12LL * *(unsigned __int16 *)(a1 + 8) + 16) = a4;
        *(_DWORD *)(a1 + 12LL * (unsigned __int16)(*(_WORD *)(a1 + 8))++ + 20) = a5;
      }
    }
  }
}
