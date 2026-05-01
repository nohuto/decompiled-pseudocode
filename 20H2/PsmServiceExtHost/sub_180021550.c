/*
 * XREFs of sub_180021550 @ 0x180021550
 * Callers:
 *     sub_180006E88 @ 0x180006E88 (sub_180006E88.c)
 *     sub_180020F50 @ 0x180020F50 (sub_180020F50.c)
 *     sub_1800380B0 @ 0x1800380B0 (sub_1800380B0.c)
 *     sub_180062D90 @ 0x180062D90 (sub_180062D90.c)
 * Callees:
 *     sub_18000B7F8 @ 0x18000B7F8 (sub_18000B7F8.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180063424 @ 0x180063424 (sub_180063424.c)
 */

__int64 __fastcall sub_180021550(__int64 a1, __int64 a2, unsigned int a3)
{
  int v3; // ebp
  int v6; // r8d
  int v7; // r9d
  int v8; // r13d
  __int64 v9; // rbx
  DWORD v10; // esi
  _QWORD *Value; // rdi
  _QWORD *v12; // r14
  __int64 v13; // r11
  __int64 v14; // rdi
  int v15; // esi
  unsigned int v16; // r8d
  __int64 v17; // rdx
  __int64 v18; // r10
  unsigned int v19; // r9d
  _QWORD *v20; // rax
  DWORD v23; // ebx
  __int64 v24; // [rsp+30h] [rbp-118h] BYREF
  __int64 v25; // [rsp+38h] [rbp-110h] BYREF
  __int64 v26; // [rsp+40h] [rbp-108h]
  char TlsValue[144]; // [rsp+50h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v28; // [rsp+E0h] [rbp-68h] BYREF

  v3 = 1;
  v25 = a1;
  v24 = a2;
  if ( dwTlsIndex == -1 || !TlsGetValue(dwTlsIndex) )
  {
    sub_18000B7F8(TlsValue);
    v8 = 0;
  }
  else
  {
    v8 = 1;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009BB20, 0, 0, 2u, &v28);
  v9 = 0LL;
  if ( (a3 & 3) == a3 )
  {
    v10 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( *(_QWORD *)TlsGetValue(v10) )
        __int2c();
      *Value |= 1uLL;
      ++Value[1];
    }
    RtlAcquireSRWLockExclusive(&unk_1800B4210);
    dword_1800B4218 = GetCurrentThreadId();
    v12 = 0LL;
    v26 = v25 + 552;
    RtlAcquireSRWLockShared(v25 + 552);
    v13 = v25;
    v14 = 0LL;
    v15 = -1073741275;
    v16 = *(_DWORD *)(v25 + 540);
    v17 = -1LL << (*(_BYTE *)(v25 + 540) & 0x1F);
    v18 = v17 & (HIBYTE(v24)
               + 37
               * (BYTE6(v24)
                + 37
                * (BYTE5(v24)
                 + 37
                 * (BYTE4(v24)
                  + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)a2 + 11623883LL))))))));
    v25 = v17;
    v24 = v18;
LABEL_12:
    if ( v14 )
      goto LABEL_15;
    v19 = v16 >> 5;
    if ( v16 >> 5 )
    {
      v17 = v25;
      v16 = *(_DWORD *)(v13 + 540);
      v14 = *(_QWORD *)(v13 + 544)
          + 8LL
          * ((37
            * (BYTE6(v24)
             + 37
             * (BYTE5(v24)
              + 37
              * (BYTE4(v24)
               + 37 * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v18 + 11623883)))))))
            + HIBYTE(v24)) & (v19 - 1));
LABEL_15:
      while ( 1 )
      {
        v14 = *(_QWORD *)v14;
        if ( (v14 & 1) != 0 )
          break;
        if ( v18 == (v17 & *(_QWORD *)(v14 + 8)) )
        {
          if ( a2 != *(_QWORD *)(v14 + 32) )
            goto LABEL_12;
          v15 = 0;
          if ( _InterlockedIncrement64((volatile signed __int64 *)(v14 + 16)) <= 1 )
            __fastfail(0xEu);
          goto LABEL_19;
        }
      }
    }
    v14 = v26;
LABEL_19:
    RtlReleaseSRWLockShared(v26);
    if ( v15 >= 0 )
    {
      v12 = (_QWORD *)v14;
      v15 = 0;
    }
    if ( v15 >= 0 )
    {
      v9 = v12[6];
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v15 = 0;
    }
    if ( v12 )
      sub_1800265B0(v12);
    if ( v15 != -1073741275 )
    {
      v3 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 32LL))(v9, a3);
      if ( v3 >= 0 )
        v3 = 0;
    }
    dword_1800B4218 = 0;
    RtlReleaseSRWLockExclusive(&unk_1800B4210);
    if ( dwTlsIndex != -1 )
    {
      v20 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v20 & 1) == 0 )
        __int2c();
      if ( v20[1]-- == 1LL )
        *v20 &= ~1uLL;
    }
  }
  else
  {
    v3 = -805306127;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 9) != 0 && (qword_1800B31F8 & 9) == qword_1800B31F8 )
  {
    v25 = a2;
    LODWORD(v24) = v3;
    sub_180063424((unsigned int)&dword_1800B31E0, (unsigned int)&unk_18009BB76, v6, v7, (__int64)&v24, (__int64)&v25);
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( !v8 )
  {
    v23 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v23, 0LL);
    }
  }
  return (unsigned int)v3;
}
