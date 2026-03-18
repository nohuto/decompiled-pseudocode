/*
 * XREFs of _anonymous_namespace_::Compressor::Compress @ 0x1800F28AC
 * Callers:
 *     ?EncodeStringsList@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$set@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@@Z @ 0x180075DD4 (-EncodeStringsList@@YA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@AEBV-$set@.c)
 * Callees:
 *     ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@EV?$allocator@E@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1800B6A5C (--$_Resize_reallocate@U_Value_init_tag@std@@@-$vector@EV-$allocator@E@std@@@std@@AEAAX_KAEBU_Val.c)
 *     ?_Buy_raw@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800F2AC0 (-_Buy_raw@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     memset_0 @ 0x1801019AC (memset_0.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

void **__fastcall anonymous_namespace_::Compressor::Compress(void **a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // r8
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // rsi
  PVOID v9; // rcx
  BYTE *v10; // r9
  int v11; // eax
  unsigned __int64 v12; // r14
  char *v13; // rbx
  char *v14; // rbx
  char *v15; // rdx
  unsigned __int64 v16; // rcx
  char *v17; // rbx
  char *v18; // rdx
  unsigned __int64 v19; // rcx
  size_t v20; // rsi
  char *v21; // rax
  __int64 v23; // r14
  LONG *v24; // [rsp+30h] [rbp-18h]
  LONG *v25; // [rsp+30h] [rbp-18h]
  INT v26; // [rsp+38h] [rbp-10h]
  INT v27; // [rsp+38h] [rbp-10h]
  PVOID context; // [rsp+50h] [rbp+8h] BYREF
  unsigned __int64 input_used; // [rsp+60h] [rbp+18h] BYREF

  v5 = CreateCompressor(2LL, 0LL, &context);
  v8 = 0LL;
  v9 = context;
  v10 = 0LL;
  if ( v5 != 1 )
    v9 = 0LL;
  v7 = *(_QWORD *)(a3 + 8) - *(_QWORD *)a3;
  context = v9;
  v11 = 0;
  *a1 = 0LL;
  v12 = v7 / 0xA;
  a1[1] = 0LL;
  a1[2] = 0LL;
  if ( v7 / 0xA )
  {
    std::vector<unsigned char>::_Buy_raw(a1, v7 / 0xA, v6, 0LL);
    v13 = (char *)*a1;
    memset_0(*a1, 0, v7 / 0xA);
    v9 = context;
    v11 = v12 + (_DWORD)v13;
    a1[1] = &v13[v12];
    v10 = (BYTE *)*a1;
  }
  if ( Compress(
         v9,
         *(const BYTE **)a3,
         *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
         v10,
         v11 - (_DWORD)v10,
         (PLONG)&input_used,
         v24,
         v26) == 1 )
    goto LABEL_12;
  if ( GetLastError() == 122 )
  {
    v14 = (char *)a1[1];
    v15 = (char *)*a1;
    v16 = v14 - (_BYTE *)*a1;
    if ( input_used < v16 )
    {
      v14 = &v15[input_used];
    }
    else
    {
      if ( input_used <= v16 )
        goto LABEL_11;
      if ( input_used > (_BYTE *)a1[2] - v15 )
      {
        std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, input_used);
        v14 = (char *)a1[1];
        goto LABEL_11;
      }
      v23 = input_used - v16;
      memset_0(a1[1], 0, input_used - v16);
      v14 += v23;
    }
    a1[1] = v14;
LABEL_11:
    if ( Compress(
           context,
           *(const BYTE **)a3,
           *(_DWORD *)(a3 + 8) - *(_DWORD *)a3,
           (PBYTE)*a1,
           (_DWORD)v14 - *(_DWORD *)a1,
           (PLONG)&input_used,
           v25,
           v27) == 1 )
    {
LABEL_12:
      v8 = input_used;
      goto LABEL_13;
    }
  }
  input_used = 0LL;
LABEL_13:
  v17 = (char *)a1[1];
  v18 = (char *)*a1;
  v19 = v17 - (_BYTE *)*a1;
  if ( v8 < v19 )
  {
    v21 = &v18[v8];
LABEL_17:
    a1[1] = v21;
    goto LABEL_18;
  }
  if ( v8 > v19 )
  {
    if ( v8 > (_BYTE *)a1[2] - v18 )
    {
      std::vector<unsigned char>::_Resize_reallocate<std::_Value_init_tag>(a1, v8);
      goto LABEL_18;
    }
    v20 = v8 - v19;
    memset_0(a1[1], 0, v20);
    v21 = &v17[v20];
    goto LABEL_17;
  }
LABEL_18:
  CloseCompressor(context);
  return a1;
}
