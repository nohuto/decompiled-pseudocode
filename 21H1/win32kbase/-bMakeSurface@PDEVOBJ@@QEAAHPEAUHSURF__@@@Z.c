/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00448E0
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00B1794 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C01485D0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C0044AA8 (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00804F0 (HmgIncrementShareReferenceCount.c)
 *     HmgShareLockEx @ 0x1C0080DE0 (HmgShareLockEx.c)
 *     HmgShareLockCheck @ 0x1C0081AB0 (HmgShareLockCheck.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0082370 (HmgDecrementShareReferenceCountEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  HSURF v4; // rax
  __int64 (__fastcall *v6)(_QWORD); // rax
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // ebp
  int v13; // eax

  v2 = *(_QWORD *)this;
  v3 = 0;
  v4 = a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2552LL) )
    return 1LL;
  if ( a2
    || (v6 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2712)) != 0LL && (v4 = (HSURF)v6(*(_QWORD *)(v2 + 1800))) != 0LL )
  {
    LOBYTE(a2) = 5;
    v7 = HmgShareLockCheck(v4, a2);
    v8 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v7 + 112) |= 0x80000000;
      HmgIncrementShareReferenceCount(v7);
      *(_QWORD *)(*(_QWORD *)this + 2552LL) = v8;
      if ( !*(_DWORD *)(v8 + 96) )
        *(_DWORD *)(v8 + 96) = *(_DWORD *)(*(_QWORD *)this + 2108LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2552LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1808LL);
      v10 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1824LL) & 0x8000000) != 0 )
      {
        *(_DWORD *)(v8 + 112) |= 0x80000u;
        v10 = *(_QWORD *)this;
      }
      LOBYTE(v9) = 8;
      HmgShareLockEx(**(_QWORD **)(v10 + 1808), v9);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
      {
        v13 = qword_1C02575F0 ? qword_1C02575F0() : -1073741637;
        if ( v13 >= 0 && qword_1C02575F8 )
          qword_1C02575F8(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      if ( qword_1C0257278 )
        v11 = qword_1C0257278(v2);
      else
        v11 = 0;
      if ( qword_1C0257288 )
        qword_1C0257288(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1776LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1776LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2552LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2552LL) != 0LL),
          4LL);
      v3 = v11;
      HmgDecrementShareReferenceCountEx(v8, 0LL);
    }
  }
  return v3;
}
