/*
 * XREFs of HalpConstructScatterGatherListThin @ 0x1404CBA58
 * Callers:
 *     HalpDmaReturnEmergencyLogicalAddressResources @ 0x1404B85A8 (HalpDmaReturnEmergencyLogicalAddressResources.c)
 *     HalpBuildScatterGatherListThin @ 0x1404CB86C (HalpBuildScatterGatherListThin.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140408790 (_guard_dispatch_icall.c)
 *     HalpDmaUseEmergencyLogicalAddressResources @ 0x1404B87E8 (HalpDmaUseEmergencyLogicalAddressResources.c)
 *     HalpDomainLaAllocate @ 0x1404C4F54 (HalpDomainLaAllocate.c)
 *     HalpDomainLaDelete @ 0x1404C5034 (HalpDomainLaDelete.c)
 *     HalpIommuDomainMapLogical @ 0x1404C94B0 (HalpIommuDomainMapLogical.c)
 *     HalpConstructScatterGatherListThin @ 0x1404CBA58 (HalpConstructScatterGatherListThin.c)
 *     HalpPutScatterGatherListThin @ 0x1404CBCCC (HalpPutScatterGatherListThin.c)
 */

__int64 __fastcall HalpConstructScatterGatherListThin(__int64 a1)
{
  __int64 v1; // rax
  int v2; // edi
  void (__fastcall *v4)(_QWORD, _QWORD, _QWORD, _QWORD); // r10
  __int64 v5; // r8
  void *v6; // r15
  __int64 v7; // r11
  __int64 *v8; // rbp
  unsigned int v9; // edx
  __int64 v10; // r14
  char v11; // r13
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // rdx
  unsigned __int64 v17; // r12
  int v18; // eax
  void (__fastcall *v20)(_QWORD, _QWORD, _QWORD, _QWORD); // [rsp+30h] [rbp-78h]
  __int64 v21; // [rsp+38h] [rbp-70h]
  __int64 v22; // [rsp+40h] [rbp-68h]
  unsigned int v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  int v25; // [rsp+B0h] [rbp+8h]
  unsigned int v26; // [rsp+B8h] [rbp+10h]
  __int64 v27; // [rsp+C0h] [rbp+18h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+20h]

  v1 = *(_QWORD *)(a1 + 24);
  v2 = 0;
  v4 = *(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(a1 + 64);
  v5 = *(unsigned int *)(a1 + 60);
  v6 = *(void **)(a1 + 88);
  v7 = *(_QWORD *)(v1 + 504);
  v8 = *(__int64 **)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 56);
  v10 = *(_QWORD *)(a1 + 80);
  v11 = *(_BYTE *)(a1 + 96);
  v28 = v7;
  v24 = v1;
  v25 = v5;
  v20 = v4;
  if ( *(_BYTE *)(a1 + 98) )
    v12 = *(_QWORD *)(v1 + 552);
  else
    v12 = 0LL;
  *(_DWORD *)v10 = 0;
  v27 = v12;
  *(_QWORD *)(v10 + 8) = a1;
  if ( v8 )
  {
    v13 = 0LL;
    while ( v9 )
    {
      v14 = 3 * v13;
      v15 = v9;
      v22 = v14;
      if ( *((_DWORD *)v8 + 10) - (int)v5 <= v9 )
        v15 = *((_DWORD *)v8 + 10) - v5;
      v16 = v9 - v15;
      v23 = v15;
      v26 = v16;
      v21 = ((_WORD)v5 + (unsigned __int16)*((_DWORD *)v8 + 11)) & 0xFFF;
      v17 = ((unsigned __int64)v15 + v21 + 4095) >> 12;
      if ( !*(_BYTE *)(a1 + 98) )
      {
        v18 = HalpDomainLaAllocate(v7, (_DWORD)v17 << 12, v5, 0, 0LL, (__int64)&v27);
        v12 = v27;
        v2 = v18;
        if ( v18 < 0 )
          goto LABEL_24;
        LODWORD(v5) = v25;
        v7 = v28;
      }
      v2 = HalpIommuDomainMapLogical(
             *(_QWORD *)(v7 + 40),
             v16,
             (unsigned int)v8 + 8 * ((unsigned int)(v5 + *((_DWORD *)v8 + 11)) >> 12) + 48,
             (unsigned int)v17,
             v12);
      if ( v2 < 0 )
        goto LABEL_24;
      v5 = 0LL;
      v25 = 0;
      *(_QWORD *)(v10 + 8 * v22 + 32) = 0LL;
      *(_QWORD *)(v10 + 8 * v22 + 16) = v12 + v21;
      *(_DWORD *)(v10 + 8 * v22 + 24) = v23;
      v8 = (__int64 *)*v8;
      v13 = (unsigned int)(*(_DWORD *)v10 + 1);
      *(_DWORD *)v10 = v13;
      if ( *(_BYTE *)(a1 + 98) )
      {
        v12 += (unsigned __int64)(unsigned int)v17 << 12;
        v27 = v12;
      }
      if ( !v8 )
        break;
      v9 = v26;
      v7 = v28;
    }
    v4 = v20;
  }
  if ( v6 )
  {
    _m_prefetchw(v6);
    if ( (_InterlockedOr((volatile signed __int32 *)v6, 1u) & 2) != 0 )
      v2 = -1073741536;
  }
  v12 = 0LL;
  if ( v4 )
    v4(*(_QWORD *)(a1 + 32), *(_QWORD *)(a1 + 40), v10, *(_QWORD *)(a1 + 72));
  if ( v2 < 0 )
  {
LABEL_24:
    if ( *(_DWORD *)v10 )
      HalpPutScatterGatherListThin(*(_QWORD *)(a1 + 24), v10);
    if ( !*(_BYTE *)(a1 + 98) )
    {
      if ( v12 )
        HalpDomainLaDelete(v28, v12);
      *(_BYTE *)(a1 + 98) = 1;
      if ( HalpDmaUseEmergencyLogicalAddressResources(v24, (_QWORD *)a1, v11 == 0) )
        return (unsigned int)HalpConstructScatterGatherListThin(a1);
      else
        return v11 != 0 ? (unsigned int)v2 : 0;
    }
  }
  return (unsigned int)v2;
}
