/*
 * XREFs of sub_180043910 @ 0x180043910
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     NtClose @ 0x18004547C (NtClose.c)
 */

__int64 sub_180043910()
{
  int v1; // r8d
  int v2; // ecx
  void *KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[24]; // [rsp+70h] [rbp+37h] BYREF

  KeyHandle = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_18008D720;
  memset(KeyValueInformation, 0, sizeof(KeyValueInformation));
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenKey(&KeyHandle, 9u, &ObjectAttributes) >= 0
    && NtQueryValueKey(
         KeyHandle,
         (PUNICODE_STRING)&stru_18008D710,
         KeyValuePartialInformation,
         KeyValueInformation,
         0x18u,
         &ResultLength) >= 0 )
  {
    qword_1800B4F18 = *(_QWORD *)&KeyValueInformation[12];
    v1 = 1049601;
    if ( KeyValueInformation[12] > 0x14u || !_bittest(&v1, KeyValueInformation[12]) )
      LOBYTE(qword_1800B4F18) = 0;
    if ( BYTE1(qword_1800B4F18) > 0x14u || !_bittest(&v1, BYTE1(qword_1800B4F18)) )
      BYTE1(qword_1800B4F18) = 0;
    if ( BYTE2(qword_1800B4F18) > 0x14u || (v2 = 1082401, !_bittest(&v2, BYTE2(qword_1800B4F18))) )
      BYTE2(qword_1800B4F18) = 0;
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return 0LL;
}
