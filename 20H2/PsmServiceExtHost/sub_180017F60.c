/*
 * XREFs of sub_180017F60 @ 0x180017F60
 * Callers:
 *     sub_180002D50 @ 0x180002D50 (sub_180002D50.c)
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_180004214 @ 0x180004214 (sub_180004214.c)
 *     sub_18000506C @ 0x18000506C (sub_18000506C.c)
 *     sub_180006D18 @ 0x180006D18 (sub_180006D18.c)
 *     sub_180008168 @ 0x180008168 (sub_180008168.c)
 *     sub_18000B2DC @ 0x18000B2DC (sub_18000B2DC.c)
 *     sub_18000E2A0 @ 0x18000E2A0 (sub_18000E2A0.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001A3C0 @ 0x18001A3C0 (sub_18001A3C0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_180022560 @ 0x180022560 (sub_180022560.c)
 *     sub_180026288 @ 0x180026288 (sub_180026288.c)
 *     sub_180026CFC @ 0x180026CFC (sub_180026CFC.c)
 *     sub_18002785C @ 0x18002785C (sub_18002785C.c)
 *     sub_180028478 @ 0x180028478 (sub_180028478.c)
 *     _assert @ 0x180028750 (_assert.c)
 *     sub_18002AAB0 @ 0x18002AAB0 (sub_18002AAB0.c)
 *     sub_18003D548 @ 0x18003D548 (sub_18003D548.c)
 *     sub_18007BF28 @ 0x18007BF28 (sub_18007BF28.c)
 *     sub_18007D9F0 @ 0x18007D9F0 (sub_18007D9F0.c)
 *     sub_18007DE7C @ 0x18007DE7C (sub_18007DE7C.c)
 *     sub_18007DF84 @ 0x18007DF84 (sub_18007DF84.c)
 *     sub_18007E180 @ 0x18007E180 (sub_18007E180.c)
 *     sub_18007E97C @ 0x18007E97C (sub_18007E97C.c)
 *     sub_18007ECDC @ 0x18007ECDC (sub_18007ECDC.c)
 *     sub_18007F078 @ 0x18007F078 (sub_18007F078.c)
 *     sub_180080E10 @ 0x180080E10 (sub_180080E10.c)
 * Callees:
 *     sub_18001B300 @ 0x18001B300 (sub_18001B300.c)
 *     sub_1800286D8 @ 0x1800286D8 (sub_1800286D8.c)
 *     sub_18003818C @ 0x18003818C (sub_18003818C.c)
 */

BOOLEAN __fastcall sub_180017F60(char *P)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  _QWORD *v4; // rax
  bool v5; // zf
  __int64 v6; // rax
  _QWORD *v7; // rdi
  unsigned __int64 i; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  BOOLEAN result; // al
  signed __int64 v13; // rbp
  bool v14; // cc
  signed __int64 v15; // rbp
  __int64 v16; // rcx

  if ( *((_DWORD *)P + 32) != GetCurrentThreadId() )
    __int2c();
  while ( 1 )
  {
    v2 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
        __int2c();
      *Value |= 8uLL;
      ++Value[4];
    }
    RtlAcquireSRWLockExclusive(P + 8);
    *((_DWORD *)P + 4) = GetCurrentThreadId();
    if ( *((_QWORD *)P + 14) == *((_QWORD *)P + 13) )
      break;
    *((_DWORD *)P + 4) = 0;
    RtlReleaseSRWLockExclusive(P + 8);
    if ( dwTlsIndex != -1 )
    {
      v4 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v4 & 8) == 0 )
        __int2c();
      v5 = v4[4]-- == 1LL;
      if ( v5 )
        *v4 &= ~8uLL;
    }
    sub_18001B300(P);
  }
  v6 = *((_QWORD *)P + 10);
  if ( (v6 & 1) != 0 )
  {
    if ( v6 == 1 )
      v7 = 0LL;
    else
      v7 = (_QWORD *)(v6 ^ ((unsigned __int64)(P + 72) | 1));
  }
  else
  {
    v7 = (_QWORD *)*((_QWORD *)P + 10);
  }
  if ( v7 )
  {
    do
    {
      i = v7[1];
      v9 = v7;
      if ( i )
      {
        v10 = *(_QWORD **)i;
        if ( *(_QWORD *)i )
        {
          do
          {
            i = (unsigned __int64)v10;
            v10 = (_QWORD *)*v10;
          }
          while ( v10 );
        }
      }
      else
      {
        for ( i = v7[2] & 0xFFFFFFFFFFFFFFFCuLL; i; i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL )
        {
          if ( *(_QWORD **)i == v9 )
            break;
          v9 = (_QWORD *)i;
        }
      }
      if ( (_QWORD *)v7[8] == v7 + 8 && (_QWORD *)v7[10] == v7 + 10 )
      {
        RtlRbRemoveNode(P + 72, v7);
        v7[2] = -1LL;
        sub_1800286D8(v7[5]);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
      }
      v7 = (_QWORD *)i;
    }
    while ( i );
  }
  *((_DWORD *)P + 32) = 0;
  *((_DWORD *)P + 4) = 0;
  RtlReleaseSRWLockExclusive(P + 8);
  if ( dwTlsIndex != -1 )
  {
    v11 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v11 & 8) == 0 )
      __int2c();
    v5 = v11[4]-- == 1LL;
    if ( v5 )
      *v11 &= ~8uLL;
  }
  result = RtlWakeAllConditionVariable(P + 24);
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)P + 12, 0xFFFFFFFFFFFFFFFFuLL);
  v14 = v13 <= 1;
  v15 = v13 - 1;
  if ( v14 )
  {
    if ( v15 )
      __fastfail(0xEu);
    if ( *((_QWORD *)P + 15) )
      TpReleaseWork();
    v16 = *((_QWORD *)P + 4);
    if ( v16 )
      sub_18003818C(v16, P);
    return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  }
  return result;
}
