/*
 * XREFs of ?GetCumulativeHostedAppInteractivity@CHostedAppInteractivityManager@@AEAAJPEBG_KKPEAPEAVCHostedAppInteractivity@@@Z @ 0x180021F84
 * Callers:
 *     ?AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z @ 0x180021E3C (-AddHostedAppInteractivityNotification@CHostedAppInteractivityManager@@QEAAJPEBG_KKH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ?AddHead@?$CAtlList@PEAVCHostedAppInteractivity@@V?$CElementTraits@PEAVCHostedAppInteractivity@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCHostedAppInteractivity@@@Z @ 0x180017E30 (-AddHead@-$CAtlList@PEAVCHostedAppInteractivity@@V-$CElementTraits@PEAVCHostedAppInteractivity@@.c)
 *     ?CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z @ 0x180021D00 (-CreateInstance@CHostedAppInteractivity@@SAJPEBG_KKPEAPEAV1@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180039D98 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity(
        CHostedAppInteractivityManager *this,
        const unsigned __int16 *a2,
        __int64 a3,
        int a4,
        struct CHostedAppInteractivity **a5)
{
  int v5; // ebx
  _QWORD *v6; // r10
  struct CHostedAppInteractivity *v7; // rcx
  struct CHostedAppInteractivity *v8; // rdi
  __int64 result; // rax
  ATL::CAtlException *v10; // rbx
  struct CHostedAppInteractivity *v11; // [rsp+20h] [rbp-18h] BYREF
  ATL::CAtlException *v12; // [rsp+28h] [rbp-10h] BYREF
  int v13; // [rsp+40h] [rbp+8h]

  v5 = 0;
  v11 = 0LL;
  v6 = (_QWORD *)qword_18004FF68;
  while ( v6 )
  {
    v7 = (struct CHostedAppInteractivity *)v6[2];
    v6 = (_QWORD *)*v6;
    v11 = v7;
    if ( *((_DWORD *)v7 + 2) == a4 && *((_QWORD *)v7 + 2) == a3 )
      goto LABEL_9;
  }
  v5 = CHostedAppInteractivity::CreateInstance(a2, a3, a4, &v11);
  if ( v5 < 0 )
    goto LABEL_10;
  try
  {
    v5 = 0;
    ATL::CAtlList<CHostedAppInteractivity *,ATL::CElementTraits<CHostedAppInteractivity *>>::AddHead(
      &qword_18004FF68,
      &v11);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v10 = v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v13 = *(_DWORD *)v10;
    v5 = *(_DWORD *)v10;
    if ( v13 >= 0 )
      goto LABEL_8;
LABEL_10:
    v8 = v11;
LABEL_11:
    if ( v8 )
    {
      if ( *(_QWORD *)v8 )
      {
        CoTaskMemFree(*(LPVOID *)v8);
        *(_QWORD *)v8 = 0LL;
      }
      operator delete(v8, (const struct std::nothrow_t *)0x18);
    }
    if ( v5 < 0 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, &WPP_8b174e4b3d6138c7fcfc76c86feeee8f_Traceguids, v5);
      }
      AudPolicyLogError("CHostedAppInteractivityManager::GetCumulativeHostedAppInteractivity", 464, v5);
    }
    result = (unsigned int)v5;
  }
LABEL_8:
  v7 = v11;
LABEL_9:
  *a5 = v7;
  v8 = 0LL;
  goto LABEL_11;
}
