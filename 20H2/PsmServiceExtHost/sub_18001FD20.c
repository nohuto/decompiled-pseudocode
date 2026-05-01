/*
 * XREFs of sub_18001FD20 @ 0x18001FD20
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
 *     <none>
 */

int *__fastcall sub_18001FD20(__int64 a1)
{
  DWORD v2; // edi
  _QWORD *Value; // rbx
  DWORD CurrentThreadId; // eax
  DWORD v5; // edi
  _QWORD *v6; // rbx
  __int64 v7; // rdi
  int **v8; // rsi
  int *v9; // rax
  int *v10; // rbx
  _QWORD *v11; // rax
  bool v12; // zf
  _QWORD *v13; // rax

  v2 = dwTlsIndex;
  if ( dwTlsIndex != -1 )
  {
    Value = TlsGetValue(dwTlsIndex);
    if ( *(_QWORD *)TlsGetValue(v2) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  CurrentThreadId = GetCurrentThreadId();
  v5 = dwTlsIndex;
  dword_1800B4218 = CurrentThreadId;
  if ( dwTlsIndex != -1 )
  {
    v6 = TlsGetValue(dwTlsIndex);
    if ( (*(_QWORD *)TlsGetValue(v5) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *v6 |= 0x20uLL;
    ++v6[6];
  }
  v7 = a1 + 576;
  RtlAcquireSRWLockShared(a1 + 576);
  v8 = (int **)(a1 + 592);
  v9 = *v8;
  if ( *v8 == (int *)v8 )
  {
LABEL_23:
    v10 = 0LL;
  }
  else
  {
    while ( 1 )
    {
      v10 = v9 - 202;
      if ( *(v9 - 212) >= 0 )
        break;
      v9 = *(int **)v9;
      if ( v9 == (int *)v8 )
        goto LABEL_23;
    }
    ++*((_QWORD *)v10 + 74);
  }
  if ( dwTlsIndex != -1 )
  {
    v11 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v11 & 0x20) == 0 )
      __int2c();
    v12 = v11[6]-- == 1LL;
    if ( v12 )
      *v11 &= ~0x20uLL;
  }
  RtlReleaseSRWLockShared(v7);
  dword_1800B4218 = 0;
  RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    v13 = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)v13 & 1) == 0 )
      __int2c();
    v12 = v13[1]-- == 1LL;
    if ( v12 )
      *v13 &= ~1uLL;
  }
  return v10;
}
