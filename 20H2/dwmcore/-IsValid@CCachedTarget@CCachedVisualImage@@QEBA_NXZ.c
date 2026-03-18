/*
 * XREFs of ?IsValid@CCachedTarget@CCachedVisualImage@@QEBA_NXZ @ 0x18006B4EC
 * Callers:
 *     ?RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z @ 0x18006B440 (-RemoveInvalidTargets@CCachedVisualImage@@IEAA_NUD2D_SIZE_U@@@Z.c)
 *     ?MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ @ 0x1800CF508 (-MarkAllTargetsDirty@CCachedVisualImage@@IEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CCachedVisualImage::CCachedTarget::IsValid(CCachedVisualImage::CCachedTarget *this)
{
  __int64 v1; // rdx
  char v2; // bl
  int (__fastcall ***v3)(_QWORD); // rcx

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  if ( v1 )
  {
    v3 = (int (__fastcall ***)(_QWORD))(v1 + 8 + *(int *)(*(_QWORD *)(v1 + 8) + 8LL));
    return (**v3)(v3) >= 0;
  }
  return v2;
}
