/*
 * XREFs of sub_1800327E8 @ 0x1800327E8
 * Callers:
 *     sub_180030E60 @ 0x180030E60 (sub_180030E60.c)
 *     sub_1800328D0 @ 0x1800328D0 (sub_1800328D0.c)
 * Callees:
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_18000A4C0 @ 0x18000A4C0 (sub_18000A4C0.c)
 */

__int64 __fastcall sub_1800327E8(__int64 a1, HKEY a2, const WCHAR *a3, const BYTE *lpData)
{
  int v4; // ecx
  const BYTE *v5; // rax
  __int64 v6; // r10
  int v7; // ebx
  DWORD cbData; // ecx
  LSTATUS v10; // eax
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = 0;
  if ( lpData )
  {
    v5 = lpData;
    v6 = 130LL;
    do
    {
      if ( !*(_WORD *)v5 )
        break;
      v5 += 2;
      --v6;
    }
    while ( v6 );
    v7 = v6 == 0 ? 0x80070057 : 0;
    if ( v6 )
      v4 = 130 - v6;
    else
      v4 = 0;
  }
  else
  {
    v7 = -2147024809;
  }
  if ( v7 < 0 )
    cbData = 0;
  else
    cbData = 2 * v4;
  if ( v7 >= 0 )
  {
    v10 = RegSetValueExW(a2, a3, 0, 1u, lpData, cbData);
    if ( v10 )
      return sub_18000A4C0(
               retaddr,
               843,
               (int)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
               v10);
    else
      return 0LL;
  }
  else
  {
    sub_180003AB0(
      retaddr,
      839,
      (__int64)"avcore\\audiocore\\server\\audiosrv\\applicationspecificendpointinfo\\applicationspecificendpointinfo.cpp",
      v7);
    return (unsigned int)v7;
  }
}
