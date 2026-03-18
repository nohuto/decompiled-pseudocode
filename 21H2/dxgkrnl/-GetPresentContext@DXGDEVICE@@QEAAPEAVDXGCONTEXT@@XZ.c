/*
 * XREFs of ?GetPresentContext@DXGDEVICE@@QEAAPEAVDXGCONTEXT@@XZ @ 0x1C02E5798
 * Callers:
 *     ?CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z @ 0x1C02EDA94 (-CheckPrimaryContentWorker@VIDPNSOURCEINFO@@AEAAJPEAVDXGALLOCATION@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

struct DXGCONTEXT *__fastcall DXGDEVICE::GetPresentContext(DXGDEVICE *this)
{
  struct DXGCONTEXT *v2; // rbx
  struct DXGCONTEXT *result; // rax

  if ( !*((_BYTE *)this + 72) && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17)) )
  {
    WdLogSingleEntry1(1LL, 5755LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"IsDeviceLockExclusiveOwner()", 5755LL, 0LL, 0LL, 0LL, 0LL);
  }
  v2 = (DXGDEVICE *)((char *)this + 464);
  for ( result = *(struct DXGCONTEXT **)v2; result != v2 && result; result = *(struct DXGCONTEXT **)result )
  {
    if ( *((_BYTE *)result + 442) )
      return result;
  }
  return 0LL;
}
