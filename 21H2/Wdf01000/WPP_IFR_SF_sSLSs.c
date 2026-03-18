/*
 * XREFs of WPP_IFR_SF_sSLSs @ 0x1C0066220
 * Callers:
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C0066540 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     FxIFR @ 0x1C000B6B0 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005B6FC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sSLSs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *_a5,
        const wchar_t *globals_0,
        unsigned int level,
        const wchar_t *flags,
        const char *id)
{
  const char *v10; // rbp
  const wchar_t *v11; // r13
  const wchar_t *v12; // rdi
  __int64 v13; // rbx
  const char *v14; // r15
  _FX_DRIVER_GLOBALS *v15; // r10
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r14
  __int64 v20; // r8
  __int64 v21; // rax
  const wchar_t *v22; // r11
  __int64 v23; // r10
  __int64 v24; // rax
  const wchar_t *v25; // r9
  __int64 v26; // rcx
  __int64 v27; // rcx
  const char *v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  const wchar_t *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbx

  v10 = id;
  v11 = L"<NULL>";
  v12 = flags;
  v13 = -1LL;
  v14 = _a5;
  v15 = globals;
  v16 = 14LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( id[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = id;
    if ( !id )
      v19 = "NULL";
    if ( flags )
    {
      if ( *flags )
      {
        v21 = -1LL;
        do
          ++v21;
        while ( flags[v21] );
        v20 = 2 * v21 + 2;
      }
      else
      {
        v20 = 14LL;
      }
      v22 = L"<NULL>";
      if ( *flags )
        v22 = flags;
    }
    else
    {
      v20 = 10LL;
      v22 = L"NULL";
    }
    if ( globals_0 )
    {
      if ( *globals_0 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( globals_0[v24] );
        v23 = 2 * v24 + 2;
      }
      else
      {
        v23 = 14LL;
      }
      v25 = L"<NULL>";
      if ( *globals_0 )
        v25 = globals_0;
    }
    else
    {
      v23 = 10LL;
      v25 = L"NULL";
    }
    if ( _a5 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( _a5[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = _a5;
    if ( !_a5 )
      v28 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDriverApi_cpp_Traceguids,
      0x11u,
      v28,
      v27,
      v25,
      v23,
      &level,
      4LL,
      v22,
      v20,
      v19,
      v18,
      0LL);
    v15 = globals;
  }
  if ( v10 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v10[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  if ( !v10 )
    v10 = "NULL";
  if ( v12 )
  {
    if ( *v12 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( v12[v32] );
      v31 = 2 * v32 + 2;
    }
    else
    {
      v31 = 14LL;
    }
    v33 = L"<NULL>";
    if ( *v12 )
      v33 = v12;
  }
  else
  {
    v31 = 10LL;
    v33 = L"NULL";
  }
  if ( globals_0 )
  {
    if ( *globals_0 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( globals_0[v34] );
      v16 = 2 * v34 + 2;
    }
    if ( *globals_0 )
      v11 = globals_0;
  }
  else
  {
    v16 = 10LL;
    v11 = L"NULL";
  }
  if ( _a5 )
  {
    do
      ++v13;
    while ( _a5[v13] );
    v35 = v13 + 1;
  }
  else
  {
    v35 = 5LL;
  }
  if ( !_a5 )
    v14 = "NULL";
  FxIFR(v15, 2u, 6u, WPP_FxDriverApi_cpp_Traceguids, 0x11u, v14, v35, v11, v16, &level, 4LL, v33, v31, v10, v30, 0LL);
}
