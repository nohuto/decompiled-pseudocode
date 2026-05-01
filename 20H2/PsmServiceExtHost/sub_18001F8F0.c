/*
 * XREFs of sub_18001F8F0 @ 0x18001F8F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180017A10 @ 0x180017A10 (sub_180017A10.c)
 *     sub_180018A60 @ 0x180018A60 (sub_180018A60.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_180021C00 @ 0x180021C00 (sub_180021C00.c)
 *     sub_180021CC4 @ 0x180021CC4 (sub_180021CC4.c)
 *     sub_180021D50 @ 0x180021D50 (sub_180021D50.c)
 *     sub_180021E08 @ 0x180021E08 (sub_180021E08.c)
 *     sub_1800223BC @ 0x1800223BC (sub_1800223BC.c)
 *     sub_1800265B0 @ 0x1800265B0 (sub_1800265B0.c)
 *     sub_18002E278 @ 0x18002E278 (sub_18002E278.c)
 *     __security_check_cookie @ 0x180044E30 (__security_check_cookie.c)
 *     memset @ 0x18004683A (memset.c)
 *     sub_18006A72C @ 0x18006A72C (sub_18006A72C.c)
 */

int __fastcall sub_18001F8F0(__int64 a1, __int64 a2)
{
  DWORD v3; // edi
  ULONGLONG v4; // rdi
  unsigned int v5; // r15d
  DWORD v6; // ebp
  _QWORD *Value; // rsi
  __int128 v8; // xmm1
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rsi
  ULONGLONG v12; // r12
  ULONGLONG v13; // rbp
  unsigned __int64 v14; // r14
  DWORD v15; // r14d
  _QWORD *v16; // rsi
  _QWORD *v17; // rax
  bool v18; // zf
  int v19; // r8d
  int v20; // r9d
  _QWORD *v21; // rax
  int result; // eax
  DWORD v23; // ebx
  ULONGLONG v24; // [rsp+30h] [rbp-F8h] BYREF
  unsigned __int64 v25; // [rsp+38h] [rbp-F0h] BYREF
  _BYTE TlsValue[144]; // [rsp+40h] [rbp-E8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR Buf1; // [rsp+D0h] [rbp-58h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-48h]

  memset(TlsValue, 0, 0x88uLL);
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( TlsGetValue(dwTlsIndex) )
      __int2c();
    TlsSetValue(v3, TlsValue);
  }
  v4 = 0LL;
  v24 = 0LL;
  v5 = 2;
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    sub_18002E278((int)&dword_1800B31E0, (int)&dword_18009C252, 0, 0, 2u, &Buf1);
  v6 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v6) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  *(_DWORD *)(a2 + 1472) &= ~1u;
  if ( (unsigned int)sub_1800223BC(a2, 2LL) )
  {
    if ( (*(_BYTE *)(*(_QWORD *)(a2 + 48) + 2712LL) & 1) == 0 )
    {
      v8 = *(_OWORD *)(a2 + 1184);
      v9 = *(_QWORD *)(a2 + 1184);
      Buf1 = *(struct _EVENT_DATA_DESCRIPTOR *)(a2 + 1168);
      v28 = v8;
      if ( v9 )
      {
        v10 = sub_180021E08(a2, 0LL, &v24, &v25);
        v4 = v24;
        if ( v10 >= 0 )
        {
          v11 = *(_QWORD *)(a2 + 1328);
          v12 = *(_QWORD *)(a2 + 1352);
          if ( v24 < v11 )
          {
            v13 = 0LL;
          }
          else if ( v24 < *(_QWORD *)(a2 + 1336) )
          {
            v13 = *(_QWORD *)(a2 + 1328);
            v11 = *(_QWORD *)(a2 + 1336);
          }
          else if ( v24 < *(_QWORD *)(a2 + 1344) )
          {
            v11 = *(_QWORD *)(a2 + 1344);
            v13 = *(_QWORD *)(a2 + 1336);
          }
          else
          {
            v13 = *(_QWORD *)(a2 + 1344);
            v11 = -1LL;
          }
          sub_180021C00(v24, *(_QWORD *)(a2 + 1352), &v24, &v25);
          v14 = v25;
          if ( v13 <= v24 )
            v13 = v24;
          if ( v4 <= v12 && v11 >= v25 )
            v11 = v25;
          Buf1.Ptr = v13;
          *(_QWORD *)&Buf1.Size = v11;
          if ( v4 < *(_QWORD *)(a2 + 1328) )
          {
            v5 = 1;
          }
          else if ( v4 >= *(_QWORD *)(a2 + 1336) )
          {
            v5 = 4 - (v4 < *(_QWORD *)(a2 + 1344));
          }
          sub_180021D50(a2, v4, v5);
          sub_180021CC4(a2, v4, v14);
          sub_180017A10((_DWORD *)a2, (unsigned __int8 *)&Buf1, 1);
        }
      }
    }
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v16 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
      __int2c();
    *v16 |= 2uLL;
    ++v16[2];
  }
  RtlAcquireSRWLockExclusive(a2 + 64);
  *(_DWORD *)(a2 + 72) = GetCurrentThreadId();
  if ( sub_180018A60(a2) )
    sub_18001CC80(a2 + 64, 1);
  if ( dwTlsIndex != -1 )
  {
    v17 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v17 & 2) == 0 )
      __int2c();
    v18 = v17[2]-- == 1LL;
    if ( v18 )
      *v17 &= ~2uLL;
  }
  *(_DWORD *)(a2 + 72) = 0;
  RtlReleaseSRWLockExclusive(a2 + 64);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v21 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v21 & 1) == 0 )
      __int2c();
    v18 = v21[1]-- == 1LL;
    if ( v18 )
      *v21 &= ~1uLL;
  }
  if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
  {
    v24 = *(_QWORD *)(a2 + 32);
    v25 = v4;
    sub_18006A72C((unsigned int)&dword_1800B31E0, (unsigned int)&unk_18009C443, v19, v20, (__int64)&v24, (__int64)&v25);
  }
  result = sub_1800265B0((PVOID)a2);
  v23 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(dwTlsIndex) )
      __int2c();
    return TlsSetValue(v23, 0LL);
  }
  return result;
}
