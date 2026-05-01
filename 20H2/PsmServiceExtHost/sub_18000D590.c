/*
 * XREFs of sub_18000D590 @ 0x18000D590
 * Callers:
 *     sub_18000B9A8 @ 0x18000B9A8 (sub_18000B9A8.c)
 * Callees:
 *     sub_18000CE90 @ 0x18000CE90 (sub_18000CE90.c)
 *     sub_180010220 @ 0x180010220 (sub_180010220.c)
 *     sub_180010360 @ 0x180010360 (sub_180010360.c)
 *     sub_180030B20 @ 0x180030B20 (sub_180030B20.c)
 *     sub_180033EE8 @ 0x180033EE8 (sub_180033EE8.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 */

__int64 __fastcall sub_18000D590(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // ebx
  __int64 v7; // rax
  char *Heap; // rax
  char *v9; // rbx
  __int64 v10; // r8
  _OWORD *v11; // rdx
  _OWORD *v12; // rax
  __int128 v13; // xmm1
  _BYTE v15[544]; // [rsp+20h] [rbp-418h] BYREF
  _BYTE v16[464]; // [rsp+240h] [rbp-1F8h] BYREF

  v6 = sub_180010220(a2, v16);
  if ( v6 >= 0 )
  {
    sub_180010360(v16, a2 + 464, *(unsigned int *)(a2 + 532), v15);
    v7 = sub_18000CE90(a1, (unsigned __int64)v15);
    if ( v7 )
    {
      *a3 = v7;
    }
    else
    {
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x248uLL);
      v9 = Heap;
      if ( !Heap )
        return (unsigned int)-1073741801;
      memset(Heap, 0, 0x248uLL);
      v10 = 4LL;
      v11 = v9 + 16;
      v12 = v15;
      do
      {
        *v11 = *v12;
        v11[1] = v12[1];
        v11[2] = v12[2];
        v11[3] = v12[3];
        v11[4] = v12[4];
        v11[5] = v12[5];
        v11[6] = v12[6];
        v11 += 8;
        v13 = v12[7];
        v12 += 8;
        *(v11 - 1) = v13;
        --v10;
      }
      while ( v10 );
      *v11 = *v12;
      *((_QWORD *)v11 + 2) = *((_QWORD *)v12 + 2);
      *((_QWORD *)v9 + 1) = sub_180030B20(v9 + 16, v11, 0LL, 128LL);
      sub_180033EE8(a1, v9);
      *a3 = (__int64)v9;
    }
    return 0;
  }
  return (unsigned int)v6;
}
