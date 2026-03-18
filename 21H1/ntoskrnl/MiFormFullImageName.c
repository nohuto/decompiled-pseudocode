/*
 * XREFs of MiFormFullImageName @ 0x1407B55C8
 * Callers:
 *     MiResolveImageReferences @ 0x140745BF8 (MiResolveImageReferences.c)
 * Callees:
 *     MiAllocatePool @ 0x1402A0FB0 (MiAllocatePool.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     RtlAppendStringToString @ 0x140759410 (RtlAppendStringToString.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiFormFullImageName(unsigned __int16 *a1, const STRING *a2, STRING *a3)
{
  unsigned __int16 v4; // r9
  char *Pool; // rax
  NTSTATUS appended; // eax
  char *Buffer; // rcx

  v4 = a2->Length + 2 + *a1;
  a3->MaximumLength = v4;
  Pool = (char *)MiAllocatePool(256, v4, 0x54446D4Du);
  a3->Buffer = Pool;
  if ( Pool )
  {
    a3->Length = *a1;
    memmove(Pool, *((const void **)a1 + 1), *a1);
    appended = RtlAppendStringToString(a3, a2);
    Buffer = a3->Buffer;
    if ( appended >= 0 )
    {
      *(_WORD *)&Buffer[2 * ((unsigned __int64)a3->Length >> 1)] = 0;
      return 1LL;
    }
    ExFreePoolWithTag(Buffer, 0);
  }
  return 0LL;
}
