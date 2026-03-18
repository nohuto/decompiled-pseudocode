/*
 * XREFs of ?xxxManageKeyboardModifiers@@YAXPEAUtagKL@@0@Z @ 0x1C01A7FB8
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C001B6C0 (xxxChangeForegroundKeyboardTable.c)
 * Callees:
 *     xxxKeyEventEx @ 0x1C0069770 (xxxKeyEventEx.c)
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C008BA00 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     ?xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z @ 0x1C01A7EB8 (-xxxAdjustPushStateForKL@@YAXPEAUtagTHREADINFO@@PEAEPEAUtagKL@@22@Z.c)
 */

void __fastcall xxxManageKeyboardModifiers(struct tagKL *a1, struct tagKL *a2, __int64 a3, __int64 a4)
{
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rbx
  __int64 v8; // rax
  unsigned __int8 v9[16]; // [rsp+50h] [rbp-48h] BYREF
  __int128 v10; // [rsp+60h] [rbp-38h]

  v4 = gptiCurrent;
  v5 = 0LL;
  if ( *((_QWORD *)gptiCurrent + 53) )
  {
    if ( a1 )
    {
      *(_OWORD *)v9 = 0LL;
      v10 = 0LL;
      xxxAdjustPushStateForKL(gptiCurrent, v9, a1, a1, a2);
      xxxAdjustPushStateForKL(v4, v9, a2, a1, a2);
      v8 = *((_QWORD *)a1 + 6);
      if ( v8 && (*(_DWORD *)(*(_QWORD *)(v8 + 32) + 80LL) & 1) != 0 && (byte_1C024B844 & 4) == 0 )
        xxxKeyEventEx(0x80A2u, 0x21Du, 0, 0LL, 0LL, 0LL, 0, 0, 0LL, 0LL);
    }
    else
    {
      GetDomainLockRef(16LL, (__int64)a2, a3, a4);
      do
      {
        *(_BYTE *)(v5 + *((_QWORD *)v4 + 53) + 228) &= 0xAAu;
        *((_BYTE *)&gafAsyncKeyState + v5) &= 0xAAu;
        gafRawKeyState[v5++] &= 0xAAu;
      }
      while ( v5 < 64 );
    }
  }
}
