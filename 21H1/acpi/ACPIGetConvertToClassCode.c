/*
 * XREFs of ACPIGetConvertToClassCode @ 0x1C00557D8
 * Callers:
 *     ACPIGetWorkerForInteger @ 0x1C0026A90 (ACPIGetWorkerForInteger.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0031A20 (__security_check_cookie.c)
 */

__int64 __fastcall ACPIGetConvertToClassCode(
        __int64 a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rdx
  unsigned int v7; // r8d
  _WORD *v8; // r9
  _WORD *v9; // rdx
  unsigned __int64 v10; // rdx
  _WORD v12[2]; // [rsp+30h] [rbp-18h] BYREF
  __int16 v13; // [rsp+34h] [rbp-14h]

  if ( a2 >= 0 )
  {
    if ( a5 )
    {
      if ( *(_WORD *)(a3 + 2) == 1 )
      {
        v10 = *(_QWORD *)(a3 + 16);
      }
      else
      {
        if ( *(_WORD *)(a3 + 2) != 4 )
          KeBugCheckEx(0xA3u, 1uLL, 0x60248uLL, 0LL, 0LL);
        v6 = *(_DWORD **)(a3 + 32);
        if ( *v6 != 3 )
          KeBugCheckEx(0xA3u, 1uLL, 0x6022DuLL, 0LL, 0LL);
        v7 = 0;
        v8 = v12;
        v9 = v6 + 6;
        do
        {
          if ( *(v9 - 7) != 1 )
            KeBugCheckEx(0xA3u, 1uLL, 0x6023CuLL, 0LL, 0LL);
          ++v7;
          *v8 = *v9;
          v9 += 20;
          ++v8;
        }
        while ( v7 < 3 );
        v10 = ((unsigned __int8)v13 | ((v12[1] | ((unsigned __int64)v12[0] << 16)) << 8)) << 24;
      }
      *a5 = v10;
      a2 = 0;
      if ( a6 )
        *a6 = 8;
    }
    else
    {
      return (unsigned int)-1072431089;
    }
  }
  return (unsigned int)a2;
}
