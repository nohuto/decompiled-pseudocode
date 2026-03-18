/*
 * XREFs of ?ActivateStoringInvalidModesForTestPurposes@ADAPTER_DISPLAY@@QEAAJH@Z @ 0x1C02BEFB0
 * Callers:
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::ActivateStoringInvalidModesForTestPurposes(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // r9
  void **v5; // rcx
  int v6; // edx
  const wchar_t *v7; // r9
  unsigned int v8; // ebx
  unsigned __int64 v9; // rax
  __int64 v10; // rax
  __int64 i; // rbx
  _BYTE v13[24]; // [rsp+50h] [rbp-18h] BYREF

  v3 = (__int64)this;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v13, (ADAPTER_DISPLAY *)((char *)this + 296), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v13);
  v5 = *(void ***)(v3 + 344);
  if ( a2 )
  {
    if ( v5 )
    {
      v3 = 8606LL;
      WdLogSingleEntry1(2LL, 8606LL);
      v6 = 0x40000;
      v7 = L"Invalid modes already activated.";
      v8 = -1073740008;
LABEL_8:
      DxgkLogInternalTriageEvent(0LL, v6, -1, (__int64)v7, v3, 0LL, 0LL, 0LL, 0LL);
      goto LABEL_16;
    }
    v9 = 24LL * *(unsigned int *)(v3 + 96);
    if ( !is_mul_ok(*(unsigned int *)(v3 + 96), 0x18uLL) )
      v9 = -1LL;
    v10 = operator new[](v9, 0x4B677844u, 256LL, v4);
    *(_QWORD *)(v3 + 344) = v10;
    if ( !v10 )
    {
      WdLogSingleEntry1(6LL, v3);
      v6 = 262145;
      v7 = L"Adapter 0x%I64x: Out of memory allocating m_pCachedInvalidDisplayModeList";
      v8 = -1073741801;
      goto LABEL_8;
    }
  }
  else if ( v5 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v3 + 96); i = (unsigned int)(i + 1) )
    {
      v5 = *(void ***)(v3 + 344);
      if ( v5[3 * i + 1] )
      {
        operator delete[](v5[3 * i + 1]);
        *(_QWORD *)(*(_QWORD *)(v3 + 344) + 24 * i + 8) = 0LL;
        v5 = *(void ***)(v3 + 344);
      }
    }
    operator delete[](v5);
    *(_QWORD *)(v3 + 344) = 0LL;
  }
  v8 = 0;
LABEL_16:
  if ( v13[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v13);
  return v8;
}
