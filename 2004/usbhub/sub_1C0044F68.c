/*
 * XREFs of sub_1C0044F68 @ 0x1C0044F68
 * Callers:
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C0044D14 @ 0x1C0044D14 (sub_1C0044D14.c)
 */

__m128 *__fastcall sub_1C0044F68(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  __m128 *result; // rax
  __m128 *v5; // rbx
  const WCHAR *v6; // rax
  wchar_t **v7; // rsi
  int v8; // eax
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-29h] BYREF
  __int64 (__fastcall *v11)(int, int, int, int, __int64, __int64); // [rsp+48h] [rbp-19h] BYREF
  int v12; // [rsp+50h] [rbp-11h]
  const WCHAR *v13; // [rsp+58h] [rbp-9h]
  wchar_t **v14; // [rsp+60h] [rbp-1h]
  int v15; // [rsp+68h] [rbp+7h]
  __int64 v16; // [rsp+70h] [rbp+Fh]
  int v17; // [rsp+78h] [rbp+17h]
  __int64 v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+88h] [rbp+27h]
  __int64 v20; // [rsp+90h] [rbp+2Fh]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x55u, (__int64)&unk_1C0063940);
  sub_1C0011220(a2);
  result = sub_1C0044D14(v3, a2);
  v5 = result;
  if ( result )
  {
    v6 = L"osvc";
    v7 = &off_1C005EF20;
    while ( v6 )
    {
      v13 = v6;
      v8 = *((_DWORD *)v7 + 2);
      v11 = sub_1C0045A10;
      v12 = 0;
      v14 = v7;
      v15 = v8;
      v16 = 0LL;
      v17 = 0;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, __m128 *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        v5,
        &v11,
        a2,
        0LL);
      v7 += 3;
      v6 = *v7;
    }
    return v5;
  }
  return result;
}
