/*
 * XREFs of sub_180042E70 @ 0x180042E70
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B954 @ 0x18002B954 (sub_18002B954.c)
 */

__int64 __fastcall sub_180042E70(__int64 a1, int a2, int *a3)
{
  __int64 v3; // rax
  __int64 v6; // rdi
  int v7; // eax
  int v8; // ecx
  BOOL v9; // eax
  BOOL v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 64LL;
  if ( a2 != 8 )
    v3 = 88LL;
  v6 = a1 - v3;
  RtlAcquireSRWLockExclusive(a1 - v3 + 8);
  *(_DWORD *)(v6 + 16) = GetCurrentThreadId();
  v7 = *a3;
  if ( a2 == 8 )
  {
    v8 = (unsigned int)(v7 - 1) <= 0xFFFFFFFD;
    *(_DWORD *)(v6 + 112) = v8;
  }
  else
  {
    if ( v7 )
      v7 = ((unsigned int)a3[1] >> 1) & 1;
    v8 = *(_DWORD *)(v6 + 112);
    *(_DWORD *)(v6 + 116) = v7;
  }
  v9 = v8 && !*(_DWORD *)(v6 + 116);
  v11 = v9;
  sub_18002B954((void **)v6, &v11, 4uLL, 1);
  *(_DWORD *)(v6 + 16) = 0;
  return RtlReleaseSRWLockExclusive(v6 + 8);
}
