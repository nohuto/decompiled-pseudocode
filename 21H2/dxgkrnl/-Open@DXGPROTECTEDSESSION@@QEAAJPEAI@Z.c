/*
 * XREFs of ?Open@DXGPROTECTEDSESSION@@QEAAJPEAI@Z @ 0x1C0339DD8
 * Callers:
 *     DxgkCreateProtectedSession @ 0x1C033A220 (DxgkCreateProtectedSession.c)
 *     DxgkOpenProtectedSessionFromNtHandle @ 0x1C033B2D0 (DxgkOpenProtectedSessionFromNtHandle.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z @ 0x1C0009AD4 (-AllocHandleSafe@DXGPROCESS@@QEAAIPEAXW4_HMGRENTRY_TYPE@@@Z.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C00558CC (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::Open(DXGPROTECTEDSESSION *this, unsigned int *a2, __int64 a3, __int64 a4)
{
  struct DXGPROCESS *Current; // rax

  if ( !a2 )
  {
    WdLogSingleEntry1(1LL, 1110LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"phHandle", 1110LL, 0LL, 0LL, 0LL, 0LL);
  }
  Current = DXGPROCESS::GetCurrent((__int64)this, (__int64)a2, a3, a4);
  *a2 = DXGPROCESS::AllocHandleSafe((__int64)Current, (__int64)this, 0xEu);
  DXGPROTECTEDSESSION::AddReference(this, 0);
  return 0LL;
}
