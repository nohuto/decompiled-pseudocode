/*
 * XREFs of SetFailureLocation @ 0x140352EE8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140271C20 (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x14035613C (CmpDoFileRead.c)
 *     CmLoadAppKey @ 0x1405DE288 (CmLoadAppKey.c)
 *     CmpInitHiveFromFile @ 0x14061DFC8 (CmpInitHiveFromFile.c)
 *     HvLoadHive @ 0x140637D30 (HvLoadHive.c)
 *     HvpInitMap @ 0x1406390E0 (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x14063A9A4 (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x14063ACD0 (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x14063BE80 (CmCheckRegistry.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x14063E2BC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpLinkHiveToMaster @ 0x140650940 (CmpLinkHiveToMaster.c)
 *     CmLoadKey @ 0x1406525D0 (CmLoadKey.c)
 *     CmpCheckLeaf @ 0x14066F290 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x140670590 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x1406709B0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140670F70 (CmpCheckKey.c)
 *     HvpEnlistFreeCells @ 0x14069E790 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x14069E8B4 (HvCheckHive.c)
 *     HvCheckBin @ 0x14069EF00 (HvCheckBin.c)
 *     HvHiveStartMemoryBacked @ 0x14075D398 (HvHiveStartMemoryBacked.c)
 *     CmpLoadHiveThread @ 0x140786B20 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x140790834 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x14079E43C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpResolveHiveLoadConflict @ 0x14086B4C8 (CmpResolveHiveLoadConflict.c)
 *     HvpMapHiveImage @ 0x140870A58 (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x140870C80 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_14002D0F2, 0LL, 0LL, 6u, &v15);
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
