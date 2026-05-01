/*
 * XREFs of sub_18006FEC0 @ 0x18006FEC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_18006253C @ 0x18006253C (sub_18006253C.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

void __fastcall sub_18006FEC0(__int64 a1)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  int v8; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+44h] [rbp-2Ch] BYREF
  int v10; // [rsp+48h] [rbp-28h] BYREF
  int v11; // [rsp+50h] [rbp-20h] BYREF
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  int v14; // [rsp+5Ch] [rbp-14h]

  if ( (*(_BYTE *)(a1 + 149) & 1) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 48);
    v12 = 0;
    v14 = v2;
    v3 = *(_DWORD *)(a1 + 60);
    v11 = 16;
    v13 = v3;
    if ( (int)D3DKMTSetYieldPercentage(&v11) < 0 )
      sub_180085678();
    v4 = *(_DWORD *)(a1 + 52);
    v12 = 0;
    v13 = v4;
    v14 = *(_DWORD *)(a1 + 56);
    v11 = 16;
    if ( (int)D3DKMTSetMemoryBudgetTarget(&v11) < 0 )
      sub_180085678();
    if ( (unsigned int)dword_1800B31E0 > 4 )
    {
      if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
      {
        v8 = *(_DWORD *)(a1 + 56);
        v9 = *(_DWORD *)(a1 + 52);
        v10 = *(_DWORD *)(a1 + 48);
        sub_18006253C(v5, byte_18009CAAD, v6, v7, (__int64)&v10, (__int64)&v9, (__int64)&v8);
      }
    }
  }
}
