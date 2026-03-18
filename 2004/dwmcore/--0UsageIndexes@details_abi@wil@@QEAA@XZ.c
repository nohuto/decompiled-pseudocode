/*
 * XREFs of ??0UsageIndexes@details_abi@wil@@QEAA@XZ @ 0x18002FF7C
 * Callers:
 *     ??0?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@Z$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@2@$$QEAVSemaphoreValue@12@@Z @ 0x18002E598 (--0-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAA@$$QEAV-$u.c)
 *     ?RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18002F95C (-RecordUsage@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 *     ?ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ @ 0x18014F3CC (-ProcessShutdown@FeatureStateData@details_abi@wil@@QEAAXXZ.c)
 * Callees:
 *     ??0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z @ 0x1800308E8 (--0RawUsageIndex@details_abi@wil@@QEAA@GGW4CountSize@12@G0@Z.c)
 */

__int64 __fastcall wil::details_abi::UsageIndexes::UsageIndexes(
        wil::details_abi::UsageIndexes *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r11
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // r8
  __int64 v10; // r11
  __int16 v12; // [rsp+20h] [rbp-18h]
  int v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]
  char v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+28h] [rbp-10h]
  int v17; // [rsp+28h] [rbp-10h]

  v15 = 0;
  LOBYTE(a4) = 1;
  v12 = 4;
  wil::details_abi::RawUsageIndex::RawUsageIndex(this, 0LL, 4LL, a4, v12, v15);
  LOBYTE(v16) = 2;
  LOWORD(v13) = v5;
  wil::details_abi::RawUsageIndex::RawUsageIndex(v4 + 64, 0LL, v5, v6, v13, v16);
  LOBYTE(v17) = v7;
  LOWORD(v14) = 0;
  wil::details_abi::RawUsageIndex::RawUsageIndex(v8 + 128, 0LL, v9, v7, v14, v17);
  return v10;
}
