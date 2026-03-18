/*
 * XREFs of sub_1C0045408 @ 0x1C0045408
 * Callers:
 *     sub_1C0038340 @ 0x1C0038340 (sub_1C0038340.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C00466CC @ 0x1C00466CC (sub_1C00466CC.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 */

_OWORD *__fastcall sub_1C0045408(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // rdi
  __int64 v4; // rcx
  _OWORD *result; // rax
  __int64 v6; // rbx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  unsigned int v9; // r9d
  __int64 v10; // rcx
  const wchar_t *v11; // rax
  wchar_t **v12; // rdi
  int v13; // eax
  void (__fastcall *SystemRoutineAddress)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD); // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v16)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v17; // [rsp+60h] [rbp-21h]
  const wchar_t *v18; // [rsp+68h] [rbp-19h]
  wchar_t **v19; // [rsp+70h] [rbp-11h]
  int v20; // [rsp+78h] [rbp-9h]
  __int64 v21; // [rsp+80h] [rbp-1h]
  int v22; // [rsp+88h] [rbp+7h]
  __int64 v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+98h] [rbp+17h]
  __int64 v25; // [rsp+A0h] [rbp+1Fh]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x52u, (__int64)&unk_1C0063940);
  v3 = (unsigned __int16 *)sub_1C0011220(a2);
  sub_1C00466CC(v4, a2);
  result = ExAllocatePoolWithTag(PoolType, 0x2CuLL, 0x42554855u);
  v6 = (__int64)result;
  if ( result )
  {
    *result = 0LL;
    result[1] = 0LL;
    *((_QWORD *)result + 4) = 0LL;
    *((_DWORD *)result + 10) = 0;
    *result = xmmword_1C00636F8;
    result[1] = xmmword_1C0063708;
    *((_QWORD *)result + 4) = 0x72007200720070LL;
    *((_DWORD *)result + 10) = 114;
    v7 = v3[704];
    v8 = v3[705];
    v9 = v3[706];
    v10 = v3[704] & 0xF;
    *((_WORD *)result + 9) = (unsigned __int8)a0123456789abcd[(unsigned __int64)v3[704] >> 12];
    *((_WORD *)result + 10) = (unsigned __int8)a0123456789abcd[(v7 >> 8) & 0xF];
    *((_WORD *)result + 11) = (unsigned __int8)a0123456789abcd[(unsigned __int8)v7 >> 4];
    *((_WORD *)result + 12) = (unsigned __int8)a0123456789abcd[v10];
    *((_WORD *)result + 13) = (unsigned __int8)a0123456789abcd[(unsigned __int64)v8 >> 12];
    *((_WORD *)result + 14) = (unsigned __int8)a0123456789abcd[(v8 >> 8) & 0xF];
    *((_WORD *)result + 15) = (unsigned __int8)a0123456789abcd[(unsigned __int8)v8 >> 4];
    *((_WORD *)result + 16) = (unsigned __int8)a0123456789abcd[v8 & 0xF];
    *((_WORD *)result + 17) = (unsigned __int8)a0123456789abcd[(unsigned __int64)v9 >> 12];
    *((_WORD *)result + 18) = (unsigned __int8)a0123456789abcd[(v9 >> 8) & 0xF];
    *((_WORD *)result + 19) = (unsigned __int8)a0123456789abcd[(unsigned __int8)v9 >> 4];
    *((_WORD *)result + 20) = (unsigned __int8)a0123456789abcd[v9 & 0xF];
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C004815C(DeviceObject->DeviceExtension, v8, v7, 83, (__int64)&unk_1C0063940, v7, v8, v9);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, v8, v7, 84, (__int64)&unk_1C0063940, v6);
    }
    v11 = L"IgnoreHWSerNum";
    v12 = &off_1C005F5C0;
    while ( v11 )
    {
      v18 = v11;
      v13 = *((_DWORD *)v12 + 2);
      v16 = sub_1C0045A10;
      v17 = 0;
      v19 = v12;
      v20 = v13;
      v21 = 0LL;
      v22 = 0;
      v23 = 0LL;
      v24 = 0;
      v25 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = (void (__fastcall *)(__int64, __int64, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))RtlQueryRegistryValues;
      SystemRoutineAddress(2LL, v6, &v16, a2, 0LL);
      v12 += 3;
      v11 = *v12;
    }
    return (_OWORD *)v6;
  }
  return result;
}
