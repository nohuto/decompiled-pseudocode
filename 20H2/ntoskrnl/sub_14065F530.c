/*
 * XREFs of sub_14065F530 @ 0x14065F530
 * Callers:
 *     sub_1405D4348 @ 0x1405D4348 (sub_1405D4348.c)
 *     sub_14065D1C4 @ 0x14065D1C4 (sub_14065D1C4.c)
 *     sub_14065D248 @ 0x14065D248 (sub_14065D248.c)
 *     sub_14065E118 @ 0x14065E118 (sub_14065E118.c)
 *     sub_14065EE5C @ 0x14065EE5C (sub_14065EE5C.c)
 *     WbGetWarbirdThread @ 0x14065EEB0 (WbGetWarbirdThread.c)
 *     sub_14065F4CC @ 0x14065F4CC (sub_14065F4CC.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_14065F530(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4, int *a5)
{
  int v5; // ebp
  int v6; // edi
  int v11; // ebx
  int v12; // esi
  __int64 v13; // rax

  v5 = 0;
  v6 = *(_DWORD *)(a1 + 4) - 1;
  v11 = 0;
  v12 = -1073741198;
  if ( v6 >= 0 )
  {
    while ( 1 )
    {
      v11 = (v6 + v5) / 2;
      v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(a1 + 32))(
              *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16)),
              a2,
              a3);
      if ( !v13 )
        break;
      if ( v13 < 0 )
        v6 = v11 - 1;
      else
        v5 = ++v11;
      if ( v5 > v6 )
        goto LABEL_8;
    }
    v12 = 0;
  }
LABEL_8:
  if ( a5 )
    *a5 = v11;
  if ( a4 && v12 >= 0 )
    *a4 = *(_QWORD *)((unsigned int)(v11 * *(_DWORD *)a1) + *(_QWORD *)(a1 + 16));
  return (unsigned int)v12;
}
