/*
 * XREFs of ?RtlpFlsFree@@YGJPAU_RTLP_FLS_CONTEXT@@K@Z @ 0x4B2E87A1
 * Callers:
 *     _RtlFlsFree@4 @ 0x4B2E8790 (_RtlFlsFree@4.c)
 * Callees:
 *     _RtlReleaseSRWLockShared@4 @ 0x4B2B52B0 (_RtlReleaseSRWLockShared@4.c)
 *     _RtlAcquireSRWLockShared@4 @ 0x4B2B5380 (_RtlAcquireSRWLockShared@4.c)
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     ?SetValue@?$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGJPAU1@KURTLP_FLS_SLOT@@K@Z @ 0x4B2E8936 (-SetValue@-$RTL_BINARY_ARRAY@URTLP_FLS_SLOT@@$07$03@@SGJPAU1@KURTLP_FLS_SLOT@@K@Z.c)
 *     ?SlotFree@?$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGXPAU1@K@Z @ 0x4B2E8962 (-SlotFree@-$RTL_BINARY_ARRAY@URTLP_FLS_CALLBACK_ENTRY@@$07$03@@SGXPAU1@K@Z.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 */

int __fastcall RtlpFlsFree(int a1, unsigned int a2)
{
  unsigned int v2; // eax
  int v3; // ecx
  PRTL_SRWLOCK v4; // eax
  int v5; // ebx
  bool v6; // zf
  _RTL_SRWLOCK *v7; // ebx
  unsigned int Value; // eax
  unsigned int v9; // edi
  int v10; // esi
  int *v11; // ebx
  unsigned int v12; // ecx
  int v13; // eax
  int *v14; // eax
  int v15; // eax
  unsigned int i; // edi
  unsigned int v18; // [esp+10h] [ebp-A0h]
  unsigned int v19; // [esp+14h] [ebp-9Ch]
  int v20; // [esp+18h] [ebp-98h]
  unsigned int v21; // [esp+20h] [ebp-90h]
  PRTL_SRWLOCK SRWLock; // [esp+24h] [ebp-8Ch]
  _DWORD v23[33]; // [esp+28h] [ebp-88h]

  if ( !a2 )
    return -1073741811;
  if ( a2 >= 0xFF0 )
    return -1073741811;
  _BitScanReverse(&v2, a2 + 16);
  v19 = a2 + 16;
  v3 = (a2 + 16) ^ (1 << v2);
  v4 = (&dword_4B3A66C4)[v2];
  if ( !v4 )
    return -1073741811;
  v5 = 8 * v3 + 4;
  v6 = (PRTL_SRWLOCK)((char *)v4 + v5) == 0;
  v7 = (PRTL_SRWLOCK)((char *)v4 + v5);
  SRWLock = v7;
  if ( v6 )
    return -1073741811;
  Value = v7[1].Value;
  if ( !Value )
    return -1073741811;
  v9 = Value != -1 ? Value : 0;
  v21 = v9;
  RtlAcquireSRWLockExclusive(v7);
  v10 = 0;
  while ( 1 )
  {
    v18 = 0;
    RtlAcquireSRWLockShared(&RtlpFlsContext);
    v11 = (int *)dword_4B3A66F4;
    if ( (int *)dword_4B3A66F4 != &dword_4B3A66F4 )
    {
      v12 = 0;
      do
      {
        if ( v12 >= 0x10 )
          break;
        if ( v9 )
        {
          _BitScanReverse((unsigned int *)&v13, v19);
          v12 = v18;
          v20 = v11[v13 - 2];
          if ( !v20 )
            goto LABEL_14;
          v14 = (int *)(v20 + 4 + 4 * (v19 ^ (1 << v13)));
          if ( !v14 )
            goto LABEL_14;
          v15 = *v14;
          if ( !v15 )
            goto LABEL_14;
          v23[2 * v18] = v9;
          v23[2 * v18 + 1] = v15;
          v12 = ++v18;
        }
        RTL_BINARY_ARRAY<RTLP_FLS_SLOT,8,4>::SetValue(0, v12);
        v12 = v18;
LABEL_14:
        v11 = (int *)*v11;
      }
      while ( v11 != &dword_4B3A66F4 );
    }
    RtlReleaseSRWLockShared(&RtlpFlsContext);
    if ( !v18 )
      break;
    for ( i = 0; i < v18; ++i )
      ((void (__thiscall *)(_DWORD, _DWORD))v23[2 * i])(v23[2 * i], v23[2 * i + 1]);
    v9 = v21;
  }
  SRWLock[1].Value = -2;
  RtlReleaseSRWLockExclusive(SRWLock);
  RtlAcquireSRWLockExclusive(&RtlpFlsContext);
  SRWLock[1].Value = 0;
  RTL_BINARY_ARRAY<RTLP_FLS_CALLBACK_ENTRY,8,4>::SlotFree(dword_4B3A66D4);
  RtlReleaseSRWLockExclusive(&RtlpFlsContext);
  return v10;
}
