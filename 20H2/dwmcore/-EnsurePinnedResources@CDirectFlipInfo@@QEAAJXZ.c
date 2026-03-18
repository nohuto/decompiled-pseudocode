/*
 * XREFs of ?EnsurePinnedResources@CDirectFlipInfo@@QEAAJXZ @ 0x180183898
 * Callers:
 *     ?ApplyConfiguration@COverlayContext@@QEAAJPEAV?$vector@PEBVCVisual@@V?$allocator@PEBVCVisual@@@std@@@std@@PEA_N1@Z @ 0x18009CE4C (-ApplyConfiguration@COverlayContext@@QEAAJPEAV-$vector@PEBVCVisual@@V-$allocator@PEBVCVisual@@@s.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDirectFlipInfo::EnsurePinnedResources(CDirectFlipInfo *this)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, _QWORD); // rbx
  _QWORD *v5; // rax
  int v6; // eax
  __int64 v7; // rcx
  _BYTE v9[40]; // [rsp+30h] [rbp-28h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 12) == 2 )
  {
    v3 = *((_QWORD *)this + 2);
    v4 = *(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 160LL);
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 80LL))(*(_QWORD *)this, v9);
    v6 = v4(v3, *v5);
    v1 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v7, 0LL, 0, v6, 0xCBu, 0LL);
    else
      *((_DWORD *)this + 12) = 3;
  }
  return v1;
}
