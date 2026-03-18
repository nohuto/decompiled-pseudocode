/*
 * XREFs of ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00C1F50
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0014BA8 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0 (-UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z.c)
 * Callees:
 *     HmgShareLockCheck @ 0x1C00438E0 (HmgShareLockCheck.c)
 *     HmgShareLock @ 0x1C0044DC0 (HmgShareLock.c)
 *     INC_SHARE_REF_CNT @ 0x1C00460C0 (INC_SHARE_REF_CNT.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1C004AA4C (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vFilterDriverHooks@PDEVOBJ@@QEAAXXZ @ 0x1C00B70DC (-vFilterDriverHooks@PDEVOBJ@@QEAAXXZ.c)
 *     vEnableSynchronize @ 0x1C00BD194 (vEnableSynchronize.c)
 *     bSpEnableSprites @ 0x1C00BD1B8 (bSpEnableSprites.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PDEVOBJ::bMakeSurface(PDEVOBJ *this, HSURF a2)
{
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 v4; // rax
  __int64 (__fastcall *v7)(_QWORD); // rax
  unsigned int *v8; // rax
  unsigned int *v9; // rbx
  __int64 v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  unsigned int *v13; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_QWORD *)this;
  v3 = 0;
  LODWORD(v4) = (_DWORD)a2;
  if ( *(_QWORD *)(*(_QWORD *)this + 2552LL) )
    return 1LL;
  if ( a2 || (v7 = *(__int64 (__fastcall **)(_QWORD))(v2 + 2712)) != 0LL && (v4 = v7(*(_QWORD *)(v2 + 1800))) != 0 )
  {
    v8 = (unsigned int *)HmgShareLockCheck(v4, 5);
    v13 = v8;
    v9 = v8;
    if ( v8 )
    {
      v8[28] |= 0x80000000;
      if ( (*(_DWORD *)(v2 + 40) & 0x8000) == 0 )
        INC_SHARE_REF_CNT(v8);
      *(_QWORD *)(*(_QWORD *)this + 2552LL) = v9;
      if ( !v9[24] )
        v9[24] = *(_DWORD *)(*(_QWORD *)this + 2108LL);
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)this + 2552LL) + 128LL) = *(_QWORD *)(*(_QWORD *)this + 1808LL);
      v10 = *(_QWORD *)this;
      if ( (*(_DWORD *)(*(_QWORD *)this + 1824LL) & 0x8000000) != 0 )
      {
        v9[28] |= 0x80000u;
        v10 = *(_QWORD *)this;
      }
      HmgShareLock(**(_QWORD **)(v10 + 1808), 8);
      if ( (*(_DWORD *)(*(_QWORD *)this + 40LL) & 1) != 0 )
      {
        v11 = qword_1C024F630 ? qword_1C024F630() : -1073741637;
        if ( v11 >= 0 && qword_1C024F638 )
          qword_1C024F638(v2, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 1LL);
      }
      PDEVOBJ::vFilterDriverHooks(this);
      v12 = (unsigned int)bSpEnableSprites();
      vEnableSynchronize(v2);
      if ( *(_QWORD *)(*(_QWORD *)this + 1776LL) )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)this + 1776LL))(
          (*(_QWORD *)(*(_QWORD *)this + 2552LL) + 24LL) & -(__int64)(*(_QWORD *)(*(_QWORD *)this + 2552LL) != 0LL),
          4LL);
      v3 = v12;
    }
    EPALOBJ::~EPALOBJ((EPALOBJ *)&v13);
  }
  return v3;
}
