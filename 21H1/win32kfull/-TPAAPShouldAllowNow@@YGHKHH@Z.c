/*
 * XREFs of ?TPAAPShouldAllowNow@@YGHKHH@Z @ 0x1786CD
 * Callers:
 *     _EditionLegacyTouchPadMouseAllowTap@0 @ 0x178B66 (_EditionLegacyTouchPadMouseAllowTap@0.c)
 * Callees:
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __allmul @ 0xF91DF (__allmul.c)
 *     ?TPAAPSqmBlockedCount@@YGXH@Z @ 0x178870 (-TPAAPSqmBlockedCount@@YGXH@Z.c)
 */

int __stdcall TPAAPShouldAllowNow(unsigned int a1, int a2, int a3)
{
  int v3; // edi
  int v4; // ecx
  signed __int64 v5; // kr00_8
  int v6; // esi
  unsigned int v7; // ebx
  signed __int64 v8; // rax
  signed __int64 v9; // rax
  LONG HighPart; // esi
  DWORD LowPart; // ebx
  unsigned int v12; // ecx
  __int64 v13; // rax
  int v14; // eax
  int v16; // [esp+0h] [ebp-34h]
  union _LARGE_INTEGER PerformanceFrequency; // [esp+Ch] [ebp-28h] BYREF
  int v18; // [esp+14h] [ebp-20h]
  int v19; // [esp+18h] [ebp-1Ch]
  unsigned __int64 v20; // [esp+1Ch] [ebp-18h]
  int v21; // [esp+24h] [ebp-10h]
  LARGE_INTEGER v22; // [esp+28h] [ebp-Ch]
  unsigned int v23; // [esp+30h] [ebp-4h]

  v3 = 0;
  v19 = 0;
  PerformanceFrequency.QuadPart = 0LL;
  v22 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v23 = 0;
  v21 = 0;
  v4 = _gTouchPadParameters[2];
  v20 = 0LL;
  if ( v4 )
  {
    v19 = 1;
    v18 = *((_DWORD *)&_gAapState + v4);
    v5 = _InterlockedCompareExchange64((volatile signed __int64 *)&_gAapState + 12, 0LL, 0LL);
    v21 = HIDWORD(v5);
    v23 = v5;
    v8 = _InterlockedCompareExchange64((volatile signed __int64 *)&_gAapState + 13, 0LL, 0LL);
    v6 = HIDWORD(v8);
    v7 = v8;
    HIDWORD(v8) = v21;
    v20 = __PAIR64__(v6, v8);
    if ( v21 >= 0 && ((LODWORD(v8) = v23, v21 > 0) || v23) )
    {
      if ( v6 < v21 || v6 <= v21 && v7 <= v23 )
      {
        HighPart = PerformanceFrequency.HighPart;
        LowPart = PerformanceFrequency.LowPart;
        v13 = 1000 * (v22.QuadPart - v8) / PerformanceFrequency.QuadPart;
        v12 = v13;
        LODWORD(v13) = *((_DWORD *)&_gAapState + 10);
      }
      else
      {
        v9 = 1000 * (v22.QuadPart - __PAIR64__(v6, v7));
        HighPart = PerformanceFrequency.HighPart;
        LowPart = PerformanceFrequency.LowPart;
        v13 = v9 / PerformanceFrequency.QuadPart;
        v12 = v13;
        LODWORD(v13) = v18;
      }
      if ( SHIDWORD(v13) <= 0 && (v13 < 0 || v12 < (unsigned int)v13) )
        v3 = 1;
    }
    else
    {
      HighPart = PerformanceFrequency.HighPart;
      LowPart = PerformanceFrequency.LowPart;
    }
    v14 = 4;
  }
  else
  {
    HighPart = PerformanceFrequency.HighPart;
    v14 = 0;
    LowPart = PerformanceFrequency.LowPart;
  }
  EtwTraceTouchPadAAP(
    (__int64)(1000 * __PAIR64__(v21, v23)) / __SPAIR64__(HighPart, LowPart),
    (__int64)(1000 * v20) / __SPAIR64__(HighPart, LowPart),
    1000 * v22.QuadPart / __SPAIR64__(HighPart, LowPart),
    v3,
    v14);
  if ( v19 )
    TPAAPSqmBlockedCount(v16);
  return v3 ^ 1;
}
