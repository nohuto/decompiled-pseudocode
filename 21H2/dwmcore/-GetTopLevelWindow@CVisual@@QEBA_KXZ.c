/*
 * XREFs of ?GetTopLevelWindow@CVisual@@QEBA_KXZ @ 0x1800F4254
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090300 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ @ 0x1800EA6A0 (-GetHwnd@CVisual@@MEBAPEAUHWND__@@XZ.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CVisual::GetTopLevelWindow(CVisual *this)
{
  __int64 v1; // rcx
  __int64 i; // rcx

  v1 = *((_QWORD *)this + 28);
  if ( *(int *)(v1 + 4) >= 0 )
    return 0LL;
  for ( i = v1 + 12; (*(_DWORD *)i & 0x7F000000) != 0x1000000; i += (*(_DWORD *)i & 0xFFFFFF) + 4LL )
    ;
  return *(_QWORD *)(i + 4);
}
