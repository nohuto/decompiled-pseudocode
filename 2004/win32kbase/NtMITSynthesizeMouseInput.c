/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C0130C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0070F68 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00747EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C0076260 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     EnterCrit @ 0x1C008B340 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0091530 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C009228C (UserSetLastError.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C012D720 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01BC33C (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3)
{
  unsigned int v6; // edi
  __int64 v7; // rbx
  CInputThread *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  __int64 MouseProcessor; // rax
  __int64 *v17; // [rsp+30h] [rbp-78h] BYREF
  __int128 v18; // [rsp+38h] [rbp-70h] BYREF
  __int128 v19; // [rsp+48h] [rbp-60h]
  __int64 v20; // [rsp+58h] [rbp-50h]
  __int128 v21; // [rsp+68h] [rbp-40h]
  __int128 v22; // [rsp+78h] [rbp-30h]
  __int64 v23; // [rsp+88h] [rbp-20h]
  __int64 v24; // [rsp+C8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v17, "MITSynthesizeMouseInput", 0LL);
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6 = 0;
  LODWORD(v7) = 0;
  v24 = 0LL;
  EnterCrit(0LL, 1);
  if ( CInputThread::IsInputThread(v8) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v21 = *(_OWORD *)a1;
    v22 = *(_OWORD *)(a1 + 16);
    v23 = *(_QWORD *)(a1 + 32);
    v18 = v21;
    v19 = v22;
    v20 = v23;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v7 = *a3;
      v24 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v14 = (unsigned __int64)&v24 & -(__int64)((_DWORD)v7 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      v6 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v18, a2, v14);
  }
  else
  {
    UserSetLastError(5LL, v9);
  }
  UserSessionSwitchLeaveCrit(v11, v10, v12, v13);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v17);
  return v6;
}
