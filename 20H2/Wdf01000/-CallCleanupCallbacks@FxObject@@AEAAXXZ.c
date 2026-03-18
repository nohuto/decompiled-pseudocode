/*
 * XREFs of ?CallCleanupCallbacks@FxObject@@AEAAXXZ @ 0x1C0059534
 * Callers:
 *     ?Dispose@FxRequestBase@@MEAAEXZ @ 0x1C0004320 (-Dispose@FxRequestBase@@MEAAEXZ.c)
 *     ?DeleteObject@FxObject@@UEAAXXZ @ 0x1C0005D70 (-DeleteObject@FxObject@@UEAAXXZ.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C0042CF0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 *     ?Dispose@FxMpDevice@@UEAAEXZ @ 0x1C004C490 (-Dispose@FxMpDevice@@UEAAEXZ.c)
 *     ?Dispose@FxDevice@@UEAAEXZ @ 0x1C00514D0 (-Dispose@FxDevice@@UEAAEXZ.c)
 *     ?Dispose@FxIoTarget@@MEAAEXZ @ 0x1C0064110 (-Dispose@FxIoTarget@@MEAAEXZ.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C001CA60 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxObject::CallCleanupCallbacks(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // dx
  unsigned __int64 ObjectHandleUnchecked; // rsi
  char *v4; // rbx
  void (__fastcall *v5)(unsigned __int64); // rax

  if ( (this->m_ObjectFlags & 8) != 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    if ( this->m_ObjectSize )
    {
      v4 = (char *)this + this->m_ObjectSize;
      if ( v4 )
      {
        do
        {
          v5 = (void (__fastcall *)(unsigned __int64))*((_QWORD *)v4 + 2);
          if ( v5 )
          {
            v5(ObjectHandleUnchecked);
            *((_QWORD *)v4 + 2) = 0LL;
          }
          v4 = (char *)*((_QWORD *)v4 + 1);
        }
        while ( v4 );
        m_ObjectFlags = this->m_ObjectFlags;
      }
    }
    this->m_ObjectFlags = m_ObjectFlags & 0xFBFF;
  }
}
