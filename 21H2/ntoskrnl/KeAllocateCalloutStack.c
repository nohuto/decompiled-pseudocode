/*
 * XREFs of KeAllocateCalloutStack @ 0x1407C7A40
 * Callers:
 *     <none>
 * Callees:
 *     KeAllocateCalloutStackEx @ 0x140780360 (KeAllocateCalloutStackEx.c)
 */

__int64 __fastcall KeAllocateCalloutStack(char a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0LL;
  v1 = KeAllocateCalloutStackEx(a1 != 0, 1u, 0LL, &v4);
  v2 = v4;
  if ( v1 < 0 )
    return 0LL;
  return v2;
}
