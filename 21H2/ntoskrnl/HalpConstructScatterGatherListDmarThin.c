/*
 * XREFs of HalpConstructScatterGatherListDmarThin @ 0x140516878
 * Callers:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x140504DAC (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpBuildScatterGatherListDmarThin @ 0x1405166D4 (HalpBuildScatterGatherListDmarThin.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140516878 (HalpConstructScatterGatherListDmarThin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x140504FE8 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpConstructScatterGatherListDmarThin @ 0x140516878 (HalpConstructScatterGatherListDmarThin.c)
 *     HalpPutScatterGatherListDmarThin @ 0x140516B78 (HalpPutScatterGatherListDmarThin.c)
 */

__int64 __fastcall HalpConstructScatterGatherListDmarThin(__int64 a1)
{
  __int64 v1; // r11
  void *v2; // rsi
  __int64 v3; // r10
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r12
  int v5; // edi
  __int64 *v6; // r15
  __int64 v8; // r8
  int v9; // edx
  unsigned int *v10; // r14
  char v11; // r13
  unsigned int v12; // eax
  unsigned int v13; // ecx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned __int64 v16; // r12
  bool v17; // zf
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v22; // [rsp+40h] [rbp-49h]
  void (__fastcall *v23)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+48h] [rbp-41h]
  __int128 v24; // [rsp+50h] [rbp-39h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-29h]
  __int64 v26; // [rsp+68h] [rbp-21h]
  __int64 v27; // [rsp+70h] [rbp-19h]
  __int64 v28; // [rsp+78h] [rbp-11h]
  __int128 v29; // [rsp+80h] [rbp-9h] BYREF
  __int64 v30; // [rsp+90h] [rbp+7h]
  unsigned int v31; // [rsp+F0h] [rbp+67h]
  unsigned int v32; // [rsp+F8h] [rbp+6Fh]
  __int64 v33; // [rsp+100h] [rbp+77h]
  __int64 v34; // [rsp+108h] [rbp+7Fh]

  v1 = *(_QWORD *)(a1 + 24);
  v33 = 0LL;
  v2 = *(void **)(a1 + 88);
  v3 = 0LL;
  v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 64);
  v5 = 0;
  v6 = *(__int64 **)(a1 + 48);
  v8 = *(unsigned int *)(a1 + 56);
  v9 = *(_DWORD *)(a1 + 60);
  v10 = *(unsigned int **)(a1 + 80);
  v11 = *(_BYTE *)(a1 + 96);
  v30 = 0LL;
  LODWORD(v25) = 0;
  v22 = v1;
  v23 = v4;
  v34 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v26 = *(_QWORD *)(v1 + 504);
  if ( v2 )
  {
    _m_prefetchw(v2);
    if ( (_InterlockedOr((volatile signed __int32 *)v2, 4u) & 2) != 0 )
      goto LABEL_3;
  }
  *v10 = 0;
  *((_QWORD *)v10 + 1) = a1;
  if ( v6 )
  {
    do
    {
      if ( !(_DWORD)v8 )
        break;
      v12 = *((_DWORD *)v6 + 10) - v9;
      v28 = 3LL * *v10;
      v13 = v8;
      if ( v12 <= (unsigned int)v8 )
        v13 = v12;
      v31 = v13;
      v32 = v8 - v13;
      v14 = v9 + *((_DWORD *)v6 + 11);
      v15 = ((_WORD)v9 + *((_WORD *)v6 + 22)) & 0xFFF;
      if ( v13 )
      {
        v27 = ((_WORD)v9 + *((_WORD *)v6 + 22)) & 0xFFF;
        LODWORD(v24) = 2;
        v16 = (v15 + (unsigned __int64)v13 + 4095) >> 12;
        v17 = *(_BYTE *)(a1 + 98) == 0;
        *((_QWORD *)&v24 + 1) = &v6[((unsigned __int64)v14 >> 12) + 6];
        v25 = v16;
        if ( v17 )
        {
          v5 = ((__int64 (__fastcall *)(_QWORD, __int64, __int128 *))qword_140C4BDA8)(*(_QWORD *)(v26 + 40), 3LL, &v24);
          if ( v5 < 0 )
            goto LABEL_22;
          v18 = v33;
          v3 = v34;
          v1 = v22;
        }
        else
        {
          v5 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int128 *, __int128 *))qword_140C4BE00)(
                 *(_QWORD *)(v1 + 552),
                 v3,
                 3LL,
                 &v24,
                 &v29);
          if ( v5 < 0 )
            goto LABEL_22;
          v1 = v22;
          v18 = v34 + **(_QWORD **)(v22 + 552);
          v3 = v16 + v34;
          v33 = v18;
          v34 += v16;
        }
        v19 = v28;
        v20 = v27 + v18;
        *(_QWORD *)&v10[2 * v28 + 8] = 0LL;
        *(_QWORD *)&v10[2 * v19 + 4] = v20;
        v10[2 * v19 + 6] = v31;
        ++*v10;
      }
      v6 = (__int64 *)*v6;
      v9 = 0;
      v8 = v32;
    }
    while ( v6 );
    v4 = v23;
  }
  if ( v2 && (_m_prefetchw(v2), (_InterlockedOr((volatile signed __int32 *)v2, 1u) & 2) != 0) )
  {
LABEL_3:
    v5 = -1073741536;
LABEL_22:
    if ( *v10 )
      HalpPutScatterGatherListDmarThin(*(_QWORD *)(a1 + 24), v10, v8);
    if ( v5 != -1073741536 && !*(_BYTE *)(a1 + 98) )
    {
      *(_BYTE *)(a1 + 98) = 1;
      if ( HalpDmaUseEmergencyLogicalAddressResources(v22, (_QWORD *)a1, v11 == 0) )
        return (unsigned int)HalpConstructScatterGatherListDmarThin(a1);
      else
        return v11 != 0 ? (unsigned int)v5 : 0;
    }
  }
  else if ( v4 )
  {
    v4(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v10, *(_QWORD *)(a1 + 72));
  }
  return (unsigned int)v5;
}
