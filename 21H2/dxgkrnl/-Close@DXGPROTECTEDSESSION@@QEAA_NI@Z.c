/*
 * XREFs of ?Close@DXGPROTECTEDSESSION@@QEAA_NI@Z @ 0x1C03395AC
 * Callers:
 *     ?DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z @ 0x1C0339ABC (-DestroyProtectedSession@DXGPROTECTEDSESSION@@SAJPEAV1@I@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000ED3C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

bool __fastcall DXGPROTECTEDSESSION::Close(DXGPROTECTEDSESSION *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  DXGPROCESS *Current; // rax

  v4 = a2;
  if ( (_DWORD)a2 )
  {
    Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
    DXGPROCESS::FreeHandleSafe(Current, v4);
  }
  if ( !*((_DWORD *)this + 20) )
  {
    WdLogSingleEntry1(1LL, 1153LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"0 != m_cReference", 1153LL, 0LL, 0LL, 0LL, 0LL);
  }
  return _InterlockedAdd((volatile signed __int32 *)this + 20, 0xFFFFFFFF) == 0;
}
