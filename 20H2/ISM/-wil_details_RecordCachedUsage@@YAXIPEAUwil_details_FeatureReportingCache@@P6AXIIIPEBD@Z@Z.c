/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x18003E24C
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x180065E98 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180067A28 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 */

void __fastcall wil_details_RecordCachedUsage(
        wil::details *this,
        struct wil_details_FeatureReportingCache *a2,
        void (*a3)(unsigned int, unsigned int, unsigned int, const char *))
{
  unsigned int v4; // esi
  unsigned __int32 v5; // ecx
  unsigned int v6; // edx
  unsigned __int32 v7; // edx
  int v8; // edx
  unsigned __int32 v9; // ecx
  unsigned int v10; // ebx
  unsigned int *v11; // rdi
  __int64 v12; // rax
  const char *v13; // [rsp+20h] [rbp-50h] BYREF
  int v14; // [rsp+28h] [rbp-48h]
  int v15; // [rsp+2Ch] [rbp-44h]
  int v16; // [rsp+30h] [rbp-40h]
  int v17; // [rsp+34h] [rbp-3Ch]
  int v18; // [rsp+38h] [rbp-38h]
  BOOL v19; // [rsp+3Ch] [rbp-34h]
  int v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+44h] [rbp-2Ch]
  int v22; // [rsp+48h] [rbp-28h]
  int v23; // [rsp+4Ch] [rbp-24h]
  int v24; // [rsp+50h] [rbp-20h]
  int v25; // [rsp+54h] [rbp-1Ch]
  int v26; // [rsp+58h] [rbp-18h]
  int v27; // [rsp+5Ch] [rbp-14h]

  v4 = (unsigned int)this;
  _m_prefetchw(a2);
  v5 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw((char *)a2 + 4);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)a2 + 1, v6);
  }
  LODWORD(v13) = 2;
  HIDWORD(v13) = v6 & 1;
  v14 = 6;
  v15 = ((unsigned __int8)v6 >> 1) & 1;
  v16 = 3;
  v17 = ((unsigned __int8)v6 >> 2) & 1;
  v18 = 7;
  v20 = 0;
  v19 = v6 >= 8;
  if ( (v5 & 0x4000) != 0 )
  {
    v21 = 0;
    v7 = v5 >> 5;
  }
  else
  {
    v7 = v5 >> 5;
    v21 = (v5 >> 5) & 0x1FF;
  }
  v22 = 4;
  if ( (v5 & 0x4000) != 0 )
    v23 = v7 & 0x1FF;
  else
    v23 = 0;
  v24 = 1;
  v8 = v5 & 0x400000;
  if ( (v5 & 0x400000) != 0 )
  {
    v25 = 0;
    v9 = v5 >> 15;
  }
  else
  {
    v9 = v5 >> 15;
    v25 = v9 & 0x7F;
  }
  v26 = 5;
  if ( v8 )
    v27 = v9 & 0x7F;
  else
    v27 = 0;
  v10 = 0;
  v11 = (unsigned int *)&v13;
  do
  {
    v12 = HIDWORD(*(_QWORD *)v11);
    if ( (_DWORD)v12 )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v4, *v11, v12, 0, v13);
    ++v10;
    v11 += 2;
  }
  while ( v10 < 8 );
}
