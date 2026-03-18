/*
 * XREFs of PiFindDevInstMatch @ 0x14067A98C
 * Callers:
 *     PiProcessDriverInstance @ 0x14067ABD0 (PiProcessDriverInstance.c)
 * Callees:
 *     RtlStringCchPrintfExW @ 0x1402DFBC4 (RtlStringCchPrintfExW.c)
 *     ZwQueryValueKey @ 0x14041BA40 (ZwQueryValueKey.c)
 *     PnpRegSzToString @ 0x14067AB94 (PnpRegSzToString.c)
 *     IopGetRegistryValue @ 0x14067B838 (IopGetRegistryValue.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
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
  __int64 Pool2; // rbx
  void *v14; // rsi
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rdx
  wchar_t *v18; // rax
  UNICODE_STRING v19; // xmm0
  void *v20; // rcx
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
  P = 0LL;
  v9 = 256;
  v10 = 0;
  ValueName = 0LL;
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
  Pool2 = ExAllocatePool2(256LL, 256LL, 538996816LL);
  if ( !Pool2 )
    return 3221225626LL;
  v14 = (void *)ExAllocatePool2(256LL, 20LL, 538996816LL);
  if ( !v14 )
  {
    v20 = (void *)Pool2;
    goto LABEL_22;
  }
  if ( !v10 )
  {
LABEL_15:
    ExFreePoolWithTag((PVOID)Pool2, 0);
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
    v16 = ZwQueryValueKey(a1, &ValueName, KeyValueFullInformation, (PVOID)Pool2, v9, &ResultLength);
    if ( v16 < 0 )
      break;
    if ( *(_DWORD *)(Pool2 + 4) == 1 )
    {
      v17 = *(unsigned int *)(Pool2 + 12);
      if ( (unsigned int)v17 > 2 )
      {
        LODWORD(ppszDestEnd) = 0;
        PnpRegSzToString(Pool2 + *(unsigned int *)(Pool2 + 8), v17, &ppszDestEnd);
        String1.MaximumLength = *(_WORD *)(Pool2 + 12);
        v18 = (wchar_t *)(Pool2 + *(unsigned int *)(Pool2 + 8));
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
  ExFreePoolWithTag((PVOID)Pool2, 0);
  v9 = ResultLength;
  Pool2 = ExAllocatePool2(256LL, ResultLength, 538996816LL);
  if ( Pool2 )
  {
    --v6;
    goto LABEL_14;
  }
  v20 = v14;
LABEL_22:
  ExFreePoolWithTag(v20, 0);
  return 3221225626LL;
}
