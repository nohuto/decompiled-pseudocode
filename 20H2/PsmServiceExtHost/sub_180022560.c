/*
 * XREFs of sub_180022560 @ 0x180022560
 * Callers:
 *     sub_180006CA4 @ 0x180006CA4 (sub_180006CA4.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 * Callees:
 *     sub_18000350C @ 0x18000350C (sub_18000350C.c)
 *     sub_1800035F4 @ 0x1800035F4 (sub_1800035F4.c)
 *     sub_18000A110 @ 0x18000A110 (sub_18000A110.c)
 *     sub_180017F60 @ 0x180017F60 (sub_180017F60.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180022560(__int64 a1, unsigned __int8 a2)
{
  DWORD v2; // esi
  __int64 v4; // r14
  __int64 v5; // r15
  _QWORD *Value; // rdi
  char *v7; // rsi
  int v8; // r8d
  unsigned int v9; // edi
  int v10; // eax
  int v11; // r12d
  int v13; // r8d
  __int64 v14; // rdi
  DWORD v15; // r14d
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 *v19; // rcx
  int v20; // r14d
  _QWORD *v21; // rax
  unsigned int v24; // ebx
  char v25; // [rsp+30h] [rbp-59h] BYREF
  char v26; // [rsp+31h] [rbp-58h] BYREF
  char v27; // [rsp+32h] [rbp-57h] BYREF
  __int64 v28; // [rsp+38h] [rbp-51h] BYREF
  int v29; // [rsp+40h] [rbp-49h]
  __int64 v30; // [rsp+44h] [rbp-45h]
  int v31; // [rsp+4Ch] [rbp-3Dh]
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+50h] [rbp-39h] BYREF
  __int64 *v33; // [rsp+70h] [rbp-19h]
  __int64 v34; // [rsp+78h] [rbp-11h]
  char *v35; // [rsp+80h] [rbp-9h]
  __int64 v36; // [rsp+88h] [rbp-1h]
  char *v37; // [rsp+90h] [rbp+7h]
  __int64 v38; // [rsp+98h] [rbp+Fh]
  char *v39; // [rsp+A0h] [rbp+17h]
  __int64 v40; // [rsp+A8h] [rbp+1Fh]

  v2 = dwTlsIndex;
  v4 = *(_QWORD *)(a1 + 80);
  v5 = a2;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *Value |= 2uLL;
    ++Value[2];
  }
  RtlAcquireSRWLockExclusive(v4);
  *(_DWORD *)(v4 + 8) = GetCurrentThreadId();
  if ( *(_QWORD *)(a1 + 72) && *(_QWORD *)(a1 + 64) )
    v7 = (char *)sub_1800035F4(v4);
  else
    v7 = 0LL;
  v8 = *(_DWORD *)(a1 + 544);
  if ( (v8 & 1) != 0 )
  {
    v24 = -1073740682;
  }
  else
  {
    v9 = *(unsigned __int8 *)(a1 + 548);
    v29 = 12;
    v30 = 2LL;
    v31 = 14;
    v10 = *((_DWORD *)&v28 + v5 + 1);
    if ( _bittest(&v10, v9) )
    {
      v11 = 1;
      if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
      {
        v25 = *(_BYTE *)(a1 + 549);
        v28 = *(_QWORD *)(a1 + 40);
        v26 = v9;
        v39 = &v25;
        v37 = &v26;
        v35 = &v27;
        v33 = &v28;
        v27 = v5;
        v40 = 1LL;
        v38 = 1LL;
        v36 = 1LL;
        v34 = 8LL;
        sub_18002E278((int)&dword_1800B3218, (int)&dword_1800A1C35, 0, 0, 6u, &v32);
        v8 = *(_DWORD *)(a1 + 544);
      }
      v13 = v8 | 1;
      *(_BYTE *)(a1 + 548) = v5;
      *(_DWORD *)(a1 + 544) = v13;
      if ( (_BYTE)v9 != 1 )
      {
        if ( (_BYTE)v9 == 2 )
        {
          sub_18000350C(a1, 6u);
          goto LABEL_16;
        }
        if ( (unsigned __int8)v9 <= 2u || (unsigned __int8)v9 > 4u )
          goto LABEL_16;
      }
      *(_DWORD *)(a1 + 544) = v13 & 0xFFFFFFEF;
LABEL_16:
      if ( v7 )
      {
        *(_DWORD *)(a1 + 544) |= 2u;
      }
      else
      {
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 80) + 688LL);
        if ( v14 && !*(_QWORD *)(a1 + 72) && (*(_BYTE *)(a1 + 544) & 2) == 0 )
        {
          v15 = dwTlsIndex;
          if ( dwTlsIndex != -1 )
          {
            v16 = TlsGetValue(dwTlsIndex);
            if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFFF8uLL) != 0 )
              __int2c();
            *v16 |= 8uLL;
            ++v16[4];
          }
          RtlAcquireSRWLockExclusive(v14 + 8);
          *(_DWORD *)(v14 + 16) = GetCurrentThreadId();
          v17 = *(_QWORD *)(a1 + 80);
          v18 = *(_QWORD *)(v14 + 112) + 1LL;
          *(_QWORD *)(v14 + 112) = v18;
          v19 = (__int64 *)(v17 + 616);
          if ( v19 )
            *v19 = v18;
          if ( *(_DWORD *)(v14 + 128) )
          {
            v20 = 0;
          }
          else
          {
            if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 96)) <= 1 )
              __fastfail(0xEu);
            *(_DWORD *)(v14 + 128) = GetCurrentThreadId();
            v20 = 1;
          }
          if ( *(_DWORD *)(v14 + 128) != GetCurrentThreadId() )
            v11 = 0;
          if ( v20 != v11 )
            __int2c();
          *(_DWORD *)(a1 + 544) &= ~2u;
          *(_DWORD *)(a1 + 544) |= 2 * v20;
          *(_DWORD *)(v14 + 16) = 0;
          RtlReleaseSRWLockExclusive(v14 + 8);
          if ( dwTlsIndex != -1 )
          {
            v21 = TlsGetValue(dwTlsIndex);
            if ( (*(_BYTE *)v21 & 8) == 0 )
              __int2c();
            if ( v21[4]-- == 1LL )
              *v21 &= ~8uLL;
          }
        }
      }
      return 0LL;
    }
    v24 = -1073700861;
  }
  sub_18000A110(v4);
  if ( v7 )
    sub_180017F60(v7);
  return v24;
}
