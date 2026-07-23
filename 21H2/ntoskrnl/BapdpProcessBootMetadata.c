/*
 * XREFs of BapdpProcessBootMetadata @ 0x140A42040
 * Callers:
 *     BootApplicationPersistentDataProcess @ 0x140A4217C (BootApplicationPersistentDataProcess.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     BapdpQueryData @ 0x140A42734 (BapdpQueryData.c)
 */

unsigned int *__fastcall BapdpProcessBootMetadata(__int64 a1)
{
  unsigned int *result; // rax
  __int64 v2; // rcx
  unsigned int *v3; // rdi
  unsigned int v4; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v5[4]; // [rsp+38h] [rbp-18h] BYREF

  ExSoftRebootFlags = 0;
  ExSoftRebootState = 0;
  ExBootLoaderMetadata = 0LL;
  v5[0] = 1527004268;
  v5[1] = 1201445829;
  v5[2] = 1736995215;
  v5[3] = 1054971003;
  if ( (qword_140C197B8 & 4) != 0 )
  {
    ExSoftRebootState = 2;
    ExSoftRebootFlags = 2;
  }
  v4 = 0;
  result = (unsigned int *)BapdpQueryData(a1, v5, 0LL, 0LL, &v4);
  if ( (_DWORD)result == -1073741789 )
  {
    result = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v4 + 4LL, 0x64506142u);
    v3 = result;
    if ( result )
    {
      BapdpQueryData(v2, v5, 0LL, result + 1, &v4);
      *v3 = v4;
      ExBootLoaderMetadata = (__int64)v3;
      result = (unsigned int *)KsrInitPageDatabase(v3 + 1);
      if ( (int)result >= 0 )
        ExSoftRebootFlags |= 4u;
    }
  }
  return result;
}
