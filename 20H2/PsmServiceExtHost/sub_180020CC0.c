/*
 * XREFs of sub_180020CC0 @ 0x180020CC0
 * Callers:
 *     sub_18000DCD8 @ 0x18000DCD8 (sub_18000DCD8.c)
 *     sub_1800199F0 @ 0x1800199F0 (sub_1800199F0.c)
 *     sub_1800356D8 @ 0x1800356D8 (sub_1800356D8.c)
 *     sub_18003CF94 @ 0x18003CF94 (sub_18003CF94.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 *     sub_18007F67C @ 0x18007F67C (sub_18007F67C.c)
 *     sub_18007F6D0 @ 0x18007F6D0 (sub_18007F6D0.c)
 *     sub_18007F780 @ 0x18007F780 (sub_18007F780.c)
 * Callees:
 *     sub_18000A1AC @ 0x18000A1AC (sub_18000A1AC.c)
 *     sub_18000EE4C @ 0x18000EE4C (sub_18000EE4C.c)
 */

__int64 __fastcall sub_180020CC0(_QWORD *a1)
{
  __int64 v1; // rbp
  DWORD v3; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v6; // edi
  _QWORD *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 v11; // r14
  _QWORD *v12; // rax
  bool v13; // zf
  _QWORD *v14; // rax
  DWORD v15; // edi
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  _QWORD *v18; // rax
  __int64 *v20; // rdx

  v1 = a1[97];
  v3 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v3) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  CurrentThreadId = GetCurrentThreadId();
  v6 = dwTlsIndex;
  dword_1800B4218 = CurrentThreadId;
  if ( dwTlsIndex != -1 )
  {
    v7 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v6) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v7 |= 0x20uLL;
    ++v7[6];
  }
  v8 = v1 + 576;
  RtlAcquireSRWLockShared(v1 + 576);
  v9 = a1[101];
  v10 = v1 + 592;
  if ( v9 == v10 )
  {
LABEL_10:
    v11 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v11 = v9 - 808;
      if ( (unsigned int)sub_18000EE4C(v9 - 808) )
        break;
      v9 = *v20;
      if ( v9 == v10 )
        goto LABEL_10;
    }
  }
  if ( dwTlsIndex != -1 )
  {
    v12 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v12 & 0x20) == 0 )
      __int2c();
    v13 = v12[6]-- == 1LL;
    if ( v13 )
      *v12 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v8);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v14 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v14 & 1) == 0 )
      __int2c();
    v13 = v14[1]-- == 1LL;
    if ( v13 )
      *v14 &= ~1uLL;
  }
  v15 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    v16 = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v15) )
      __int2c();
    *v16 |= 1uLL;
    ++v16[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  v13 = a1[74]-- == 1LL;
  if ( v13 )
    sub_18000A1AC((__int64)(a1 - 8), v17);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v18 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v18 & 1) == 0 )
      __int2c();
    v13 = v18[1]-- == 1LL;
    if ( v13 )
      *v18 &= ~1uLL;
  }
  return v11;
}
