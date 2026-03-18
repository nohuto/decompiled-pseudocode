/*
 * XREFs of UserPostNKAPCBuffer @ 0x1C0122670
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 *     memmove @ 0x1C00D2F00 (memmove.c)
 */

__int64 __fastcall UserPostNKAPCBuffer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, void *Src, size_t Size)
{
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  char v16; // [rsp+30h] [rbp-28h]

  v10 = Win32AllocPoolNonPaged((unsigned int)Size + 88LL, 0x616E7355u);
  v11 = v10;
  if ( v10 )
  {
    v12 = v10 + 88;
    memmove((void *)(v10 + 88), Src, (unsigned int)Size);
    v16 = 0;
    KeInitializeApc(v11, a1, 0LL, a2, a3, a4, v16, v12);
    if ( (unsigned __int8)KeInsertQueueApc(v11, v11, 0LL, 0LL) )
      return 1LL;
    Win32FreePool(v11, v13, v14);
  }
  return 0LL;
}
