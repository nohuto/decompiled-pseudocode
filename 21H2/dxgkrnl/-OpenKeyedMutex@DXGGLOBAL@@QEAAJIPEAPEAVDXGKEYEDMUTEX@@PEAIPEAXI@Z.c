/*
 * XREFs of ?OpenKeyedMutex@DXGGLOBAL@@QEAAJIPEAPEAVDXGKEYEDMUTEX@@PEAIPEAXI@Z @ 0x1C0291600
 * Callers:
 *     DxgkOpenKeyedMutex @ 0x1C02935C0 (DxgkOpenKeyedMutex.c)
 *     DxgkOpenKeyedMutex2 @ 0x1C02938A0 (DxgkOpenKeyedMutex2.c)
 * Callees:
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002848 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002BF0 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x1C00068E0 (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z @ 0x1C001C540 (-GetObjectA@DXGGLOBAL@@QEAAPEAXIW4_HMGRENTRY_TYPE@@_N@Z.c)
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040ED0 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z @ 0x1C029126C (-Open@DXGKEYEDMUTEX@@QEAAJPEAIPEAXI_N@Z.c)
 */

__int64 __fastcall DXGGLOBAL::OpenKeyedMutex(
        DXGGLOBAL *this,
        __int64 a2,
        struct DXGKEYEDMUTEX **a3,
        unsigned int *a4,
        char *a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 ObjectA; // rax
  __int64 v15; // rdx
  signed __int64 v16; // rcx
  __int64 v17; // r8
  volatile signed __int64 *v18; // rbx
  signed __int64 v19; // rax
  signed __int64 v20; // rtt
  __int64 v21; // rax
  __int64 v22; // rdx
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rax
  _BYTE v30[8]; // [rsp+30h] [rbp-18h] BYREF
  char v31; // [rsp+38h] [rbp-10h]

  v6 = (unsigned int)a2;
  if ( !a3 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v9 + 24) = 4598LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( !a4 )
  {
    v10 = WdLogNewEntry5_WdAssertion(this, a2);
    *(_QWORD *)(v10 + 24) = 4599LL;
    WdLogEvent5_WdAssertion(v10);
  }
  *a3 = 0LL;
  *a4 = 0;
  DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)v30, a2);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v30);
  Global = DXGGLOBAL::GetGlobal(v12, v11);
  ObjectA = DXGGLOBAL::GetObjectA((__int64)Global, (unsigned int)v6, 9);
  v18 = (volatile signed __int64 *)ObjectA;
  if ( ObjectA )
  {
    _m_prefetchw((const void *)(ObjectA + 24));
    v19 = *(_QWORD *)(ObjectA + 24);
    while ( v19 )
    {
      v16 = v19 + 1;
      v20 = v19;
      v19 = _InterlockedCompareExchange64(v18 + 3, v19 + 1, v19);
      if ( v20 == v19 )
      {
        if ( v31 )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v15);
        v24 = DXGKEYEDMUTEX::Open((DXGKEYEDMUTEX *)v18, a4, a5, a6, 1);
        v28 = v24;
        if ( v24 < 0 )
        {
          v29 = WdLogNewEntry5_WdWarning(v26, v25, v27);
          *(_QWORD *)(v29 + 24) = v6;
          *(_QWORD *)(v29 + 32) = v28;
          WdLogEvent5_WdWarning(v29);
        }
        else
        {
          *a3 = (struct DXGKEYEDMUTEX *)v18;
        }
        DXGKEYEDMUTEX::ReleaseReference((DXGKEYEDMUTEX *)v18, v25);
        return (unsigned int)v28;
      }
    }
  }
  v21 = WdLogNewEntry5_WdWarning(v16, v15, v17);
  *(_QWORD *)(v21 + 24) = v6;
  *(_QWORD *)(v21 + 32) = -1073741811LL;
  WdLogEvent5_WdWarning(v21);
  if ( v31 )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v30, v22);
  return 3221225485LL;
}
