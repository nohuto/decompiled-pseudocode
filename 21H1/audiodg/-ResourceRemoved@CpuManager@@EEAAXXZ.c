/*
 * XREFs of ?ResourceRemoved@CpuManager@@EEAAXXZ @ 0x140036370
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x14001DBE8 (memset_0.c)
 */

void __fastcall CpuManager::ResourceRemoved(CpuManager *this)
{
  HANDLE CurrentProcess; // rax
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 v12; // rax
  _OWORD v13[10]; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+D0h] [rbp-18h]

  if ( _InterlockedExchangeAdd((volatile signed __int32 *)this + 68, 0xFFFFFFFF) == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    NtSetInformationProcess(CurrentProcess, ProcessVmCounters|0x40, 0LL, 0);
    NtSetSystemInformation(SystemPlugPlayBusInformation|0x80, 0LL, 0);
    memset_0(v13, 0, 0xA8uLL);
    v3 = v13[0];
    v4 = v13[1];
    *((_DWORD *)this + 116) = -1;
    *(_OWORD *)((char *)this + 280) = v3;
    v5 = v13[2];
    *(_OWORD *)((char *)this + 296) = v4;
    v6 = v13[3];
    *(_OWORD *)((char *)this + 312) = v5;
    v7 = v13[4];
    *(_OWORD *)((char *)this + 328) = v6;
    v8 = v13[5];
    *(_OWORD *)((char *)this + 344) = v7;
    v9 = v13[6];
    *(_OWORD *)((char *)this + 360) = v8;
    v10 = v13[8];
    *(_OWORD *)((char *)this + 376) = v9;
    *(_OWORD *)((char *)this + 392) = v13[7];
    v11 = v13[9];
    v12 = v14;
    *(_OWORD *)((char *)this + 408) = v10;
    *(_OWORD *)((char *)this + 424) = v11;
    *((_QWORD *)this + 55) = v12;
    *((_OWORD *)this + 28) = 0LL;
    RtlPublishWnfStateData(WNF_AUDC_CPUSET_ID_SYSTEM, 0LL, (char *)this + 464, 4LL, 0LL);
  }
}
