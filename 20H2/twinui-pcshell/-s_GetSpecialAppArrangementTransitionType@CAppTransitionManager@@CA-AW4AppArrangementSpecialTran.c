/*
 * XREFs of ?s_GetSpecialAppArrangementTransitionType@CAppTransitionManager@@CA?AW4AppArrangementSpecialTransitionType@@PEAUIAppLayoutOperation@@@Z @ 0x1803C7034
 * Callers:
 *     ?_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveApplicationManagerSafeForSyncCallouts@@@Z @ 0x1803C5CD4 (-_InitAnimationPassState@CAppTransitionManager@@AEAAXPEAUIAppLayoutOperation@@PEAUIImmersiveAppl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAppTransitionManager::s_GetSpecialAppArrangementTransitionType(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ecx
  unsigned int v4; // ebx
  unsigned int i; // edi
  unsigned int v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 80LL))(a1);
  v3 = (v2 >> 17) & 2 | 4;
  if ( (v2 & 0x800000) == 0 )
    v3 = (v2 >> 17) & 2;
  v4 = v3 | 0x20;
  if ( (v2 & 0x80000) == 0 )
    v4 = v3;
  if ( !v4 && (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a1 + 24LL))(a1, &v7) >= 0 )
  {
    for ( i = 0; i < v7; ++i )
    {
      if ( v4 )
        break;
      v8 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
      if ( (*(int (__fastcall **)(__int64, _QWORD, GUID *, __int64 *))(*(_QWORD *)a1 + 32LL))(
             a1,
             i,
             &GUID_f1e97d9c_cb12_4e92_88d4_cfbda2f4f34e,
             &v8) >= 0 )
        v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 96LL))(v8) == 6;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v8);
    }
  }
  return v4;
}
