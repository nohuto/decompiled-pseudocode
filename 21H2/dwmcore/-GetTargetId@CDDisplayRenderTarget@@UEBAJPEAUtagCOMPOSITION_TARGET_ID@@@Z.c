/*
 * XREFs of ?GetTargetId@CDDisplayRenderTarget@@UEBAJPEAUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801A09E0
 * Callers:
 *     ?GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_STATS@@@Z @ 0x1801C874C (-GetStats@CDDisplayRenderTarget@@UEAA_NPEAUtagCOMPOSITION_TARGET_ID@@PEAUtagCOMPOSITION_TARGET_S.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDDisplayRenderTarget::GetTargetId(CDDisplayRenderTarget *this, struct tagCOMPOSITION_TARGET_ID *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this + 4);
  if ( !v2 )
    return 2291662854LL;
  *(_QWORD *)a2 = *(_QWORD *)(v2 + 324);
  *((_QWORD *)a2 + 1) = *((_QWORD *)this + 2283);
  *((_DWORD *)a2 + 4) = *(_DWORD *)(*((_QWORD *)this + 4) + 264LL);
  *((_DWORD *)a2 + 5) = *(_DWORD *)(*((_QWORD *)this + 4) + 268LL);
  *((_DWORD *)a2 + 6) = *((_DWORD *)this + 4572);
  return 0LL;
}
