/*
 * XREFs of sub_180022DB0 @ 0x180022DB0
 * Callers:
 *     sub_18000FAA0 @ 0x18000FAA0 (sub_18000FAA0.c)
 *     sub_180022D04 @ 0x180022D04 (sub_180022D04.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_180028C4C @ 0x180028C4C (sub_180028C4C.c)
 *     sub_18003504C @ 0x18003504C (sub_18003504C.c)
 *     sub_1800699BC @ 0x1800699BC (sub_1800699BC.c)
 *     sub_18007B0F8 @ 0x18007B0F8 (sub_18007B0F8.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007EA8C @ 0x18007EA8C (sub_18007EA8C.c)
 * Callees:
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 */

__int64 __fastcall sub_180022DB0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rbx
  __int64 v8; // r11
  __int64 v9; // r10
  int v10; // esi
  int v11; // edi
  DWORD v12; // esi
  _QWORD *Value; // rdi
  _QWORD *v14; // rax

  RtlAcquireSRWLockShared(a1 - 1736);
  v6 = *(_DWORD *)(a1 - 1748);
  v7 = 0LL;
  v8 = -1LL << (*(_BYTE *)(a1 - 1748) & 0x1F);
  v9 = v8 & (HIBYTE(a2)
           + 37
           * (BYTE6(a2)
            + 37
            * (BYTE5(a2)
             + 37
             * (BYTE4(a2)
              + 37 * (BYTE3(a2) + 37 * (BYTE2(a2) + 37 * (BYTE1(a2) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
LABEL_2:
  if ( v7 )
    goto LABEL_5;
  if ( v6 >> 5 )
  {
    v7 = *(_QWORD *)(a1 - 1744)
       + 8LL
       * ((37
         * (BYTE6(v9)
          + 37
          * (BYTE5(v9)
           + 37
           * (BYTE4(v9) + 37 * (BYTE3(v9) + 37 * (BYTE2(v9) + 37 * (BYTE1(v9) + 37 * ((unsigned __int8)v9 + 11623883)))))))
         + HIBYTE(v9)) & ((v6 >> 5) - 1));
LABEL_5:
    while ( 1 )
    {
      v7 = *(_QWORD *)v7;
      if ( (v7 & 1) != 0 )
        break;
      if ( v9 == (v8 & *(_QWORD *)(v7 + 8)) )
      {
        if ( a2 != *(_QWORD *)(v7 + 32) )
          goto LABEL_2;
        v10 = 0;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v7 + 16)) <= 1 )
          __fastfail(0xEu);
        goto LABEL_9;
      }
    }
  }
  v7 = v9;
  v10 = -1073741275;
LABEL_9:
  RtlReleaseSRWLockShared(a1 - 1736);
  v11 = 0;
  if ( v10 < 0 )
  {
    v11 = v10;
    v7 = 0LL;
  }
  if ( v11 >= 0 )
  {
    if ( (*(_BYTE *)(v7 + 836) & 1) != 0 )
    {
      v12 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( *(_QWORD *)TlsGetValue(v12) )
          __int2c();
        *Value |= 1uLL;
        ++Value[1];
      }
      RtlAcquireSRWLockExclusive(&unk_1800B4210);
      dword_1800B4218 = GetCurrentThreadId();
      if ( *(int *)(v7 + 24) < 0 )
      {
        v11 = -1073741275;
      }
      else
      {
        ++*(_QWORD *)(v7 + 656);
        v11 = 0;
        *a3 = v7 + 64;
      }
      dword_1800B4218 = 0;
      RtlReleaseSRWLockExclusive(&unk_1800B4210);
      if ( dwTlsIndex != -1 )
      {
        v14 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v14 & 1) == 0 )
          __int2c();
        if ( v14[1]-- == 1LL )
          *v14 &= ~1uLL;
      }
    }
    else
    {
      v11 = -1073741776;
    }
  }
  if ( v7 )
    sub_1800265B0((PVOID)v7);
  return (unsigned int)v11;
}
