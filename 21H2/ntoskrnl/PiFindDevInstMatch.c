/*
 * XREFs of PiFindDevInstMatch @ 0x14073FFE4
 * Callers:
 *     PiProcessDriverInstance @ 0x140740230 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x140253AD4 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x1403FA860 (ZwQueryValueKey.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     PnpRegSzToString @ 0x1407401EC (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x140742C58 (IopGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiFindDevInstMatch(
        void *a1,
        const UNICODE_STRING *a2,
        unsigned int *a3,
        __int64 a4,
        NTSTRSAFE_PWSTR ppszDestEnd)
{
  NTSTRSAFE_PWSTR v5; // r13
  int v6; // edi
  ULONG v9; // r12d
  unsigned int v10; // r14d
  __int64 result; // rax
  PVOID v12; // rcx
  unsigned __int16 *PoolWithTag; // rbx
  PVOID v14; // rsi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  wchar_t *v18; // rax
  UNICODE_STRING v19; // xmm0
  unsigned __int16 *v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-38h]
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-28h] BYREF
  UNICODE_STRING String1; // [rsp+50h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+58h] BYREF
  PVOID P; // [rsp+C8h] [rbp+60h]

  v5 = ppszDestEnd;
  v6 = 0;
  *(_WORD *)a4 = 0;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)v5 = -1;
  *a3 = 0;
  ResultLength = 0;
  v9 = 256;
  P = 0LL;
  ValueName = 0LL;
  v10 = 0;
  String1 = 0LL;
  result = IopGetRegistryValue(a1);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result != -1073741772 )
      return result;
    return 0LL;
  }
  v12 = P;
  if ( *((_DWORD *)P + 1) == 4 && *((_DWORD *)P + 3) >= 4u )
  {
    v10 = *(_DWORD *)((char *)P + *((unsigned int *)P + 2));
    *a3 = v10;
  }
  ExFreePoolWithTag(v12, 0);
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
  if ( !PoolWithTag )
    return 3221225626LL;
  v14 = ExAllocatePoolWithTag(PagedPool, 0x14uLL, 0x20207050u);
  if ( !v14 )
  {
    v20 = PoolWithTag;
    goto LABEL_22;
  }
  if ( !v10 )
  {
LABEL_15:
    ExFreePoolWithTag(PoolWithTag, 0);
    if ( !*(_WORD *)a4 )
      ExFreePoolWithTag(v14, 0);
    return 0LL;
  }
  while ( 1 )
  {
    LODWORD(v21) = v6;
    ppszDestEnd = (NTSTRSAFE_PWSTR)v14;
    RtlStringCchPrintfExW((NTSTRSAFE_PWSTR)v14, 0xAuLL, &ppszDestEnd, 0LL, 0, L"%u", v21);
    ValueName.MaximumLength = 20;
    v15 = ((char *)ppszDestEnd - (_BYTE *)v14) >> 1;
    ValueName.Length = (_DWORD)v15 == -1 ? 20 : 2 * v15;
    ValueName.Buffer = (wchar_t *)v14;
    v16 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, PoolWithTag, v9, &ResultLength);
    if ( v16 < 0 )
      break;
    if ( *((_DWORD *)PoolWithTag + 1) == 1 )
    {
      v17 = *((unsigned int *)PoolWithTag + 3);
      if ( (unsigned int)v17 > 2 )
      {
        LODWORD(ppszDestEnd) = 0;
        PnpRegSzToString((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2), v17, &ppszDestEnd);
        String1.MaximumLength = PoolWithTag[6];
        v18 = (unsigned __int16 *)((char *)PoolWithTag + *((unsigned int *)PoolWithTag + 2));
        String1.Length = (unsigned __int16)ppszDestEnd;
        String1.Buffer = v18;
        if ( RtlEqualUnicodeString(&String1, a2, 1u) )
        {
          v19 = ValueName;
          *(_DWORD *)v5 = v6;
          *(UNICODE_STRING *)a4 = v19;
          goto LABEL_15;
        }
      }
    }
LABEL_14:
    if ( ++v6 >= v10 )
      goto LABEL_15;
  }
  if ( v16 != -2147483643 && v16 != -1073741789 )
    goto LABEL_14;
  ExFreePoolWithTag(PoolWithTag, 0);
  v9 = ResultLength;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(PagedPool, ResultLength, 0x20207050u);
  if ( PoolWithTag )
  {
    --v6;
    goto LABEL_14;
  }
  v20 = (unsigned __int16 *)v14;
LABEL_22:
  ExFreePoolWithTag(v20, 0);
  return 3221225626LL;
}
