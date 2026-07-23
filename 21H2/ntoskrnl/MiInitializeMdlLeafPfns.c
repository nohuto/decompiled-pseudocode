/*
 * XREFs of MiInitializeMdlLeafPfns @ 0x140294A0C
 * Callers:
 *     MiInitializeMdlPages @ 0x1402948B4 (MiInitializeMdlPages.c)
 *     MiInitializeLargeMdlLeafPfns @ 0x140534228 (MiInitializeLargeMdlLeafPfns.c)
 * Callees:
 *     MiInitializeMdlPfn @ 0x140294B14 (MiInitializeMdlPfn.c)
 *     KeYieldProcessorEx @ 0x1402EFAD0 (KeYieldProcessorEx.c)
 *     MiConvertLargePfnToSmall @ 0x1403F5FC8 (MiConvertLargePfnToSmall.c)
 */

void __fastcall MiInitializeMdlLeafPfns(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v6; // rdi
  __int64 v8; // rsi
  __int64 v9; // rax
  __int64 v10; // rdx
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1 + 48 * a2;
  if ( v6 != a1 )
  {
    v8 = (a3 >> 3) & 0xFFFFFFFFFFELL;
    do
    {
      v6 -= 48LL;
      v11 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v11);
        while ( *(__int64 *)(v6 + 24) < 0 );
      }
      v9 = *(_QWORD *)(v6 + 40);
      if ( (v9 & 0x1000000000LL) != 0 )
      {
        MiConvertLargePfnToSmall(a1, v6, a3, 1LL);
        v9 = *(_QWORD *)(v6 + 40);
      }
      *(_QWORD *)v6 = 0LL;
      v10 = a5;
      *(_QWORD *)(v6 + 8) = 0xFFFFF68000000000uLL;
      *(_QWORD *)(v6 + 16) = a4;
      *(_QWORD *)(v6 + 40) = v9 & 0x7FFFFFF000000000LL | 0xFFFFFFFFDLL;
      *(_QWORD *)v6 = v8;
      MiInitializeMdlPfn(v6, v10);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    while ( v6 != a1 );
  }
}
