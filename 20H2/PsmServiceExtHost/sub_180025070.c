/*
 * XREFs of sub_180025070 @ 0x180025070
 * Callers:
 *     PsmHamGetPackageDebugMode @ 0x180025040 (PsmHamGetPackageDebugMode.c)
 * Callees:
 *     sub_1800252D0 @ 0x1800252D0 (sub_1800252D0.c)
 *     sub_1800274E0 @ 0x1800274E0 (sub_1800274E0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800782A4 @ 0x1800782A4 (sub_1800782A4.c)
 */

_BOOL8 __fastcall sub_180025070(__int64 a1, __int64 a2, void *a3, int a4)
{
  DWORD v8; // ebx
  _WORD *v9; // rax
  __int64 v10; // rdx
  __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v13; // rsi
  DWORD v14; // edi
  _QWORD *Value; // rbx
  bool v16; // bl
  _QWORD *v17; // rax
  DWORD v19; // edi
  _DWORD v21[52]; // [rsp+60h] [rbp-1B8h] BYREF
  _BYTE TlsValue[144]; // [rsp+130h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v23; // [rsp+1C0h] [rbp-58h] BYREF

  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 0x40) != 0 && (qword_1800B3230 & 0x40) == qword_1800B3230 )
    sub_18002E278((int)&dword_1800B3218, (int)&dword_18009F605, 0, 0, 2u, &v23);
  memset(TlsValue, 0, 0x88uLL);
  v8 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v8, TlsValue);
  }
  memset(v21, 0, 0xCCuLL);
  v9 = v21;
  v10 = 65LL;
  while ( v10 != -2147483581 )
  {
    v11 = *(_WORD *)((char *)v9 + a2 - (_QWORD)v21);
    if ( !v11 )
      break;
    *v9++ = v11;
    if ( !--v10 )
    {
      --v9;
      break;
    }
  }
  *v9 = 0;
  RtlCopySid(0x44u, &v21[33], a3);
  v21[50] = a4;
  v13 = sub_1800252D0(a1, v21);
  if ( v13 )
  {
    v14 = dwTlsIndex;
    if ( dwTlsIndex != -1 )
    {
      Value = TlsGetValue(dwTlsIndex);
      if ( (*(_QWORD *)TlsGetValue(v14) & 0xFFFFFFFFFFFFFFC0uLL) != 0 )
        __int2c();
      *Value |= 0x40uLL;
      ++Value[7];
    }
    RtlAcquireSRWLockShared(v13 + 304);
    v16 = (*(_DWORD *)(v13 + 340) & 2) != 0;
    if ( dwTlsIndex != -1 )
    {
      v17 = TlsGetValue(dwTlsIndex);
      if ( (*(_BYTE *)v17 & 0x40) == 0 )
        __int2c();
      if ( v17[7]-- == 1LL )
        *v17 &= ~0x40uLL;
    }
    RtlReleaseSRWLockShared(v13 + 304);
    sub_1800274E0(v13);
  }
  else
  {
    v16 = 0;
  }
  v19 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v19, 0LL);
  }
  if ( (unsigned int)dword_1800B3218 > 4 && (byte_1800B3228 & 8) != 0 && (qword_1800B3230 & 8) == qword_1800B3230 )
    sub_1800782A4(v12, &unk_18009F218);
  return v16;
}
