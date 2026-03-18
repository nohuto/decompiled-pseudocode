/*
 * XREFs of EngFreeMem @ 0x1C0085900
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00831D0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0085800 (-StubDispDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C008582C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 *     ?MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z @ 0x1C0142D10 (-MulDisablePDEV@@YAXPEAUDHPDEV__@@@Z.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0142EA0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngDeleteClip @ 0x1C014D370 (EngDeleteClip.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

void __stdcall EngFreeMem(PVOID pv)
{
  int v1; // r8d
  struct _ERESOURCE *v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rcx
  int v7; // eax

  if ( pv )
  {
    v2 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
    v3 = (char *)pv - 32;
    if ( MultiUserEngAllocListLock )
    {
      PsEnterPriorityRegion(pv);
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
        ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
        PsLeavePriorityRegion(v6);
      }
    }
    if ( qword_1C0250C00 )
      v7 = qword_1C0250C00();
    else
      v7 = -1073741637;
    if ( v7 >= 0 )
    {
      if ( qword_1C0250C08 )
        qword_1C0250C08(v3);
    }
  }
}
