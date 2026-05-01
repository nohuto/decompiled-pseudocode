/*
 * XREFs of sub_18006F950 @ 0x18006F950
 * Callers:
 *     <none>
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     sub_1800625D0 @ 0x1800625D0 (sub_1800625D0.c)
 */

__int64 __fastcall sub_18006F950(__int64 a1, _DWORD *a2)
{
  int v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+40h] [rbp-30h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch] BYREF
  int v14; // [rsp+48h] [rbp-28h] BYREF
  int v15; // [rsp+4Ch] [rbp-24h] BYREF
  int v16; // [rsp+50h] [rbp-20h] BYREF
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  if ( (*(_BYTE *)(a1 + 149) & 1) != 0 )
  {
    v4 = -1073741637;
  }
  else
  {
    v5 = a2[32];
    v17 = 0;
    v18 = 0;
    v19 = v5;
    v16 = 16;
    v4 = D3DKMTSetYieldPercentage(&v16);
    if ( v4 >= 0 )
    {
      v6 = a2[33];
      v17 = 0;
      v18 = v6;
      v19 = a2[34];
      v16 = 16;
      v4 = D3DKMTSetMemoryBudgetTarget(&v16);
      if ( v4 < 0 )
      {
        v7 = *(_DWORD *)(a1 + 48);
        v17 = 0;
        v19 = v7;
        v18 = *(_DWORD *)(a1 + 60);
        v16 = 16;
        D3DKMTSetYieldPercentage(&v16);
      }
      else
      {
        v4 = 0;
      }
    }
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && sub_180010470((__int64)&dword_1800B31E0, 1LL) )
  {
    v12 = a2[34];
    v13 = a2[33];
    v14 = a2[32];
    v15 = v4;
    sub_1800625D0(v8, byte_18009C971, v9, v10, (__int64)&v15, (__int64)&v14, (__int64)&v13, (__int64)&v12);
  }
  return (unsigned int)v4;
}
