/*
 * XREFs of _DwmAsyncSetTransition@32 @ 0xAB55E
 * Callers:
 *     _NtUserSetWindowCompositionTransition@28 @ 0xAB3DC (_NtUserSetWindowCompositionTransition@28.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall DwmAsyncSetTransition(
        PVOID Object,
        int a2,
        int a3,
        _DWORD *a4,
        _DWORD *a5,
        _DWORD *a6,
        _DWORD *a7,
        _DWORD *a8)
{
  int v9; // esi
  _DWORD *v10; // edi
  _DWORD v13[31]; // [esp+28h] [ebp-80h] BYREF

  v9 = -1073741823;
  v10 = a5;
  if ( Object )
  {
    memset(v13, 0, 0x78u);
    v13[8] = 0;
    v13[6] = 1073741867;
    v13[0] = 7864416;
    LOWORD(v13[1]) = 0x8000;
    v13[7] = a2;
    v13[9] = a3;
    if ( a4 )
    {
      v13[10] = *a4;
      v13[11] = a4[1];
      v13[12] = a4[2];
      v13[13] = a4[3];
      v10 = a5;
    }
    if ( v10 )
    {
      v13[14] = *v10;
      v13[15] = v10[1];
      v13[16] = v10[2];
      v13[17] = v10[3];
    }
    if ( a6 )
    {
      v13[18] = *a6;
      v13[19] = a6[1];
      v13[20] = a6[2];
      v13[21] = a6[3];
    }
    if ( a7 )
    {
      v13[22] = *a7;
      v13[23] = a7[1];
      v13[24] = a7[2];
      v13[25] = a7[3];
    }
    if ( a8 )
    {
      v13[26] = *a8;
      v13[27] = a8[1];
      v13[28] = a8[2];
      v13[29] = a8[3];
    }
    v9 = LpcRequestPort(Object, v13);
    ObfDereferenceObject(Object);
  }
  return v9;
}
