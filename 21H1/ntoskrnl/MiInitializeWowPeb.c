/*
 * XREFs of MiInitializeWowPeb @ 0x1406E2204
 * Callers:
 *     MmCreatePeb @ 0x1406F9F18 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14033AA90 (RtlImageDirectoryEntryToData.c)
 *     MiCreatePebOrTeb @ 0x1406395AC (MiCreatePebOrTeb.c)
 *     MmCheckImageMapping @ 0x1406E2648 (MmCheckImageMapping.c)
 *     ExRaiseDatatypeMisalignment @ 0x140767450 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 result; // rax
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  char v17; // si
  int v18; // ecx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int16 v21; // cx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  __int16 v24; // cx
  int v25; // eax
  char v26; // [rsp+24h] [rbp-44h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  _QWORD v28[7]; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+80h] [rbp+18h] BYREF

  v28[0] = 0LL;
  v29 = 0;
  v27 = 0LL;
  v8 = *(_QWORD *)(a3 + 1408);
  if ( v8 && ((v9 = *(_WORD *)(v8 + 8), v9 == 332) || v9 == 452) )
  {
    result = MmCheckImageMapping(a3, &v29);
    if ( (int)result < 0 )
      return result;
    LOBYTE(v11) = v29;
    v12 = RtlImageDirectoryEntryToData(*(_QWORD *)(a3 + 1312), v11, 10, (int)&v26);
    v13 = v12;
    v27 = v12;
    if ( v12 )
    {
      if ( (v12 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = *(unsigned int *)(v27 + 48);
      if ( ((unsigned int)v14 & (unsigned __int64)qword_140CFC838[*(unsigned __int16 *)(a4 + 8)]) != v14 )
        v14 = 0LL;
      *(_QWORD *)a4 = v14;
      v13 = v27;
    }
    *(_DWORD *)a1 = *(unsigned __int16 *)(a2 + 92);
    *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(a2 + 72);
    *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(a2 + 74);
    v15 = *(_DWORD *)(a2 + 76);
    if ( v15 )
    {
      if ( v13 )
      {
        v16 = *(_WORD *)(v13 + 52);
        if ( v16 )
        {
          *(_WORD *)(a1 + 26) = v16;
          v15 = *(_DWORD *)(a2 + 76);
        }
      }
      *(_DWORD *)(a1 + 12) = (unsigned __int8)v15;
      *(_DWORD *)(a1 + 16) = BYTE1(v15);
      *(_WORD *)(a1 + 24) = HIWORD(v15);
      *(_DWORD *)(a1 + 20) = (v15 ^ 0xBFFFFFFF) >> 30;
    }
    v17 = 1;
    v18 = 1;
  }
  else
  {
    v18 = 2;
    v17 = 1;
  }
  result = MiCreatePebOrTeb(v18, 0LL, v28);
  if ( (int)result >= 0 )
  {
    v19 = v28[0];
    **(_QWORD **)(a3 + 1408) = v28[0];
    v20 = *(_QWORD *)(a3 + 1408);
    if ( v20 )
    {
      v21 = *(_WORD *)(v20 + 8);
      if ( v21 == 332 || v21 == 452 )
      {
        v22 = *(_QWORD *)(a1 + 32);
        if ( v22 > 0x40000000 )
        {
          v22 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        if ( *(_QWORD *)(a1 + 40) > v22 )
          *(_QWORD *)(a1 + 40) = 0x2000LL;
      }
    }
    v23 = *(_QWORD *)(a3 + 1408);
    if ( !v23 || (v24 = *(_WORD *)(v23 + 8), v24 != 332) && v24 != 452 )
      v17 = 0;
    v25 = *(_DWORD *)(a1 + 12);
    if ( v17 )
    {
      *(_DWORD *)(v19 + 164) = v25;
      *(_DWORD *)(v19 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v19 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v19 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v19 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v19 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v19 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v19 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v19 + 104) = NtGlobalFlag;
      *(_DWORD *)(v19 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v19 + 112) = qword_140C4DD60;
      *(_DWORD *)(v19 + 520) = dword_140CFB198;
      *(_DWORD *)(v19 + 128) = qword_140CFB1A8;
      *(_DWORD *)(v19 + 132) = qword_140CFB1A0;
      *(_DWORD *)(v19 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v19 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v19 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v19 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v19 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v19 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v19 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v19 + 8) = *(_DWORD *)(a1 + 112);
      *(_DWORD *)(v19 + 88) = *(_DWORD *)(a1 + 120);
      *(_DWORD *)(v19 + 92) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v19 + 96) = *(_DWORD *)(a1 + 136);
      *(_DWORD *)(v19 + 1136) = *(_DWORD *)(a1 + 144);
      *(_DWORD *)(v19 + 1140) = *(_DWORD *)(a1 + 152);
    }
    else
    {
      *(_DWORD *)(v19 + 280) = v25;
      *(_DWORD *)(v19 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v19 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v19 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v19 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v19 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v19 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v19 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v19 + 188) = NtGlobalFlag;
      *(_DWORD *)(v19 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v19 + 192) = qword_140C4DD60;
      *(_QWORD *)(v19 + 792) = (unsigned int)dword_140CFB198;
      *(_QWORD *)(v19 + 216) = qword_140CFB1A8;
      *(_QWORD *)(v19 + 224) = qword_140CFB1A0;
      *(_DWORD *)(v19 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v19 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v19 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v19 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v19 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v19 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v19 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v19 + 16) = *(_QWORD *)(a1 + 112);
      *(_QWORD *)(v19 + 160) = *(_QWORD *)(a1 + 120);
      *(_QWORD *)(v19 + 168) = *(_QWORD *)(a1 + 128);
      *(_QWORD *)(v19 + 176) = *(_QWORD *)(a1 + 136);
      *(_QWORD *)(v19 + 1976) = *(_QWORD *)(a1 + 144);
      *(_DWORD *)(v19 + 1984) = *(_DWORD *)(a1 + 152);
    }
    return 0LL;
  }
  return result;
}
