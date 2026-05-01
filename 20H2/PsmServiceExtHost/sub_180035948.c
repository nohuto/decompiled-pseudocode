/*
 * XREFs of sub_180035948 @ 0x180035948
 * Callers:
 *     sub_180003F74 @ 0x180003F74 (sub_180003F74.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180080988 @ 0x180080988 (sub_180080988.c)
 */

__int64 __fastcall sub_180035948(__int64 a1, __int64 a2, BOOL *a3)
{
  int v6; // ebx
  int v7; // eax
  BOOL v8; // ecx
  int v9; // edx
  __int64 v11; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-10h] BYREF
  int v13; // [rsp+98h] [rbp+38h] BYREF
  int v14; // [rsp+A8h] [rbp+48h]

  RtlInitUnicodeString(&DestinationString, 0LL);
  v6 = RtlConvertSidToUnicodeString(&DestinationString, (PSID)(a2 + 132), 1u);
  if ( v6 >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(_QWORD, PWSTR, __int64, int *))(**(_QWORD **)(a1 + 112) + 224LL))(
           *(_QWORD *)(a1 + 112),
           DestinationString.Buffer,
           a2,
           &v13);
    v8 = v13;
    v9 = v7;
    if ( v7 >= 0 )
    {
      v9 = 0;
      v8 = (v13 & 1) == 0;
    }
    v6 = 0;
    if ( v9 < 0 )
      v6 = v9 | 0xC0000000;
    if ( v6 < 0 )
    {
      if ( (unsigned int)dword_1800B3218 > 4 && sub_180010470((__int64)&dword_1800B3218, 64LL) )
      {
        v13 = *(_DWORD *)(a2 + 200);
        v14 = v6;
        sub_180080988(v11, &unk_1800A1B2F);
      }
    }
    else
    {
      *a3 = v8;
      v6 = 0;
    }
  }
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v6;
}
