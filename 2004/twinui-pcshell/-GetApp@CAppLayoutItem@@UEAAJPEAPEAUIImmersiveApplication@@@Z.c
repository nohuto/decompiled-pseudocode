/*
 * XREFs of ?GetApp@CAppLayoutItem@@UEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x180484A10
 * Callers:
 *     <none>
 * Callees:
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplication@@@Z @ 0x180043D30 (-GetApplicationFromView@ApplicationViewHelpers@@YAJPEAUIApplicationView@@PEAPEAUIImmersiveApplic.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAppLayoutItem::GetApp(RTL_SRWLOCK *this, struct IImmersiveApplication **a2)
{
  RTL_SRWLOCK *v4; // rdi
  struct IImmersiveApplication **v5; // r8
  unsigned int ApplicationFromView; // esi
  __int64 (__fastcall ***Ptr)(ApplicationViewHelpers *, GUID *, __int64 *); // rcx

  *a2 = 0LL;
  v4 = this + 3;
  AcquireSRWLockShared(this + 3);
  ApplicationFromView = -2147023728;
  Ptr = (__int64 (__fastcall ***)(ApplicationViewHelpers *, GUID *, __int64 *))this[5].Ptr;
  if ( Ptr )
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(Ptr, (struct IApplicationView *)a2, v5);
  if ( v4 )
    ReleaseSRWLockShared(v4);
  return ApplicationFromView;
}
