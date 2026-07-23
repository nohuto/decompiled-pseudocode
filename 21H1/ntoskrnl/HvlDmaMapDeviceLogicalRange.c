/*
 * XREFs of HvlDmaMapDeviceLogicalRange @ 0x1404EEDB0
 * Callers:
 *     <none>
 * Callees:
 *     HvcallFastExtended @ 0x14038CDD0 (HvcallFastExtended.c)
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HvlpHandleInsufficientMemory @ 0x1404EC608 (HvlpHandleInsufficientMemory.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvStatusIsInsufficientMemory @ 0x1404F5258 (HvlpHvStatusIsInsufficientMemory.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlDmaMapDeviceLogicalRange(__int64 a1, int a2, __int64 a3, _QWORD *a4, _QWORD *a5, char a6)
{
  bool v6; // zf
  _DWORD *v7; // rdi
  _QWORD *v8; // r10
  _DWORD *v10; // rbx
  __int64 result; // rax
  unsigned __int64 v12; // rdx
  int v13; // r15d
  __int64 v14; // r14
  int v15; // r12d
  int v16; // esi
  _QWORD *v17; // rcx
  unsigned int v18; // r8d
  char v19; // r11
  int v20; // eax
  int v21; // eax
  _QWORD *v22; // rdx
  __int64 v23; // r9
  char *v24; // r10
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int16 v28; // bx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // [rsp+38h] [rbp-A9h]
  __int64 v36; // [rsp+50h] [rbp-91h]
  _OWORD v38[2]; // [rsp+68h] [rbp-79h] BYREF
  _BYTE v39[112]; // [rsp+88h] [rbp-59h] BYREF

  v6 = *(_BYTE *)(a1 + 4) == 0;
  v7 = a5;
  v8 = a4;
  memset(v38, 0, sizeof(v38));
  v10 = (_DWORD *)a1;
  if ( !v6 )
    return 3221225659LL;
  v12 = *a5;
  result = 0LL;
  v13 = 0;
  v14 = 0LL;
  if ( *a5 )
  {
    v15 = 0;
    v16 = 179;
    while ( 1 )
    {
      if ( v12 <= 9 )
      {
        v17 = v39;
        v18 = v12 >= 9 ? 9 : *v7;
        v19 = 1;
        v16 |= 0x10000u;
      }
      else
      {
        v17 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)v38, 1, 0LL, 0LL);
        v18 = *(_QWORD *)v7 >= 0x1FBuLL ? 507 : *v7;
        v8 = a4;
        v19 = 0;
        v16 &= ~0x10000u;
      }
      LODWORD(v33) = v16;
      v17[1] = 0LL;
      v17[2] = 0LL;
      v17[3] = 0LL;
      v17[4] = 0LL;
      *v17 = -1LL;
      *((_DWORD *)v17 + 4) &= 0xFFFFFFF0;
      *((_DWORD *)v17 + 5) = *v10;
      v17[4] = a3;
      if ( a2 )
      {
        v21 = (a2 & 1) != 0;
        if ( (a2 & 2) != 0 )
          v21 |= 2u;
        v20 = v13 | v21;
      }
      else
      {
        v20 = 1024;
      }
      *((_DWORD *)v17 + 7) = v20;
      if ( v18 )
      {
        v22 = v17 + 5;
        v23 = 0LL;
        v24 = (char *)v8 + 8 * v14 - 40 - (_QWORD)v17;
        v25 = v18;
        do
        {
          if ( a2 )
          {
            if ( a6 )
              v26 = v14 + v23 + *a4;
            else
              v26 = *(_QWORD *)((char *)v22 + (_QWORD)v24);
          }
          else
          {
            v26 = 0LL;
          }
          *v22 = v26;
          ++v23;
          ++v22;
          --v25;
        }
        while ( v25 );
        v7 = a5;
      }
      v15 ^= ((unsigned __int16)v18 ^ (unsigned __int16)v15) & 0xFFF;
      HIDWORD(v33) = v15;
      if ( v19 )
      {
        v27 = HvcallFastExtended(v33, (__int64)v39, 8 * v18 + 40, 0, 0);
        v28 = v27;
        WORD2(v36) = WORD2(v27);
      }
      else
      {
        v36 = HvcallInitiateHypercall(v16);
        v28 = v36;
        HvlpReleaseHypercallPage((__int64)v38);
      }
      v29 = WORD2(v36) & 0xFFF;
      *(_QWORD *)v7 -= v29;
      v14 += v29;
      a3 += (unsigned __int16)(WORD2(v36) & 0xFFF) << 12;
      if ( !(unsigned __int8)HvlpHvStatusIsInsufficientMemory(v28, 4095LL) )
        break;
      result = HvlpHandleInsufficientMemory(v31, v30, v32);
      if ( (int)result < 0 )
      {
        if ( v13 != 0x8000 )
        {
          v13 = 0x8000;
          result = 0LL;
        }
LABEL_36:
        if ( (int)result < 0 )
          goto LABEL_38;
      }
      v12 = *(_QWORD *)v7;
      v10 = (_DWORD *)a1;
      v8 = a4;
      if ( !*(_QWORD *)v7 )
        goto LABEL_38;
    }
    result = HvlpHvToNtStatus(v31);
    goto LABEL_36;
  }
LABEL_38:
  *(_QWORD *)v7 = v14;
  return result;
}
