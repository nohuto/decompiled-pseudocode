/*
 * XREFs of sub_1800197C0 @ 0x1800197C0
 * Callers:
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 * Callees:
 *     sub_1800093A0 @ 0x1800093A0 (sub_1800093A0.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_18000F390 @ 0x18000F390 (sub_18000F390.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_18001E380 @ 0x18001E380 (sub_18001E380.c)
 *     sub_180023230 @ 0x180023230 (sub_180023230.c)
 *     sub_1800277CC @ 0x1800277CC (sub_1800277CC.c)
 *     sub_180035188 @ 0x180035188 (sub_180035188.c)
 *     sub_180035844 @ 0x180035844 (sub_180035844.c)
 *     sub_180036EBC @ 0x180036EBC (sub_180036EBC.c)
 *     sub_18003D10C @ 0x18003D10C (sub_18003D10C.c)
 *     sub_180078A74 @ 0x180078A74 (sub_180078A74.c)
 *     sub_18007F43C @ 0x18007F43C (sub_18007F43C.c)
 *     sub_18007F6D0 @ 0x18007F6D0 (sub_18007F6D0.c)
 *     sub_18007F818 @ 0x18007F818 (sub_18007F818.c)
 *     sub_18007F87C @ 0x18007F87C (sub_18007F87C.c)
 */

__int64 __fastcall sub_1800197C0(__int64 a1, __int64 a2)
{
  int v2; // r15d
  DWORD v5; // ebp
  __int64 v6; // rdi
  _QWORD *Value; // rbx
  unsigned int *v8; // rbp
  _QWORD *v9; // rax
  unsigned int v12; // ecx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ebx
  unsigned int v17; // edi
  __int64 v18; // rcx
  __int64 v19; // [rsp+A8h] [rbp+10h] BYREF
  int v20; // [rsp+B0h] [rbp+18h]
  __int64 v21; // [rsp+B8h] [rbp+20h]

  v2 = 0;
  if ( (*(_BYTE *)(a2 + 772) & 1) == 0 )
    return 0LL;
  v5 = dwTlsIndex;
  v6 = *(_QWORD *)(a2 + 648) >> 62;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockShared(a1 + 576);
  v8 = (unsigned int *)(a1 + 608);
  if ( ((*(_DWORD *)(a1 + 608) >> 21) & 3u) < (unsigned int)v6 )
  {
    sub_180036EBC(a1);
    sub_18000A110(a2);
    sub_18000F390();
    sub_1800277CC(a1);
    v12 = *v8;
    if ( ((*v8 >> 21) & 3) >= (unsigned int)v6 )
    {
LABEL_25:
      sub_180023230(a1);
      sub_18001E380(v18);
      sub_1800093A0(a2, 0);
      return 1LL;
    }
    while ( (v12 & 0x100000) != 0 )
    {
      sub_18007F818(a2);
      sub_18007F87C(a1);
      v12 = *v8;
      if ( ((*v8 >> 21) & 3) >= (unsigned int)v6 )
        goto LABEL_25;
    }
    *v8 = v12 | 0x100000;
    sub_180023230(a1);
    v13 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 88LL);
    v16 = sub_180035188(v13, &v19);
    if ( v16 >= 0 )
    {
      while ( 1 )
      {
        v16 = sub_180035844(a1, v14, (unsigned int)v6, v19);
        if ( v16 >= 0 )
          break;
        if ( v2 )
          goto LABEL_18;
        v16 = sub_18003D10C(v13, &v19);
        if ( v16 < 0 )
          goto LABEL_18;
        v2 = 1;
      }
      if ( v2 )
      {
        if ( (unsigned int)dword_1800B3218 <= 4 )
        {
LABEL_20:
          if ( v16 < 0 )
            sub_18007F6D0(a1, (unsigned int)v16);
          sub_1800277CC(a1);
          if ( v16 < 0 )
            v17 = *v8;
          else
            v17 = *v8 & 0xFF9FFFFF | ((_DWORD)v6 << 21);
          *v8 = v17 & 0xFFEFFFFF;
          RtlWakeAddressAll(a1 + 608);
          goto LABEL_25;
        }
        if ( sub_180010470((__int64)&dword_1800B3218, 8LL) )
        {
          v20 = v2;
          LOBYTE(v19) = v6;
          LODWORD(v21) = v16;
          sub_18007F43C(v15, &unk_1800A15F0);
        }
      }
    }
LABEL_18:
    if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    {
      v21 = *(_QWORD *)(a2 - 32);
      LOBYTE(v19) = v6;
      v20 = v16;
      sub_180078A74(v15, &unk_1800A16D7);
    }
    goto LABEL_20;
  }
  if ( dwTlsIndex != -1 )
  {
    v9 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v9 & 0x20) == 0 )
      __int2c();
    if ( v9[6]-- == 1LL )
      *v9 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(a1 + 576);
  return 0LL;
}
