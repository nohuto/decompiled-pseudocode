/*
 * XREFs of ?GetAdapterLuid@CD2DResource@@UEBA?AU_LUID@@XZ @ 0x1800CAAE0
 * Callers:
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@A@EBA?AU_LUID@@XZ @ 0x1801081F0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@A@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BA@EBA?AU_LUID@@XZ @ 0x180109310 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@7EBA?AU_LUID@@XZ @ 0x180109410 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@7EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@KI@EBA?AU_LUID@@XZ @ 0x1801096F0 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@KI@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@NA@EBA?AU_LUID@@XZ @ 0x180109970 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@NA@EBA-AU_LUID@@XZ.c)
 *     ?GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BAA@EBA?AU_LUID@@XZ @ 0x18010CB90 (-GetAdapterLuid@CD2DResource@@$4PPPPPPPM@BAA@EBA-AU_LUID@@XZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

struct _LUID __fastcall CD2DResource::GetAdapterLuid(CD2DResource *this, _QWORD *a2)
{
  char *v3; // rcx
  __int64 v4; // rcx
  struct _LUID result; // rax

  v3 = (char *)this + *(int *)(*((_QWORD *)this - 11) + 8LL) - 88;
  v4 = *(_QWORD *)((*(__int64 (__fastcall **)(char *))(*(_QWORD *)v3 + 8LL))(v3) + 896);
  result = (struct _LUID)a2;
  *a2 = v4;
  return result;
}
