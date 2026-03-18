/*
 * XREFs of ?DxgkRetrieveSubkeyInfoFromRegistry@@YAJPEAXKPEAPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1C01877A0
 * Callers:
 *     ?_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ @ 0x1C01875FC (-_RetrieveMonitorFrequencyRangeFromRegistry@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DxgkRetrieveSubkeyInfoFromRegistry(
        HANDLE KeyHandle,
        ULONG Index,
        struct _KEY_BASIC_INFORMATION **a3)
{
  struct _KEY_BASIC_INFORMATION *v3; // rbx
  ULONG Length; // ebp
  __int64 v8; // rdx
  __int64 v9; // rcx
  NTSTATUS v10; // eax
  int v11; // edi
  __int64 v13; // rax
  ULONG ResultLength; // [rsp+60h] [rbp+18h] BYREF

  v3 = 0LL;
  *a3 = 0LL;
  Length = 1024;
  do
  {
    if ( v3 )
      operator delete[](v3);
    v3 = (struct _KEY_BASIC_INFORMATION *)operator new[](Length, 0x4D677844u, PagedPool);
    if ( v3 )
    {
      ResultLength = 0;
      v10 = ZwEnumerateKey(KeyHandle, Index, KeyBasicInformation, v3, Length, &ResultLength);
      Length = ResultLength;
      v11 = v10;
    }
    else
    {
      v13 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v13 + 24) = Length;
      WdLogEvent5_WdError(v13);
      v11 = -1073741801;
    }
  }
  while ( v11 == -2147483643 || v11 == -1073741789 );
  if ( v11 < 0 )
  {
    if ( v3 )
      operator delete[](v3);
    v3 = 0LL;
  }
  *a3 = v3;
  return (unsigned int)v11;
}
