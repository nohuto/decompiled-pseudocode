/*
 * XREFs of ?CheckPresentDurationSupport@CLegacySwapChain@@UEBAII_NI@Z @ 0x18028ADE4
 * Callers:
 *     ?CheckPresentDurationSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBAII_NI@Z @ 0x180108D50 (-CheckPresentDurationSupport@CLegacySwapChain@@$4PPPPPPPM@A@EBAII_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0qqqq_EventWriteTransfer @ 0x1801121E8 (McTemplateU0qqqq_EventWriteTransfer.c)
 *     ?IsValidVariableRefreshDuration@CLegacySwapChain@@IEBA_N_K@Z @ 0x18028B678 (-IsValidVariableRefreshDuration@CLegacySwapChain@@IEBA_N_K@Z.c)
 *     ?IsVariableRefreshRate@CLegacySwapChain@@QEBA_NXZ @ 0x18028B6A0 (-IsVariableRefreshRate@CLegacySwapChain@@QEBA_NXZ.c)
 */

__int64 __fastcall CLegacySwapChain::CheckPresentDurationSupport(
        CLegacySwapChain *this,
        unsigned int a2,
        char a3,
        unsigned int a4)
{
  __int64 v4; // rax
  CLegacySwapChain *v5; // r12
  unsigned __int64 v6; // r10
  unsigned __int64 v9; // rbx
  CLegacySwapChain *v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // r15d
  unsigned int v15; // esi
  __int64 v16; // r8
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // r9
  int v19; // r10d
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // eax
  __int64 v25; // rcx
  unsigned int v26; // edx
  unsigned int v27; // r9d
  unsigned int v29; // [rsp+30h] [rbp-10h]
  unsigned int v30; // [rsp+80h] [rbp+40h] BYREF
  unsigned int v31; // [rsp+90h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+98h] [rbp+58h]

  v32 = a4;
  v4 = *((unsigned int *)this - 55);
  v5 = (CLegacySwapChain *)((char *)this - 400);
  v6 = *((unsigned int *)this - 56);
  v31 = 0;
  v30 = 0;
  v9 = 10000000 * v4 / v6;
  if ( a3 )
  {
    v14 = 1;
    while ( 1 )
    {
      v15 = a2 / v14;
      v29 = a4 / v14;
      if ( CLegacySwapChain::IsVariableRefreshRate(v5) )
      {
        if ( CLegacySwapChain::IsValidVariableRefreshDuration(v5, v16 * (unsigned __int64)v15 / 0x989680) )
        {
          LODWORD(v9) = a2 / v14;
          return (unsigned int)v9;
        }
        v20 = *((_QWORD *)this - 27);
        if ( v20 <= v18 )
          v21 = 0LL;
        else
          v21 = 10000000 * v20 / v17;
        v22 = *((_QWORD *)this - 26);
        v30 = v21;
        if ( v22 && v22 < v18 )
          v23 = 10000000 * v22 / v17;
        else
          LODWORD(v23) = 0;
        v31 = v23;
      }
      else
      {
        v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this - 41)
                                                                                        + 192LL))(
                *((_QWORD *)this - 41),
                v15,
                &v31,
                &v30);
        if ( v24 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0LL, v24, 0x27Au);
          return (unsigned int)v9;
        }
        LODWORD(v23) = v31;
        v21 = v30;
        v19 = v29;
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000000) != 0 )
      {
        McTemplateU0qqqq_EventWriteTransfer(v21, &CustomDurationIterationResult, v15, v19, v23, v21);
        LODWORD(v23) = v31;
        LODWORD(v21) = v30;
      }
      v26 = -1;
      if ( (_DWORD)v23 )
        v26 = v15 - v23;
      v27 = -1;
      if ( (_DWORD)v21 )
        v27 = v21 - v15;
      if ( v26 < v27 )
        LODWORD(v21) = v23;
      else
        v26 = v27;
      if ( v26 <= v29 )
      {
        LODWORD(v9) = v21;
        return (unsigned int)v9;
      }
      ++v14;
      if ( !(_DWORD)v23 || v14 > 5 )
        return (unsigned int)v9;
      a4 = v32;
    }
  }
  if ( CLegacySwapChain::IsVariableRefreshRate((CLegacySwapChain *)((char *)this - 400)) )
  {
    if ( CLegacySwapChain::IsValidVariableRefreshDuration(
           v10,
           g_qpcFrequency.QuadPart * (unsigned __int64)a2 / 0x989680) )
    {
      LODWORD(v9) = a2;
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *, unsigned int *))(**((_QWORD **)this - 41) + 192LL))(
            *((_QWORD *)this - 41),
            a2,
            &v31,
            &v30);
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0LL, v11, 0x241u);
    }
    else
    {
      v13 = v30;
      if ( (int)abs32(a2 - v31) < (int)abs32(a2 - v30) )
        v13 = v31;
      LODWORD(v9) = v13;
    }
  }
  return (unsigned int)v9;
}
