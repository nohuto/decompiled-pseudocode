/*
 * XREFs of sub_1C00449C0 @ 0x1C00449C0
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D060 (_guard_dispatch_icall_nop.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C0044D14 @ 0x1C0044D14 (sub_1C0044D14.c)
 *     sub_1C004815C @ 0x1C004815C (sub_1C004815C.c)
 */

void __fastcall sub_1C00449C0(__int64 a1, __int64 a2)
{
  _WORD *v3; // rdi
  __int64 v4; // rcx
  int v5; // edx
  void *v6; // rbx
  int v7; // r8d
  const WCHAR *v8; // rax
  wchar_t **v9; // rdi
  int v10; // eax
  PVOID SystemRoutineAddress; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-39h] BYREF
  __int64 (__fastcall *v13)(int, int, int, int, __int64, __int64); // [rsp+58h] [rbp-29h] BYREF
  int v14; // [rsp+60h] [rbp-21h]
  const WCHAR *v15; // [rsp+68h] [rbp-19h]
  wchar_t **v16; // [rsp+70h] [rbp-11h]
  int v17; // [rsp+78h] [rbp-9h]
  __int64 v18; // [rsp+80h] [rbp-1h]
  int v19; // [rsp+88h] [rbp+7h]
  __int64 v20; // [rsp+90h] [rbp+Fh]
  int v21; // [rsp+98h] [rbp+17h]
  __int64 v22; // [rsp+A0h] [rbp+1Fh]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x4Fu, (__int64)&unk_1C0063940);
  v3 = sub_1C0011220(a2);
  v6 = (void *)sub_1C0044D14(v4, a2);
  if ( v6 )
  {
    if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
    {
      if ( LOWORD(DeviceObject->DeviceType) )
        sub_1C004815C(
          DeviceObject->DeviceExtension,
          (unsigned __int16)v3[706],
          (unsigned __int16)v3[705],
          80,
          (__int64)&unk_1C0063940,
          v3[704],
          v3[705],
          v3[706]);
      if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
        sub_1C003B2A0(DeviceObject->DeviceExtension, v5, v7, 81, (__int64)&unk_1C0063940, (__int64)v6);
    }
    v8 = L"MsOs20DescriptorSetInfo";
    v9 = &off_1C005EF98;
    while ( v8 )
    {
      v15 = v8;
      v10 = *((_DWORD *)v9 + 2);
      v13 = sub_1C0045A10;
      v14 = 0;
      v16 = v9;
      v17 = v10;
      v18 = 0LL;
      v19 = 0;
      v20 = 0LL;
      v21 = 0;
      v22 = 0LL;
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"RtlQueryRegistryValuesEx");
      SystemRoutineAddress = MmGetSystemRoutineAddress(&DestinationString);
      if ( !SystemRoutineAddress )
        SystemRoutineAddress = RtlQueryRegistryValues;
      ((void (__fastcall *)(_QWORD, void *, __int64 (__fastcall **)(int, int, int, int, __int64, __int64), __int64, _QWORD))SystemRoutineAddress)(
        0LL,
        v6,
        &v13,
        a2,
        0LL);
      v9 += 3;
      v8 = *v9;
    }
    ExFreePoolWithTag(v6, 0);
  }
}
