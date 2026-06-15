/*
 * XREFs of sub_1801024B0 @ 0x1801024B0
 * Callers:
 *     sub_1800FE0A0 @ 0x1800FE0A0 (sub_1800FE0A0.c)
 * Callees:
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_18010393C @ 0x18010393C (sub_18010393C.c)
 *     sub_180104244 @ 0x180104244 (sub_180104244.c)
 *     sub_1801049C4 @ 0x1801049C4 (sub_1801049C4.c)
 */

__int64 __fastcall sub_1801024B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // edi
  _UNKNOWN **v5; // rcx
  __int64 result; // rax

  v3 = a2;
  v5 = (_UNKNOWN **)off_18019C348;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x800000) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1801049C4(*((_QWORD *)off_18019C348 + 2), a2, a3, (unsigned int)a2, *(_DWORD *)(a1 + 56));
    v5 = (_UNKNOWN **)off_18019C348;
  }
  result = *(unsigned int *)(a1 + 56);
  if ( v3 )
  {
    if ( (_DWORD)result == 3 )
    {
      if ( v5 != &off_18019C348 && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        sub_1800BB4B4((__int64)v5[2], 0x32u, (__int64)&unk_1801726D0);
      return sub_180104244(a1);
    }
  }
  else
  {
    result = (unsigned int)(result - 2);
    if ( (result & 0xFFFFFFFD) == 0 )
    {
      if ( v5 != &off_18019C348 && (*((_DWORD *)v5 + 7) & 0x800000) != 0 && *((_BYTE *)v5 + 25) >= 4u )
        sub_1800BB4B4((__int64)v5[2], 0x33u, (__int64)&unk_1801726D0);
      return sub_18010393C(a1);
    }
  }
  return result;
}
