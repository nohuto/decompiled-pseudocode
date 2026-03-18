/*
 * XREFs of _FadeDesktop@16 @ 0xCE936
 * Callers:
 *     _xxxSwitchDesktopWithFade@20 @ 0xAF188 (_xxxSwitchDesktopWithFade@20.c)
 * Callees:
 *     _GreSetDeviceGammaRamp@16 @ 0xCEB1A (_GreSetDeviceGammaRamp@16.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 *     __aulldiv @ 0xF91F1 (__aulldiv.c)
 */

DWORD __stdcall FadeDesktop(unsigned int a1, unsigned int *a2, unsigned int a3, int a4)
{
  unsigned int *v4; // esi
  LARGE_INTEGER v5; // rax
  unsigned int v6; // edi
  _DWORD *v7; // ecx
  _WORD *HighPart; // esi
  unsigned __int16 *v9; // ecx
  unsigned int v10; // eax
  int v11; // edx
  unsigned int v12; // eax
  int v13; // edx
  unsigned int v14; // eax
  bool v15; // zf
  LONGLONG v16; // kr00_8
  unsigned int v17; // edi
  bool v18; // cc
  unsigned __int64 v20; // [esp-10h] [ebp-48h]
  unsigned int v21; // [esp+Ch] [ebp-2Ch]
  _DWORD *v22; // [esp+10h] [ebp-28h]
  int v23; // [esp+14h] [ebp-24h]
  unsigned int v24; // [esp+18h] [ebp-20h]
  LONG v25; // [esp+20h] [ebp-18h]
  LARGE_INTEGER v26; // [esp+24h] [ebp-14h]
  unsigned int v27; // [esp+2Ch] [ebp-Ch]
  union _LARGE_INTEGER PerformanceFrequency; // [esp+30h] [ebp-8h] BYREF

  PerformanceFrequency.QuadPart = 0LL;
  v4 = a2;
  v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v26 = v5;
  if ( PerformanceFrequency.QuadPart )
  {
    v5.LowPart = 0x3E8 / a1;
    v27 = 0x3E8 / a1;
    if ( 0x3E8 / a1 <= a3 )
    {
      if ( v5.LowPart )
      {
        v6 = 0;
        do
        {
          v24 = 0;
          if ( *v4 )
          {
            v5.HighPart = (LONG)(v4 + 257);
            v5.LowPart = a3 - v6;
            v25 = (LONG)(v4 + 257);
            v7 = v4 + 385;
            v21 = a3 - v6;
            v22 = v4 + 385;
            do
            {
              HighPart = (_WORD *)v5.HighPart;
              v23 = 256;
              v9 = (unsigned __int16 *)(v7 + 129);
              do
              {
                v5.HighPart = *(v9 - 256);
                if ( a4 )
                  v10 = v6 * v5.HighPart;
                else
                  v10 = v5.HighPart * v5.LowPart;
                *(HighPart - 512) = v10 / a3;
                v11 = *v9;
                if ( a4 )
                  v12 = v6 * v11;
                else
                  v12 = v11 * v21;
                *(HighPart - 256) = v12 / a3;
                v13 = v9[256];
                if ( a4 )
                  v14 = v6 * v13;
                else
                  v14 = v13 * v21;
                ++v9;
                *HighPart++ = v14 / a3;
                v15 = v23-- == 1;
                v5.LowPart = a3 - v6;
              }
              while ( !v15 );
              if ( *v22 )
                GreSetDeviceGammaRamp(0, 0);
              v7 = v22 + 385;
              ++v24;
              v5.LowPart = a3 - v6;
              v5.HighPart = v25;
              v22 += 385;
            }
            while ( v24 < *a2 );
          }
          if ( v6 == a3 )
            break;
          v16 = *(_QWORD *)&KeQueryPerformanceCounter(0) - v26.QuadPart;
          HIDWORD(v20) = HIDWORD(v16);
          LODWORD(v20) = 0;
          v5.QuadPart = v20 / PerformanceFrequency.QuadPart;
          v17 = 1000 * (v20 / PerformanceFrequency.QuadPart)
              + 1000LL * (unsigned int)v16 / PerformanceFrequency.QuadPart;
          if ( v17 < a3 )
          {
            v5.LowPart = UserSleep(v17 % v27);
            v6 = v17 % v27 + v17;
            v18 = v6 <= a3;
            if ( v6 < a3 )
              continue;
          }
          v6 = a3;
          v18 = 1;
          v4 = a2;
        }
        while ( v18 );
      }
    }
  }
  return v5.LowPart;
}
