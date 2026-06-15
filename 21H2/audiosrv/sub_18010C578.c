/*
 * XREFs of sub_18010C578 @ 0x18010C578
 * Callers:
 *     sub_18010D0D0 @ 0x18010D0D0 (sub_18010D0D0.c)
 *     sub_18010D340 @ 0x18010D340 (sub_18010D340.c)
 * Callees:
 *     memcmp @ 0x180074433 (memcmp.c)
 *     sub_18010C668 @ 0x18010C668 (sub_18010C668.c)
 */

__int64 __fastcall sub_18010C578(__int64 **a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 *v4; // rsi
  __int64 *v8; // rbx
  __int128 v9; // xmm1
  _QWORD *v10; // rax
  __int128 Buf2; // [rsp+30h] [rbp-38h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-28h] BYREF
  _OWORD *v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a1;
  v8 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_10;
  Buf2 = *a3;
  do
  {
    Buf1 = *((_OWORD *)v8 + 2);
    if ( memcmp(&Buf1, &Buf2, 0x10uLL) >= 0 )
    {
      v4 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v4 == *a1 || (v9 = *a3, Buf1 = *((_OWORD *)v4 + 2), Buf2 = v9, memcmp(&Buf2, &Buf1, 0x10uLL) < 0) )
  {
LABEL_10:
    v14 = a3;
    v10 = (_QWORD *)sub_18010C668((_DWORD)a1, (unsigned int)&v15, (_DWORD)v4, a4, (__int64)&v14);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v10;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
