/*
 * XREFs of ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x1800B98E0
 * Callers:
 *     ?GetRenderTargetInfo@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA?AVRenderTargetInfo@@XZ @ 0x1800F2440 (-GetRenderTargetInfo@CDeviceTextureTarget@@$4PPPPPPPM@A@EBA-AVRenderTargetInfo@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceTextureTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx

  v4 = *(int *)(*(_QWORD *)(a1 - 392) + 8LL) + a1 - 392;
  *(_QWORD *)a2 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4) + 936);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 172);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 - 136);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 - 132);
  if ( *(_BYTE *)(a1 - 128) )
    *(_BYTE *)(a2 + 20) = 1;
  else
    *(_BYTE *)(a2 + 20) = (*(_DWORD *)(a1 - 216) & 0x80000) != 0;
  return a2;
}
