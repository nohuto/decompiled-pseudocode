/*
 * XREFs of ?CreateGlobal@DXGGLOBAL@@SAJXZ @ 0x1C020F2D0
 * Callers:
 *     DriverEntry @ 0x1C03C7238 (DriverEntry.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??0DXGGLOBAL@@AEAA@XZ @ 0x1C020F33C (--0DXGGLOBAL@@AEAA@XZ.c)
 *     ?Initialize@DXGGLOBAL@@QEAAJXZ @ 0x1C0210BEC (-Initialize@DXGGLOBAL@@QEAAJXZ.c)
 *     ?DestroyGlobal@DXGGLOBAL@@SAXXZ @ 0x1C0309A24 (-DestroyGlobal@DXGGLOBAL@@SAXXZ.c)
 */

__int64 __fastcall DXGGLOBAL::CreateGlobal(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *v4; // rax
  DXGGLOBAL *v5; // rax
  __int64 result; // rax
  unsigned int v7; // ebx

  if ( DXGGLOBAL::m_pGlobal )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = -1073741823LL;
    return 3221225473LL;
  }
  v4 = (DXGGLOBAL *)operator new[](0x4A8E0uLL, 0x4B677844u, 64LL, a4);
  if ( !v4 )
  {
    DXGGLOBAL::m_pGlobal = 0LL;
    goto LABEL_9;
  }
  v5 = DXGGLOBAL::DXGGLOBAL(v4);
  DXGGLOBAL::m_pGlobal = v5;
  if ( !v5 )
  {
LABEL_9:
    v7 = -1073741801;
    WdLogSingleEntry1(6LL, -1073741801LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGGLOBAL returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return v7;
  }
  result = DXGGLOBAL::Initialize(v5);
  v7 = result;
  if ( (int)result < 0 )
  {
    DXGGLOBAL::DestroyGlobal();
    return v7;
  }
  return result;
}
