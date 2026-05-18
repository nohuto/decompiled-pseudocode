/*
 * XREFs of sub_1801147FC @ 0x1801147FC
 * Callers:
 *     sub_180111DB8 @ 0x180111DB8 (sub_180111DB8.c)
 *     sub_1801122E0 @ 0x1801122E0 (sub_1801122E0.c)
 *     sub_180112400 @ 0x180112400 (sub_180112400.c)
 *     sub_180112520 @ 0x180112520 (sub_180112520.c)
 *     sub_180112680 @ 0x180112680 (sub_180112680.c)
 *     sub_180112910 @ 0x180112910 (sub_180112910.c)
 *     sub_180112A90 @ 0x180112A90 (sub_180112A90.c)
 *     sub_180112D40 @ 0x180112D40 (sub_180112D40.c)
 *     sub_1801130A0 @ 0x1801130A0 (sub_1801130A0.c)
 *     sub_180113220 @ 0x180113220 (sub_180113220.c)
 *     sub_1801134D0 @ 0x1801134D0 (sub_1801134D0.c)
 *     sub_180113750 @ 0x180113750 (sub_180113750.c)
 *     sub_180113890 @ 0x180113890 (sub_180113890.c)
 *     sub_180113B20 @ 0x180113B20 (sub_180113B20.c)
 *     sub_180113CB0 @ 0x180113CB0 (sub_180113CB0.c)
 *     sub_1801140B0 @ 0x1801140B0 (sub_1801140B0.c)
 *     sub_1801141F0 @ 0x1801141F0 (sub_1801141F0.c)
 *     sub_1801143C0 @ 0x1801143C0 (sub_1801143C0.c)
 *     sub_180114720 @ 0x180114720 (sub_180114720.c)
 *     sub_1801148B0 @ 0x1801148B0 (sub_1801148B0.c)
 *     sub_180114A00 @ 0x180114A00 (sub_180114A00.c)
 * Callees:
 *     _o__invalid_parameter_noinfo @ 0x18011E029 (_o__invalid_parameter_noinfo.c)
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     memset @ 0x18011E09A (memset.c)
 *     sprintf_s @ 0x18011F08C (sprintf_s.c)
 */

bool __fastcall sub_1801147FC(_QWORD *Src, __int64 a2, _BYTE *a3)
{
  int v4; // esi
  size_t v6; // r10
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rcx

  v4 = a2;
  if ( !a3 )
    return 0;
  *a3 = 0;
  v6 = Src[19];
  if ( WORD2(a2) )
  {
    if ( v6 < WORD2(a2) )
    {
      memset(a3, 0, v6);
      *(_DWORD *)o__errno(v9, v8) = 34;
      o__invalid_parameter_noinfo(v11, v10);
      return 0;
    }
    memcpy(a3, Src, WORD2(a2));
    v6 = Src[19];
  }
  return sprintf_s(&a3[Src[17]], v6 - Src[17], "%u", v4) != -1;
}
