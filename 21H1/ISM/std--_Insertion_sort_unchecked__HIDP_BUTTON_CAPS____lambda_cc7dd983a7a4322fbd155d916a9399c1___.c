/*
 * XREFs of std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CAC94
 * Callers:
 *     std::_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___ @ 0x1800CB754 (std--_Sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___.c)
 * Callees:
 *     memmove_0 @ 0x18004AC87 (memmove_0.c)
 *     _lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator() @ 0x1800CBB98 (_lambda_cc7dd983a7a4322fbd155d916a9399c1_--operator().c)
 */

char *__fastcall std::_Insertion_sort_unchecked__HIDP_BUTTON_CAPS____lambda_cc7dd983a7a4322fbd155d916a9399c1___(
        char *Src,
        char *a2)
{
  char *v4; // rbp
  char *i; // rbx
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // xmm4_8
  char v10; // al
  char *v11; // rcx
  char *v12; // r8
  __int64 v13; // rcx
  __int64 v14; // xmm4_8
  __int128 v16; // [rsp+20h] [rbp-98h]
  _OWORD v17[4]; // [rsp+60h] [rbp-58h] BYREF
  __int64 v18; // [rsp+A0h] [rbp-18h]
  __int64 v19; // [rsp+C0h] [rbp+8h]

  if ( Src != a2 )
  {
    v4 = Src + 72;
    for ( i = Src + 72; i != a2; i += 72 )
    {
      v6 = *((_OWORD *)i + 1);
      v7 = *((_OWORD *)i + 2);
      v8 = *((_OWORD *)i + 3);
      v9 = *((_QWORD *)i + 8);
      v16 = *(_OWORD *)i;
      v17[0] = *(_OWORD *)i;
      v17[1] = v6;
      v17[2] = v7;
      v17[3] = v8;
      v19 = v9;
      v18 = v9;
      v10 = lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(i, v17, Src);
      v12 = i;
      if ( v10 )
      {
        memmove_0(v4, Src, i - Src);
        *(_OWORD *)Src = v16;
        *((_OWORD *)Src + 1) = v6;
        *((_OWORD *)Src + 2) = v7;
        *((_OWORD *)Src + 3) = v8;
        *((_QWORD *)Src + 8) = v19;
      }
      else
      {
        while ( (unsigned __int8)lambda_cc7dd983a7a4322fbd155d916a9399c1_::operator()(v11, v17, v12 - 72) )
        {
          *(_OWORD *)v13 = *(_OWORD *)v12;
          *(_OWORD *)(v13 + 16) = *((_OWORD *)v12 + 1);
          *(_OWORD *)(v13 + 32) = *((_OWORD *)v12 + 2);
          *(_OWORD *)(v13 + 48) = *((_OWORD *)v12 + 3);
          *(_QWORD *)(v13 + 64) = *((_QWORD *)v12 + 8);
          v11 = v12;
        }
        *(_OWORD *)v13 = v16;
        *(_OWORD *)(v13 + 16) = v6;
        *(_OWORD *)(v13 + 32) = v7;
        *(_OWORD *)(v13 + 48) = v8;
        *(_QWORD *)(v13 + 64) = v14;
      }
    }
  }
  return a2;
}
