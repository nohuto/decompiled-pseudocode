/*
 * XREFs of HvlSetHpetConfig @ 0x1404F64E0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memset @ 0x140414300 (memset.c)
 *     HvlpHandleInsufficientMemory @ 0x1404F1FE8 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404FAC58 (HvlpHvStatusIsInsufficientMemory.c)
 */

__int64 __fastcall HvlSetHpetConfig(__int64 a1, int a2, __int64 a3, char a4, _OWORD *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  unsigned __int16 v11; // bx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int16 v14; // cx
  __int64 v15; // r8
  __int64 result; // rax
  _QWORD *v17; // rbx
  _QWORD *v18; // rdi
  _BYTE v19[40]; // [rsp+20h] [rbp-E8h] BYREF
  PHYSICAL_ADDRESS v20[4]; // [rsp+48h] [rbp-C0h] BYREF
  _BYTE v21[2080]; // [rsp+68h] [rbp-A0h] BYREF

  memset(&v19[8], 0, 32);
  memset(v20, 0, sizeof(v20));
  memset(v21, 0, sizeof(v21));
  v9 = 0;
  while ( 1 )
  {
    v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v19[8], 1, (__int64)v21, 40LL);
    *(_DWORD *)v10 = 6;
    v10[1] = a1;
    *((_DWORD *)v10 + 4) = a2;
    v10[3] = a3;
    *((_BYTE *)v10 + 32) = a4;
    v11 = HvcallInitiateHypercall(111);
    HvlpReleaseHypercallPage((__int64)&v19[8]);
    if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v11, v12) )
      break;
    result = HvlpHandleInsufficientMemory(v14, v13, v15);
    if ( (int)result < 0 )
      goto LABEL_8;
  }
  if ( v11 )
    return 3221225473LL;
  result = 0LL;
LABEL_8:
  if ( (int)result >= 0 )
  {
    v17 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v19[8], 1, (__int64)v21, 8LL);
    v18 = HvlpAcquireHypercallPage(v20, 2, (__int64)&v21[16], 1032LL);
    *(_DWORD *)v17 = 7;
    if ( (unsigned __int16)HvcallInitiateHypercall(123) )
      v9 = -1073741823;
    else
      *a5 = *(_OWORD *)v18;
    HvlpReleaseHypercallPage((__int64)v20);
    HvlpReleaseHypercallPage((__int64)&v19[8]);
    return v9;
  }
  return result;
}
