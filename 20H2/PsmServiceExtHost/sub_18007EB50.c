/*
 * XREFs of sub_18007EB50 @ 0x18007EB50
 * Callers:
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 * Callees:
 *     sub_1800067F0 @ 0x1800067F0 (sub_1800067F0.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18002B21C @ 0x18002B21C (sub_18002B21C.c)
 */

char __fastcall sub_18007EB50(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // edx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char result; // al
  char v10; // [rsp+60h] [rbp+8h] BYREF
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF
  __int64 v13; // [rsp+78h] [rbp+20h] BYREF

  v2 = a2 + 704;
  RtlRbRemoveNode(a1 + 56, a2 + 704);
  *(_QWORD *)(v2 + 16) = -1LL;
  if ( (((unsigned __int64)*(unsigned int *)(a2 + 648) >> 26) & 7) == 0 )
    --*(_DWORD *)(a1 + 92);
  if ( sub_1800067F0(a2, v5) )
  {
    v8 = (unsigned int)(*(_DWORD *)(a1 + 88) - 1);
    *(_DWORD *)(a1 + 88) = v8;
    if ( (unsigned int)dword_1800B3218 > 5 )
    {
      v12 = *(_QWORD *)(a2 - 32);
      v13 = *(_QWORD *)a1;
      v10 = 0;
      v11 = v8;
      sub_18002B21C(v8, (int)&unk_1800A0AA2, v6, v7, (__int64)&v13, (__int64)&v11, (__int64)&v12, (__int64)&v10);
    }
  }
  result = sub_1800286D8(a1);
  *(_QWORD *)(a2 + 688) = 0LL;
  return result;
}
