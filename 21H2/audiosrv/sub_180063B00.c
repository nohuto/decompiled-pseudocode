/*
 * XREFs of sub_180063B00 @ 0x180063B00
 * Callers:
 *     sub_1800638B0 @ 0x1800638B0 (sub_1800638B0.c)
 * Callees:
 *     sub_180063C00 @ 0x180063C00 (sub_180063C00.c)
 *     sub_1800BB4B4 @ 0x1800BB4B4 (sub_1800BB4B4.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 */

__int64 __fastcall sub_180063B00(__int64 a1, unsigned __int16 *a2, __int64 a3, void *a4)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax
  unsigned int v9; // eax

  v7 = 0;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 22LL, &unk_18016D4B0, a2);
  }
  if ( !(unsigned __int8)sub_180063C00(a2) )
  {
    v8 = RpcServerUseProtseqEpW((RPC_WSTR)L"ncalrpc", 0xAu, a2, a4);
    v7 = v8;
    if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
      && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
      && *((_BYTE *)off_18019C348 + 25) >= 4u )
    {
      sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 23LL, &unk_18016D4B0, v8);
    }
LABEL_6:
    if ( v7 )
      return v7;
    goto LABEL_7;
  }
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4B4(*((_QWORD *)off_18019C348 + 2), 24LL, &unk_18016D4B0);
    goto LABEL_6;
  }
LABEL_7:
  v9 = RpcServerRegisterIf3(a3, 0LL, 0LL, 33LL, 1234, 0, sub_180045D30, a4);
  v7 = v9;
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_BYTE *)off_18019C348 + 28) & 0x10) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 25LL, &unk_18016D4B0, v9);
  }
  return v7;
}
