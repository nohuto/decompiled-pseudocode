/*
 * XREFs of sub_180003B10 @ 0x180003B10
 * Callers:
 *     sub_1800039E0 @ 0x1800039E0 (sub_1800039E0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180003B10(__int64 a1, __int64 a2)
{
  DWORD v4; // ebp
  unsigned __int64 v5; // rsi
  _QWORD *Value; // rdi
  int v7; // eax
  _QWORD *v8; // rax
  bool v9; // zf
  DWORD v10; // esi
  __int64 v11; // r14
  _QWORD *v12; // rdi
  DWORD v13; // ecx
  _QWORD *v14; // rax
  DWORD v15; // ebp
  _QWORD *v16; // rdi
  DWORD CurrentThreadId; // eax
  DWORD v18; // ecx
  int v19; // edi
  _QWORD *v20; // rax
  DWORD v21; // ebp
  __int64 v22; // rsi
  _QWORD *v23; // rdi
  __int64 v24; // rdi
  int v25; // esi
  char *v26; // rax
  __int64 result; // rax
  int v28; // [rsp+60h] [rbp+8h] BYREF
  char v29; // [rsp+68h] [rbp+10h] BYREF

  v28 = 4;
  *(_QWORD *)a2 = 0LL;
  NtQueryWnfStateData(&qword_1800B34C8, 0LL, 0LL, &v29, a2, &v28);
  v4 = dwTlsIndex;
  v5 = *(_QWORD *)(a1 + 32) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v4) & 0xFFFFFFFFFFFFFC00uLL) != 0 )
      __int2c();
    *Value |= 0x400uLL;
    ++Value[11];
  }
  RtlAcquireSRWLockShared(v5 - 216);
  v7 = 0;
  if ( *(_DWORD *)(v5 + 204) )
    v7 = 2;
  *(_DWORD *)(a2 + 4) &= ~2u;
  *(_DWORD *)(a2 + 4) |= v7;
  if ( dwTlsIndex != -1 )
  {
    v8 = TlsGetValue(dwTlsIndex);
    if ( (*(_DWORD *)v8 & 0x400LL) == 0 )
      __int2c();
    v9 = v8[11]-- == 1LL;
    if ( v9 )
      *v8 &= ~0x400uLL;
  }
  RtlReleaseSRWLockShared(v5 - 216);
  v10 = dwTlsIndex;
  v11 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 776LL) + 88LL) + 88LL) + 160LL);
  if ( dwTlsIndex != -1 )
  {
    v12 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v10) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *v12 |= 0x100uLL;
    ++v12[9];
  }
  RtlAcquireSRWLockShared(v11 + 96);
  v13 = dwTlsIndex;
  *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ *(_DWORD *)(v11 + 132)) & 1;
  if ( v13 != -1 )
  {
    v14 = TlsGetValue(v13);
    if ( (*(_DWORD *)v14 & 0x100LL) == 0 )
      __int2c();
    v9 = v14[9]-- == 1LL;
    if ( v9 )
      *v14 &= ~0x100uLL;
  }
  RtlReleaseSRWLockShared(v11 + 96);
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v16 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v15) & 0xFFFFFFFFFFFFFF00uLL) != 0 )
      __int2c();
    *v16 |= 0x100uLL;
    ++v16[9];
  }
  RtlAcquireSRWLockExclusive(v11 + 96);
  CurrentThreadId = GetCurrentThreadId();
  v18 = dwTlsIndex;
  *(_DWORD *)(v11 + 104) = CurrentThreadId;
  v19 = *(_DWORD *)(v11 + 132) >> 1;
  if ( v18 != -1 )
  {
    v20 = TlsGetValue(v18);
    if ( (*(_DWORD *)v20 & 0x100LL) == 0 )
      __int2c();
    v9 = v20[9]-- == 1LL;
    if ( v9 )
      *v20 &= ~0x100uLL;
  }
  *(_DWORD *)(v11 + 104) = 0;
  RtlReleaseSRWLockExclusive(v11 + 96);
  v21 = dwTlsIndex;
  *(_DWORD *)(a2 + 4) ^= (*(_DWORD *)(a2 + 4) ^ (8 * (unsigned __int8)v19)) & 8;
  v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 80) + 776LL) + 88LL) + 88LL);
  if ( v21 != -1 )
  {
    v23 = TlsGetValue(v21);
    if ( (*(_QWORD *)TlsGetValue(v21) & 0xFFFFFFFFFFFFFF80uLL) != 0 )
      __int2c();
    *v23 |= 0x80uLL;
    ++v23[8];
  }
  v24 = v22 + 168;
  RtlAcquireSRWLockShared(v22 + 168);
  v25 = *(unsigned __int8 *)(v22 + 192);
  if ( dwTlsIndex != -1 )
  {
    v26 = (char *)TlsGetValue(dwTlsIndex);
    if ( *v26 >= 0 )
      __int2c();
    v9 = (*((_QWORD *)v26 + 8))-- == 1LL;
    if ( v9 )
      *(_QWORD *)v26 &= ~0x80uLL;
  }
  RtlReleaseSRWLockShared(v24);
  result = (*(_DWORD *)(a2 + 4) ^ (4 * v25)) & 4;
  *(_DWORD *)(a2 + 4) ^= result;
  return result;
}
