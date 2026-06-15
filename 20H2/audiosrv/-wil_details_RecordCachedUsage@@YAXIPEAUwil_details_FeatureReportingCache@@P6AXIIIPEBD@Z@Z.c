/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18006D408
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800384C8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180069C20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_RecordCachedUsage(
        unsigned int a1,
        struct wil_details_FeatureReportingCache *a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned __int32 v5; // ecx
  unsigned int v6; // edx
  unsigned __int32 v7; // edx
  int v8; // edx
  unsigned __int32 v9; // ecx
  unsigned int v10; // ebx
  __int64 *v11; // rdi
  void (*v12)(unsigned int, unsigned int, unsigned int, const char *); // rax
  unsigned __int64 v13; // r8
  __int64 v14; // [rsp+30h] [rbp-19h]
  _DWORD v15[9]; // [rsp+40h] [rbp-9h] BYREF
  int v16; // [rsp+64h] [rbp+1Bh]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  int v19; // [rsp+70h] [rbp+27h]
  int v20; // [rsp+74h] [rbp+2Bh]
  int v21; // [rsp+78h] [rbp+2Fh]
  int v22; // [rsp+7Ch] [rbp+33h]

  _m_prefetchw(a2);
  v5 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw((char *)a2 + 4);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)a2 + 1, v6);
  }
  v15[0] = 2;
  v15[1] = v6 & 1;
  v15[2] = 6;
  v15[3] = ((unsigned __int8)v6 >> 1) & 1;
  v15[4] = 3;
  v15[5] = ((unsigned __int8)v6 >> 2) & 1;
  v15[6] = 7;
  v15[8] = 0;
  v15[7] = v6 >= 8;
  if ( (v5 & 0x4000) != 0 )
  {
    v16 = 0;
    v7 = v5 >> 5;
  }
  else
  {
    v7 = v5 >> 5;
    v16 = (v5 >> 5) & 0x1FF;
  }
  v17 = 4;
  if ( (v5 & 0x4000) != 0 )
    v18 = v7 & 0x1FF;
  else
    v18 = 0;
  v19 = 1;
  v8 = v5 & 0x400000;
  if ( (v5 & 0x400000) != 0 )
  {
    v20 = 0;
    v9 = v5 >> 15;
  }
  else
  {
    v9 = v5 >> 15;
    v20 = v9 & 0x7F;
  }
  v21 = 5;
  if ( v8 )
    v22 = v9 & 0x7F;
  else
    v22 = 0;
  v10 = 0;
  v11 = (__int64 *)v15;
  do
  {
    v14 = *v11;
    if ( !HIDWORD(*v11) )
      goto LABEL_22;
    v12 = g_wil_details_internalRecordFeatureUsage;
    if ( g_wil_details_internalRecordFeatureUsage )
    {
      v13 = HIDWORD(*v11);
    }
    else
    {
      v12 = g_wil_details_apiRecordFeatureUsage;
      if ( !g_wil_details_apiRecordFeatureUsage )
        goto LABEL_22;
      v13 = HIDWORD(v14);
    }
    ((void (__fastcall *)(_QWORD, _QWORD, unsigned __int64, _QWORD))v12)(a1, (unsigned int)v14, v13, 0LL);
LABEL_22:
    ++v10;
    ++v11;
  }
  while ( v10 < 8 );
}
