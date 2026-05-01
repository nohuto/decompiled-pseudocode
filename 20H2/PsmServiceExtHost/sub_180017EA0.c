/*
 * XREFs of sub_180017EA0 @ 0x180017EA0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_180046950 @ 0x180046950 (sub_180046950.c)
 *     sub_18007D960 @ 0x18007D960 (sub_18007D960.c)
 * Callees:
 *     sub_1800030B4 @ 0x1800030B4 (sub_1800030B4.c)
 *     sub_180019CB0 @ 0x180019CB0 (sub_180019CB0.c)
 */

__int64 __fastcall sub_180017EA0(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v5; // rcx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF

  v1 = (_QWORD *)(a1 + 600);
  result = *v1 - 96LL;
  v3 = (unsigned int)-(*v1 != (_QWORD)v1);
  v4 = result & -(__int64)(*v1 != (_QWORD)v1);
  while ( v4 )
  {
    if ( *(_BYTE *)(v4 + 548) == 2 )
    {
      if ( *(_BYTE *)(v4 + 549) )
      {
        v6 = sub_180019CB0(v4, v3);
        if ( v6 )
        {
          if ( (unsigned int)dword_1800B3218 > 5 )
          {
            v9 = v6;
            v10 = *(_QWORD *)(v4 + 40);
            sub_1800030B4((int)&dword_1800B3218, (int)&unk_1800A1419, v7, v8, (__int64)&v10, (__int64)&v9);
          }
        }
      }
    }
    v3 = *(_QWORD *)(v4 + 96);
    v5 = *(_QWORD *)(v4 + 80);
    v4 = 0LL;
    result = v3 - 96;
    if ( v3 != v5 + 600 )
      v4 = v3 - 96;
  }
  return result;
}
