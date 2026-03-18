/*
 * XREFs of CmpDoReDoCreateKey @ 0x14087ED14
 * Callers:
 *     CmpDoReDoRecord @ 0x14087EE9C (CmpDoReDoRecord.c)
 * Callees:
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     ZwCreateKey @ 0x1403F3960 (ZwCreateKey.c)
 *     CmpDoReOpenTransKey @ 0x14087F18C (CmpDoReOpenTransKey.c)
 */

__int64 __fastcall CmpDoReDoCreateKey(__int64 a1, __int64 a2)
{
  __int64 v2; // r9
  __int64 v3; // rdi
  __int16 v4; // ax
  __int16 v5; // r8
  __int64 result; // rax
  HANDLE v7; // rbx
  int v8; // eax
  NTSTATUS v9; // edi
  _WORD v10[2]; // [rsp+40h] [rbp-9h] BYREF
  int v11; // [rsp+44h] [rbp-5h]
  __int64 v12; // [rsp+48h] [rbp-1h]
  __int128 v13; // [rsp+50h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  ULONG Disposition; // [rsp+B8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a2 + 40);
  v3 = a2;
  Handle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v4 = *(_WORD *)(a2 + 34);
  KeyHandle = 0LL;
  v11 = 0;
  v5 = *(_WORD *)(a2 + 32);
  Disposition = 0;
  LOWORD(a2) = v5;
  v10[1] = v4;
  v13 = 0LL;
  v12 = v2;
  do
  {
    a2 = (unsigned __int16)(a2 - 2);
    v10[0] = a2;
  }
  while ( *(_WORD *)(v2 + 2 * ((unsigned __int64)(unsigned int)a2 >> 1)) != 92 );
  *((_QWORD *)&v13 + 1) = a2 + v2 + 2;
  LOWORD(v13) = v5 - a2 - 2;
  WORD1(v13) = v13;
  result = CmpDoReOpenTransKey(a1, v10, 131078LL, &Handle);
  if ( (int)result >= 0 )
  {
    ObjectAttributes.SecurityQualityOfService = 0LL;
    v7 = Handle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v13;
    ObjectAttributes.SecurityDescriptor = *(PVOID *)(v3 + 56);
    v8 = *(_DWORD *)(v3 + 48) - 1;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Attributes = 4928;
    v9 = ZwCreateKey(&KeyHandle, 0xF003Fu, &ObjectAttributes, 0, 0LL, 9 - (v8 != 0), &Disposition);
    ZwClose(v7);
    if ( v9 >= 0 )
      ZwClose(KeyHandle);
    return (unsigned int)v9;
  }
  return result;
}
