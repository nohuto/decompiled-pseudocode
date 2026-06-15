/*
 * XREFs of ?CreateInstance@CApplication@@SAJPEBG_KKPEAPEAV1@@Z @ 0x18000FD74
 * Callers:
 *     ?GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z @ 0x18001DBC4 (-GetApplication@CApplicationManager@@QEAAJPEBG_KKPEAPEAVCApplication@@HPEAH@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x1800050FC (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x180005724 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CApplication@@IEAA@K@Z @ 0x18000FEA0 (--0CApplication@@IEAA@K@Z.c)
 *     ?Initialize@CApplication@@IEAAJPEBG_K@Z @ 0x18001021C (-Initialize@CApplication@@IEAAJPEBG_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CApplication::CreateInstance(
        const unsigned __int16 *a1,
        unsigned __int64 a2,
        unsigned int a3,
        struct CApplication **a4)
{
  HANDLE ProcessHeap; // rax
  CApplication *v9; // rax
  volatile signed __int32 *v10; // rbx
  int v11; // edi

  ProcessHeap = GetProcessHeap();
  v9 = (CApplication *)HeapAlloc(ProcessHeap, 0, 0x2A0uLL);
  if ( v9 )
    v10 = (volatile signed __int32 *)CApplication::CApplication(v9, a3);
  else
    v10 = 0LL;
  if ( !v10 )
  {
    v11 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xAu, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v11);
    }
    AudPolicyLogError("CApplication::CreateInstance", 209, v11);
    return (unsigned int)v11;
  }
  v11 = CApplication::Initialize((PVOID)v10, a1, a2);
  if ( v11 >= 0 )
  {
    *a4 = (struct CApplication *)v10;
    v10 = 0LL;
  }
  if ( v10 && _InterlockedExchangeAdd(v10 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 16LL))(v10);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v10 + 8LL))(v10, 1LL);
  }
  if ( v11 < 0 )
    goto LABEL_12;
  return (unsigned int)v11;
}
