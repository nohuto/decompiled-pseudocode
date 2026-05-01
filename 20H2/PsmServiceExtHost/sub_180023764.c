/*
 * XREFs of sub_180023764 @ 0x180023764
 * Callers:
 *     sub_180023FA0 @ 0x180023FA0 (sub_180023FA0.c)
 * Callees:
 *     sub_180021AD4 @ 0x180021AD4 (sub_180021AD4.c)
 *     sub_180023F54 @ 0x180023F54 (sub_180023F54.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180023764(__int64 a1, int *a2)
{
  __int128 v4; // xmm1
  __int16 v5; // ax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  char v11; // al
  __int128 v12; // xmm0
  int v13; // ecx
  char v14; // r15
  __int128 v15; // xmm1
  DWORD v16; // r14d
  __int64 v17; // rax
  _DWORD *v18; // r9
  __int128 v19; // xmm0
  int v20; // ecx
  __int128 v21; // xmm1
  unsigned __int64 v22; // rsi
  __int64 **v23; // rdi
  _QWORD *Value; // rbx
  __int64 *i; // rbx
  int v26; // ecx
  _QWORD *v27; // rax
  _DWORD v30[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int128 v31; // [rsp+30h] [rbp-D8h]
  __int128 v32; // [rsp+40h] [rbp-C8h]
  __int128 v33; // [rsp+50h] [rbp-B8h]
  __int128 v34; // [rsp+60h] [rbp-A8h]
  __int128 v35; // [rsp+70h] [rbp-98h]
  __int128 v36; // [rsp+80h] [rbp-88h]
  __int128 v37; // [rsp+90h] [rbp-78h]
  __int128 v38; // [rsp+A0h] [rbp-68h]
  __int16 v39; // [rsp+B0h] [rbp-58h]
  _BYTE v40[334]; // [rsp+B2h] [rbp-56h] BYREF
  __int128 v41; // [rsp+200h] [rbp+F8h]
  __int128 v42; // [rsp+210h] [rbp+108h]
  __int128 v43; // [rsp+220h] [rbp+118h]
  __int128 v44; // [rsp+230h] [rbp+128h]
  int v45; // [rsp+240h] [rbp+138h]
  int v46; // [rsp+244h] [rbp+13Ch]

  memset(v40, 0, sizeof(v40));
  v4 = *(_OWORD *)(a1 + 112);
  v31 = *(_OWORD *)(a1 + 96);
  v5 = *(_WORD *)(a1 + 224);
  v6 = *(_OWORD *)(a1 + 128);
  v32 = v4;
  v7 = *(_OWORD *)(a1 + 144);
  v33 = v6;
  v8 = *(_OWORD *)(a1 + 160);
  v34 = v7;
  v9 = *(_OWORD *)(a1 + 176);
  v35 = v8;
  v10 = *(_OWORD *)(a1 + 192);
  v36 = v9;
  v37 = v10;
  v38 = *(_OWORD *)(a1 + 208);
  v39 = v5;
  v30[0] = 1;
  v11 = sub_180023F54(a1 + 344, a2);
  v12 = *(_OWORD *)(a1 + 228);
  v13 = *a2;
  v14 = v11;
  v15 = *(_OWORD *)(a1 + 244);
  v16 = dwTlsIndex;
  v46 = *(_DWORD *)(a1 + 296);
  v17 = *(_QWORD *)(a1 + 32);
  v41 = v12;
  *v18 = v13;
  v19 = *(_OWORD *)(a1 + 260);
  v30[1] = v13;
  v20 = *(_DWORD *)(a1 + 292);
  v42 = v15;
  v45 = v20;
  v21 = *(_OWORD *)(a1 + 276);
  v43 = v19;
  v44 = v21;
  v22 = *(_QWORD *)(*(_QWORD *)((v17 & 0xFFFFFFFFFFFFFFFCuLL) + 120) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  v23 = (__int64 **)(v22 - 56);
  if ( v16 != -1 )
  {
    Value = TlsGetValue(v16);
    if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v22 - 168);
  for ( i = *v23; i != (__int64 *)v23; i = (__int64 *)*i )
  {
    if ( (i[15] & 1) == 0 && (!v46 || (v26 = *((_DWORD *)i + 34)) == 0 || v46 == v26) )
    {
      if ( v30[0] )
      {
        if ( v30[0] != 1 || (i[18] & 2) != 0 )
        {
LABEL_12:
          if ( ((v14 & 1) == 0 || (i[18] & 4) != 0) && ((v14 & 2) == 0 || (i[18] & 8) != 0) )
          {
            if ( (i[15] & 2) != 0 )
              ((void (__fastcall *)(_DWORD *, __int64))i[13])(v30, i[14]);
            else
              sub_180021AD4(i + 12, v30, 0x220u, i[13]);
          }
        }
      }
      else if ( (i[18] & 1) != 0 )
      {
        goto LABEL_12;
      }
    }
  }
  if ( dwTlsIndex != -1 )
  {
    v27 = TlsGetValue(dwTlsIndex);
    if ( (*(_DWORD *)v27 & 0x400LL) == 0 )
      __int2c();
    if ( v27[11]-- == 1LL )
      *v27 &= ~0x400uLL;
  }
  return RtlReleaseSRWLockShared(v22 - 168);
}
