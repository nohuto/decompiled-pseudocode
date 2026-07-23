/*
 * XREFs of ExpSetTimer @ 0x140376640
 * Callers:
 *     NtSetTimer @ 0x1403764F0 (NtSetTimer.c)
 * Callees:
 *     ExpSetTimerObject2 @ 0x14026E4AC (ExpSetTimerObject2.c)
 *     ExpSetTimerObject @ 0x1402EDC70 (ExpSetTimerObject.c)
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall ExpSetTimer(
        void *a1,
        KPROCESSOR_MODE a2,
        __int64 *a3,
        volatile signed __int32 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        unsigned int a8,
        unsigned int a9,
        _BYTE *a10)
{
  NTSTATUS result; // eax
  struct _OBJECT_TYPE *v14; // rax
  PVOID Object; // [rsp+50h] [rbp-18h] BYREF

  Object = 0LL;
  result = ObReferenceObjectByHandle(a1, 2u, 0LL, a2, &Object, 0LL);
  if ( result >= 0 )
  {
    v14 = (struct _OBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    if ( v14 == ExpIRTimerObjectType )
    {
      if ( a4 || a5 || a6 || a9 || a10 )
      {
        ObfDereferenceObjectWithTag(Object, 0x746C6644u);
        return -1073741811;
      }
      else
      {
        return ExpSetTimerObject2(Object, a3, 10000LL * a8, 0LL);
      }
    }
    else if ( v14 == ExTimerObjectType )
    {
      return ExpSetTimerObject((ULONG_PTR)Object, a2, a3, a4, a5, a6, a7, a8, a9, a10);
    }
    else
    {
      ObfDereferenceObjectWithTag(Object, 0x746C6644u);
      return -1073741788;
    }
  }
  return result;
}
