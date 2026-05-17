/*
 * XREFs of RtlpHpAllocVA @ 0x180022BAC
 * Callers:
 *     RtlpHpHeapExtendContext @ 0x180003030 (RtlpHpHeapExtendContext.c)
 *     RtlpHpLargeAlloc @ 0x180003404 (RtlpHpLargeAlloc.c)
 *     RtlpHpSegMgrReserve @ 0x18000662C (RtlpHpSegMgrReserve.c)
 *     RtlpHpHeapAllocate @ 0x180007E6C (RtlpHpHeapAllocate.c)
 *     RtlpHpSegMgrCommit @ 0x180022E90 (RtlpHpSegMgrCommit.c)
 * Callees:
 *     RtlpHpVaMgrCtxAlloc @ 0x180005B5C (RtlpHpVaMgrCtxAlloc.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtAllocateVirtualMemoryEx @ 0x18009E4F0 (NtAllocateVirtualMemoryEx.c)
 *     memset @ 0x1800A4780 (memset.c)
 *     RtlpHpTlLogVAChange @ 0x18010B78C (RtlpHpTlLogVAChange.c)
 */

__int64 __fastcall RtlpHpAllocVA(void **a1, _QWORD *a2, __int64 a3, int a4, int a5, __int128 *a6)
{
  unsigned int v6; // edi
  __int128 v7; // xmm0
  __int64 v10; // r8
  size_t v11; // r8
  __int64 v12; // r9
  int v13; // ecx
  __int128 *v14; // rax
  int v15; // ebx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // [rsp+20h] [rbp-59h]
  __int64 v21; // [rsp+28h] [rbp-51h]
  __int64 v22; // [rsp+40h] [rbp-39h] BYREF
  __int64 v23; // [rsp+48h] [rbp-31h]
  __int64 v24; // [rsp+50h] [rbp-29h]
  __int128 v25; // [rsp+58h] [rbp-21h] BYREF
  __int64 v26; // [rsp+78h] [rbp-1h] BYREF
  int v27; // [rsp+80h] [rbp+7h]
  int v28; // [rsp+84h] [rbp+Bh]

  v26 = 0x100000001000LL;
  v6 = a4 & 0xFEFFFFFF;
  v27 = 0x200000;
  v7 = *a6;
  v28 = 0x40000000;
  v25 = v7;
  if ( (a4 & 0xFEFFFFFF) != 0x2000 || (a4 & 0x1000000) != 0 )
  {
    v10 = *a2;
    if ( (a4 & 0x2000) != 0 )
    {
      v19 = *((unsigned int *)&v26 + BYTE1(v25));
      v11 = v19 - ((v10 + v19 - 1) & (unsigned int)(v19 - 1)) + v10 - 1;
    }
    else
    {
      v11 = v10 - ((v10 - 1) & 0xFFF) + 4095;
    }
    v26 = v11;
    if ( (a4 & 0x1000) != 0 && BYTE1(v25) >= 2u )
    {
      *a2 = v11;
      if ( (a4 & 0x40000000) != 0 )
        memset(*a1, 0, v11);
      goto LABEL_13;
    }
    if ( (a4 & 0x2000) != 0 && (v25 & 8) != 0 )
      v6 = a4 & 0xFEFBFFFF | 0x40000;
    v12 = v6;
    LODWORD(v12) = v6 & 0xBFFFFFFF;
    if ( RtlpHpEnvEnableSimulatedLargePageCommit && (v6 & 0x2000) == 0 )
      LODWORD(v12) = v6 & 0x9FFFFFFF;
    v13 = 0;
    if ( (v12 & 0x2000) != 0 )
    {
      v22 = 0LL;
      v23 = 0LL;
      v13 = 1;
      v24 = 0LL;
      *(_QWORD *)&v25 = 1LL;
      *((_QWORD *)&v25 + 1) = &v22;
      if ( (v12 & 0x40000) != 0 )
      {
        LODWORD(v12) = v12 & 0xFFFBFFFF;
        v22 = 0x100000000LL;
      }
    }
    v14 = &v25;
    if ( !v13 )
      v14 = 0LL;
    v15 = NtAllocateVirtualMemoryEx(-1LL, a1, &v26, v12, a5, v14, v13);
    if ( v15 >= 0 )
    {
      *a2 = v26;
LABEL_13:
      v15 = 0;
    }
  }
  else
  {
    HIDWORD(v23) = 0;
    if ( BYTE3(v25) )
      LODWORD(v22) = BYTE3(v25) - 1;
    else
      LODWORD(v22) = -1;
    HIDWORD(v22) = BYTE1(v25);
    LODWORD(v23) = BYTE2(v25);
    if ( (v25 & 8) != 0 )
      HIDWORD(v23) = 1;
    v17 = *a2;
    v24 = *((_QWORD *)&v25 + 1);
    v26 = v17 - ((v17 - 1) & 0xFFFFF) + 0xFFFFF;
    v18 = RtlpHpVaMgrCtxAlloc((__int64)&unk_18016DCA8, (__int64)&v26, a3, &v22);
    if ( v18 )
    {
      *a2 = v26;
      *a1 = (void *)v18;
      goto LABEL_13;
    }
    v15 = -1073741670;
  }
  if ( (RtlpHpHeapFeatures & 8) != 0 )
    RtlpHpTlLogVAChange(v6, *a2, *a1, (unsigned int)v15, v20, v21);
  return (unsigned int)v15;
}
