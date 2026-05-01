/*
 * XREFs of sub_18007BF28 @ 0x18007BF28
 * Callers:
 *     sub_180063764 @ 0x180063764 (sub_180063764.c)
 * Callees:
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180008894 @ 0x180008894 (sub_180008894.c)
 *     sub_180009018 @ 0x180009018 (sub_180009018.c)
 *     sub_18000E1BC @ 0x18000E1BC (sub_18000E1BC.c)
 *     sub_18000E244 @ 0x18000E244 (sub_18000E244.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18001E310 @ 0x18001E310 (sub_18001E310.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_180077780 @ 0x180077780 (sub_180077780.c)
 *     sub_18007BBD8 @ 0x18007BBD8 (sub_18007BBD8.c)
 *     sub_18007BD64 @ 0x18007BD64 (sub_18007BD64.c)
 *     sub_18007BE20 @ 0x18007BE20 (sub_18007BE20.c)
 *     sub_18007BEF8 @ 0x18007BEF8 (sub_18007BEF8.c)
 *     sub_18007E5CC @ 0x18007E5CC (sub_18007E5CC.c)
 *     sub_180081D54 @ 0x180081D54 (sub_180081D54.c)
 *     sub_1800823D0 @ 0x1800823D0 (sub_1800823D0.c)
 *     sub_180085018 @ 0x180085018 (sub_180085018.c)
 */

__int64 __fastcall sub_18007BF28(__int64 a1)
{
  __int64 v2; // rcx
  _QWORD *v3; // rdi
  __int64 v4; // rsi
  _QWORD *v5; // rdi
  _QWORD *i; // rax
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 j; // rax
  _QWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  sub_180081D54(a1 + 432);
  if ( *(_QWORD *)(a1 + 296) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *(_QWORD *)(a1 + 288) )
    RtlUnsubscribeWnfNotificationWaitForCompletion();
  if ( *(_QWORD *)(a1 + 400) )
    sub_1800823D0(a1 + 336);
  v2 = *(_QWORD *)(a1 + 344);
  if ( v2 )
  {
    sub_180077780(v2);
    *(_QWORD *)(a1 + 344) = 0LL;
  }
  *(_DWORD *)(a1 + 392) |= 2u;
  if ( *(_QWORD *)(a1 + 368) )
  {
    SleepstudyHelperDestroyLibrary();
    *(_QWORD *)(a1 + 368) = 0LL;
  }
  v3 = (_QWORD *)(a1 + 304);
  v4 = 4LL;
  do
  {
    if ( *v3 )
      RtlUnsubscribeWnfNotificationWaitForCompletion();
    ++v3;
    --v4;
  }
  while ( v4 );
  v5 = (_QWORD *)(a1 + 16);
  do
  {
    while ( (_QWORD *)*v5 != v5 )
      sub_180008894(*v5 - 8LL);
    LODWORD(v4) = v4 + 1;
    v5 += 2;
  }
  while ( (unsigned int)v4 < 7 );
  for ( i = sub_18003CF94(a1 + 128, 0, 0LL); ; i = sub_18007BE20(v7) )
  {
    v7 = i;
    if ( !i )
      break;
    sub_18000506C((__int64)i, 3u, 2816, 0LL, 0, 0);
  }
  v8 = 0LL;
  v9 = a1;
  while ( 1 )
  {
    v11 = sub_18007BD64(v9, v8);
    v13 = (__int64)v11;
    if ( !v11 )
      break;
    sub_180009018((__int64)v11);
    sub_18000E1BC(v13);
    for ( j = sub_18001E310(v13); j; j = sub_18007E5CC(j) )
    {
      if ( *(_BYTE *)(j + 40) != 2 )
        *(_DWORD *)(j + 36) |= 1u;
    }
    sub_18000E244(v13);
    sub_180017F60((char *)v13);
    v9 = *(_QWORD *)(v13 + 32);
    v8 = v13;
  }
  while ( 1 )
  {
    sub_18007BBD8(a1, v12);
    v16 = *(_QWORD *)(a1 + 264);
    sub_18007BEF8(a1, v14);
    if ( !v16 )
      break;
    RtlWaitOnAddress(a1 + 264, &v16, 8LL);
  }
  sub_180085018(a1 + 168);
  sub_180085018(a1 + 216);
  return sub_180085018(a1 + 464);
}
