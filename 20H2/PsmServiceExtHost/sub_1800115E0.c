/*
 * XREFs of sub_1800115E0 @ 0x1800115E0
 * Callers:
 *     sub_180011AC0 @ 0x180011AC0 (sub_180011AC0.c)
 * Callees:
 *     memset @ 0x18004683A (memset.c)
 */

_QWORD *__fastcall sub_1800115E0(__int64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  signed __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  DWORD v13; // edi
  _QWORD *Value; // rbx
  __int64 v15; // rax
  _QWORD *result; // rax

  memset((void *)(a4 + 40), 0, 0x200uLL);
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 24) = 1LL;
  *(_QWORD *)(a4 + 16) = -1LL;
  *(_QWORD *)(a4 + 32) = a1 + 216;
  v8 = _InterlockedIncrement64(&qword_1800B41E8);
  if ( (v8 & 0xFE00000000000000uLL) != 0 )
    __fastfail(0xC0000095);
  *(_WORD *)(a4 + 548) = 1536;
  v9 = 3LL;
  *(_QWORD *)(a4 + 40) = v8 | 0x1A00000000000000LL;
  v10 = (_QWORD *)(a4 + 112);
  do
  {
    v10 += 16;
    v11 = *a2;
    a2 += 8;
    *((_OWORD *)v10 - 8) = v11;
    *((_OWORD *)v10 - 7) = *(a2 - 7);
    *((_OWORD *)v10 - 6) = *(a2 - 6);
    *((_OWORD *)v10 - 5) = *(a2 - 5);
    *((_OWORD *)v10 - 4) = *(a2 - 4);
    *((_OWORD *)v10 - 3) = *(a2 - 3);
    *((_OWORD *)v10 - 2) = *(a2 - 2);
    *((_OWORD *)v10 - 1) = *(a2 - 1);
    --v9;
  }
  while ( v9 );
  v12 = *(_QWORD *)a2;
  v13 = dwTlsIndex;
  *v10 = v12;
  if ( v13 != -1 )
  {
    Value = TlsGetValue(v13);
    if ( *(_QWORD *)TlsGetValue(v13) )
      __int2c();
    *Value |= 1uLL;
    ++Value[1];
  }
  RtlAcquireSRWLockExclusive(&unk_1800B4210);
  dword_1800B4218 = GetCurrentThreadId();
  v15 = *(_QWORD *)(a3 + 592);
  if ( !v15 )
    __int2c();
  if ( *(int *)(a3 - 40) >= 0 )
    *(_QWORD *)(a3 + 592) = v15 + 1;
  *(_QWORD *)(a4 + 80) = a3;
  dword_1800B4218 = 0;
  result = (_QWORD *)RtlReleaseSRWLockExclusive(&unk_1800B4210);
  if ( dwTlsIndex != -1 )
  {
    result = TlsGetValue(dwTlsIndex);
    if ( (*(_BYTE *)result & 1) == 0 )
      __int2c();
    if ( result[1]-- == 1LL )
      *result &= ~1uLL;
  }
  return result;
}
