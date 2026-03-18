/*
 * XREFs of SetFailureLocation @ 0x1403238E8
 * Callers:
 *     CmpLoadKeyCommon @ 0x140203EFC (CmpLoadKeyCommon.c)
 *     CmpDoFileRead @ 0x140326840 (CmpDoFileRead.c)
 *     CmpLinkHiveToMaster @ 0x1405DA88C (CmpLinkHiveToMaster.c)
 *     HvLoadHive @ 0x1405DAF48 (HvLoadHive.c)
 *     HvpInitMap @ 0x1405DC238 (HvpInitMap.c)
 *     HvHiveStartFileBacked @ 0x1405DDBAC (HvHiveStartFileBacked.c)
 *     CmpCreateHive @ 0x1405DDED8 (CmpCreateHive.c)
 *     CmCheckRegistry @ 0x1405DF080 (CmCheckRegistry.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1405E14A0 (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInitHiveFromFile @ 0x14064EC08 (CmpInitHiveFromFile.c)
 *     CmpCheckLeaf @ 0x140670730 (CmpCheckLeaf.c)
 *     CmpCheckRegistry2 @ 0x140672DC0 (CmpCheckRegistry2.c)
 *     CmpCheckValueList @ 0x1406731E0 (CmpCheckValueList.c)
 *     CmpCheckKey @ 0x140673FC0 (CmpCheckKey.c)
 *     CmLoadKey @ 0x1406DAE70 (CmLoadKey.c)
 *     CmLoadAppKey @ 0x1406FFDC0 (CmLoadAppKey.c)
 *     HvpEnlistFreeCells @ 0x140706AF0 (HvpEnlistFreeCells.c)
 *     HvCheckHive @ 0x140706C14 (HvCheckHive.c)
 *     HvCheckBin @ 0x140707260 (HvCheckBin.c)
 *     HvHiveStartMemoryBacked @ 0x14076BAF8 (HvHiveStartMemoryBacked.c)
 *     CmpLoadHiveThread @ 0x140794830 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1407A0B34 (CmpMountPreloadedHives.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1407AD76C (HvpBuildMapForMemoryBackedHive.c)
 *     CmpResolveHiveLoadConflict @ 0x140870F1C (CmpResolveHiveLoadConflict.c)
 *     HvpMapHiveImage @ 0x1408765B0 (HvpMapHiveImage.c)
 *     HvpPerformLogFileRecovery @ 0x1408767D8 (HvpPerformLogFileRecovery.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140244AF8 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C02130, (unsigned __int8 *)word_14002D37A, 0LL, 0LL, 6u, &v15);
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
