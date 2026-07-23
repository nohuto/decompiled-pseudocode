/*
 * XREFs of PopDiagSnapActiveActivity @ 0x14038AE94
 * Callers:
 *     PopTraceThermalZoneActiveActivity @ 0x14038A704 (PopTraceThermalZoneActiveActivity.c)
 *     PopTraceThermalRequestActiveActivity @ 0x14038ABC4 (PopTraceThermalRequestActiveActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopDiagSnapActiveActivity(__int64 a1, _DWORD *a2, _BYTE *a3, __int64 a4)
{
  char v4; // r11
  __int64 i; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int128 v11; // rax
  char result; // al

  v4 = 0;
  for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(a1 + 1); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(a1 + 8 * i + 440);
    v9 = *(_QWORD *)(a1 + 8 * i + 360) - v8;
    *(_QWORD *)(a1 + 8 * i + 360) = v8;
    *(_DWORD *)(a4 + 4 * i) = v9 / 0x989680;
    if ( (unsigned int)(v9 / 0x989680) )
      v4 = 1;
  }
  v10 = *(_QWORD *)(a1 + 528);
  v11 = (unsigned __int64)(*(_QWORD *)(a1 + 520) - v10) * (unsigned __int128)0xD6BF94D5E57A42BDuLL;
  *(_QWORD *)(a1 + 520) = v10;
  result = v4;
  LOBYTE(v10) = *(_BYTE *)(a1 + 1);
  *a2 = *((_QWORD *)&v11 + 1) >> 23;
  *a3 = v10;
  return result;
}
