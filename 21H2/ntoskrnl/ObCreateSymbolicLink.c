/*
 * XREFs of ObCreateSymbolicLink @ 0x14060A95C
 * Callers:
 *     NtCreateSymbolicLinkObject @ 0x14060A650 (NtCreateSymbolicLinkObject.c)
 *     MiCreateMemoryEvent @ 0x1407A0A00 (MiCreateMemoryEvent.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     ObCreateObjectEx @ 0x14071BBF0 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     RtlIsSandboxedToken @ 0x14071C8A0 (RtlIsSandboxedToken.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ObCreateSymbolicLink(__int64 *a1, __int64 a2, int a3, __int64 a4, char a5)
{
  __int64 *v6; // r12
  int Object; // esi
  PVOID PoolWithTag; // rax
  __int64 v10; // [rsp+58h] [rbp-10h] BYREF

  v6 = a1;
  v10 = 0LL;
  LOBYTE(a1) = a5;
  Object = ObCreateObjectEx((_DWORD)a1, (_DWORD)ObpSymbolicLinkObjectType, a3, a5);
  if ( Object >= 0 )
  {
    MEMORY[0] = MEMORY[0xFFFFF78000000014];
    MEMORY[0x18] = 0;
    MEMORY[0x1C] = 0;
    if ( (*(_DWORD *)a4 & 1) != 0 )
    {
      MEMORY[0x1C] = 16;
      MEMORY[8] = *(_QWORD *)(a4 + 8);
      MEMORY[0x10] = *(_QWORD *)(a4 + 16);
    }
    else
    {
      MEMORY[0xA] = *(_WORD *)(a4 + 10);
      MEMORY[8] = *(_WORD *)(a4 + 8);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned __int16 *)(a4 + 10), 0x746D7953u);
      MEMORY[0x10] = PoolWithTag;
      if ( !PoolWithTag )
        return (unsigned int)-1073741801;
      memmove(PoolWithTag, *(const void **)(a4 + 16), *(unsigned __int16 *)(a4 + 10));
    }
    if ( (unsigned __int8)RtlIsSandboxedToken(0LL) )
      MEMORY[0x1C] |= 2u;
    Object = ObInsertObjectEx(0LL, 0LL, 0, 0LL, (__int64)&v10);
    if ( Object >= 0 )
    {
      *v6 = v10;
      return 0;
    }
  }
  return (unsigned int)Object;
}
