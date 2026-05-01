/*
 * XREFs of sub_18000E3DC @ 0x18000E3DC
 * Callers:
 *     sub_18000E3D0 @ 0x18000E3D0 (sub_18000E3D0.c)
 * Callees:
 *     sub_18000E6B0 @ 0x18000E6B0 (sub_18000E6B0.c)
 *     sub_18000F0F4 @ 0x18000F0F4 (sub_18000F0F4.c)
 *     sub_1800114C0 @ 0x1800114C0 (sub_1800114C0.c)
 *     sub_18001E830 @ 0x18001E830 (sub_18001E830.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_180029064 @ 0x180029064 (sub_180029064.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18007897C @ 0x18007897C (sub_18007897C.c)
 */

__int64 __fastcall sub_18000E3DC(__int64 a1, __int64 a2, void *a3, __int64 a4, int *a5, int *a6)
{
  int v9; // esi
  DWORD v10; // ebx
  int v11; // ebx
  int *v12; // rcx
  __int64 v13; // r8
  int v14; // ebx
  __int64 v15; // rdi
  DWORD v16; // esi
  _QWORD *Value; // rbx
  int v18; // r14d
  __int64 v19; // rdx
  __int64 v20; // rcx
  DWORD v21; // edi
  int v23; // eax
  int v24; // [rsp+54h] [rbp-ACh] BYREF
  int *v25; // [rsp+58h] [rbp-A8h]
  int *v26; // [rsp+60h] [rbp-A0h]
  void *v27; // [rsp+68h] [rbp-98h]
  __int64 v28; // [rsp+70h] [rbp-90h]
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-80h] BYREF
  _DWORD v30[136]; // [rsp+110h] [rbp+10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v31; // [rsp+330h] [rbp+230h] BYREF

  v26 = a5;
  v25 = a6;
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009FA0C, 0, 0, 2u, &v31);
  v9 = 6912;
  v24 = 6912;
  memset(TlsValue, 0, 0x88uLL);
  v10 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v10, TlsValue);
  }
  v11 = *(_DWORD *)(a1 + 144);
  if ( (unsigned __int8)PsmIsValidKey(a2) )
  {
    if ( (int)sub_18000E6B0(a3) < 0 )
    {
      v14 = -1073741584;
    }
    else
    {
      memset(v30, 0, 0x218uLL);
      if ( (unsigned __int8)PsmIsValidKey(a2) )
        sub_18000E6B0(a3);
      sub_1800114C0(v30, 232LL, v13, a2);
      RtlCopySid(0x44u, &v30[116], a3);
      v30[133] = v11;
      v14 = 0;
    }
  }
  else
  {
    v14 = -1073741585;
  }
  if ( v14 >= 0 )
  {
    v15 = sub_18000F0F4(*(_QWORD *)a1, v30);
    if ( v15 )
    {
      v16 = dwTlsIndex;
      if ( dwTlsIndex != -1 )
      {
        Value = TlsGetValue(dwTlsIndex);
        if ( (*(_QWORD *)TlsGetValue(v16) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
          __int2c();
        *Value |= 0x20uLL;
        ++Value[6];
      }
      RtlAcquireSRWLockShared(v15 + 576);
      v9 = *(unsigned __int16 *)(v15 + 608);
      v18 = (*(_DWORD *)(v15 + 616) >> 5) & 7;
      sub_18001E830(v20, v19, 5LL);
      RtlReleaseSRWLockShared(v15 + 576);
      v12 = v26;
      if ( v18 == 4 )
        v18 = 3;
      *v26 = v18;
    }
    else
    {
      v23 = sub_180029064(v30, &v30[116], &v24);
      v9 = v24;
      v14 = v23;
      if ( v23 < 0 )
        goto LABEL_23;
      v12 = v26;
      *v26 = 3;
    }
    *v25 = v9;
    v14 = 0;
    if ( v15 )
      sub_1800274E0(v15);
  }
LABEL_23:
  v21 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v21, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    LODWORD(v25) = *(_DWORD *)(a1 + 144);
    v24 = v9;
    v27 = a3;
    v28 = a2;
    LODWORD(v26) = v14;
    sub_18007897C(v12, &unk_18009F113);
  }
  return (unsigned int)v14;
}
