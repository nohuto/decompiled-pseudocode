/*
 * XREFs of ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x18009AA68
 * Callers:
 *     ?OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ @ 0x180094F40 (-OnGlobalTimeUpdated@CTopLevelWindow@@UEAAJXZ.c)
 * Callees:
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x18004472C (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800560C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWindowIconic::OnGlobalTimeUpdated(CWindowIconic *this)
{
  __int64 v2; // r9
  unsigned int v3; // eax

  v2 = *((_QWORD *)this + 8);
  v3 = *((_DWORD *)this + 14) - 1;
  if ( v3 >= (int)*(double *)(v2 + 48) )
    v3 = (int)*(double *)(v2 + 48);
  if ( *(_QWORD *)(*((_QWORD *)this + 4) + 8LL * v3) != *(_QWORD *)(*((_QWORD *)this + 12) + 280LL) )
  {
    CWindowIconic::LoadCentralImage(this);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 64LL))(*((_QWORD *)this + 13));
    v2 = *((_QWORD *)this + 8);
  }
  if ( *(_BYTE *)(v2 + 72) )
  {
    *(_WORD *)(v2 + 72) = 256;
    *(_QWORD *)(v2 + 24) = 0x3FE147AE147AE148LL;
    *(_QWORD *)(v2 + 48) = *(_QWORD *)(v2 + 32);
    CDesktopManager::s_fTimelineDirty = 1;
  }
  return 0LL;
}
