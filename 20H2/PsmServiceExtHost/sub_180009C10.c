/*
 * XREFs of sub_180009C10 @ 0x180009C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_180009F08 @ 0x180009F08 (sub_180009F08.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_1800702B4 @ 0x1800702B4 (sub_1800702B4.c)
 */

__int64 __fastcall sub_180009C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int *a5)
{
  DWORD v7; // edi
  int v8; // r8d
  int v9; // r9d
  int v10; // eax
  int v11; // ecx
  int v12; // ebp
  unsigned int v13; // ebx
  void *v14; // rbp
  char v15; // al
  char v16; // al
  __int64 v17; // rcx
  DWORD v18; // ebx
  bool v20; // cl
  char v21; // dl
  int v22; // eax
  bool v23; // al
  bool v24[4]; // [rsp+50h] [rbp-E8h] BYREF
  int v25; // [rsp+54h] [rbp-E4h] BYREF
  int v26; // [rsp+58h] [rbp-E0h] BYREF
  int v27; // [rsp+5Ch] [rbp-DCh] BYREF
  unsigned int v28; // [rsp+60h] [rbp-D8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-D0h] BYREF
  _BYTE TlsValue[144]; // [rsp+70h] [rbp-C8h] BYREF

  v29 = 0LL;
  memset(TlsValue, 0, 0x88uLL);
  v7 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v7, TlsValue);
  }
  RtlAcquireSRWLockExclusive(a4 + 592);
  *(_DWORD *)(a4 + 648) = GetCurrentThreadId();
  if ( a1 == 0xD83063EA3BC7875LL )
  {
    if ( a5 )
      v10 = *a5;
    else
      v10 = 0;
    if ( v10 != *(_DWORD *)(a4 + 624) )
    {
      *(_DWORD *)(a4 + 624) = v10;
LABEL_10:
      *(_BYTE *)(a4 + 644) |= 1u;
    }
  }
  else if ( a1 == 0xE8A0125A3BC8875LL )
  {
    v20 = a5 && *a5 == 1;
    v21 = *(_BYTE *)(a4 + 644);
    if ( v20 != ((v21 & 4) != 0) )
      *(_BYTE *)(a4 + 644) = (4 * v20) | v21 & 0xFB | 1;
  }
  else
  {
    if ( a5 )
      v22 = a5[4];
    else
      v22 = 0;
    if ( v22 != *(_DWORD *)(a4 + 628) )
    {
      *(_DWORD *)(a4 + 628) = v22;
      goto LABEL_10;
    }
  }
  v11 = *(unsigned __int8 *)(a4 + 644);
  if ( (v11 & 3) == 1 )
  {
    for ( LOBYTE(v11) = v11 | 2; (v11 & 1) != 0; v11 = *(unsigned __int8 *)(a4 + 644) )
    {
      v12 = *(_DWORD *)(a4 + 640);
      LOBYTE(v11) = v11 & 0xFE;
      *(_BYTE *)(a4 + 644) = v11;
      if ( (v11 & 4) != 0 )
        v13 = *(_DWORD *)(a4 + 628);
      else
        v13 = *(_DWORD *)(a4 + 624);
      if ( v13 != v12 )
      {
        if ( v13 && (int)sub_180009F08(&v29, 0x2000LL, v13) < 0 )
          v13 = 0;
        if ( v13 != v12 )
        {
          if ( (unsigned int)dword_1800B31E0 > 5
            && (byte_1800B31F0 & 1) != 0
            && (qword_1800B31F8 & 1) == qword_1800B31F8 )
          {
            v23 = (*(_BYTE *)(a4 + 644) & 4) != 0;
            v28 = v13;
            v24[0] = v23;
            v25 = *(_DWORD *)(a4 + 628);
            v26 = *(_DWORD *)(a4 + 624);
            v27 = *(_DWORD *)(a4 + 640);
            sub_1800702B4(
              v11,
              (unsigned int)&unk_18009CD3E,
              v8,
              v9,
              (__int64)&v28,
              (__int64)&v27,
              (__int64)&v26,
              (__int64)&v25,
              (__int64)v24);
          }
          v14 = *(void **)(a4 + 632);
          *(_QWORD *)(a4 + 632) = v29;
          *(_DWORD *)(a4 + 640) = v13;
          *(_DWORD *)(a4 + 648) = 0;
          v29 = 0LL;
          RtlReleaseSRWLockExclusive(a4 + 592);
          if ( v14 )
            NtClose(v14);
          RtlAcquireSRWLockExclusive(a4 + 1688);
          *(_DWORD *)(a4 + 1696) = GetCurrentThreadId();
          v15 = *(_BYTE *)(a4 + 1764);
          if ( (v15 & 4) == 0 )
          {
            v16 = v15 | 1;
            *(_BYTE *)(a4 + 1764) = v16;
            if ( (v16 & 2) == 0 )
            {
              v17 = *(_QWORD *)(a4 + 1680);
              *(_BYTE *)(a4 + 1764) = v16 | 2;
              TpPostWork(v17);
            }
          }
          *(_DWORD *)(a4 + 1696) = 0;
          RtlReleaseSRWLockExclusive(a4 + 1688);
          RtlAcquireSRWLockExclusive(a4 + 592);
          *(_DWORD *)(a4 + 648) = GetCurrentThreadId();
        }
      }
    }
    *(_BYTE *)(a4 + 644) = v11 & 0xFD;
  }
  *(_DWORD *)(a4 + 648) = 0;
  RtlReleaseSRWLockExclusive(a4 + 592);
  v18 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v18, 0LL);
  }
  return 0LL;
}
