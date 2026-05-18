/*
 * XREFs of sub_1800AA7E0 @ 0x1800AA7E0
 * Callers:
 *     sub_1800A4C58 @ 0x1800A4C58 (sub_1800A4C58.c)
 * Callees:
 *     sub_18000FC14 @ 0x18000FC14 (sub_18000FC14.c)
 *     memmove @ 0x180123982 (memmove.c)
 */

__int64 __fastcall sub_1800AA7E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v5; // rsi
  _BYTE *v9; // rdi
  size_t v10; // rdx
  const char *v11; // rdx
  const char *v12; // r9
  _BYTE *v13; // rdi
  __int64 v14; // rdi

  *(_DWORD *)(a1 + 104) = 40960;
  v5 = (__int64 *)(a1 + 72);
  if ( *(_QWORD *)(a1 + 96) < 9uLL )
  {
    sub_18000FC14((__int64 *)(a1 + 72), 9uLL, 0LL, "<unknown>");
  }
  else
  {
    v9 = (_BYTE *)(a1 + 72);
    if ( *(_QWORD *)(a1 + 96) >= 0x10uLL )
      v9 = (_BYTE *)*v5;
    *(_QWORD *)(a1 + 88) = 9LL;
    memmove(v9, "<unknown>", 9uLL);
    v9[9] = 0;
  }
  if ( *(int *)(a1 + 104) < 40960 )
  {
    if ( *(int *)(a1 + 104) >= 37632 )
      goto LABEL_8;
    if ( *(int *)(a1 + 104) >= 37120 )
    {
      v10 = 21LL;
      if ( (unsigned __int64)v5[3] >= 0x15 )
      {
        v5[2] = 21LL;
        v11 = "ShaderModel40_Level91";
        goto LABEL_20;
      }
      v12 = "ShaderModel40_Level91";
LABEL_22:
      sub_18000FC14(v5, v10, 0LL, v12);
    }
  }
  else
  {
    if ( (*(_BYTE *)(a2 + 560) & 4) != 0 )
    {
LABEL_8:
      v10 = 21LL;
      if ( (unsigned __int64)v5[3] >= 0x15 )
      {
        v5[2] = 21LL;
        v11 = "ShaderModel40_Level93";
LABEL_20:
        v14 = *v5;
        memmove((void *)*v5, v11, 0x15uLL);
        *(_BYTE *)(v14 + 21) = 0;
        return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
      }
      v12 = "ShaderModel40_Level93";
      goto LABEL_22;
    }
    v10 = 13LL;
    if ( (unsigned __int64)v5[3] < 0xD )
    {
      v12 = "ShaderModel40";
      goto LABEL_22;
    }
    v13 = v5;
    if ( (unsigned __int64)v5[3] >= 0x10 )
      v13 = (_BYTE *)*v5;
    v5[2] = 13LL;
    memmove(v13, "ShaderModel40", 0xDuLL);
    v13[13] = 0;
  }
  return (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 128LL))(a1, a3, a4);
}
