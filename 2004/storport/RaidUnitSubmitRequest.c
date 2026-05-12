/*
 * XREFs of RaidUnitSubmitRequest @ 0x1C000A75C
 * Callers:
 *     RaUnitScsiIrp @ 0x1C000A8C0 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidStartIoPacket @ 0x1C000AD20 (RaidStartIoPacket.c)
 *     IsUntaggedRequest @ 0x1C000B908 (IsUntaggedRequest.c)
 *     DbgLogRequest @ 0x1C00104E8 (DbgLogRequest.c)
 */

__int64 __fastcall RaidUnitSubmitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v5; // r8
  unsigned int v6; // esi
  unsigned int v7; // ebp
  int v8; // eax
  unsigned int v9; // r9d
  __int64 v10; // r8

  v2 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(v2 + 8);
  *(_BYTE *)(v2 + 3) |= 1u;
  *(_BYTE *)(v5 + 3) = 0;
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v5 + 2) == 40 )
  {
    v7 = *(_DWORD *)(v5 + 20);
    v6 = *(_DWORD *)(v5 + 24);
  }
  else
  {
    v6 = *(_DWORD *)(v5 + 12);
    v7 = *(unsigned __int8 *)(v5 + 2);
  }
  if ( (qword_1C0068350 & 0x20) != 0 )
    DbgLogRequest(
      *(_QWORD *)(a1 + 24),
      3,
      a2,
      (unsigned __int8)BYTE2(*(_DWORD *)(a1 + 96)) | ((((unsigned __int8)*(_DWORD *)(a1 + 96) << 8) | (unsigned __int8)BYTE1(*(_DWORD *)(a1 + 96))) << 8),
      0LL,
      0LL,
      0LL);
  v8 = IsUntaggedRequest(v6, v7);
  v10 = v9 | 1;
  if ( !v8 )
    v10 = v9;
  RaidStartIoPacket(a1, a2, v10);
  return 259LL;
}
