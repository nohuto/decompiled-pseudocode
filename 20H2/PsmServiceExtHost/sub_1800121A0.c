/*
 * XREFs of sub_1800121A0 @ 0x1800121A0
 * Callers:
 *     sub_180012870 @ 0x180012870 (sub_180012870.c)
 * Callees:
 *     <none>
 */

PULONG __fastcall sub_1800121A0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  int v5; // ecx
  __int16 v6; // dx
  __int16 v7; // cx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // r9d
  __int16 v12; // ax
  __int16 v13; // cx
  __int16 v14; // cx
  __int16 v15; // ax
  __int16 v16; // cx
  PULONG result; // rax
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-10h] BYREF

  v2 = *(_QWORD *)(a1 + 320);
  if ( (v2 & 8) != 0 )
    *(_QWORD *)(a2 + 64) = *(_QWORD *)(a1 + 352);
  if ( (v2 & 4) != 0 )
    *(_QWORD *)(a2 + 24) = *(_QWORD *)(a1 + 344);
  if ( (v2 & 2) != 0 )
    *(_QWORD *)(a2 + 56) = *(_QWORD *)(a1 + 336);
  if ( (v2 & 1) != 0 )
    *(_QWORD *)(a2 + 360) = *(_QWORD *)(a1 + 328);
  v5 = *(_DWORD *)(a1 + 368);
  if ( (v2 & 0x20) != 0 )
  {
    *(_DWORD *)(a2 + 44) &= 0xFFFFFFFC;
    *(_DWORD *)(a2 + 44) |= v5 & 3;
  }
  if ( (v2 & 0x40) != 0 )
  {
    *(_DWORD *)(a2 + 44) &= ~8u;
    *(_DWORD *)(a2 + 44) |= v5 & 8;
  }
  if ( (v2 & 0x80u) != 0LL )
    *(_DWORD *)(a2 + 44) ^= (*(_DWORD *)(a2 + 44) ^ *(_DWORD *)(a1 + 368)) & 0x20;
  v6 = 0;
  v7 = 1;
  if ( (*(_BYTE *)(a1 + 312) & 1) != 0 )
  {
    v8 = *(_DWORD *)(a1 + 312);
    if ( v8 != 1 )
    {
      *(_DWORD *)(a2 + 16) = v8;
      v9 = *(unsigned __int8 *)(a1 + 315);
      if ( (_BYTE)v9 )
      {
        *(_DWORD *)(a2 + 32) = v9;
        *(_DWORD *)(a2 + 8) = v9;
        *(_DWORD *)(a2 + 96) = v9;
        *(_DWORD *)(a2 + 120) = v9;
        *(_DWORD *)(a2 + 144) = v9;
        *(_DWORD *)(a2 + 32) = *(unsigned __int8 *)(a1 + 316);
      }
    }
  }
  v10 = *(_DWORD *)(a1 + 296);
  if ( (v10 & 2) != 0 )
  {
    *(_QWORD *)(a2 + 136) = *(_QWORD *)(a1 + 280);
    *(_DWORD *)(a2 + 128) = 2;
    v10 = *(_DWORD *)(a1 + 296);
  }
  if ( (v10 & 4) != 0 )
  {
    *(_QWORD *)(a2 + 112) = *(_QWORD *)(a1 + 288);
    *(_DWORD *)(a2 + 104) = 1;
  }
  v11 = *(_DWORD *)a1 & 0x200;
  if ( (*(_DWORD *)a1 & 0x10000) != 0 )
  {
    *(_BYTE *)(a2 + 42) |= 0x20u;
    v12 = *(_WORD *)(a2 + 40);
  }
  else
  {
    if ( v11 || (*(_DWORD *)a1 & 0x2000) == 0 )
      v7 = 0;
    v12 = v7 | *(_WORD *)(a2 + 40) & 0xFFFE;
    *(_WORD *)(a2 + 40) = v12;
  }
  v13 = 0;
  if ( !v11 )
    v13 = 2;
  v14 = v12 & 0xFFFD | v13 | 0x20;
  v15 = 0;
  *(_WORD *)(a2 + 40) = v14;
  if ( (*(_DWORD *)a1 & 0x2000) == 0 )
    v15 = 8;
  v16 = v15 | v14 & 0xFFF7;
  *(_WORD *)(a2 + 40) = v16;
  if ( (*(_DWORD *)a1 & 0x2000) == 0 )
    v6 = 16;
  *(_WORD *)(a2 + 40) = v6 | v16 & 0xFFEF;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)(a1 + 384), 0x2Fu);
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0) )
    *(_DWORD *)(a2 + 164) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 1u) )
    *(_DWORD *)(a2 + 168) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 2u) )
    *(_DWORD *)(a2 + 172) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 3u) )
    *(_DWORD *)(a2 + 176) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 4u) )
    *(_DWORD *)(a2 + 180) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 5u) )
    *(_DWORD *)(a2 + 184) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 6u) )
    *(_DWORD *)(a2 + 188) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 7u) )
    *(_DWORD *)(a2 + 192) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 8u) )
    *(_DWORD *)(a2 + 196) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 9u) )
    *(_DWORD *)(a2 + 200) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xAu) )
    *(_DWORD *)(a2 + 204) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xBu) )
    *(_DWORD *)(a2 + 208) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xCu) )
    *(_DWORD *)(a2 + 212) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xDu) )
    *(_DWORD *)(a2 + 216) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xEu) )
    *(_DWORD *)(a2 + 220) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0xFu) )
    *(_DWORD *)(a2 + 224) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x10u) )
    *(_DWORD *)(a2 + 228) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x11u) )
    *(_DWORD *)(a2 + 232) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x12u) )
    *(_DWORD *)(a2 + 236) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x13u) )
    *(_DWORD *)(a2 + 240) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x14u) )
    *(_DWORD *)(a2 + 244) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x15u) )
    *(_DWORD *)(a2 + 248) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x16u) )
    *(_DWORD *)(a2 + 252) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x17u) )
    *(_DWORD *)(a2 + 256) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x18u) )
    *(_DWORD *)(a2 + 260) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x19u) )
    *(_DWORD *)(a2 + 264) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Au) )
    *(_DWORD *)(a2 + 268) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Bu) )
    *(_DWORD *)(a2 + 272) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Cu) )
    *(_DWORD *)(a2 + 276) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Du) )
    *(_DWORD *)(a2 + 280) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Eu) )
    *(_DWORD *)(a2 + 284) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x1Fu) )
    *(_DWORD *)(a2 + 288) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x20u) )
    *(_DWORD *)(a2 + 292) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x21u) )
    *(_DWORD *)(a2 + 296) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x22u) )
    *(_DWORD *)(a2 + 300) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x23u) )
    *(_DWORD *)(a2 + 304) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x24u) )
    *(_DWORD *)(a2 + 308) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x25u) )
    *(_DWORD *)(a2 + 312) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x26u) )
    *(_DWORD *)(a2 + 316) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x27u) )
    *(_DWORD *)(a2 + 320) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x28u) )
    *(_DWORD *)(a2 + 324) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x29u) )
    *(_DWORD *)(a2 + 328) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Au) )
    *(_DWORD *)(a2 + 332) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Bu) )
    *(_DWORD *)(a2 + 336) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Cu) )
    *(_DWORD *)(a2 + 340) = 2;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Du) )
    *(_DWORD *)(a2 + 344) = 2;
  result = BitMapHeader.Buffer;
  if ( _bittest64((const signed __int64 *)BitMapHeader.Buffer, 0x2Eu) )
    *(_DWORD *)(a2 + 348) = 2;
  return result;
}
