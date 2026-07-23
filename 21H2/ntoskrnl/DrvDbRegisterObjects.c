/*
 * XREFs of DrvDbRegisterObjects @ 0x1407A4350
 * Callers:
 *     DrvDbOpenContext @ 0x1407A420C (DrvDbOpenContext.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DrvDbRegisterObjects(__int64 a1, __int64 a2)
{
  __int64 *v3; // r9
  unsigned int i; // r10d
  __int64 v5; // r11
  int v6; // r8d
  __int64 v7; // rcx

  v3 = &qword_1400087E0;
  for ( i = 0; i < 5; ++i )
  {
    v5 = *(int *)v3;
    v6 = 0;
    if ( (unsigned int)(v5 - 1) > 0xA )
      v6 = -1073741811;
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v5 + 296), v3[1]);
    if ( v6 < 0 )
      break;
    v7 = *(int *)v3;
    v6 = 0;
    if ( (unsigned int)(v7 - 1) > 0xA )
      v6 = -1073741811;
    else
      _InterlockedExchange64((volatile __int64 *)(a1 + 8 * v7 + 392), a2);
    if ( v6 < 0 )
      break;
    v3 += 2;
  }
  return (unsigned int)v6;
}
