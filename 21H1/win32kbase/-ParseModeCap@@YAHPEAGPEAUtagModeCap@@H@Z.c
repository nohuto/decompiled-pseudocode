/*
 * XREFs of ?ParseModeCap@@YAHPEAGPEAUtagModeCap@@H@Z @ 0x1C002CE60
 * Callers:
 *     ?GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z @ 0x1C002CB38 (-GetMonitorCapabilityFromInf@@YAKPEAU_DEVICE_OBJECT@@PEAUtagModeCap@@E@Z.c)
 * Callees:
 *     ?xwtol@@YAKPEBG@Z @ 0x1C002CF38 (-xwtol@@YAKPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     wcschr @ 0x1C00CC1D0 (wcschr.c)
 */

__int64 __fastcall ParseModeCap(unsigned __int16 *a1, struct tagModeCap *a2, int a3)
{
  int v3; // ebx
  int v4; // r15d
  unsigned int v6; // edx
  unsigned int v8; // ecx
  unsigned int v9; // esi
  wchar_t *v10; // rax
  unsigned int v11; // r9d
  __int64 v12; // r10
  __int64 v13; // rax
  int v14; // eax
  wchar_t *v16; // rax
  wchar_t *v17; // r15
  wchar_t *v18; // rax
  __int64 v19; // r10
  unsigned int v20; // eax
  __int64 v21; // r9
  unsigned int v22; // esi
  unsigned int v23; // eax
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // [rsp+20h] [rbp-20h]
  int v27; // [rsp+24h] [rbp-1Ch]
  unsigned int v28; // [rsp+28h] [rbp-18h]
  int v29; // [rsp+2Ch] [rbp-14h]

  v3 = 0;
  v4 = -1;
  v26 = 0;
  v27 = -1;
  v6 = -1;
  v29 = -1;
  v28 = 0;
  v8 = 0;
  v9 = 0;
  if ( a3 )
  {
    if ( a1 )
    {
      do
      {
        if ( v9 >= 4 )
          break;
        v16 = wcschr(a1, 0x2Cu);
        v17 = v16;
        if ( v16 )
          *v16 = 0;
        v18 = wcschr(a1, 0x2Du);
        v19 = v9;
        if ( v18 )
        {
          *v18 = 0;
          v20 = xwtol(a1);
          a1 = (unsigned __int16 *)(v21 + 2);
        }
        else
        {
          v20 = 0;
        }
        *(&v26 + v19) = v20;
        v22 = v9 + 1;
        *(&v26 + v22) = xwtol(a1);
        a1 = v17 + 1;
        v9 = v22 + 1;
      }
      while ( v17 );
      v6 = v29;
      v8 = v28;
      v4 = v27;
      v3 = v26;
    }
    if ( *((_DWORD *)a2 + 3) > v8 )
      v8 = *((_DWORD *)a2 + 3);
    v23 = *((_DWORD *)a2 + 2);
    *((_DWORD *)a2 + 3) = v8;
    if ( v23 < v6 )
      v6 = v23;
    v24 = *((_DWORD *)a2 + 4);
    *((_DWORD *)a2 + 2) = v6;
    if ( v24 <= 1000 * v3 )
      v24 = 1000 * v3;
    *((_DWORD *)a2 + 4) = v24;
    v25 = *((_DWORD *)a2 + 5);
    if ( v25 >= 1000 * v4 )
      v25 = 1000 * v4;
    *((_DWORD *)a2 + 5) = v25;
    return 1LL;
  }
  if ( a1 )
  {
    do
    {
      if ( v9 >= 4 )
        break;
      v10 = wcschr(a1, 0x2Cu);
      if ( v10 )
        *v10 = 0;
      v11 = xwtol(a1);
      a1 = (unsigned __int16 *)(v12 + 2);
      v13 = v9++;
      *(&v26 + v13) = v11;
    }
    while ( v12 );
    if ( v26 )
    {
      v14 = v27;
      if ( v27 != -1 )
      {
        *(_DWORD *)a2 = v26;
        *((_DWORD *)a2 + 2) = v28;
        *((_DWORD *)a2 + 1) = v14;
        return 1LL;
      }
    }
  }
  return 0LL;
}
