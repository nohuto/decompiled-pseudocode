/*
 * XREFs of ?Initialize@DXGBLACKBOX@@QEAAJXZ @ 0x1C018E8AC
 * Callers:
 *     ?Initialize@DisplayDiagnostics@@QEAAXXZ @ 0x1C0022938 (-Initialize@DisplayDiagnostics@@QEAAXXZ.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0002CEC (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGBLACKBOX::Initialize(DXGBLACKBOX *this)
{
  _DWORD *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // rax

  v2 = operator new[](0x1000uLL, 0x4B677844u, (POOL_TYPE)512);
  *((_QWORD *)this + 6) = v2;
  if ( v2 )
  {
    *v2 = 2;
    *(_DWORD *)(*((_QWORD *)this + 6) + 4LL) = 8;
    return 0LL;
  }
  else
  {
    v6 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v6 + 24) = 42LL;
    WdLogEvent5_WdError(v6);
    return 3221225495LL;
  }
}
