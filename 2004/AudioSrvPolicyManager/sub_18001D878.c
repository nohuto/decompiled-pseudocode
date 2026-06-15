/*
 * XREFs of sub_18001D878 @ 0x18001D878
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 */

__int64 __fastcall sub_18001D878(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // eax
  signed int v5; // r9d
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = a1;
  *a3 = 0;
  LOBYTE(v7) = 0;
  v4 = CapabilityCheck(a2, L"backgroundMediaRecording", &v7);
  v5 = (unsigned __int16)v4 | 0x80070000;
  if ( v4 <= 0 )
    v5 = v4;
  if ( v5 < 0
    && off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 3u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Cu, &stru_1800445C8, v5);
  }
  if ( (_BYTE)v7 )
    *a3 = 1;
  return 0LL;
}
