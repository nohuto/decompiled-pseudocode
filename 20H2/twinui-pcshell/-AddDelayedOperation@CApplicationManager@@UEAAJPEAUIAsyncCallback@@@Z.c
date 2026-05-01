/*
 * XREFs of ?AddDelayedOperation@CApplicationManager@@UEAAJPEAUIAsyncCallback@@@Z @ 0x18006D8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYPE@@@Z @ 0x18006D900 (-AddDelayedOperationInternal@CApplicationManager@@UEAAJPEAUIAsyncCallback@@W4DELAY_OPERATION_TYP.c)
 */

__int64 __fastcall CApplicationManager::AddDelayedOperation(CApplicationManager *this, struct IAsyncCallback *a2)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  LODWORD(this) = CApplicationManager::AddDelayedOperationInternal((char *)this + 88, a2, 3LL);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return (unsigned int)this;
}
