/*
 * XREFs of sub_18012ADBC @ 0x18012ADBC
 * Callers:
 *     sub_18012B740 @ 0x18012B740 (sub_18012B740.c)
 * Callees:
 *     sub_18006C4AC @ 0x18006C4AC (sub_18006C4AC.c)
 */

__int64 __fastcall sub_18012ADBC(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int16 v5; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int16 v13; // [rsp+30h] [rbp+8h] BYREF
  int v14; // [rsp+38h] [rbp+10h] BYREF

  *(_WORD *)(a1 + 124) = 111;
  *(_DWORD *)(a1 + 116) = 262142;
  v3 = *a2;
  *(_DWORD *)(a1 + 120) = 1;
  *(_OWORD *)(a1 + 100) = v3;
  *(_OWORD *)(a1 + 126) = xmmword_180174CA0;
  *(_OWORD *)(a1 + 142) = xmmword_180174CB0;
  *(_OWORD *)(a1 + 158) = xmmword_180174CC0;
  *(_OWORD *)(a1 + 174) = xmmword_180174CD0;
  *(_OWORD *)(a1 + 190) = xmmword_180174CE0;
  *(_OWORD *)(a1 + 206) = xmmword_180174CF0;
  *(_OWORD *)(a1 + 222) = xmmword_180174D00;
  *(_DWORD *)(a1 + 238) = 0;
  if ( sub_18006C4AC() )
  {
    v14 = 0;
    v13 = 0;
    if ( (int)TryGetHrtfProcessingLimits(&v14, &v13) >= 0 )
    {
      *(_DWORD *)(a1 + 116) = v14;
      *(_WORD *)(a1 + 124) = v13;
    }
  }
  v4 = *(_OWORD *)(a1 + 112);
  *(_OWORD *)(a1 + 242) = *(_OWORD *)(a1 + 96);
  v5 = *(_WORD *)(a1 + 240);
  v6 = *(_OWORD *)(a1 + 128);
  *(_OWORD *)(a1 + 258) = v4;
  v7 = *(_OWORD *)(a1 + 144);
  *(_OWORD *)(a1 + 274) = v6;
  v8 = *(_OWORD *)(a1 + 160);
  *(_OWORD *)(a1 + 290) = v7;
  v9 = *(_OWORD *)(a1 + 176);
  *(_OWORD *)(a1 + 306) = v8;
  v10 = *(_OWORD *)(a1 + 192);
  *(_OWORD *)(a1 + 322) = v9;
  v11 = *(_OWORD *)(a1 + 224);
  *(_OWORD *)(a1 + 338) = v10;
  *(_OWORD *)(a1 + 354) = *(_OWORD *)(a1 + 208);
  *(_OWORD *)(a1 + 370) = v11;
  *(_WORD *)(a1 + 386) = v5;
  return 0LL;
}
