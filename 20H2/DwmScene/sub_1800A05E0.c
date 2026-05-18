/*
 * XREFs of sub_1800A05E0 @ 0x1800A05E0
 * Callers:
 *     sub_1800F2EE8 @ 0x1800F2EE8 (sub_1800F2EE8.c)
 * Callees:
 *     sub_18009E044 @ 0x18009E044 (sub_18009E044.c)
 *     sub_1800A0594 @ 0x1800A0594 (sub_1800A0594.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 *     ??2@YAPEAX_K@Z @ 0x18011E768 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall sub_1800A05E0(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v6; // edi
  _QWORD *v7; // rax
  const void **v8; // rax
  __int64 v9; // rcx
  _QWORD v11[3]; // [rsp+40h] [rbp-48h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp-30h]
  _BYTE v13[16]; // [rsp+60h] [rbp-28h] BYREF

  v6 = 0;
  *(_OWORD *)a2 = 0LL;
  *a2 = 0LL;
  a2[1] = 0LL;
  v7 = operator new(0x40uLL);
  *v7 = v7;
  v7[1] = v7;
  v7[2] = v7;
  *((_WORD *)v7 + 12) = 257;
  *a2 = (__int64)v7;
  do
  {
    if ( _bittest64(&a3, v6) )
    {
      v8 = (const void **)sub_1800A0594(a1, v11, v6);
      sub_18009E044(a2, (__int64)v13, 0, v8);
      if ( v12 >= 0x10 )
      {
        v9 = v11[0];
        if ( v12 + 1 >= 0x1000 )
        {
          v9 = *(_QWORD *)(v11[0] - 8LL);
          if ( (unsigned __int64)(v11[0] - v9 - 8) > 0x1F )
          {
            o__invalid_parameter_noinfo_noreturn(v9, v12 + 40);
            JUMPOUT(0x1800A06C9LL);
          }
        }
        j_j__o_free(v9);
      }
    }
    ++v6;
  }
  while ( v6 < 0x40 );
  return a2;
}
