/*
 * XREFs of CpcGuaranteedNotifyWorker @ 0x1C002D728
 * Callers:
 *     CpcNativeInterruptWorker @ 0x1C002DD00 (CpcNativeInterruptWorker.c)
 *     AcpiCppcGuaranteedNotifyWorker @ 0x1C00318C0 (AcpiCppcGuaranteedNotifyWorker.c)
 * Callees:
 *     WPP_RECORDER_SF_s @ 0x1C000356C (WPP_RECORDER_SF_s.c)
 *     __security_check_cookie @ 0x1C0004280 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00044E0 (_guard_dispatch_icall_nop.c)
 *     ProcLibTracePccCapChange @ 0x1C0008304 (ProcLibTracePccCapChange.c)
 *     ReadGenAddrMaybeHiddenEx @ 0x1C0008830 (ReadGenAddrMaybeHiddenEx.c)
 *     ProcLibCapChange @ 0x1C0023D98 (ProcLibCapChange.c)
 *     StartPccCommand @ 0x1C003161C (StartPccCommand.c)
 */

__int64 __fastcall CpcGuaranteedNotifyWorker(__int64 a1, struct _IO_WORKITEM *a2, const char *a3)
{
  __int64 v5; // rdi
  __int64 result; // rax
  __int64 v7; // rsi
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // eax
  _BYTE *v11; // rbx
  char v12; // bp
  unsigned __int64 GenAddrMaybeHidden; // rbx
  unsigned __int64 v14; // rcx
  unsigned int v15; // ebp
  struct _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-58h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+40h] [rbp-48h] BYREF

  Affinity = 0LL;
  PreviousAffinity = 0LL;
  if ( a2 )
    IoFreeWorkItem(a2);
  v5 = *(_QWORD *)(a1 + 64);
  result = *(unsigned int *)(v5 + 272);
  if ( (result & 0x8000000) != 0 )
  {
    v7 = *(_QWORD *)(v5 + 240);
    if ( v7 )
    {
      v8 = *(_QWORD *)(v7 + 112);
      if ( *(_BYTE *)(v7 + 99) )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          qword_1C001C418,
          0LL);
        if ( !*(_BYTE *)(v7 + 101)
          || (int)StartPccCommand(*(_QWORD *)(v5 + 248)) >= 0
          && (v9 = *(_QWORD *)(v5 + 248),
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(v9 + 120))(*(_QWORD *)(v9 + 72), 0LL),
              *(_DWORD *)(v9 + 144) &= ~1u,
              v10 >= 0) )
        {
          v11 = (_BYTE *)(v8 + 104);
          if ( *(_BYTE *)(v8 + 104) != 127 || *(_DWORD *)(v5 + 80) )
          {
            v12 = 0;
          }
          else
          {
            KeProcessorGroupAffinity(&Affinity, *(unsigned int *)(v5 + 56));
            KeSetSystemGroupAffinityThread(&Affinity, &PreviousAffinity);
            v12 = 1;
          }
          GenAddrMaybeHidden = ReadGenAddrMaybeHiddenEx(v5, v11);
          if ( v12 )
            KeRevertToUserGroupAffinityThread(&PreviousAffinity);
          v14 = *(_QWORD *)(v7 + 16);
          if ( GenAddrMaybeHidden > v14 )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x13u,
                (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
                a3);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 16);
            }
            v14 = GenAddrMaybeHidden;
          }
          if ( GenAddrMaybeHidden < *(_QWORD *)(v7 + 32) )
          {
            GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              WPP_RECORDER_SF_s(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                3u,
                1u,
                0x14u,
                (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
                a3);
              v14 = *(_QWORD *)(v7 + 16);
              GenAddrMaybeHidden = *(_QWORD *)(v7 + 32);
            }
          }
          v15 = *(_DWORD *)(v7 + 80);
          *(_QWORD *)(v7 + 56) = GenAddrMaybeHidden;
          if ( (unsigned int)(100 * GenAddrMaybeHidden / v14) > v15 )
            v15 = 100 * GenAddrMaybeHidden / v14;
          *(_DWORD *)(v7 + 84) = v15;
          if ( v15 != *(_DWORD *)(v5 + 724) )
          {
            ProcLibCapChange(v5, *(_DWORD *)(v5 + 448), *(_DWORD *)(v5 + 496), v15);
            ((void (__fastcall *)(__int64))qword_1C001C7E8)(v5);
          }
          ProcLibTracePccCapChange(v5, v15);
        }
        return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
                 WdfDriverGlobals,
                 qword_1C001C418);
      }
    }
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    return WPP_RECORDER_SF_s(
             (__int64)WPP_GLOBAL_Control->DeviceExtension,
             2u,
             1u,
             0x12u,
             (__int64)&WPP_ffdc600ec6333e1f93ebd6d26ad43c28_Traceguids,
             a3);
  }
  return result;
}
