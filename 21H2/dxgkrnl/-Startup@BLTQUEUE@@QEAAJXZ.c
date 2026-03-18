/*
 * XREFs of ?Startup@BLTQUEUE@@QEAAJXZ @ 0x1C0160578
 * Callers:
 *     ?StartEmulation@REMOTE_VSYNC@@AEAAJXZ @ 0x1C0160258 (-StartEmulation@REMOTE_VSYNC@@AEAAJXZ.c)
 *     ?DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z @ 0x1C020F170 (-DxgkpCreateDodPresent@@YAPEAVDXGDODPRESENT@@PEAVADAPTER_DISPLAY@@E@Z.c)
 * Callees:
 *     ?GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ @ 0x1C0002624 (-GetAdapter@DXGDODPRESENT@@QEAAPEAVDXGADAPTER@@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z @ 0x1C01606B8 (-RecreateVsyncSource@BLTQUEUE@@AEAAX_NW4VsyncEvent@1@@Z.c)
 */

__int64 __fastcall BLTQUEUE::Startup(char *StartContext)
{
  DXGDODPRESENT *v2; // rcx
  __int64 v3; // rbx
  __int64 Timer; // rax
  __int64 v5; // rax
  NTSTATUS v6; // eax
  const wchar_t *v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-38h] BYREF

  v2 = *(DXGDODPRESENT **)StartContext;
  LODWORD(v3) = 0;
  if ( v2 )
  {
    if ( *((_DWORD *)StartContext + 34) != 1 || (*((_DWORD *)DXGDODPRESENT::GetAdapter(v2) + 109) & 0x100) == 0 )
    {
LABEL_3:
      Timer = ExAllocateTimer(0LL, 0LL, 0LL);
      *((_QWORD *)StartContext + 19) = Timer;
      if ( Timer )
      {
        v5 = ExAllocateTimer(0LL, 0LL, 4LL);
        *((_QWORD *)StartContext + 18) = v5;
        if ( v5 )
        {
          BLTQUEUE::RecreateVsyncSource(StartContext, 0LL, 12LL);
          *(_QWORD *)&ObjectAttributes.Length = 48LL;
          *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.ObjectName = 0LL;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v6 = PsCreateSystemThread(
                 (PHANDLE)StartContext + 76,
                 0x1FFFFFu,
                 &ObjectAttributes,
                 0LL,
                 0LL,
                 BLTQUEUE::BltQueueWorkerThread,
                 StartContext);
          v3 = v6;
          if ( v6 < 0 )
          {
            WdLogSingleEntry2(2LL, StartContext, v6);
            DxgkLogInternalTriageEvent(
              0LL,
              0x40000,
              -1,
              (__int64)L"BLTQUEUE 0x%I64x : PsCreateSystemThread() failed with Status = 0x%I64x",
              (__int64)StartContext,
              v3,
              0LL,
              0LL,
              0LL);
            v10 = *((_QWORD *)StartContext + 18);
            LODWORD(v3) = -1073741801;
            if ( v10 )
            {
              LOBYTE(v9) = 1;
              ExDeleteTimer(v10, v9, 0LL, 0LL);
              *((_QWORD *)StartContext + 18) = 0LL;
            }
            v11 = *((_QWORD *)StartContext + 19);
            if ( v11 )
            {
              LOBYTE(v9) = 1;
              ExDeleteTimer(v11, v9, 0LL, 0LL);
              *((_QWORD *)StartContext + 19) = 0LL;
            }
          }
          else
          {
            KeWaitForSingleObject(StartContext + 496, Executive, 0, 0, 0LL);
          }
          return (unsigned int)v3;
        }
        WdLogSingleEntry1(6LL, StartContext);
        v8 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for normal res timer.";
      }
      else
      {
        WdLogSingleEntry1(6LL, StartContext);
        v8 = L"BLTQUEUE 0x%I64x : ExAllocateTimerFailed() failed for high res timer.";
      }
      DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v8, (__int64)StartContext, 0LL, 0LL, 0LL, 0LL);
      return (unsigned int)v3;
    }
    WdLogSingleEntry1(1LL, 868LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"Indirect displays cannot currently support HW VSync",
      868LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  else
  {
    if ( *((_DWORD *)StartContext + 34) != 1 )
      goto LABEL_3;
    WdLogSingleEntry1(2LL, 862LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"A BLTQUEUE must have a pointer to the DoDPresent if HW Vsync is used",
      862LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
