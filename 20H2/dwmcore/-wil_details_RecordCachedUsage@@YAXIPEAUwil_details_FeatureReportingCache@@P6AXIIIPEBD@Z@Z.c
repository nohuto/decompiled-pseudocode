/*
 * XREFs of ?wil_details_RecordCachedUsage@@YAXIPEAUwil_details_FeatureReportingCache@@P6AXIIIPEBD@Z@Z @ 0x1800E5014
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x1800E1FF8 (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     ?WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x1800E2078 (-WilApi_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 *     __security_check_cookie @ 0x1800E29B0 (__security_check_cookie.c)
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
  _QWORD *v11; // rdi
  _DWORD v12[9]; // [rsp+20h] [rbp-50h] BYREF
  int v13; // [rsp+44h] [rbp-2Ch]
  int v14; // [rsp+48h] [rbp-28h]
  int v15; // [rsp+4Ch] [rbp-24h]
  int v16; // [rsp+50h] [rbp-20h]
  int v17; // [rsp+54h] [rbp-1Ch]
  int v18; // [rsp+58h] [rbp-18h]
  int v19; // [rsp+5Ch] [rbp-14h]

  v4 = (unsigned int)this;
  _m_prefetchw(a2);
  v5 = _InterlockedAnd((volatile signed __int32 *)a2, 0xFFC0401E);
  v6 = (v5 >> 1) & 0xF;
  if ( v6 )
  {
    _m_prefetchw((char *)a2 + 4);
    v6 &= ~_InterlockedOr((volatile signed __int32 *)a2 + 1, v6);
  }
  v12[0] = 2;
  v12[1] = v6 & 1;
  v12[2] = 6;
  v12[3] = ((unsigned __int8)v6 >> 1) & 1;
  v12[4] = 3;
  v12[5] = ((unsigned __int8)v6 >> 2) & 1;
  v12[6] = 7;
  v12[8] = 0;
  v12[7] = v6 >= 8;
  if ( (v5 & 0x4000) != 0 )
  {
    v13 = 0;
    v7 = v5 >> 5;
  }
  else
  {
    v7 = v5 >> 5;
    v13 = (v5 >> 5) & 0x1FF;
  }
  v14 = 4;
  if ( (v5 & 0x4000) != 0 )
    v15 = v7 & 0x1FF;
  else
    v15 = 0;
  v16 = 1;
  v8 = v5 & 0x400000;
  if ( (v5 & 0x400000) != 0 )
  {
    v17 = 0;
    v9 = v5 >> 15;
  }
  else
  {
    v9 = v5 >> 15;
    v17 = v9 & 0x7F;
  }
  v18 = 5;
  if ( v8 )
    v19 = v9 & 0x7F;
  else
    v19 = 0;
  v10 = 0;
  v11 = v12;
  do
  {
    if ( HIDWORD(*v11) )
      wil::details::WilApi_RecordFeatureUsage((wil::details *)v4);
    ++v10;
    ++v11;
  }
  while ( v10 < 8 );
}
