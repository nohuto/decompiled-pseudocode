/*
 * XREFs of EtwpFixBootLoggers @ 0x140854CB8
 * Callers:
 *     EtwpInitialize @ 0x140B0433C (EtwpInitialize.c)
 * Callees:
 *     EtwpStartLoggerThread @ 0x140261C40 (EtwpStartLoggerThread.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     KeReleaseMutex @ 0x1402F91C0 (KeReleaseMutex.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     EtwpEnableKernelTrace @ 0x1406D5424 (EtwpEnableKernelTrace.c)
 *     EtwpInitializeLoggerSecurityDescriptor @ 0x1406EF8B8 (EtwpInitializeLoggerSecurityDescriptor.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140797594 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpGetSecurityDescriptorByGuid @ 0x140797BD4 (EtwpGetSecurityDescriptorByGuid.c)
 *     EtwpFreeSecurityDescriptor @ 0x14079805C (EtwpFreeSecurityDescriptor.c)
 *     EtwpReleaseLoggerContext @ 0x1407981E8 (EtwpReleaseLoggerContext.c)
 */

__int64 EtwpFixBootLoggers()
{
  __int64 v0; // rbx
  __int64 v1; // rax
  unsigned int v2; // edi
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // rax
  __int64 v7; // rcx
  __m128i v8; // xmm1
  __m128i v9; // xmm0
  struct _SECURITY_QUALITY_OF_SERVICE ClientSecurityQos; // [rsp+30h] [rbp-40h] BYREF
  void *v12; // [rsp+40h] [rbp-30h] BYREF
  _OWORD v13[2]; // [rsp+48h] [rbp-28h] BYREF

  v0 = 0LL;
  *(_QWORD *)&ClientSecurityQos.Length = 0LL;
  *(_DWORD *)&ClientSecurityQos.ContextTrackingMode = 0;
  v1 = EtwpHostSiloState;
  v2 = 4;
  v12 = 0LL;
  memset(v13, 0, sizeof(v13));
  v3 = 2LL;
  if ( *(_DWORD *)(EtwpHostSiloState + 16) > 4u )
  {
    do
    {
      v4 = EtwpAcquireLoggerContextByLoggerId(v1, v2, 0);
      v5 = v4;
      if ( v4 )
      {
        if ( *(int *)(v4 + 816) < 0 )
        {
          EtwpGetSecurityDescriptorByGuid((unsigned int *)(v4 + 276), &v12);
          EtwpInitializeLoggerSecurityDescriptor(v5, v12);
          EtwpFreeSecurityDescriptor(&v12);
          ClientSecurityQos.Length = 12;
          ClientSecurityQos.ImpersonationLevel = SecurityImpersonation;
          *(_WORD *)&ClientSecurityQos.ContextTrackingMode = 257;
          SeCreateClientSecurity(KeGetCurrentThread(), &ClientSecurityQos, 0, (PSECURITY_CLIENT_CONTEXT)(v5 + 704));
          EtwpStartLoggerThread(**(_QWORD **)(v5 + 1096), v5);
        }
        EtwpReleaseLoggerContext((unsigned int *)v5, 0);
      }
      v1 = EtwpHostSiloState;
      ++v2;
    }
    while ( v2 < *(_DWORD *)(EtwpHostSiloState + 16) );
  }
  v6 = 0LL;
  v7 = 2LL;
  do
  {
    v8 = _mm_loadu_si128((const __m128i *)&EtwpBootDeferredGroupMask[v6 / 4]);
    v9 = _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v6 / 0x10]);
    v6 += 16LL;
    *(__m128i *)(&ClientSecurityQos.ContextTrackingMode + v6) = _mm_and_si128(v8, v9);
    --v7;
  }
  while ( v7 );
  if ( (int)EtwpEnableKernelTrace((char *)PerfGlobalGroupMask, v13, EtwpHostSiloState, 0) < 0 )
  {
    KeWaitForSingleObject(&EtwpGroupMaskMutex, Executive, 0, 0, 0LL);
    do
    {
      PerfGlobalGroupMask[v0] = (__int128)_mm_and_si128(
                                            _mm_andnot_si128(
                                              _mm_loadu_si128((const __m128i *)&v13[v0]),
                                              (__m128i)_xmm_ffffffffffffffffffffffffffffffff),
                                            _mm_loadu_si128((const __m128i *)&PerfGlobalGroupMask[v0]));
      ++v0;
      --v3;
    }
    while ( v3 );
    KeReleaseMutex(&EtwpGroupMaskMutex, 0);
  }
  return 0LL;
}
