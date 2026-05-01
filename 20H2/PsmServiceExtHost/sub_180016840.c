/*
 * XREFs of sub_180016840 @ 0x180016840
 * Callers:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_180016DD0 @ 0x180016DD0 (sub_180016DD0.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_18001FEC0 @ 0x18001FEC0 (sub_18001FEC0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     sub_18001E140 @ 0x18001E140 (sub_18001E140.c)
 *     sub_180037560 @ 0x180037560 (sub_180037560.c)
 *     sub_18006AA20 @ 0x18006AA20 (sub_18006AA20.c)
 */

void __fastcall sub_180016840(__int64 a1, char a2, __int64 a3, int a4)
{
  unsigned int v5; // edi
  DWORD v6; // r15d
  _QWORD *Value; // rbx
  unsigned int v8; // ebx
  _QWORD *v9; // rax
  int v11; // eax
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rax
  int v19; // [rsp+B8h] [rbp-80h] BYREF
  int v20; // [rsp+BCh] [rbp-7Ch] BYREF
  int v21; // [rsp+C0h] [rbp-78h] BYREF
  int v22; // [rsp+C4h] [rbp-74h] BYREF
  int v23; // [rsp+C8h] [rbp-70h] BYREF
  int v24; // [rsp+CCh] [rbp-6Ch] BYREF
  int v25; // [rsp+D0h] [rbp-68h] BYREF
  int v26; // [rsp+D4h] [rbp-64h] BYREF
  int v27; // [rsp+D8h] [rbp-60h] BYREF
  int v28; // [rsp+DCh] [rbp-5Ch] BYREF
  int v29; // [rsp+E0h] [rbp-58h] BYREF
  int v30; // [rsp+E4h] [rbp-54h] BYREF
  __int64 v31; // [rsp+E8h] [rbp-50h] BYREF
  __int16 v32; // [rsp+138h] [rbp+0h] BYREF
  int v33; // [rsp+140h] [rbp+8h] BYREF
  __int16 v34; // [rsp+148h] [rbp+10h] BYREF
  __int16 v35; // [rsp+150h] [rbp+18h] BYREF

  if ( (a2 & 2) != 0 )
  {
    v5 = *(_DWORD *)(a1 + 1464);
    if ( (*(_BYTE *)(a1 + 836) & 1) != 0 )
    {
      v6 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
          __int2c();
        *Value |= 2uLL;
        ++Value[2];
      }
      RtlAcquireSRWLockShared(a1 + 64);
      v8 = *(_DWORD *)(a1 + 728);
      if ( dwTlsIndex != -1 )
      {
        v9 = TlsGetValue(dwTlsIndex);
        if ( (*(_BYTE *)v9 & 2) == 0 )
          __int2c();
        if ( v9[2]-- == 1LL )
          *v9 &= ~2uLL;
      }
      RtlReleaseSRWLockShared(a1 + 64);
    }
    else
    {
      v13 = a1 + 1136;
      v33 = 1;
      v14 = *(_QWORD *)(a1 + 1136);
      v8 = 1;
      v15 = 0LL;
      if ( v14 != v13 )
        v15 = v14 - 1296;
      while ( v15 )
      {
        if ( (unsigned __int8)sub_180037560(v15) )
          v8 = sub_18001E140(v8, *(unsigned int *)(v15 + 1352));
        v16 = *(_QWORD *)(v15 + 1296);
        v17 = 3LL * *(int *)(v15 + 1328);
        v18 = *(_QWORD *)(v15 + 1320);
        v15 = 0LL;
        if ( v16 != v18 + 8 * (v17 + 139) )
          v15 = v16 - 1296;
      }
    }
    *(_DWORD *)(a1 + 1464) = v8;
    if ( (*(_WORD *)(a1 + 1464) & 0x400) == 0 )
    {
      v11 = *(_DWORD *)(a1 + 1240);
      if ( (v11 & 2) != 0 )
        *(_DWORD *)(a1 + 1240) = v11 & 0xFFFFFFFD;
    }
    v12 = *(_DWORD *)(a1 + 1464);
    if ( v5 != v12
      && (unsigned int)dword_1800B31E0 > 4
      && (byte_1800B31F0 & 9) != 0
      && (qword_1800B31F8 & 9) == qword_1800B31F8 )
    {
      v29 = *(_DWORD *)(a1 + 1464) & 1;
      v19 = ((unsigned __int16)v12 >> 10) & 1;
      v20 = (v5 >> 10) & 1;
      v21 = ((unsigned __int16)v12 >> 9) & 1;
      v22 = (v5 >> 9) & 1;
      v23 = BYTE1(v12) & 1;
      v24 = (v5 >> 8) & 1;
      v25 = ((unsigned __int16)v12 >> 7) & 1;
      v27 = ((unsigned __int16)v12 >> 6) & 1;
      v26 = (v5 >> 7) & 1;
      v28 = (v5 >> 6) & 1;
      LOWORD(v33) = ((unsigned __int16)v12 >> 4) & 3;
      v32 = ((unsigned __int16)v5 >> 4) & 3;
      v34 = ((unsigned __int16)v12 >> 1) & 7;
      v35 = ((unsigned __int16)v5 >> 1) & 7;
      v31 = *(_QWORD *)(a1 + 32);
      v30 = v5 & 1;
      sub_18006AA20(
        v27,
        (unsigned int)&unk_18009C05E,
        v12,
        a4,
        (__int64)&v31,
        (__int64)&v30,
        (__int64)&v29,
        (__int64)&v35,
        (__int64)&v34,
        (__int64)&v32,
        (__int64)&v33,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19);
    }
  }
}
