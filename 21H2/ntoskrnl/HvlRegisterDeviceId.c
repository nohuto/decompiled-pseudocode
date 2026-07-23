/*
 * XREFs of HvlRegisterDeviceId @ 0x1404F60C0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1FE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FAC58 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlRegisterDeviceId(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // rdi
  unsigned int v5; // ebx
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  __int64 v8; // rax
  _BYTE *v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  unsigned int v14; // ebx
  PHYSICAL_ADDRESS v16[4]; // [rsp+20h] [rbp-48h] BYREF

  v2 = -1LL;
  memset(v16, 0, sizeof(v16));
  if ( *(_DWORD *)a1 == 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( *(_DWORD *)a1 != 2 )
      return 3221225659LL;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_BYTE *)(*(_QWORD *)(a1 + 8) + v6) );
    v5 = (v6 + 8) & 0xFFFFFFF8;
  }
  if ( a2 > 0x3FFFFFFFFFFFFFFFLL || (unsigned __int64)v5 + 40 > 0x1000 )
    return 3221225485LL;
  v7 = HvlpAcquireHypercallPage(v16, 1, 0LL, 0LL);
  memset(v7, 0, v5 + 40LL);
  v8 = v7[1];
  *v7 = -1LL;
  if ( *(_DWORD *)a1 == 1 )
  {
    v7[1] = v8 & 0x3FFFFFFFFFFFFFFFLL | 0x4000000000000000LL;
    *((_WORD *)v7 + 4) = *(_WORD *)(a1 + 12);
    *((_WORD *)v7 + 5) = *(_WORD *)(a1 + 8);
  }
  else
  {
    v7[1] = v8 | 0xC000000000000000uLL;
    v9 = *(_BYTE **)(a1 + 8);
    do
      ++v2;
    while ( v9[v2] );
    memmove(v7 + 5, v9, v2 + 1);
  }
  *((_DWORD *)v7 + 4) |= 1u;
  v7[3] = a2;
  while ( 1 )
  {
    v10 = HvcallInitiateHypercall((v5 << 14) & 0x3FE0000 | 0x82);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory((unsigned __int16)v10, v10) )
      break;
    if ( (int)HvlpHandleInsufficientMemory(v12, v11, v13) < 0 )
    {
      v14 = -1073741670;
      goto LABEL_19;
    }
  }
  v14 = HvlpHvToNtStatus(v12);
LABEL_19:
  HvlpReleaseHypercallPage((__int64)v16);
  return v14;
}
