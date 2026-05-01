/*
 * XREFs of sub_180010560 @ 0x180010560
 * Callers:
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 * Callees:
 *     sub_1800100D0 @ 0x1800100D0 (sub_1800100D0.c)
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     sub_180010810 @ 0x180010810 (sub_180010810.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180072004 @ 0x180072004 (sub_180072004.c)
 */

__int64 __fastcall sub_180010560(__int64 *a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rcx
  __int64 *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r9
  _QWORD *i; // rdx
  __int64 v10; // r8
  _OWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 result; // rax
  DWORD v17; // ebx
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rcx
  __int64 v21; // rdx
  _QWORD *v22; // rax
  __int64 v23; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-D0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v26; // [rsp+58h] [rbp-C0h] BYREF
  __int64 v27; // [rsp+60h] [rbp-B8h] BYREF
  __int64 v28[10]; // [rsp+70h] [rbp-A8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v29; // [rsp+C0h] [rbp-58h] BYREF
  __int64 *v30; // [rsp+E0h] [rbp-38h]
  __int64 v31; // [rsp+E8h] [rbp-30h]

  if ( (*((_BYTE *)a1 + 1284) & 1) != 0 )
  {
    if ( dword_1800B31E0 )
    {
      v17 = GetTickCount() - *((_DWORD *)a1 + 443);
      sub_1800100D0(*(_QWORD *)(a1[164] + 64), v28);
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        {
          v20 = a1[219];
          v23 = v17;
          v24 = v28[3];
          v25 = v28[6];
          v26 = v20;
          sub_180072004(
            v20,
            (unsigned int)&unk_18009D38C,
            v18,
            v19,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v24,
            (__int64)&v23);
        }
      }
    }
  }
  v2 = (_QWORD *)a1[164];
  v3 = v2 + 10;
  if ( v2[10] && v2[11] )
  {
    v21 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 )
      goto LABEL_26;
    v22 = (_QWORD *)v2[11];
    if ( (_QWORD *)*v22 != v3 )
      goto LABEL_26;
    *v22 = v21;
    *(_QWORD *)(v21 + 8) = v22;
    *(_OWORD *)v3 = 0LL;
  }
  v4 = (__int64 *)v2[6];
  sub_1800265B0(v2);
  v5 = *v4;
  v4[164] = 0LL;
  (*(void (__fastcall **)(__int64 *))(v5 + 16))(v4);
  v6 = v2[8];
  v2[6] = 0LL;
  v7 = *(_QWORD *)(v6 + 24) + 536LL;
  RtlAcquireSRWLockExclusive(*(_QWORD *)(v6 + 24) + 552LL);
  v8 = v2[1] & (-1LL << (*(_DWORD *)(v7 + 4) & 0x1F));
  for ( i = (_QWORD *)(*(_QWORD *)(v7 + 8)
                     + 8
                     * ((HIBYTE(v8)
                       + 37
                       * (BYTE6(v8)
                        + 37
                        * (BYTE5(v8)
                         + 37
                         * (BYTE4(v8)
                          + 37
                          * ((((_DWORD)v2[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 24)
                           + 37
                           * ((unsigned __int8)(((_DWORD)v2[1] & (unsigned int)(-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 16)
                            + 37
                            * (37 * ((unsigned __int8)v8 + 11623883)
                             + (unsigned __int8)((unsigned __int16)(v2[1] & (-1 << (*(_DWORD *)(v7 + 4) & 0x1F))) >> 8)))))))) & ((*(_DWORD *)(v7 + 4) >> 5) - 1)));
        (*i & 1) == 0;
        i = (_QWORD *)*i )
  {
    if ( (_QWORD *)*i == v2 )
    {
      *i = *v2;
      --*(_DWORD *)v7;
      *v2 |= 0x8000000000000002uLL;
      break;
    }
  }
  *((_DWORD *)v2 + 6) |= 0x80000000;
  RtlReleaseSRWLockExclusive(v7 + 16);
  sub_1800265B0(v2);
  a1[164] = 0LL;
  sub_180010810(a1);
  v10 = a1[165] + 24LL * *((int *)a1 + 332);
  v11 = a1 + 162;
  v12 = a1[162];
  if ( *(__int64 **)(v12 + 8) != a1 + 162 || (v13 = (_QWORD *)a1[163], (_OWORD *)*v13 != v11) )
LABEL_26:
    __fastfail(3u);
  *v13 = v12;
  *(_QWORD *)(v12 + 8) = v13;
  *v11 = 0LL;
  --*(_DWORD *)(v10 + 1128);
  v14 = *a1;
  *((_DWORD *)a1 + 332) = 2;
  (*(void (__fastcall **)(__int64 *))(v14 + 16))(a1);
  (*(void (__fastcall **)(__int64 *))(*a1 + 16))(a1);
  v15 = a1[214];
  if ( v15 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    a1[214] = 0LL;
  }
  result = 0LL;
  *((_OWORD *)a1 + 108) = 0LL;
  a1[218] = 0LL;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 )
  {
    result = qword_1800B31F8 & 9;
    if ( result == qword_1800B31F8 )
    {
      v27 = a1[219];
      v31 = 8LL;
      v30 = &v27;
      result = sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009D100, 0, 0, 3u, &v29);
    }
  }
  *((_BYTE *)a1 + 12) = 0;
  return result;
}
