/*
 * XREFs of HUBDESC_InternalValidateBOSDescriptor @ 0x1C00391A4
 * Callers:
 *     HUBDTX_ValidateAndCacheBOSDescriptorHeader @ 0x1C0028A40 (HUBDTX_ValidateAndCacheBOSDescriptorHeader.c)
 *     HUBDESC_ValidateBOSDescriptorSet @ 0x1C0039550 (HUBDESC_ValidateBOSDescriptorSet.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001C04 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0002130 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_DD @ 0x1C0002204 (WPP_RECORDER_SF_DD.c)
 *     WPP_RECORDER_SF_Ddd @ 0x1C0032CA4 (WPP_RECORDER_SF_Ddd.c)
 *     HUBDESC_ShouldEnforceWin8ValidationMutable @ 0x1C003304C (HUBDESC_ShouldEnforceWin8ValidationMutable.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall HUBDESC_InternalValidateBOSDescriptor(unsigned __int8 *a1, __int64 a2, _DWORD *a3, int *a4, __int64 a5)
{
  int *v5; // rsi
  __int64 v9; // rdx
  char v10; // r13
  __int64 v11; // r15
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-48h]
  __int64 v17; // [rsp+28h] [rbp-40h]
  __int64 v18; // [rsp+30h] [rbp-38h]
  int v19; // [rsp+70h] [rbp+8h] BYREF

  v5 = a4;
  v19 = 0;
  if ( a4 )
  {
    if ( *(_BYTE *)(a2 + 48) )
      *a4 = 0;
  }
  else
  {
    v5 = &v19;
  }
  v9 = 5LL;
  if ( a3 )
    *a3 = 5;
  v10 = 1;
  if ( a1 )
  {
    v11 = a5;
    if ( *(_DWORD *)(a2 + 72) < 5u )
    {
      *v5 = 1;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DD(
          v11,
          2u,
          5u,
          0xDFu,
          (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids,
          *(_DWORD *)(a2 + 72),
          5);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 23LL);
      v9 = 5LL;
    }
    if ( a1[1] != 15 )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v18) = 15;
        LODWORD(v17) = a1[1];
        WPP_RECORDER_SF_DD(v11, 2u, 5u, 0xE0u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v17, v18);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 24LL);
    }
    if ( *a1 < 5u )
    {
      *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v9, (__int64)a3, 0xE1u, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 21LL);
    }
    v12 = *((unsigned __int16 *)a1 + 1);
    if ( (unsigned int)v12 < *(_DWORD *)(a2 + 72) )
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + v12;
    if ( *a1 > 5u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v9, (__int64)a3, 0xE2u, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 20LL);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( a3 )
        *a3 = *a1;
    }
    if ( *((_WORD *)a1 + 1) < 5u )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v17) = *((unsigned __int16 *)a1 + 1);
        WPP_RECORDER_SF_d(v11, 2u, 5u, 0xE3u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids, v17);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
      *v5 = 2;
    }
    if ( *((unsigned __int16 *)a1 + 1) < *a1 + 2 * (unsigned int)a1[4] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v9, (__int64)a3, 0xE4u, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
      *(_QWORD *)(a2 + 64) = *(_QWORD *)(a2 + 56) + *(unsigned int *)(a2 + 72);
      *v5 = 2;
    }
    if ( !a1[4] )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(v11, 2u, 5u, 0xE5u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
      if ( HUBDESC_ShouldEnforceWin8ValidationMutable(a2) )
        *v5 = 2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_Ddd(v11, v13, v14, 0xE6u, v16);
      (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 29LL);
    }
  }
  else
  {
    *v5 = 1;
    v11 = a5;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(a5, 2u, 5u, 0xDEu, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
    (*(void (__fastcall **)(_QWORD, __int64))(a2 + 24))(*(_QWORD *)(a2 + 40), 27LL);
  }
  if ( *v5 )
  {
    v10 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(v11, 2u, 5u, 0xE7u, (__int64)&WPP_4c38247a76be3626caea66f1aba69131_Traceguids);
  }
  return v10;
}
