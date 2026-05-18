/*
 * XREFs of sub_18001BCF4 @ 0x18001BCF4
 * Callers:
 *     sub_18001B4B8 @ 0x18001B4B8 (sub_18001B4B8.c)
 * Callees:
 *     sub_18001C2F4 @ 0x18001C2F4 (sub_18001C2F4.c)
 *     memcmp @ 0x18012398E (memcmp.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18001BCF4(__int64 a1, __int64 a2, unsigned __int64 a3, const void *a4, size_t Size)
{
  unsigned __int64 v6; // rbx
  __int64 v9; // r8
  int v10; // ecx
  __int64 v12; // [rsp+20h] [rbp-58h] BYREF
  __int16 v13; // [rsp+28h] [rbp-50h] BYREF
  char v14; // [rsp+2Ah] [rbp-4Eh]
  int v15; // [rsp+2Ch] [rbp-4Ch]
  unsigned __int16 v16; // [rsp+30h] [rbp-48h]
  void *Buf2[2]; // [rsp+38h] [rbp-40h]

  v13 = *(_WORD *)(a1 + 6);
  v14 = *(_BYTE *)(a1 + 8);
  v6 = a3;
  v15 = 0;
  v16 = 0;
  *(_OWORD *)Buf2 = 0LL;
  while ( v6 )
  {
    v9 = *(_QWORD *)(a1 + 32);
    v12 = a2 + *(_QWORD *)(a1 + 16) * (v6 >> 1);
    sub_18001C2F4(&v13, &v12, v9);
    if ( Size == v16 )
      v10 = memcmp(a4, Buf2[1], Size);
    else
      v10 = Size - v16;
    if ( v10 <= 0 )
    {
      v6 >>= 1;
    }
    else
    {
      a2 = v12;
      v6 += -1LL - (v6 >> 1);
    }
  }
  return a2;
}
