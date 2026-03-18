/*
 * XREFs of UserPostNKAPC @ 0x1C00C6B30
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPoolNonPaged @ 0x1C00912D0 (Win32AllocPoolNonPaged.c)
 */

__int64 __fastcall UserPostNKAPC(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  char v14; // [rsp+30h] [rbp-18h]

  v9 = Win32AllocPoolNonPaged(96LL, 0x616E7355u);
  v10 = v9;
  if ( v9 )
  {
    v14 = 0;
    KeInitializeApc(v9, a1, 0LL, a2, a3, a4, v14, a5);
    if ( (unsigned __int8)KeInsertQueueApc(v10, v10, 0LL, 0LL) )
      return 1LL;
    Win32FreePool(v10, v11, v12);
  }
  return 0LL;
}
