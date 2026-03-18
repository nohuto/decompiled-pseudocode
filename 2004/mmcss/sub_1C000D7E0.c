/*
 * XREFs of sub_1C000D7E0 @ 0x1C000D7E0
 * Callers:
 *     sub_1C000D310 @ 0x1C000D310 (sub_1C000D310.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C0003440 @ 0x1C0003440 (sub_1C0003440.c)
 *     sub_1C00043E8 @ 0x1C00043E8 (sub_1C00043E8.c)
 *     sub_1C0004604 @ 0x1C0004604 (sub_1C0004604.c)
 *     sub_1C000DA10 @ 0x1C000DA10 (sub_1C000DA10.c)
 *     sub_1C000DAA0 @ 0x1C000DAA0 (sub_1C000DAA0.c)
 *     sub_1C000DB50 @ 0x1C000DB50 (sub_1C000DB50.c)
 *     sub_1C000DC10 @ 0x1C000DC10 (sub_1C000DC10.c)
 */

__int64 __fastcall sub_1C000D7E0(HANDLE KeyHandle)
{
  ULONG i; // esi
  NTSTATUS v3; // ebx
  char *PoolWithTag; // rax
  WCHAR *v5; // rbx
  NTSTATUS v6; // r9d
  int v7; // edi
  int v8; // ecx
  ULONG Length[2]; // [rsp+28h] [rbp-E0h]
  ULONG ResultLength[2]; // [rsp+38h] [rbp-D0h] BYREF
  void *KeyHandlea; // [rsp+40h] [rbp-C8h] BYREF
  __int64 DestinationString; // [rsp+48h] [rbp-C0h]
  struct _UNICODE_STRING DestinationString_8; // [rsp+50h] [rbp-B8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes_8; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v16[3]; // [rsp+90h] [rbp-78h] BYREF
  __m128 v17[4]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE KeyInformation[12]; // [rsp+108h] [rbp+0h] BYREF
  unsigned int v19; // [rsp+114h] [rbp+Ch]
  char v20[144]; // [rsp+118h] [rbp+10h] BYREF

  DestinationString = 0LL;
  ResultLength[0] = 0;
  KeyHandlea = 0LL;
  memset(&ObjectAttributes_8, 0, sizeof(ObjectAttributes_8));
  memset(v16, 0, sizeof(v16));
  DestinationString_8 = 0LL;
  sub_1C0003440(v17, 0, 0x40uLL);
  for ( i = 0; ; ++i )
  {
    v3 = ZwEnumerateKey(KeyHandle, i, KeyBasicInformation, KeyInformation, 0x98u, ResultLength);
    if ( v3 < 0 )
      break;
    if ( v19 < 0x80 )
    {
      PoolWithTag = (char *)ExAllocatePoolWithTag((POOL_TYPE)512, 2LL * (v19 + 1), 0x74727641u);
      v5 = (WCHAR *)PoolWithTag;
      if ( PoolWithTag )
      {
        sub_1C0003180(PoolWithTag, v20, v19);
        v5[(unsigned __int64)v19 >> 1] = 0;
        if ( RtlInitUnicodeStringEx(&DestinationString_8, v5) < 0 )
          goto LABEL_20;
        ObjectAttributes_8.Length = 48;
        ObjectAttributes_8.ObjectName = &DestinationString_8;
        ObjectAttributes_8.RootDirectory = KeyHandle;
        ObjectAttributes_8.Attributes = 64;
        *(_OWORD *)&ObjectAttributes_8.SecurityDescriptor = 0LL;
        v6 = ZwOpenKey(&KeyHandlea, 0x101u, &ObjectAttributes_8);
        if ( v6 < 0 )
        {
          if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
            sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xEu, (__int64)&unk_1C0005230, v6);
LABEL_20:
          ExFreePoolWithTag(v5, 0);
          continue;
        }
        v7 = sub_1C000DC10(KeyHandlea);
        ZwClose(KeyHandlea);
        if ( v7 < 0 )
          goto LABEL_20;
        sub_1C000DA10(v16);
        v8 = sub_1C000DB50(v5);
        if ( v8 < 0 )
        {
          if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
          {
            Length[0] = v8;
            sub_1C00043E8((__int64)off_1C0007000->AttachedDevice, 0xDu, (__int64)&unk_1C0005230, 0LL, *(_QWORD *)Length);
          }
        }
        else
        {
          sub_1C000DA10(DestinationString);
          sub_1C000DAA0();
        }
      }
    }
LABEL_10:
    ;
  }
  if ( v3 == -1073741789 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0xFu, (__int64)&unk_1C0005230, -1073741789);
    goto LABEL_10;
  }
  if ( v3 == -2147483622 )
    return 0LL;
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
    sub_1C0004604((__int64)off_1C0007000->AttachedDevice, 0x10u, (__int64)&unk_1C0005230, v3);
  return (unsigned int)v3;
}
