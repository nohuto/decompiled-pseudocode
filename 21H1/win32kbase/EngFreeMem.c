/*
 * XREFs of EngFreeMem @ 0x1C000D2D0
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0009930 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C000D1D0 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C000D1FC (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C014B4F0 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C014B680 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C0155B50 (EngDeleteClip.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0156780 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  int v1; // r8d
  struct _ERESOURCE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  int v6; // eax

  if ( pv )
  {
    v2 = MultiUserEngAllocListLock;
    v3 = (char *)pv - 32;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion();
      ExEnterCriticalRegionAndAcquireResourceExclusive(v2);
    }
    v4 = *v3;
    if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
      __fastfail(3u);
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    if ( MultiUserEngAllocListLock )
    {
      if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
        McTemplateK0pz_EtwWriteTransfer(
          (_DWORD)v5,
          (unsigned int)&LockRelease,
          v1,
          (_DWORD)MultiUserEngAllocListLock,
          (__int64)L"MultiUserEngAllocListLock");
      if ( MultiUserEngAllocListLock )
      {
        ExReleaseResourceAndLeaveCriticalRegion(MultiUserEngAllocListLock);
        PsLeavePriorityRegion();
      }
    }
    if ( qword_1C0258BC0 )
      v6 = qword_1C0258BC0();
    else
      v6 = -1073741637;
    if ( v6 >= 0 )
    {
      if ( qword_1C0258BC8 )
        qword_1C0258BC8(v3);
    }
  }
}
