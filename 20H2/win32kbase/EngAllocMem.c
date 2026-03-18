/*
 * XREFs of EngAllocMem @ 0x1C00833F0
 * Callers:
 *     ?StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C00831D0 (-StubDispEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEAGKPEAPEAUHSURF__@@KPEAKKPEAUtagDEVINFO.c)
 *     ?MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDEVINFO@@PEAUHDEV__@@1PEAX@Z @ 0x1C0142EA0 (-MulEnablePDEV@@YAPEAUDHPDEV__@@PEAU_devicemodeW@@PEBGKPEAPEAUHSURF__@@KPEAU_GDIINFO@@KPEAUtagDE.c)
 *     EngCreateClip @ 0x1C014D2B0 (EngCreateClip.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C005EAB0 (Win32AllocPoolNonPaged.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     McTemplateK0pz_EtwWriteTransfer @ 0x1C014DE80 (McTemplateK0pz_EtwWriteTransfer.c)
 */

// local variable allocation has failed, the output may be wrong!
PVOID __stdcall EngAllocMem(ULONG fl, ULONG cjMemSize, ULONG ulTag)
{
  char v4; // si
  ULONG v5; // edi
  int v6; // eax
  __int64 v7; // rax
  _QWORD *v8; // rbx
  struct _ERESOURCE *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // rcx

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
        if ( qword_1C0250C10 )
          v6 = qword_1C0250C10();
        else
          v6 = -1073741637;
        if ( v6 < 0 || !qword_1C0250C18 )
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
            v9 = (struct _ERESOURCE *)MultiUserEngAllocListLock;
            if ( MultiUserEngAllocListLock )
            {
              PsEnterPriorityRegion(*(_QWORD *)&fl);
              ExEnterCriticalRegionAndAcquireResourceExclusive(v9);
            }
            v10 = (_QWORD *)qword_1C024E250;
            if ( *(struct _LIST_ENTRY **)qword_1C024E250 != &MultiUserGreEngAllocList )
              __fastfail(3u);
            *v8 = &MultiUserGreEngAllocList;
            v8[1] = v10;
            *v10 = v8;
            qword_1C024E250 = (__int64)v8;
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
                ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)MultiUserEngAllocListLock);
                PsLeavePriorityRegion(v11);
              }
            }
            v8 += 4;
          }
          return v8;
        }
        v7 = qword_1C0250C18(33LL, v5, ulTag);
      }
      v8 = (_QWORD *)v7;
      goto LABEL_10;
    }
  }
  return 0LL;
}
