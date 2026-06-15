/*
 * XREFs of ?CreateInstance@CProcess@@SAJPEAXKKPEBG1_K1H1HHHHHHHH_NHHPEAPEAV1@@Z @ 0x18001927C
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     WPP_SF_d @ 0x180005620 (WPP_SF_d.c)
 *     ?AudPolicyLogError@@YAXPEBDHJ@Z @ 0x18000A2B4 (-AudPolicyLogError@@YAXPEBDHJ@Z.c)
 *     ??0CProcess@@IEAA@XZ @ 0x180019494 (--0CProcess@@IEAA@XZ.c)
 *     ?Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z @ 0x1800197A4 (-Initialize@CProcess@@IEAAJPEAXKKPEBG1_K1H1HHHHHHHH_NHH@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CreateInstance(
        void *a1,
        unsigned int a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        const unsigned __int16 *a5,
        unsigned __int64 a6,
        const unsigned __int16 *a7,
        int a8,
        const unsigned __int16 *a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        bool a18,
        int a19,
        int a20,
        struct CProcess **a21)
{
  HANDLE ProcessHeap; // rax
  CProcess *v26; // rax
  volatile signed __int32 *v27; // rbx
  int v28; // edi

  ProcessHeap = GetProcessHeap();
  v26 = (CProcess *)HeapAlloc(ProcessHeap, 0, 0x338uLL);
  if ( v26 )
    v27 = (volatile signed __int32 *)CProcess::CProcess(v26);
  else
    v27 = 0LL;
  if ( !v27 )
  {
    v28 = -2147024882;
LABEL_12:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x28u, &WPP_8ab93343ef2e3d885d031f030701e2ed_Traceguids, v28);
    }
    AudPolicyLogError("CProcess::CreateInstance", 2722, v28);
    return (unsigned int)v28;
  }
  v28 = CProcess::Initialize(
          (PVOID)v27,
          a1,
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11,
          a12,
          a13,
          a14,
          a15,
          a16,
          a17,
          a18,
          a19,
          a20);
  if ( v28 >= 0 )
  {
    *a21 = (struct CProcess *)v27;
    v27 = 0LL;
  }
  if ( v27 && _InterlockedExchangeAdd(v27 + 2, 0xFFFFFFFF) == 1 )
  {
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 32LL))(v27);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v27 + 24LL))(v27, 1LL);
  }
  if ( v28 < 0 )
    goto LABEL_12;
  return (unsigned int)v28;
}
