/*
 * XREFs of sub_1C0003610 @ 0x1C0003610
 * Callers:
 *     sub_1C0001010 @ 0x1C0001010 (sub_1C0001010.c)
 *     sub_1C00017D0 @ 0x1C00017D0 (sub_1C00017D0.c)
 *     sub_1C00021C0 @ 0x1C00021C0 (sub_1C00021C0.c)
 *     sub_1C00028E8 @ 0x1C00028E8 (sub_1C00028E8.c)
 *     sub_1C00029EC @ 0x1C00029EC (sub_1C00029EC.c)
 *     sub_1C0004220 @ 0x1C0004220 (sub_1C0004220.c)
 *     sub_1C0005CF0 @ 0x1C0005CF0 (sub_1C0005CF0.c)
 *     sub_1C000F090 @ 0x1C000F090 (sub_1C000F090.c)
 *     sub_1C000FE00 @ 0x1C000FE00 (sub_1C000FE00.c)
 *     sub_1C0013558 @ 0x1C0013558 (sub_1C0013558.c)
 *     sub_1C0015B1C @ 0x1C0015B1C (sub_1C0015B1C.c)
 *     sub_1C00173C0 @ 0x1C00173C0 (sub_1C00173C0.c)
 *     sub_1C0018660 @ 0x1C0018660 (sub_1C0018660.c)
 *     sub_1C002FE20 @ 0x1C002FE20 (sub_1C002FE20.c)
 *     sub_1C00312A0 @ 0x1C00312A0 (sub_1C00312A0.c)
 *     sub_1C0031344 @ 0x1C0031344 (sub_1C0031344.c)
 *     sub_1C0038550 @ 0x1C0038550 (sub_1C0038550.c)
 *     sub_1C003AEF8 @ 0x1C003AEF8 (sub_1C003AEF8.c)
 *     sub_1C003CBD8 @ 0x1C003CBD8 (sub_1C003CBD8.c)
 *     sub_1C003DF14 @ 0x1C003DF14 (sub_1C003DF14.c)
 *     sub_1C003E6C4 @ 0x1C003E6C4 (sub_1C003E6C4.c)
 *     sub_1C003E9F8 @ 0x1C003E9F8 (sub_1C003E9F8.c)
 *     sub_1C003F208 @ 0x1C003F208 (sub_1C003F208.c)
 *     sub_1C003F498 @ 0x1C003F498 (sub_1C003F498.c)
 *     sub_1C003F948 @ 0x1C003F948 (sub_1C003F948.c)
 *     sub_1C003FF9C @ 0x1C003FF9C (sub_1C003FF9C.c)
 *     sub_1C004028C @ 0x1C004028C (sub_1C004028C.c)
 *     sub_1C0040864 @ 0x1C0040864 (sub_1C0040864.c)
 *     sub_1C004CDC0 @ 0x1C004CDC0 (sub_1C004CDC0.c)
 *     sub_1C0054AFC @ 0x1C0054AFC (sub_1C0054AFC.c)
 *     sub_1C0056360 @ 0x1C0056360 (sub_1C0056360.c)
 *     sub_1C0056E30 @ 0x1C0056E30 (sub_1C0056E30.c)
 *     sub_1C0057020 @ 0x1C0057020 (sub_1C0057020.c)
 *     sub_1C0059DA0 @ 0x1C0059DA0 (sub_1C0059DA0.c)
 *     sub_1C0059FC0 @ 0x1C0059FC0 (sub_1C0059FC0.c)
 * Callees:
 *     sub_1C002DC78 @ 0x1C002DC78 (sub_1C002DC78.c)
 */

LONG __fastcall sub_1C0003610(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KEVENT *v5; // rbx
  __int64 Signalling; // r8
  UCHAR v7; // cl
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rdx
  volatile LONG Lock; // eax

  if ( !a1 )
    sub_1C002DC78(0LL, 0LL);
  v5 = *(struct _KEVENT **)(a1 + 64);
  if ( !v5 )
    sub_1C002DC78(a1, 0LL);
  if ( v5->Header.LockNV != 541218120 )
    sub_1C002DC78(a1, *(_QWORD *)(a1 + 64));
  v5[142].Header.Type = 1;
  KeWaitForSingleObject(&v5[139], Executive, 0, 0, 0LL);
  Signalling = v5[142].Header.Signalling;
  v7 = v5[142].Header.Signalling;
  if ( (dword_1C006B268 & 0x10000) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1667581000;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a3;
      *(_QWORD *)(v9 + 24) = Signalling;
      v7 = v5[142].Header.Signalling;
    }
  }
  if ( v7 )
  {
    if ( a3 == (_QWORD *)1936941672 )
    {
      Lock = v5[130].Header.Lock;
      if ( Lock )
        v5[130].Header.LockNV = Lock - 1;
    }
    else if ( a3 )
    {
      v10 = a3[1];
      v11 = a3 + 1;
      if ( *(_QWORD **)(v10 + 8) != a3 + 1 || (v12 = (_QWORD *)a3[2], (_QWORD *)*v12 != v11) )
        __fastfail(3u);
      *v12 = v10;
      *(_QWORD *)(v10 + 8) = v12;
      a3[2] = a3 + 1;
      *v11 = v11;
      ExFreePoolWithTag(a3, 0);
    }
  }
  return KeSetEvent(v5 + 139, 0, 0);
}
