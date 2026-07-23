/*
 * XREFs of _LdrpInitializeThread@4 @ 0x4B2CDA29
 * Callers:
 *     __LdrpInitialize@8 @ 0x4B2E6327 (__LdrpInitialize@8.c)
 * Callees:
 *     @RtlDeactivateActivationContextUnsafeFast@4 @ 0x4B2CC6C0 (@RtlDeactivateActivationContextUnsafeFast@4.c)
 *     _LdrpInitializeThread@4 @ 0x4B2CDA29 (_LdrpInitializeThread@4.c)
 *     @RtlActivateActivationContextUnsafeFast@8 @ 0x4B2CDC10 (@RtlActivateActivationContextUnsafeFast@8.c)
 *     _LdrpCallInitRoutine@16 @ 0x4B2CDCA1 (_LdrpCallInitRoutine@16.c)
 *     _LdrpCallTlsInitializers@8 @ 0x4B2CF073 (_LdrpCallTlsInitializers@8.c)
 *     _LdrpDrainWorkQueue@4 @ 0x4B2D19AF (_LdrpDrainWorkQueue@4.c)
 *     _LdrpReleaseLoaderLock@16 @ 0x4B2D26DD (_LdrpReleaseLoaderLock@16.c)
 *     _LdrpAcquireLoaderLock@0 @ 0x4B2D2725 (_LdrpAcquireLoaderLock@0.c)
 *     _LdrpAllocateTls@0 @ 0x4B2E15BF (_LdrpAllocateTls@0.c)
 *     _RtlpInitializeThreadActivationContextStack@4 @ 0x4B2E4934 (_RtlpInitializeThreadActivationContextStack@4.c)
 *     _LdrpDropLastInProgressCount@0 @ 0x4B2E79C9 (_LdrpDropLastInProgressCount@0.c)
 *     _ZwTerminateProcess@8 @ 0x4B2F2C40 (_ZwTerminateProcess@8.c)
 *     _ZwDelayExecution@8 @ 0x4B2F2CC0 (_ZwDelayExecution@8.c)
 *     __SEH_prolog4 @ 0x4B307AC4 (__SEH_prolog4.c)
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __thiscall LdrpInitializeThread(_DWORD *this)
{
  struct _TEB *v1; // esi
  int result; // eax
  NTSTATUS Tls; // eax
  NTSTATUS v4; // edi
  void *EntryPoint; // ecx
  PLDR_DATA_TABLE_ENTRY i; // ebx
  unsigned int Flags; // eax
  int v8[9]; // [esp+10h] [ebp-7Ch] BYREF
  int v9[9]; // [esp+34h] [ebp-58h] BYREF
  LARGE_INTEGER DelayInterval; // [esp+58h] [ebp-34h] BYREF
  void *v11; // [esp+60h] [ebp-2Ch]
  PLDR_DATA_TABLE_ENTRY v12; // [esp+64h] [ebp-28h]
  void *v13; // [esp+68h] [ebp-24h]
  PLDR_DATA_TABLE_ENTRY v14; // [esp+6Ch] [ebp-20h]
  _PEB *ProcessEnvironmentBlock; // [esp+70h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+74h] [ebp-18h]

  v1 = NtCurrentTeb();
  ProcessEnvironmentBlock = v1->ProcessEnvironmentBlock;
  if ( UseCOR && (v1->SameTebFlags & 0x400) != 0 )
    this[44] = MEMORY[0x7FFE0330] ^ __ROR4__(LdrpCorExeMainRoutine, 32 - (MEMORY[0x7FFE0330] & 0x1F));
  RtlpInitializeThreadActivationContextStack(v1);
  if ( (NtCurrentTeb()->SameTebFlags & 8) == 0
    || (result = (int)NtCurrentTeb(), (*(_BYTE *)(result + 4042) & 0x20) != 0) )
  {
    result = 0x2000;
    if ( (v1->SameTebFlags & 0x2000) == 0 )
    {
      while ( 1 )
      {
        Tls = LdrpAllocateTls();
        v4 = Tls;
        if ( Tls >= 0 )
          break;
        if ( Tls != -1073741801 )
        {
          ZwTerminateProcess((HANDLE)0xFFFFFFFF, Tls);
          RtlRaiseStatus(v4);
        }
        DelayInterval.QuadPart = -3000000LL;
        ZwDelayExecution(0, &DelayInterval);
      }
      LdrpDrainWorkQueue(0);
      LdrpAcquireLoaderLock();
      ms_exc.registration.TryLevel = 0;
      for ( i = dword_4B3A5D8C; ; i = (PLDR_DATA_TABLE_ENTRY)i->InLoadOrderLinks.Flink )
      {
        v14 = i;
        if ( i == (PLDR_DATA_TABLE_ENTRY)&dword_4B3A5D8C )
          break;
        v12 = i;
        if ( i->DdagNode->State >= LdrModulesReadyToRun && ProcessEnvironmentBlock->ImageBaseAddress != i->DllBase )
        {
          Flags = i->Flags;
          if ( (Flags & 0x40000) == 0 )
          {
            EntryPoint = i->EntryPoint;
            v13 = EntryPoint;
            v11 = EntryPoint;
            if ( EntryPoint )
            {
              if ( (Flags & 0x80004) == 0x80004 )
              {
                if ( byte_4B3A5DA8 )
                  goto LABEL_21;
                v9[0] = 36;
                v9[1] = 1;
                memset(&v9[2], 0, 0x1Cu);
                RtlActivateActivationContextUnsafeFast(v9, i->EntryPointActivationContext);
                ms_exc.registration.TryLevel = 1;
                if ( i->TlsIndex )
                  LdrpCallTlsInitializers(2, i);
                LdrpCallInitRoutine(2, 0);
                ms_exc.registration.TryLevel = 0;
                RtlDeactivateActivationContextUnsafeFast(v9);
              }
            }
          }
        }
      }
      if ( *(_WORD *)(LdrpImageEntry + 58) && !byte_4B3A5DA8 )
      {
        v8[0] = 36;
        v8[1] = 1;
        memset(&v8[2], 0, 0x1Cu);
        RtlActivateActivationContextUnsafeFast(v8, *(_DWORD *)(LdrpImageEntry + 72));
        ms_exc.registration.TryLevel = 2;
        LdrpCallTlsInitializers(2, LdrpImageEntry);
        ms_exc.registration.TryLevel = 0;
        RtlDeactivateActivationContextUnsafeFast(v8);
      }
LABEL_21:
      ms_exc.registration.TryLevel = -2;
      LdrpReleaseLoaderLock(0, EntryPoint);
      return LdrpDropLastInProgressCount();
    }
  }
  return result;
}
