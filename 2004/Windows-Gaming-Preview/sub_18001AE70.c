/*
 * XREFs of sub_18001AE70 @ 0x18001AE70
 * Callers:
 *     sub_18001E3F0 @ 0x18001E3F0 (sub_18001E3F0.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 *     sub_1800266E0 @ 0x1800266E0 (sub_1800266E0.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001AE70(__int64 a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int v4; // edi
  signed __int64 v5; // rax
  signed __int64 v6; // rtt
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  if ( *(_QWORD *)(a1 + 104) )
  {
    *(_QWORD *)(a1 + 104) = 0LL;
    ((void (*)(void))sub_1800266E0)();
  }
  *(_QWORD *)(a1 + 104) = 0LL;
  v2 = operator new(0x88uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  v3 = v2;
  if ( !v2 )
  {
    v4 = -2147024882;
LABEL_15:
    sub_180003268(retaddr, 32, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp", v4);
    return (unsigned int)v4;
  }
  v2[4] = 1LL;
  *v2 = off_18004AE98;
  v2[1] = off_18004AE78;
  v2[2] = off_18004AE38;
  if ( qword_18005ADB0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18005ADB0 + 8LL))(qword_18005ADB0);
  *v3 = off_18004B0A8;
  v3[1] = off_18004B088;
  v3[2] = off_18004B048;
  v3[7] = 0LL;
  v3[8] = 0LL;
  v3[9] = 0LL;
  v3[10] = 0LL;
  InitializeSRWLock((PSRWLOCK)v3 + 11);
  InitializeSRWLock((PSRWLOCK)v3 + 12);
  v3[13] = 0LL;
  InitializeSRWLock((PSRWLOCK)v3 + 14);
  InitializeSRWLock((PSRWLOCK)v3 + 15);
  v3[16] = 0LL;
  v4 = sub_18001B2D8(v3);
  if ( v4 >= 0 )
  {
    v5 = v3[4];
    while ( v5 >= 0 )
    {
      v6 = v5;
      v5 = _InterlockedCompareExchange64(v3 + 4, v5 + 1, v5);
      if ( v6 == v5 )
        goto LABEL_13;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v5 + 16));
LABEL_13:
    *(_QWORD *)(a1 + 104) = v3;
    ((void (*)(void))sub_1800266E0)();
    v4 = 0;
  }
  else
  {
    sub_1800266E0(v3);
  }
  if ( v4 < 0 )
    goto LABEL_15;
  return 0LL;
}
