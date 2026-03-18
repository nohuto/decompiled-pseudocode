/*
 * XREFs of sub_1C00466CC @ 0x1C00466CC
 * Callers:
 *     sub_1C0045408 @ 0x1C0045408 (sub_1C0045408.c)
 * Callees:
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     __security_check_cookie @ 0x1C001CF60 (__security_check_cookie.c)
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C003B2A0 @ 0x1C003B2A0 (sub_1C003B2A0.c)
 *     sub_1C00447AC @ 0x1C00447AC (sub_1C00447AC.c)
 *     sub_1C0046540 @ 0x1C0046540 (sub_1C0046540.c)
 */

__int64 __fastcall sub_1C00466CC(__int64 a1, __int64 a2)
{
  _DWORD *v3; // rbx
  _OWORD *PoolWithTag; // rax
  void *v5; // rdi
  int v6; // edx
  unsigned int v7; // esi
  int v8; // r8d
  __int64 v10; // [rsp+28h] [rbp-E0h]
  int v11; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v13[5]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 (__fastcall *v14)(__int64, __int64, char *, unsigned int, __int64, __int64); // [rsp+78h] [rbp-90h] BYREF
  int v15; // [rsp+80h] [rbp-88h]
  void *v16; // [rsp+88h] [rbp-80h]
  _QWORD *v17; // [rsp+90h] [rbp-78h]
  int v18; // [rsp+98h] [rbp-70h]
  __int64 v19; // [rsp+A0h] [rbp-68h]
  int v20; // [rsp+A8h] [rbp-60h]
  __int64 (__fastcall *v21)(__int64, __int64, char *, unsigned int, __int64, __int64); // [rsp+B0h] [rbp-58h]
  int v22; // [rsp+B8h] [rbp-50h]
  const wchar_t *v23; // [rsp+C0h] [rbp-48h]
  _QWORD *v24; // [rsp+C8h] [rbp-40h]
  int v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  int v27; // [rsp+E0h] [rbp-28h]
  __int64 v28; // [rsp+E8h] [rbp-20h]
  int v29; // [rsp+F0h] [rbp-18h]
  __int64 v30; // [rsp+F8h] [rbp-10h]

  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 && LOWORD(DeviceObject->DeviceType) )
    sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 0, 1u, 0x48u, (__int64)&unk_1C0063940);
  v3 = sub_1C0011220(a2);
  v3[358] &= ~0x800u;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x36uLL, 0x42554855u);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  PoolWithTag[2] = 0LL;
  *((_DWORD *)PoolWithTag + 12) = 0;
  *((_WORD *)PoolWithTag + 26) = 0;
  LOWORD(v11) = 0;
  LODWORD(v10) = *((unsigned __int16 *)v3 + 705);
  v7 = sub_1C00447AC((wchar_t *)PoolWithTag, 0x36uLL, L"IgnoreHWSerNum%04x%04x", *((unsigned __int16 *)v3 + 704), v10);
  if ( (v7 & 0xC0000000) != 0xC0000000 )
  {
    v15 = 0;
    v14 = sub_1C0045CE0;
    v12[1] = &v11;
    v21 = sub_1C0045CE0;
    v17 = v12;
    v16 = v5;
    LODWORD(v12[0]) = 3;
    v18 = 3;
    v19 = 0LL;
    v22 = 0;
    v20 = 2;
    v23 = L"GenericUSBDeviceString";
    LODWORD(v13[0]) = 0;
    v13[1] = v3 + 548;
    v24 = v13;
    v25 = 0;
    v26 = 0LL;
    v27 = 0;
    v28 = 0LL;
    v29 = 0;
    v30 = 0LL;
    v7 = sub_1C0046540(2u, (__int64)L"usbflags", 2LL, (__int64)&v14, 0xA8u);
    if ( (v7 & 0xC0000000) != 0xC0000000 )
    {
      if ( (_BYTE)v11 )
        v3[358] |= 0x800u;
    }
  }
  if ( v3[549] && off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    if ( LOWORD(DeviceObject->DeviceType) )
      sub_1C003B2A0(DeviceObject->DeviceExtension, v6, v8, 73, (__int64)&unk_1C0063940, *((_QWORD *)v3 + 275));
  }
  ExFreePoolWithTag(v5, 0);
  return v7;
}
