/*
 * XREFs of sub_1800195E0 @ 0x1800195E0
 * Callers:
 *     sub_180019050 @ 0x180019050 (sub_180019050.c)
 * Callees:
 *     sub_180009CF0 @ 0x180009CF0 (sub_180009CF0.c)
 *     sub_180017C9C @ 0x180017C9C (sub_180017C9C.c)
 *     sub_18001934C @ 0x18001934C (sub_18001934C.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800195E0(__int64 a1, __int64 a2, __int64 a3, char *a4, _QWORD *a5)
{
  _QWORD *v7; // r15
  __int64 *v8; // rsi
  __int64 *v9; // r11
  __int64 *v10; // rbx
  char v11; // r14
  char v12; // al
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _QWORD *v19; // r11
  void *v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // [rsp+20h] [rbp-28h]
  __int64 v23; // [rsp+50h] [rbp+8h] BYREF

  v7 = (_QWORD *)a1;
  v8 = *(__int64 **)a1;
  v9 = *(__int64 **)a1;
  v10 = *(__int64 **)(*(_QWORD *)a1 + 8LL);
  v11 = 1;
  while ( !*((_BYTE *)v10 + 25) )
  {
    v12 = sub_180017C9C(a1, a4, (__int64)(v10 + 4));
    v11 = v12;
    if ( v12 )
      v10 = (__int64 *)*v10;
    else
      v10 = (__int64 *)v10[2];
  }
  try
  {
    v13 = (__int64)v9;
    v14 = (__int64)v9;
    if ( v11 )
    {
      if ( v9 == (__int64 *)*v8 )
      {
        *(_QWORD *)a2 = *sub_18001934C(v7, &v23, 1, v9, v22, a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v13 = v9[2];
      }
      else
      {
        v17 = *v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v18 = v9[1];
          if ( !*(_BYTE *)(v18 + 25) )
          {
            a1 = (__int64)v9;
            do
            {
              v14 = a1;
              if ( a1 != *(_QWORD *)v18 )
                break;
              v13 = v18;
              v18 = *(_QWORD *)(v18 + 8);
              a1 = v13;
              v14 = v13;
            }
            while ( !*(_BYTE *)(v18 + 25) );
          }
          if ( !*(_BYTE *)(v13 + 25) )
          {
            v13 = v18;
            v14 = v18;
          }
          goto LABEL_21;
        }
        do
        {
          v13 = v17;
          v17 = *(_QWORD *)(v17 + 16);
        }
        while ( !*(_BYTE *)(v17 + 25) );
      }
      v14 = v13;
    }
LABEL_21:
    if ( (unsigned __int8)sub_180017C9C(a1, (char *)(v14 + 32), (__int64)a4) )
    {
      *(_QWORD *)a2 = *sub_18001934C(v7, &v23, v11, v19, v22, a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v20 = a5;
      v21 = a5[8];
      if ( v21 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
      sub_180009CF0((__int64)v20 + 32);
      sub_180039D98(v20);
      *(_QWORD *)a2 = v13;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    sub_180019300(v15, a5);
    throw;
  }
  return result;
}
