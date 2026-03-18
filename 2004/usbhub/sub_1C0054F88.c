/*
 * XREFs of sub_1C0054F88 @ 0x1C0054F88
 * Callers:
 *     sub_1C0037720 @ 0x1C0037720 (sub_1C0037720.c)
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0011220 @ 0x1C0011220 (sub_1C0011220.c)
 *     sub_1C00177A8 @ 0x1C00177A8 (sub_1C00177A8.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0054F88(__int64 a1, __int64 a2, _WORD *a3)
{
  _DWORD *v6; // rax
  POOL_TYPE v7; // ecx
  _DWORD *v8; // rdi
  unsigned __int16 *PoolWithTag; // rax
  unsigned __int16 *v10; // rsi
  int v11; // ebx
  __m128 *v12; // rax
  __int64 v13; // r9
  void *v14; // rcx
  __int16 v16; // [rsp+98h] [rbp+20h] BYREF
  int v17; // [rsp+9Ah] [rbp+22h]
  unsigned __int16 v18; // [rsp+9Eh] [rbp+26h]

  v6 = sub_1C0011220(a2);
  v7 = PoolType;
  v16 = 1664;
  v8 = v6;
  v17 = 3840;
  v18 = 5;
  *(_DWORD *)a3 = 5;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(v7, 5uLL, 0x42554855u);
  v10 = PoolWithTag;
  if ( PoolWithTag )
  {
    *(_DWORD *)PoolWithTag = 0;
    *((_BYTE *)PoolWithTag + 4) = 0;
    v11 = sub_1C00177A8(a1, a2, &v16, (__int64)PoolWithTag, a3);
    if ( (v11 & 0xC0000000) == 0xC0000000 )
    {
      v8[705] = 1073807371;
    }
    else
    {
      v12 = (__m128 *)ExAllocatePoolWithTag(PoolType, v10[1], 0x42554855u);
      *((_QWORD *)v8 + 300) = v12;
      if ( v12 && (sub_1C001D340(v12, 0, v10[1]), (v13 = *((_QWORD *)v8 + 300)) != 0) )
      {
        v18 = v10[1];
        *(_DWORD *)a3 = v18;
        v11 = sub_1C00177A8(a1, a2, &v16, v13, a3);
      }
      else
      {
        v11 = -1073741670;
      }
    }
    ExFreePoolWithTag(v10, 0);
  }
  else
  {
    v11 = -1073741670;
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    v14 = (void *)*((_QWORD *)v8 + 300);
    v8[705] = 1073807371;
    if ( v14 )
    {
      ExFreePoolWithTag(v14, 0);
      *((_QWORD *)v8 + 300) = 0LL;
    }
  }
  sub_1C000FD80(a1, 256, 1195528019, v11, 0LL);
  return (unsigned int)v11;
}
