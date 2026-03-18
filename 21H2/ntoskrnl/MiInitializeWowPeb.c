/*
 * XREFs of MiInitializeWowPeb @ 0x1406D8E14
 * Callers:
 *     MmCreatePeb @ 0x140755B70 (MmCreatePeb.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x1402D6CB0 (RtlImageDirectoryEntryToData.c)
 *     MmCheckImageMapping @ 0x1406D9288 (MmCheckImageMapping.c)
 *     MiCreatePebOrTeb @ 0x1407099A4 (MiCreatePebOrTeb.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall MiInitializeWowPeb(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  __int16 v8; // ax
  char v9; // si
  char v10; // al
  __int64 result; // rax
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  int v15; // ecx
  __int16 v16; // ax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int16 v19; // ax
  char v20; // al
  unsigned __int64 v21; // rax
  __int16 v22; // ax
  char v23; // al
  int v24; // eax
  bool v25; // zf
  char v26; // [rsp+24h] [rbp-44h] BYREF
  __int64 v27; // [rsp+28h] [rbp-40h]
  __int64 v28[7]; // [rsp+30h] [rbp-38h] BYREF
  char v29; // [rsp+80h] [rbp+18h] BYREF

  v6 = a2;
  v28[0] = 0LL;
  v29 = 0;
  v27 = 0LL;
  if ( !*(_QWORD *)(a3 + 1408) )
  {
    v9 = 1;
LABEL_42:
    v17 = 2LL;
    goto LABEL_18;
  }
  v8 = *(_WORD *)(a3 + 2412);
  if ( v8 == 332 || v8 == 452 )
  {
    v9 = 1;
    v10 = 1;
  }
  else
  {
    v10 = 0;
    v9 = 1;
  }
  if ( !v10 )
    goto LABEL_42;
  result = MmCheckImageMapping(a3, &v29);
  if ( (int)result < 0 )
    return result;
  LOBYTE(v12) = v29;
  v13 = RtlImageDirectoryEntryToData(*(_QWORD *)(a3 + 1312), v12, 10, (int)&v26);
  a2 = v13;
  v27 = v13;
  if ( v13 )
  {
    if ( (v13 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v14 = *(unsigned int *)(v27 + 48);
    if ( ((unsigned int)v14 & (unsigned __int64)qword_140D06E48[*(unsigned __int16 *)(a4 + 8)]) != v14 )
      v14 = 0LL;
    *(_QWORD *)a4 = v14;
    a2 = v27;
  }
  *(_DWORD *)a1 = *(unsigned __int16 *)(v6 + 92);
  *(_DWORD *)(a1 + 4) = *(unsigned __int16 *)(v6 + 72);
  *(_DWORD *)(a1 + 8) = *(unsigned __int16 *)(v6 + 74);
  v15 = *(_DWORD *)(v6 + 76);
  if ( v15 )
  {
    if ( a2 )
    {
      v16 = *(_WORD *)(a2 + 52);
      if ( v16 )
      {
        *(_WORD *)(a1 + 26) = v16;
        v15 = *(_DWORD *)(v6 + 76);
      }
    }
    *(_DWORD *)(a1 + 12) = (unsigned __int8)v15;
    *(_DWORD *)(a1 + 16) = BYTE1(v15);
    *(_WORD *)(a1 + 24) = HIWORD(v15);
    *(_DWORD *)(a1 + 20) = (v15 ^ 0xBFFFFFFF) >> 30;
  }
  v17 = 1LL;
LABEL_18:
  result = MiCreatePebOrTeb(v17, a2, v28);
  if ( (int)result >= 0 )
  {
    v18 = v28[0];
    **(_QWORD **)(a3 + 1408) = v28[0];
    if ( *(_QWORD *)(a3 + 1408) )
    {
      v19 = *(_WORD *)(a3 + 2412);
      if ( v19 == 332 || (v25 = v19 == 452, v20 = 0, v25) )
        v20 = 1;
      if ( v20 )
      {
        v21 = *(_QWORD *)(a1 + 32);
        if ( v21 > 0x40000000 )
        {
          v21 = 0x100000LL;
          *(_QWORD *)(a1 + 32) = 0x100000LL;
        }
        if ( *(_QWORD *)(a1 + 40) > v21 )
          *(_QWORD *)(a1 + 40) = 0x2000LL;
      }
    }
    if ( !*(_QWORD *)(a3 + 1408) )
      goto LABEL_35;
    v22 = *(_WORD *)(a3 + 2412);
    if ( v22 == 332 || (v25 = v22 == 452, v23 = 0, v25) )
      v23 = 1;
    if ( !v23 )
LABEL_35:
      v9 = 0;
    v24 = *(_DWORD *)(a1 + 12);
    if ( v9 )
    {
      *(_DWORD *)(v18 + 164) = v24;
      *(_DWORD *)(v18 + 168) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 172) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 176) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 174) = *(_WORD *)(a1 + 26);
      *(_DWORD *)(v18 + 120) = *(_DWORD *)(a1 + 32);
      *(_DWORD *)(v18 + 124) = *(_DWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 100) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 104) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1144) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 112) = qword_140C50650;
      *(_DWORD *)(v18 + 520) = dword_140D051D8;
      *(_DWORD *)(v18 + 128) = qword_140D051E8;
      *(_DWORD *)(v18 + 132) = qword_140D051E0;
      *(_DWORD *)(v18 + 468) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 180) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 184) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 188) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_DWORD *)(v18 + 4) = *(_DWORD *)(a1 + 104);
      *(_DWORD *)(v18 + 8) = *(_DWORD *)(a1 + 112);
      *(_WORD *)(v18 + 552) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v18 + 554) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v18 + 556) = *(_WORD *)(a1 + 124);
      *(_DWORD *)(v18 + 1136) = *(_DWORD *)(a1 + 128);
      *(_DWORD *)(v18 + 1140) = *(_DWORD *)(a1 + 136);
    }
    else
    {
      *(_DWORD *)(v18 + 280) = v24;
      *(_DWORD *)(v18 + 284) = *(_DWORD *)(a1 + 16);
      *(_WORD *)(v18 + 288) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v18 + 292) = *(_DWORD *)(a1 + 20);
      *(_WORD *)(v18 + 290) = *(_WORD *)(a1 + 26);
      *(_QWORD *)(v18 + 200) = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(v18 + 208) = *(_QWORD *)(a1 + 40);
      *(_DWORD *)(v18 + 184) = KeNumberProcessors_0;
      *(_DWORD *)(v18 + 188) = NtGlobalFlag;
      *(_DWORD *)(v18 + 1988) = NtGlobalFlag2;
      *(_QWORD *)(v18 + 192) = qword_140C50650;
      *(_QWORD *)(v18 + 792) = (unsigned int)dword_140D051D8;
      *(_QWORD *)(v18 + 216) = qword_140D051E8;
      *(_QWORD *)(v18 + 224) = qword_140D051E0;
      *(_DWORD *)(v18 + 704) = *(_DWORD *)(a1 + 60);
      *(_DWORD *)(v18 + 296) = *(_DWORD *)a1;
      *(_DWORD *)(v18 + 300) = *(_DWORD *)(a1 + 4);
      *(_DWORD *)(v18 + 304) = *(_DWORD *)(a1 + 8);
      *(_BYTE *)v18 = *(_BYTE *)(a1 + 96);
      *(_BYTE *)(v18 + 3) = *(_BYTE *)(a1 + 97);
      *(_QWORD *)(v18 + 8) = *(_QWORD *)(a1 + 104);
      *(_QWORD *)(v18 + 16) = *(_QWORD *)(a1 + 112);
      *(_WORD *)(v18 + 844) = *(_WORD *)(a1 + 120);
      *(_WORD *)(v18 + 846) = *(_WORD *)(a1 + 122);
      *(_WORD *)(v18 + 848) = *(_WORD *)(a1 + 124);
      *(_QWORD *)(v18 + 1976) = *(_QWORD *)(a1 + 128);
      *(_DWORD *)(v18 + 1984) = *(_DWORD *)(a1 + 136);
    }
    return 0LL;
  }
  return result;
}
