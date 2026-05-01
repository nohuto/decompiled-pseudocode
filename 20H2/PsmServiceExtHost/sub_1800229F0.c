/*
 * XREFs of sub_1800229F0 @ 0x1800229F0
 * Callers:
 *     sub_18000407C @ 0x18000407C (sub_18000407C.c)
 *     sub_180006B7C @ 0x180006B7C (sub_180006B7C.c)
 *     sub_180022888 @ 0x180022888 (sub_180022888.c)
 *     sub_1800233B4 @ 0x1800233B4 (sub_1800233B4.c)
 *     sub_18007AA80 @ 0x18007AA80 (sub_18007AA80.c)
 *     sub_18007AC0C @ 0x18007AC0C (sub_18007AC0C.c)
 * Callees:
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180032B80 @ 0x180032B80 (sub_180032B80.c)
 */

__int64 __fastcall sub_1800229F0(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // edi
  int v8; // eax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v12; // [rsp+30h] [rbp+8h] BYREF

  v3 = *a1 + 216LL;
  v12 = a2;
  v4 = v3 + 16;
  RtlAcquireSRWLockShared(v3 + 16);
  v5 = *(_QWORD *)(v3 + 8);
  v6 = *(_QWORD *)v3;
  if ( (v5 & 1) != 0 && v6 )
    v6 ^= v3;
  v7 = v5 & 1;
  while ( v6 )
  {
    v8 = sub_180032B80(&v12, v6);
    if ( v8 >= 0 )
    {
      if ( v8 <= 0 )
        break;
      v9 = *(_QWORD *)(v6 + 8);
      if ( v7 && v9 )
      {
LABEL_20:
        v6 ^= v9;
        continue;
      }
    }
    else
    {
      v9 = *(_QWORD *)v6;
      if ( v7 && v9 )
        goto LABEL_20;
    }
    v6 = v9;
  }
  v10 = v6;
  if ( v6 )
  {
    if ( *(_QWORD *)(v6 + 24) )
    {
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 + 24)) <= 1 )
        __fastfail(0xEu);
    }
    else
    {
      v10 = 0LL;
    }
  }
  RtlReleaseSRWLockShared(v4);
  if ( v10 )
  {
    if ( *(_QWORD **)(v10 + 64) == a1 )
      return v10;
    sub_1800274E0(v10);
  }
  return 0LL;
}
