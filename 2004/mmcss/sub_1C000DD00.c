/*
 * XREFs of sub_1C000DD00 @ 0x1C000DD00
 * Callers:
 *     sub_1C000DC10 @ 0x1C000DC10 (sub_1C000DC10.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002FD0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x1C0003010 (__report_rangecheckfailure.c)
 *     sub_1C0003180 @ 0x1C0003180 (sub_1C0003180.c)
 *     sub_1C00044F8 @ 0x1C00044F8 (sub_1C00044F8.c)
 *     sub_1C0004AA8 @ 0x1C0004AA8 (sub_1C0004AA8.c)
 */

__int64 __fastcall sub_1C000DD00(HANDLE KeyHandle, __int64 a2, _QWORD *a3)
{
  const WCHAR *v5; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  NTSTATUS v9; // ebx
  __int64 v10; // r8
  _QWORD *v11; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned int v15; // ebp
  __int64 Length; // [rsp+20h] [rbp-F8h]
  ULONG ResultLength; // [rsp+30h] [rbp-E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-E0h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+50h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+58h] [rbp-C0h]
  unsigned int v21; // [rsp+5Ch] [rbp-BCh] BYREF
  wchar_t Str1[32]; // [rsp+A0h] [rbp-78h] BYREF

  v5 = *(const WCHAR **)a2;
  ResultLength = 0;
  DestinationString = 0LL;
  RtlInitUnicodeStringEx(&DestinationString, v5);
  LODWORD(v7) = *(_DWORD *)(a2 + 8);
  v9 = ZwQueryValueKey(
         KeyHandle,
         &DestinationString,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x50u,
         &ResultLength);
  if ( v9 < 0 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 5u )
    {
      LODWORD(Length) = v9;
      sub_1C00044F8(
        (__int64)off_1C0007000->AttachedDevice,
        0xAu,
        (__int64)&unk_1C0005230,
        &DestinationString.Length,
        Length);
    }
    goto LABEL_9;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) == 1 )
  {
    if ( v20 >= 0x40 )
    {
      v9 = -1073741562;
      goto LABEL_31;
    }
    v13 = v20;
    sub_1C0003180((char *)Str1, (char *)&v21, v20);
    v14 = v13 >> 1;
    if ( v14 >= 32 )
      _report_rangecheckfailure();
    v15 = 0;
    Str1[v14] = 0;
    v9 = -1073741811;
    if ( !*(_DWORD *)(a2 + 36) )
      goto LABEL_31;
    while ( wcsicmp(Str1, *(const wchar_t **)(*(_QWORD *)(a2 + 16) + 16LL * v15)) )
    {
      if ( ++v15 >= *(_DWORD *)(a2 + 36) )
        goto LABEL_31;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL * v15 + 8);
LABEL_9:
    v9 = 0;
LABEL_10:
    *a3 = (unsigned int)v7;
    goto LABEL_11;
  }
  if ( (*(_DWORD *)(a2 + 24) & 0x1F) != 2 )
  {
    if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
      sub_1C0004AA8((__int64)off_1C0007000->AttachedDevice, v8, v10, *(_DWORD *)(a2 + 24) & 0x1F);
    goto LABEL_28;
  }
  if ( v20 != 4 || (v11 = *(_QWORD **)(a2 + 16), LODWORD(v7) = v21, (unsigned __int64)v21 < *v11) )
  {
LABEL_28:
    v9 = -1073741811;
    goto LABEL_31;
  }
  if ( (unsigned __int64)v21 <= v11[1] )
    goto LABEL_10;
  v9 = -1073741811;
LABEL_31:
  if ( (HIDWORD(off_1C0007000->Timer) & 1) != 0 && BYTE1(off_1C0007000->Timer) >= 2u )
  {
    LODWORD(Length) = v9;
    sub_1C00044F8(
      (__int64)off_1C0007000->AttachedDevice,
      0xCu,
      (__int64)&unk_1C0005230,
      &DestinationString.Length,
      Length);
  }
LABEL_11:
  if ( v9 >= 0 && (*(_BYTE *)(a2 + 28) & 1) != 0 )
    --*a3;
  return (unsigned int)v9;
}
