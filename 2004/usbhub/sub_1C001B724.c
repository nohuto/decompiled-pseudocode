/*
 * XREFs of sub_1C001B724 @ 0x1C001B724
 * Callers:
 *     sub_1C000DC30 @ 0x1C000DC30 (sub_1C000DC30.c)
 *     sub_1C003A78C @ 0x1C003A78C (sub_1C003A78C.c)
 *     sub_1C003BC30 @ 0x1C003BC30 (sub_1C003BC30.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 *     sub_1C000FD80 @ 0x1C000FD80 (sub_1C000FD80.c)
 *     sub_1C0017B0C @ 0x1C0017B0C (sub_1C0017B0C.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 */

__int64 *__fastcall sub_1C001B724(__int64 a1)
{
  _DWORD *v2; // rbx
  KSPIN_LOCK *v3; // rsi
  KIRQL v4; // al
  KIRQL v5; // dl
  __int64 ****v6; // rbx
  __int64 ***v7; // rcx
  __int64 *result; // rax
  __int64 **v9; // rax
  _QWORD *v10; // rax
  __int64 *v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 *v14; // [rsp+40h] [rbp-10h] BYREF
  __int64 **v15; // [rsp+48h] [rbp-8h]

  v2 = sub_1C000F050(a1);
  v15 = &v14;
  v14 = (__int64 *)&v14;
  sub_1C000FD80(a1, 16, 1969308720, 0LL, 0LL);
  v3 = (KSPIN_LOCK *)(v2 + 1044);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2 + 522);
  *((_BYTE *)v2 + 4184) = 0;
  v5 = v4;
  v6 = (__int64 ****)(v2 + 1048);
  while ( 1 )
  {
    v7 = *v6;
    if ( *v6 == (__int64 ***)v6 )
      break;
    if ( v7[1] != (__int64 **)v6
      || (v9 = *v7, (*v7)[1] != (__int64 *)v7)
      || (*v6 = (__int64 ***)v9, v9[1] = (__int64 *)v6, v10 = v15, *v15 != (__int64 *)&v14) )
    {
LABEL_14:
      __fastfail(3u);
    }
    v7[1] = v15;
    *v7 = &v14;
    *v10 = v7;
    v15 = (__int64 **)v7;
  }
  KeReleaseSpinLock(v3, v5);
  while ( 1 )
  {
    result = v14;
    if ( v14 == (__int64 *)&v14 )
      return result;
    if ( (__int64 **)v14[1] != &v14 )
      goto LABEL_14;
    v11 = (__int64 *)*v14;
    if ( *(__int64 **)(*v14 + 8) != v14 )
      goto LABEL_14;
    v13 = 0LL;
    v14 = v11;
    v12 = (__int64)(result - 12);
    v11[1] = (__int64)&v14;
    result[1] = (__int64)result;
    *result = (__int64)result;
    if ( (sub_1C0017B0C(
            a1,
            0,
            (int)sub_1C0018660,
            (__int64)(result - 12),
            *(_DWORD *)(*(result - 3) + 148),
            0x49573064u,
            v13) & 0xC0000000) == 0xC0000000 )
      sub_1C0018660(a1, *(_DWORD *)(*(_QWORD *)(v12 + 72) + 148LL), v12);
  }
}
