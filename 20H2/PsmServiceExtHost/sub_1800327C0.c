/*
 * XREFs of sub_1800327C0 @ 0x1800327C0
 * Callers:
 *     sub_1800202A0 @ 0x1800202A0 (sub_1800202A0.c)
 *     sub_180032790 @ 0x180032790 (sub_180032790.c)
 *     sub_1800327B0 @ 0x1800327B0 (sub_1800327B0.c)
 * Callees:
 *     sub_18000B7C0 @ 0x18000B7C0 (sub_18000B7C0.c)
 *     sub_1800181E0 @ 0x1800181E0 (sub_1800181E0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     sub_180032B80 @ 0x180032B80 (sub_180032B80.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_180078BD4 @ 0x180078BD4 (sub_180078BD4.c)
 */

__int64 __fastcall sub_1800327C0(_QWORD *a1, __int64 a2, unsigned int a3, __int64 a4)
{
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  DWORD v11; // ebx
  int v12; // r14d
  __int64 *v13; // rdi
  __int64 *v14; // rbp
  __int64 v15; // rax
  __int64 v16; // rbx
  int v17; // edi
  int v18; // eax
  __int64 v19; // rax
  int v20; // edi
  DWORD v21; // ebx
  _BYTE v23[4]; // [rsp+50h] [rbp-128h] BYREF
  DWORD v24; // [rsp+54h] [rbp-124h] BYREF
  DWORD v25; // [rsp+58h] [rbp-120h] BYREF
  int v26; // [rsp+5Ch] [rbp-11Ch] BYREF
  __int64 v27; // [rsp+60h] [rbp-118h] BYREF
  __int64 v28; // [rsp+68h] [rbp-110h] BYREF
  __int64 v29; // [rsp+70h] [rbp-108h] BYREF
  __int64 v30; // [rsp+78h] [rbp-100h] BYREF
  _BYTE TlsValue[144]; // [rsp+80h] [rbp-F8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+110h] [rbp-68h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((__int64)&dword_1800B3218, (unsigned __int8 *)dword_18009F629, 0LL, 0LL, 2u, &v32);
  v27 = 0LL;
  if ( sub_18000B7C0() )
  {
    v12 = 0;
  }
  else
  {
    memset(TlsValue, 0, 0x88uLL);
    v11 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v11, TlsValue);
    }
    v12 = 1;
  }
  v24 = 0;
  if ( a4 )
  {
    v20 = -1073741822;
    goto LABEL_35;
  }
  if ( a3 > 1 )
  {
    v20 = -1073741583;
    goto LABEL_35;
  }
  v13 = (__int64 *)(*a1 + 216LL);
  v28 = a2;
  v14 = v13 + 2;
  RtlAcquireSRWLockShared(v13 + 2);
  v15 = v13[1];
  v16 = *v13;
  if ( (v15 & 1) != 0 && v16 )
    v16 ^= (unsigned __int64)v13;
  v17 = v15 & 1;
  if ( !v16 )
  {
LABEL_15:
    v16 = 0LL;
    goto LABEL_30;
  }
  while ( 1 )
  {
    v18 = sub_180032B80(&v28, v16);
    if ( v18 < 0 )
    {
      v19 = *(_QWORD *)v16;
      if ( v17 && v19 )
        goto LABEL_27;
      goto LABEL_19;
    }
    if ( v18 <= 0 )
      break;
    v19 = *(_QWORD *)(v16 + 8);
    if ( v17 && v19 )
    {
LABEL_27:
      v16 ^= v19;
      goto LABEL_20;
    }
LABEL_19:
    v16 = v19;
LABEL_20:
    if ( !v16 )
      goto LABEL_30;
  }
  if ( !*(_QWORD *)(v16 + 24) )
    goto LABEL_15;
  if ( _InterlockedIncrement64((volatile signed __int64 *)(v16 + 24)) <= 1 )
    __fastfail(0xEu);
LABEL_30:
  RtlReleaseSRWLockShared(v14);
  if ( v16 && *(_QWORD **)(v16 + 64) == a1 )
  {
    v20 = sub_1800181E0(v16, a3, &v24, &v27);
    if ( v20 >= 0 )
      v20 = 0;
    sub_1800274E0((_QWORD *)v16);
  }
  else
  {
    if ( v16 )
      sub_1800274E0((_QWORD *)v16);
    v20 = -1073741275;
  }
LABEL_35:
  if ( v12 )
  {
    v21 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
        __int2c();
      TlsSetValue(v21, 0LL);
    }
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
  {
    v29 = v27;
    v25 = v24;
    v23[0] = a3;
    v30 = a2;
    v26 = v20;
    sub_180078BD4(
      v8,
      (unsigned int)&unk_18009F2A0,
      v9,
      v10,
      (__int64)&v26,
      (__int64)&v30,
      (__int64)&v25,
      (__int64)&v29,
      (__int64)v23);
  }
  return (unsigned int)v20;
}
