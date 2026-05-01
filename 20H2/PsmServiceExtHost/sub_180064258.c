/*
 * XREFs of sub_180064258 @ 0x180064258
 * Callers:
 *     sub_1800448B8 @ 0x1800448B8 (sub_1800448B8.c)
 * Callees:
 *     sub_1800375E8 @ 0x1800375E8 (sub_1800375E8.c)
 *     sub_18003850C @ 0x18003850C (sub_18003850C.c)
 *     sub_180064974 @ 0x180064974 (sub_180064974.c)
 *     sub_180065C70 @ 0x180065C70 (sub_180065C70.c)
 *     sub_180066378 @ 0x180066378 (sub_180066378.c)
 *     sub_18006646C @ 0x18006646C (sub_18006646C.c)
 *     sub_18006649C @ 0x18006649C (sub_18006649C.c)
 */

void __fastcall sub_180064258(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  struct _TP_TIMER *v7; // rcx
  struct _TP_TIMER *v8; // rcx
  void *v9; // rcx

  *(_BYTE *)a1 = 0;
  sub_1800375E8((struct _TP_TIMER **)(a1 + 48), 0LL);
  sub_1800375E8((struct _TP_TIMER **)(a1 + 56), 0LL);
  v2 = *(void **)(a1 + 272);
  *(_QWORD *)(a1 + 272) = 0LL;
  if ( v2 )
    sub_18003850C(v2);
  v3 = *(void **)(a1 + 240);
  *(_QWORD *)(a1 + 240) = 0LL;
  if ( v3 )
    sub_18003850C(v3);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 176));
  v4 = *(void **)(a1 + 168);
  *(_QWORD *)(a1 + 168) = 0LL;
  if ( v4 )
    sub_18003850C(v4);
  DeleteCriticalSection((LPCRITICAL_SECTION)(a1 + 104));
  if ( *(_QWORD *)(a1 + 96) )
    sub_18006646C();
  if ( *(_QWORD *)(a1 + 88) )
    sub_180066378();
  v5 = *(_QWORD *)(a1 + 80);
  if ( v5 )
    sub_18006649C(v5);
  v6 = *(_QWORD *)(a1 + 72);
  if ( v6 )
    sub_18006649C(v6);
  v7 = *(struct _TP_TIMER **)(a1 + 56);
  if ( v7 )
    sub_180064974(v7);
  v8 = *(struct _TP_TIMER **)(a1 + 48);
  if ( v8 )
    sub_180064974(v8);
  v9 = *(void **)(a1 + 16);
  if ( v9 )
    sub_180065C70(v9);
}
