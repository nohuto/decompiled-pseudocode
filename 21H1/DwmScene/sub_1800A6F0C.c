/*
 * XREFs of sub_1800A6F0C @ 0x1800A6F0C
 * Callers:
 *     sub_1800AC6E0 @ 0x1800AC6E0 (sub_1800AC6E0.c)
 * Callees:
 *     sub_1800A5D24 @ 0x1800A5D24 (sub_1800A5D24.c)
 *     sub_1800A5F74 @ 0x1800A5F74 (sub_1800A5F74.c)
 *     sub_1800A6908 @ 0x1800A6908 (sub_1800A6908.c)
 */

__int64 __fastcall sub_1800A6F0C(__int64 **a1, __int64 a2, _DWORD *a3)
{
  __int64 *v3; // rdi
  __int64 v7; // rbx
  __int64 v8; // rdx
  _DWORD *v9; // rax
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF
  _DWORD *v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = *a1;
  v7 = (*a1)[1];
  while ( !*(_BYTE *)(v7 + 25) )
  {
    if ( sub_1800A5D24((_DWORD *)(v7 + 32), (__int64)a3) )
    {
      v7 = *(_QWORD *)(v7 + 16);
    }
    else
    {
      v3 = (__int64 *)v7;
      v7 = *(_QWORD *)v7;
    }
  }
  if ( v3 == *a1 || sub_1800A5D24(a3, (__int64)(v3 + 4)) )
  {
    v8 = (__int64)*a1;
    v12 = a3;
    v9 = sub_1800A5F74((__int64)a1, v8, (__int64)&unk_1801D148E, &v12);
    sub_1800A6908(a1, &v11, v3, v9 + 8, v9);
    *(_QWORD *)a2 = v11;
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v3;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
