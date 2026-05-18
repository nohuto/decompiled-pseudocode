/*
 * XREFs of sub_18003BE80 @ 0x18003BE80
 * Callers:
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     sub_18003BBF4 @ 0x18003BBF4 (sub_18003BBF4.c)
 */

__int64 __fastcall sub_18003BE80(_QWORD *a1, __int64 a2, char a3, float *a4, _QWORD *a5)
{
  _QWORD *v8; // r9
  __int64 *v9; // rax
  char v10; // r8
  float v11; // xmm1_4
  float v12; // xmm0_4
  __int64 result; // rax
  __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *(__int64 **)(*a1 + 8LL);
  v10 = 1;
  if ( !*((_BYTE *)v9 + 25) )
  {
    v11 = *a4;
    do
    {
      v8 = v9;
      v12 = *((float *)v9 + 8);
      if ( a3 )
        v10 = v12 <= v11;
      else
        v10 = v11 > v12;
      if ( v10 )
        v9 = (__int64 *)*v9;
      else
        v9 = (__int64 *)v9[2];
    }
    while ( !*((_BYTE *)v9 + 25) );
  }
  try
  {
    *(_QWORD *)a2 = *sub_18003BBF4(a1, &v15, v10, v8, (int)a4, a5);
    *(_BYTE *)(a2 + 8) = 1;
    result = a2;
  }
  catch ( ... )
  {
    sub_18003CF58(a1, a5);
    throw;
  }
  return result;
}
