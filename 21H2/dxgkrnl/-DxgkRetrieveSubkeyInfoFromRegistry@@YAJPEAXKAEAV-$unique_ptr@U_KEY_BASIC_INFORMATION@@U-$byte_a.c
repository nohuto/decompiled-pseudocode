/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKAEAV?$unique_ptr@U_KEY_BASIC_INFORMATION@@U?$byte_array_deleter@U_KEY_BASIC_INFORMATION@@@DxgMonitor@@@wistd@@@Z @ 0x1C0027EA0
 * Callers:
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1C020CC8C (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(HANDLE KeyHandle, ULONG Index, void **a3, __int64 a4)
{
  void *v4; // rbx
  void *v6; // rcx
  ULONG Length; // ebp
  void *v10; // r14
  NTSTATUS v11; // eax
  unsigned int v12; // edi
  void *v13; // rcx
  ULONG ResultLength; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0LL;
  v6 = *a3;
  *a3 = 0LL;
  Length = 1024;
  if ( v6 )
    ExFreePoolWithTag(v6, 0);
  while ( 1 )
  {
    v10 = v4;
    v4 = (void *)operator new[](Length, 0x4D677844u, 256LL, a4);
    if ( v10 )
      ExFreePoolWithTag(v10, 0);
    if ( !v4 )
      break;
    ResultLength = 0;
    v11 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v4, Length, &ResultLength);
    Length = ResultLength;
    v12 = v11;
    if ( v11 != -2147483643 && v11 != -1073741789 )
      goto LABEL_8;
  }
  WdLogSingleEntry1(2LL, Length);
  v12 = -1073741801;
LABEL_8:
  if ( (v12 & 0x80000000) != 0 )
  {
    if ( !v4 )
      return v12;
    v13 = v4;
LABEL_13:
    ExFreePoolWithTag(v13, 0);
    return v12;
  }
  v13 = *a3;
  *a3 = v4;
  if ( v13 )
    goto LABEL_13;
  return v12;
}
