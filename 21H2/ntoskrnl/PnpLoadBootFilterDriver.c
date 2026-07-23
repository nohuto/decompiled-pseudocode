/*
 * XREFs of PnpLoadBootFilterDriver @ 0x140A5C5A0
 * Callers:
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1407426D8 (PipCallDriverAddDeviceQueryRoutine.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x1402A9FE0 (ObfReferenceObjectWithTag.c)
 *     PipIs32bitKey @ 0x14050C4CC (PipIs32bitKey.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     IopGetDriverNameFromKeyNode @ 0x140742AC0 (IopGetDriverNameFromKeyNode.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     PnpInitializeBootStartDriver @ 0x140A5F4B4 (PnpInitializeBootStartDriver.c)
 */

__int64 __fastcall PnpLoadBootFilterDriver(HANDLE KeyHandle, PCUNICODE_STRING String1, unsigned int a3, _QWORD *a4)
{
  void **v4; // r10
  unsigned int i; // edx
  char *j; // rcx
  __int64 v9; // rbx
  char *v10; // rcx
  char *v11; // rdi
  int started; // ebx
  UNICODE_STRING String2; // [rsp+50h] [rbp-28h] BYREF

  *a4 = 0LL;
  v4 = (void **)IopGroupTable;
  String2 = 0LL;
  if ( !IopGroupTable || a3 >= IopGroupIndex )
    return 3221225473LL;
  for ( i = 0; i < a3; v4 += 2 )
  {
    for ( j = (char *)*v4; j != (char *)IopGroupTable + 16 * i; j = *(char **)j )
    {
      if ( !j[47] )
        return 3221225473LL;
    }
    ++i;
  }
  _mm_lfence();
  v9 = 16LL * a3;
  v10 = (char *)IopGroupTable + v9;
  v11 = *(char **)((char *)IopGroupTable + v9);
  while ( v11 != v10 )
  {
    if ( (int)IopGetDriverNameFromKeyNode(*((HANDLE *)v11 + 4), &String2) >= 0 )
    {
      if ( RtlEqualUnicodeString(String1, &String2, 1u) )
      {
        if ( v11[47] )
        {
          started = *((_DWORD *)v11 + 10);
          if ( started >= 0 )
            started = -1073741823;
        }
        else
        {
          started = PnpInitializeBootStartDriver(
                      (unsigned int)&String2,
                      (unsigned int)*((_QWORD *)v11 + 3) + 32,
                      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v11 + 3) + 48LL) + 56LL),
                      *(_QWORD *)(*((_QWORD *)v11 + 3) + 48LL),
                      KeLoaderBlock_0 + 16,
                      1,
                      1);
          *((_DWORD *)v11 + 10) = started;
          *((_QWORD *)v11 + 2) = 0LL;
          v11[47] = 1;
          v11[46] = 1;
        }
        ExFreePoolWithTag(String2.Buffer, 0);
        return (unsigned int)started;
      }
      ExFreePoolWithTag(String2.Buffer, 0);
    }
    v11 = *(char **)v11;
    v10 = (char *)IopGroupTable + v9;
  }
  started = -1073741823;
  if ( (unsigned int)PipIs32bitKey(KeyHandle) )
    return (unsigned int)-1073740948;
  return (unsigned int)started;
}
