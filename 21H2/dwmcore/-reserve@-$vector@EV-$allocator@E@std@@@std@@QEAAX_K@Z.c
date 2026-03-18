/*
 * XREFs of ?reserve@?$vector@EV?$allocator@E@std@@@std@@QEAAX_K@Z @ 0x1800CEA58
 * Callers:
 *     ??0CPathData@@QEAA@PEAUID2D1Factory@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x1800CE838 (--0CPathData@@QEAA@PEAUID2D1Factory@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ @ 0x180241858 (-OnPropertyChanged@CSynchronousSuperWetInk@@QEAAXXZ.c)
 *     DebugInspectSysMemSurface_NoOpt @ 0x1802629C0 (DebugInspectSysMemSurface_NoOpt.c)
 *     ?Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z @ 0x1802A038C (-Interpolate@CInterpolatePathsOperation@@QEAAJPEBVCPathData@@0MPEAPEAV2@@Z.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@EV?$allocator@E@std@@@std@@AEAAX_K@Z @ 0x1800CEA90 (-_Reallocate_exactly@-$vector@EV-$allocator@E@std@@@std@@AEAAX_K@Z.c)
 *     ?_Xlength@?$vector@UKernelTap@@V?$allocator@UKernelTap@@@std@@@std@@CAXXZ @ 0x18019180C (-_Xlength@-$vector@UKernelTap@@V-$allocator@UKernelTap@@@std@@@std@@CAXXZ.c)
 */

unsigned __int64 __fastcall std::vector<unsigned char>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = a1[2] - *a1;
  if ( a2 > result )
  {
    if ( a2 > 0x7FFFFFFFFFFFFFFFLL )
      std::vector<KernelTap>::_Xlength(a1);
    return std::vector<unsigned char>::_Reallocate_exactly();
  }
  return result;
}
