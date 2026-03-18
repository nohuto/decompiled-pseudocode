/*
 * XREFs of ?GetOutstandingFrameCount@CLegacyRenderTarget@@UEBAIPEAI@Z @ 0x1801889D0
 * Callers:
 *     ?SyncLockForParallelMode@CLegacyRenderTarget@@UEAAXI@Z @ 0x180189280 (-SyncLockForParallelMode@CLegacyRenderTarget@@UEAAXI@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E1200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLegacyRenderTarget::GetOutstandingFrameCount(CLegacyRenderTarget *this, unsigned int *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rcx
  int v6; // eax
  _OWORD v8[2]; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0;
  *a2 = 0;
  v5 = *((_QWORD *)this + 3);
  if ( v5 )
  {
    memset(v8, 0, sizeof(v8));
    if ( (*(int (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v5 + 32LL))(v5, v8) >= 0 )
    {
      if ( LODWORD(v8[0]) )
      {
        v6 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 3) + 8LL))(*((_QWORD *)this + 3));
        v2 = v6 - LODWORD(v8[0]);
      }
      *a2 = v2 + DWORD2(v8[0]) + 1;
    }
  }
  return v2;
}
