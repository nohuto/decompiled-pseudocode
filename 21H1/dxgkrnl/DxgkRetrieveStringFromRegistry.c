/*
 * XREFs of DxgkRetrieveStringFromRegistry @ 0x1C017B620
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0171310 (DpiFdoStartAdapter.c)
 *     ?FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z @ 0x1C0178C50 (-FindBlockListStrings@@YAJPEAGIIPEBGW4_QAI_DRIVERVERSION@@PEAIPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetAdapterInfo @ 0x1C017A47C (DpiGetAdapterInfo.c)
 * Callees:
 *     memmove @ 0x1C0026580 (memmove.c)
 */

NTSTATUS __fastcall DxgkRetrieveStringFromRegistry(HANDLE KeyHandle, PUNICODE_STRING ValueName, __int64 a3)
{
  NTSTATUS result; // eax
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rbx
  NTSTATUS v9; // edi
  int v10; // edi
  ULONG v11; // ecx
  __int16 v12; // cx
  SIZE_T NumberOfBytes[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG ResultLength; // [rsp+78h] [rbp+38h] BYREF

  LODWORD(NumberOfBytes[0]) = 0;
  ResultLength = 0;
  result = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, 0LL, 0, (PULONG)NumberOfBytes);
  if ( result != -1073741789 && result != -2147483643 )
  {
    if ( result >= 0 )
      return -1073741823;
    return result;
  }
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, LODWORD(NumberOfBytes[0]), 0x74727044u);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741801;
  v9 = ZwQueryValueKey(KeyHandle, ValueName, KeyValuePartialInformation, PoolWithTag, NumberOfBytes[0], &ResultLength);
  if ( v9 < 0 )
  {
LABEL_20:
    ExFreePoolWithTag(v8, 0);
    return v9;
  }
  v10 = v8[1];
  if ( v10 != 7 && v10 != 1 )
  {
    v9 = -1073741788;
    goto LABEL_20;
  }
  v11 = v8[2];
  ResultLength = v11;
  if ( v11 && v11 <= LODWORD(NumberOfBytes[0]) - 12 )
  {
    if ( v11 > 0xFFFC )
      v11 = 65532;
    ResultLength = v11;
    memmove(v8, v8 + 3, v11);
    if ( v10 == 7 )
    {
      v12 = ResultLength;
    }
    else
    {
      *(_WORD *)((char *)v8 + ResultLength) = 0;
      v12 = ResultLength + 2;
    }
    *(_WORD *)(a3 + 2) = NumberOfBytes[0];
    result = 0;
    *(_WORD *)a3 = v12;
    *(_QWORD *)(a3 + 8) = v8;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return -1073741772;
  }
  return result;
}
