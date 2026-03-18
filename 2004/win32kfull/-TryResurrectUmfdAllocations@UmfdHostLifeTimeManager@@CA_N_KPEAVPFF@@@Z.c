/*
 * XREFs of ?TryResurrectUmfdAllocations@UmfdHostLifeTimeManager@@CA_N_KPEAVPFF@@@Z @ 0x1C02C24B8
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1C02C2390 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z @ 0x1C00118EC (-QueryFont@PDEVOBJ@@QEAAPEAU_IFIMETRICS@@PEAUDHPDEV__@@_KKPEA_K@Z.c)
 *     ?pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ @ 0x1C00DCB18 (-pfdg@PFEOBJ@@QEAAPEAU_FD_GLYPHSET@@XZ.c)
 *     ?QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z @ 0x1C00E142C (-QueryFontTree@PFFOBJ@@QEAAPEAXPEAUDHPDEV__@@_KKKPEA_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z @ 0x1C02DECA8 (-UpdateKernelmodeAllocation@UmfdAllocation@@SA_NPEAX0@Z.c)
 */

char __fastcall UmfdHostLifeTimeManager::TryResurrectUmfdAllocations(__int64 a1, struct PFF *a2)
{
  __int64 v2; // rbx
  char v3; // si
  struct PFF *v4; // r14
  unsigned int v6; // r15d
  struct _IFIMETRICS *v7; // r12
  unsigned __int64 v8; // rdi
  struct _IFIMETRICS *v9; // r14
  struct _FD_GLYPHSET *v10; // rax
  struct _IFIMETRICS *v11; // rax
  unsigned __int64 v13; // rdx
  struct _IFIMETRICS *v14; // rcx
  __int64 v15; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+38h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+98h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+A0h] [rbp+50h] BYREF
  unsigned __int64 v19; // [rsp+A8h] [rbp+58h] BYREF

  v2 = *((_QWORD *)a2 + 11);
  v3 = 0;
  v4 = a2;
  v16[0] = a2;
  v15 = v2;
  if ( *((_DWORD *)a2 + 52) )
  {
    v6 = 1;
    while ( 1 )
    {
      v19 = 0LL;
      v7 = PDEVOBJ::QueryFont((PDEVOBJ *)&v15, *((struct DHPDEV__ **)v4 + 12), a1, v6, &v19);
      if ( !v7 )
        return v3;
      v8 = *((_QWORD *)v4 + v6 + 26);
      v17 = v8;
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 32), v7) )
        break;
      v18 = 0LL;
      v9 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree((PFFOBJ *)v16, *((struct DHPDEV__ **)v4 + 12), a1, v6, 3u, &v18);
      if ( !v9 )
        return v3;
      v10 = PFEOBJ::pfdg((__int64 **)&v17);
      if ( !UmfdAllocation::UpdateKernelmodeAllocation(v10, v9) )
      {
        v13 = v18;
LABEL_14:
        v14 = v9;
LABEL_17:
        (*(void (__fastcall **)(struct _IFIMETRICS *, unsigned __int64))(v2 + 3024))(v14, v13);
        return v3;
      }
      if ( *(_QWORD *)(v8 + 48) )
      {
        v17 = 0LL;
        v11 = (struct _IFIMETRICS *)PFFOBJ::QueryFontTree(
                                      (PFFOBJ *)v16,
                                      *(struct DHPDEV__ **)(v16[0] + 96LL),
                                      a1,
                                      v6,
                                      2u,
                                      &v17);
        v9 = v11;
        if ( !v11 )
          return v3;
        if ( !UmfdAllocation::UpdateKernelmodeAllocation(*(void **)(v8 + 48), v11) )
        {
          v13 = v17;
          goto LABEL_14;
        }
      }
      v4 = (struct PFF *)v16[0];
      if ( v6++ >= *(_DWORD *)(v16[0] + 208LL) )
        return 1;
    }
    v13 = v19;
    v14 = v7;
    goto LABEL_17;
  }
  return 1;
}
