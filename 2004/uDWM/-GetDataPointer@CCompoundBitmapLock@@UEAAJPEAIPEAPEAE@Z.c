/*
 * XREFs of ?GetDataPointer@CCompoundBitmapLock@@UEAAJPEAIPEAPEAE@Z @ 0x1800532D0
 * Callers:
 *     ?GetDataPointer@CCompoundBitmapLock@@W7EAAJPEAIPEAPEAE@Z @ 0x180056350 (-GetDataPointer@CCompoundBitmapLock@@W7EAAJPEAIPEAPEAE@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompoundBitmapLock::GetDataPointer(
        CCompoundBitmapLock *this,
        unsigned int *a2,
        unsigned __int8 **a3)
{
  return (*(__int64 (__fastcall **)(__int64, unsigned int *, unsigned __int8 **))(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                            + 72LL)
                                                                                + 48LL))(
           *((_QWORD *)this + 2) + 72LL,
           a2,
           a3);
}
