/*
 * XREFs of EngAllocMem @ 0x1C001F720
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C001F500 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0145330 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C014F740 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C00A5C70 (Win32AllocPoolNonPaged.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3880 (memset.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C0150430 (McTemplateK0pz_EtwWriteTransfer.c)
 */

PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edi
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  struct _ERESOURCE *v9; // rdi
  _QWORD *v10; // rax

  v4 = fl;
  if ( cjMemSize - 1 <= 0xFFFFFFDE )
  {
    v5 = cjMemSize + 32;
    if ( cjMemSize + 32 < 0x2710000 )
    {
      if ( (fl & 2) != 0 )
      {
        v7 = Win32AllocPoolNonPaged(v5, ulTag);
      }
      else
      {
        if ( qword_1C0252C10 )
          v6 = qword_1C0252C10();
        else
          v6 = -1073741637;
        if ( v6 < 0 || !qword_1C0252C18 )
        {
          v8 = 0LL;
LABEL_10:
          if ( (v4 & 1) != 0 )
          {
            if ( !v8 )
              return v8;
            memset(v8, 0, v5);
          }
          if ( v8 )
          {
            *((_DWORD *)v8 + 4) = 0;
            v9 = MultiUserEngAllocListLock;
            if ( MultiUserEngAllocListLock )
            {
              PsEnterPriorityRegion();
              ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
            }
            v10 = (_QWORD *)qword_1C0250250;
            if ( *(struct _LIST_ENTRY **)qword_1C0250250 != &MultiUserGreEngAllocList )
              __fastfail(3u);
            *v8 = &MultiUserGreEngAllocList;
            v8[1] = v10;
            *v10 = v8;
            qword_1C0250250 = (__int64)v8;
            if ( MultiUserEngAllocListLock )
            {
              if ( gbLockEtw && (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
                McTemplateK0pz_EtwWriteTransfer(
                  (unsigned int)&MultiUserGreEngAllocList,
                  (unsigned int)&LockRelease,
                  ulTag,
                  (_DWORD)MultiUserEngAllocListLock,
                  (__int64)L"MultiUserEngAllocListLock");
              if ( MultiUserEngAllocListLock )
              {
                ExReleaseResourceAndLeaveCriticalRegion(MultiUserEngAllocListLock);
                PsLeavePriorityRegion();
              }
            }
            v8 += 4;
          }
          return v8;
        }
        v7 = qword_1C0252C18(33LL, v5, ulTag);
      }
      v8 = (_QWORD *)v7;
      goto LABEL_10;
    }
  }
  return 0LL;
}
