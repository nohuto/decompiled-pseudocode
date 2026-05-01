/*
 * XREFs of sub_18004135C @ 0x18004135C
 * Callers:
 *     sub_180040B34 @ 0x180040B34 (sub_180040B34.c)
 * Callees:
 *     sub_180041408 @ 0x180041408 (sub_180041408.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18004135C(__int64 a1)
{
  int v2; // ebx
  unsigned int v3; // r10d
  unsigned int i; // r9d
  char *v5; // r8
  unsigned __int64 v7; // rdx
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  P = 0LL;
  v2 = sub_180041408(&P, &v8);
  if ( v2 >= 0 )
  {
    memset((void *)(a1 + 408), 0, 0xA0uLL);
    v3 = v8;
    for ( i = 0; i < v3; i += *(_DWORD *)v5 )
    {
      v5 = (char *)P + i;
      if ( !*((_DWORD *)v5 + 1) && (v5[19] & 2) != 0 )
      {
        v7 = (unsigned __int64)(unsigned int)(*((_DWORD *)v5 + 2) - 256) >> 16;
        *(_QWORD *)(a1 + 408 + 8 * v7) |= 1LL << v5[8];
      }
    }
    v2 = 0;
  }
  if ( P )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return (unsigned int)v2;
}
