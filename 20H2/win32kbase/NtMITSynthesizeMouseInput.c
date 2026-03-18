/*
 * XREFs of NtMITSynthesizeMouseInput @ 0x1C012E8E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0036928 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     EnterCrit @ 0x1C0045880 (EnterCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004B4E0 (UserSessionSwitchLeaveCrit.c)
 *     UserSetLastError @ 0x1C004C5CC (UserSetLastError.c)
 *     ?IsInputThread@CInputThread@@QEBA_NXZ @ 0x1C00549F8 (-IsInputThread@CInputThread@@QEBA_NXZ.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1C00554EC (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z @ 0x1C012B3D0 (-InjectInput@Mouse@InputTraceLogging@@SAXW4InjectionSource@12@_K@Z.c)
 *     ?Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA?AW4_SYNTHESIZED_MOUSE_PROCESSING_RESULT@@PEAU_ExtensibilityMouseInputData@@W4_MOUSEPROCESSOR_PROCESSING_OPTIONS@@PEAU_SYNTHESIZE_MOUSE_EXTRA_PAYLOAD@@@Z @ 0x1C01B9FCC (-Extensibility_SynthesizeMouseInput@CMouseProcessor@@QEAA-AW4_SYNTHESIZED_MOUSE_PROCESSING_RESUL.c)
 */

__int64 __fastcall NtMITSynthesizeMouseInput(ULONG64 a1, unsigned int a2, __int64 *a3, __int64 a4)
{
  unsigned int v7; // edi
  __int64 v8; // rbx
  CInputThread *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rbx
  __int64 MouseProcessor; // rax
  __int64 *v18; // [rsp+30h] [rbp-78h] BYREF
  __int128 v19; // [rsp+38h] [rbp-70h] BYREF
  __int128 v20; // [rsp+48h] [rbp-60h]
  __int64 v21; // [rsp+58h] [rbp-50h]
  __int128 v22; // [rsp+68h] [rbp-40h]
  __int128 v23; // [rsp+78h] [rbp-30h]
  __int64 v24; // [rsp+88h] [rbp-20h]
  __int64 v25; // [rsp+C8h] [rbp+20h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v18, "MITSynthesizeMouseInput", 0LL, a4);
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v7 = 0;
  LODWORD(v8) = 0;
  v25 = 0LL;
  EnterCrit(0, 1);
  if ( CInputThread::IsInputThread(v9) )
  {
    if ( a1 + 40 < a1 || a1 + 40 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    v22 = *(_OWORD *)a1;
    v23 = *(_OWORD *)(a1 + 16);
    v24 = *(_QWORD *)(a1 + 32);
    v19 = v22;
    v20 = v23;
    v21 = v24;
    if ( a3 )
    {
      if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
        a3 = (__int64 *)MmUserProbeAddress;
      v8 = *a3;
      v25 = *a3;
    }
    InputTraceLogging::Mouse::InjectInput();
    v15 = (unsigned __int64)&v25 & -(__int64)((_DWORD)v8 != 0);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor();
    if ( MouseProcessor )
      v7 = CMouseProcessor::Extensibility_SynthesizeMouseInput(MouseProcessor, &v19, a2, v15);
  }
  else
  {
    UserSetLastError(5LL, v10);
  }
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v18);
  return v7;
}
