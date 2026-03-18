/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x1801156B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

bool __fastcall CGlobalCompositionSurfaceInfo::IsAdvancedDirectFlipCompatible(CGlobalCompositionSurfaceInfo *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  bool v3; // bl
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 25);
  if ( !v1 )
    return 0;
  v2 = *(int *)(*(_QWORD *)(v1 + 8) + 4LL);
  v6 = 0LL;
  v3 = (**(int (__fastcall ***)(__int64, GUID *, __int64 *))(v1 + 8 + v2))(
         v1 + 8 + v2,
         &GUID_302508ed_c63d_40f8_af07_af5881d2df95,
         &v6) >= 0;
  if ( v6 )
  {
    v4 = *(int *)(*(_QWORD *)(v6 + 8) + 4LL) + v6 + 8;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return v3;
}
