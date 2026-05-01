/*
 * XREFs of sub_180072FA0 @ 0x180072FA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180071A28 @ 0x180071A28 (sub_180071A28.c)
 */

__int64 __fastcall sub_180072FA0(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v3; // rsi
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rcx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v13[10]; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  v3 = a1 + 144;
  *(_WORD *)(a1 + 188) = 0;
  sub_180071A28(a1, 0, a1 + 144, 64, 0LL, 0LL);
  sub_1800100D0(a1, v13);
  v6 = v13[1] * (unsigned __int64)*(unsigned int *)(a2 + 48) / 0x64 / qword_1800B41B0;
  if ( *(_DWORD *)(v3 + 36) )
  {
    do
    {
      v7 = *(_QWORD *)v3 + ((unsigned __int64)v2 << 6);
      if ( *(_QWORD *)(v7 + 40) >= (unsigned __int64)*(unsigned int *)(a2 + 44) )
      {
        v8 = *(_QWORD *)(v7 + 48);
        if ( v13[8] - *(_QWORD *)(v8 + 1224) >= v6 )
        {
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v8 + 16)) <= 1 )
            __fastfail(0xEu);
          v9 = (_QWORD *)(a2 + 8);
          v10 = (_QWORD *)(v8 + 1272);
          v11 = *(_QWORD *)(a2 + 8);
          if ( *(_QWORD *)(v11 + 8) != a2 + 8 )
            __fastfail(3u);
          *v10 = v11;
          v10[1] = v9;
          *(_QWORD *)(v11 + 8) = v10;
          *v9 = v10;
        }
      }
      ++v2;
    }
    while ( v2 < *(_DWORD *)(v3 + 36) );
  }
  return 0LL;
}
