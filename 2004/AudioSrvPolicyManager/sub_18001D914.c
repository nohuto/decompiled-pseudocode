/*
 * XREFs of sub_18001D914 @ 0x18001D914
 * Callers:
 *     sub_18001B7E4 @ 0x18001B7E4 (sub_18001B7E4.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 */

__int64 __fastcall sub_18001D914(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // ebx
  int v5; // eax
  signed int v6; // r9d
  __int64 result; // rax
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = a1;
  v3 = 0;
  *a3 = 0;
  LOBYTE(v8) = 0;
  v5 = CapabilityCheck(a2, L"userSigninSupport", &v8);
  v6 = (unsigned __int16)v5 | 0x80070000;
  if ( v5 <= 0 )
    v6 = v5;
  if ( v6 < 0
    && off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 3u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x1Du, &stru_1800445C8, v6);
  }
  LOBYTE(v3) = (_BYTE)v8 != 0;
  result = 0LL;
  *a3 = v3;
  return result;
}
