/*
 * XREFs of sub_18000F160 @ 0x18000F160
 * Callers:
 *     CreateDwmSceneRenderer @ 0x18000F450 (CreateDwmSceneRenderer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18000F160(__int64 *a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *a1;
  if ( v4 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return sub_18000F0C0(a1, a2);
}
