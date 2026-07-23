/*
 * XREFs of _RtlpHpTagContextGetTag@8 @ 0x4B36FF45
 * Callers:
 *     _RtlpHpTagAllocateHeap@12 @ 0x4B36FCF9 (_RtlpHpTagAllocateHeap@12.c)
 * Callees:
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     _memcmp @ 0x4B2F8860 (_memcmp.c)
 *     _RtlpHpTagContextAllocateTag@16 @ 0x4B36FD50 (_RtlpHpTagContextAllocateTag@16.c)
 *     _RtlpHpTagMappingComparison@8 @ 0x4B3701EA (_RtlpHpTagMappingComparison@8.c)
 */

__int16 __fastcall RtlpHpTagContextGetTag(int a1, unsigned int a2)
{
  int v3; // edi
  int v4; // esi
  unsigned __int8 *v5; // edx
  int v6; // esi
  int v7; // ecx
  int v8; // esi
  int v9; // esi
  int v10; // ecx
  int v11; // edx
  size_t v13; // [esp-4h] [ebp-34h]
  size_t v14; // [esp-4h] [ebp-34h]
  int v15; // [esp+14h] [ebp-1Ch]
  _DWORD Buf1[4]; // [esp+1Ch] [ebp-14h] BYREF

  memset(Buf1, 0, sizeof(Buf1));
  LODWORD(v13) = 16;
  Buf1[0] = NtCurrentTeb()->SubProcessTag;
  if ( !memcmp(Buf1, &RtlpHpNullGUID, v13) )
  {
    LOWORD(v3) = 0;
    return v3;
  }
  if ( word_4B3A46B8 )
  {
    LODWORD(v14) = 16;
    v4 = *(_DWORD *)(dword_4B3A46B0 + 4 * (unsigned __int16)word_4B3A46B8 - 4);
    if ( !memcmp((const void *)(v4 + 8), Buf1, v14) )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 24), a2);
      LOWORD(v3) = *(_WORD *)(v4 + 28);
      goto LABEL_25;
    }
  }
  v5 = (unsigned __int8 *)Buf1;
  v6 = 314159;
  v3 = 2;
  do
  {
    v7 = 37 * (v5[6] + 37 * (v5[5] + 37 * (v5[4] + 37 * (v5[3] + 37 * (v5[2] + 37 * v5[1]))))) - 803794207 * v6;
    v8 = 442596621 * *v5;
    v5 += 8;
    v6 = *(v5 - 1) + v7 + v8;
    --v3;
  }
  while ( v3 );
  v15 = v6;
  v9 = 0;
  while ( 1 )
  {
    v10 = dword_4B3A46A8 & 0x1F;
    v11 = v15 & (-1 << (dword_4B3A46A8 & 0x1F));
    if ( v9 )
      goto LABEL_12;
    if ( (unsigned int)dword_4B3A46A8 < 0x20 )
      break;
    v9 = dword_4B3A46AC
       + 4
       * ((37 * (BYTE2(v11) + 37 * (BYTE1(v11) + 37 * (unsigned __int8)v11)) + HIBYTE(v11) + 374026047) & (((unsigned int)dword_4B3A46A8 >> 5) - 1));
LABEL_12:
    v10 = -1 << (dword_4B3A46A8 & 0x1F);
    while ( 1 )
    {
      v9 = *(_DWORD *)v9;
      if ( (v9 & 1) != 0 )
        break;
      if ( v11 == ((-1 << (dword_4B3A46A8 & 0x1F)) & *(_DWORD *)(v9 + 4)) )
        goto LABEL_17;
    }
    v9 = 0;
LABEL_17:
    if ( !v9 )
      goto LABEL_23;
    if ( RtlpHpTagMappingComparison(v9, Buf1) )
      goto LABEL_21;
  }
  v9 = 0;
LABEL_21:
  if ( v9 )
  {
    v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 24), a2);
    LOWORD(v3) = *(_WORD *)(v9 + 28);
  }
LABEL_23:
  if ( (_WORD)v3 )
    goto LABEL_26;
  LOWORD(v3) = RtlpHpTagContextAllocateTag(v10, Buf1, v15, a2);
LABEL_25:
  if ( (_WORD)v3 )
LABEL_26:
    word_4B3A46B8 = v3;
  return v3;
}
