/*
 * XREFs of sub_1800E45D0 @ 0x1800E45D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D7588 @ 0x1800D7588 (sub_1800D7588.c)
 *     sub_1800E3F00 @ 0x1800E3F00 (sub_1800E3F00.c)
 */

__int64 __fastcall sub_1800E45D0(__int64 a1, __int64 a2, _OWORD *a3, __int64 a4, unsigned int a5, __int64 a6)
{
  _OWORD *v7; // rdi
  int v10; // eax
  unsigned int v11; // ebp
  __int64 v13; // rcx
  _OWORD *v14; // rax
  __int64 v15; // rdx
  __int128 v16; // xmm1
  __int64 v17; // rax
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rcx
  signed __int64 v21; // rax
  signed __int64 v22; // rtt
  _UNKNOWN *retaddr; // [rsp+48h] [rbp+0h]

  v7 = a3;
  v10 = (*(__int64 (__fastcall **)(_QWORD, _OWORD *, __int64, __int64))(**(_QWORD **)(a1 + 80) + 24LL))(
          *(_QWORD *)(a1 + 80),
          a3,
          a4,
          a6);
  v11 = v10;
  if ( v10 >= 0 )
  {
    v13 = 2LL;
    v14 = (_OWORD *)(a1 + 272);
    v15 = 128LL;
    do
    {
      *v14 = *v7;
      v14[1] = v7[1];
      v14[2] = v7[2];
      v14[3] = v7[3];
      v14[4] = v7[4];
      v14[5] = v7[5];
      v14[6] = v7[6];
      v14 += 8;
      v16 = v7[7];
      v7 += 8;
      *(v14 - 1) = v16;
      --v13;
    }
    while ( v13 );
    *v14 = *v7;
    v14[1] = v7[1];
    v14[2] = v7[2];
    v17 = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(a1 + 400) = v17;
    v18 = *(unsigned __int16 *)(v17 + 16);
    v19 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 392) = v18 + 18;
    *(_QWORD *)(a1 + 424) = v19;
    v20 = *(_QWORD *)(a1 + 576);
    if ( v20 != a4 )
    {
      if ( a4 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a4 + 8LL))(a4, 128LL);
        v20 = *(_QWORD *)(a1 + 576);
      }
      *(_QWORD *)(a1 + 576) = a4;
      if ( v20 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 16LL))(v20, v15);
    }
    *(_QWORD *)(a6 + 48) = a1 & -(__int64)(a1 != 8);
    v21 = *(_QWORD *)(a1 + 264);
    while ( v21 >= 0 )
    {
      if ( (_DWORD)v21 != 0x7FFFFFFF )
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 264), v21 + 1, v21);
        if ( v22 != v21 )
          continue;
      }
      goto LABEL_16;
    }
    sub_1800D7588((volatile signed __int32 *)(2 * v21 + 16));
LABEL_16:
    sub_1800E3F00(a1, a2, a6, a5);
    return 0LL;
  }
  else
  {
    sub_18004BD84((int)retaddr, 1402, (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp", v10);
    return v11;
  }
}
