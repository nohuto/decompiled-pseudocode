/*
 * XREFs of HalpCmcWorkerRoutine @ 0x14085FAD0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer @ 0x1402364D0 (KeCancelTimer.c)
 *     KeQueryActiveProcessorCountEx @ 0x140328380 (KeQueryActiveProcessorCountEx.c)
 *     KeSetSystemGroupAffinityThread @ 0x140336D80 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1403374F0 (KeRevertToUserGroupAffinityThread.c)
 *     HalpCmcPollProcessor @ 0x14039D5F0 (HalpCmcPollProcessor.c)
 *     WheaLogInternalEvent @ 0x1403B6A80 (WheaLogInternalEvent.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     HalpCmciInit @ 0x14099C184 (HalpCmciInit.c)
 */

void __fastcall HalpCmcWorkerRoutine(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // r14d
  ULONG ActiveProcessorCount; // eax
  ULONG v4; // r15d
  int *v5; // r12
  ULONG v6; // edi
  unsigned int v7; // edx
  _GROUP_AFFINITY *p_PreviousAffinity; // rdx
  __int64 v9; // r13
  unsigned int v10; // ebx
  unsigned int v11; // eax
  unsigned int v12; // edx
  bool v13; // cf
  _GROUP_AFFINITY Affinity; // [rsp+30h] [rbp-31h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h]
  __int128 Src; // [rsp+48h] [rbp-19h] BYREF
  __int128 v17; // [rsp+58h] [rbp-9h]
  __int128 v18; // [rsp+68h] [rbp+7h]
  _GROUP_AFFINITY PreviousAffinity; // [rsp+78h] [rbp+17h] BYREF

  ++*(_DWORD *)(a1 + 184);
  v1 = a1;
  v15 = a1;
  v2 = 0;
  Affinity = 0LL;
  PreviousAffinity = 0LL;
  Src = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  v4 = 0;
  if ( ActiveProcessorCount )
  {
    v5 = KiProcessorIndexToNumberMappingTable;
    v6 = ActiveProcessorCount;
    do
    {
      v7 = *v5;
      Affinity.Reserved[1] = 0;
      Affinity.Reserved[2] = 0;
      *(_DWORD *)&Affinity.Group = (unsigned __int16)(v7 >> 6);
      Affinity.Mask = 1LL << (v7 & 0x3F);
      if ( v4 )
        p_PreviousAffinity = 0LL;
      else
        p_PreviousAffinity = &PreviousAffinity;
      KeSetSystemGroupAffinityThread(&Affinity, p_PreviousAffinity);
      v9 = *(_QWORD *)&KeGetPcr()->HalReserved[6];
      while ( v9 )
      {
        v10 = v2;
        HalpCmcPollProcessor(HalpCmcErrorPacket, HalpCmciEnabled, *(_QWORD *)(v9 + 164), v9);
        v2 = *(_DWORD *)(v9 + 156);
        v9 = *(_QWORD *)(v9 + 176);
        if ( v2 <= v10 )
          v2 = v10;
      }
      ++v4;
      ++v5;
    }
    while ( v4 < v6 );
    v1 = v15;
  }
  if ( HalpCmciRevertToPolledMode )
  {
    if ( *(_BYTE *)(v1 + 172) )
    {
      if ( *(_DWORD *)(v1 + 184) > 1u )
      {
        v11 = *(_DWORD *)(v1 + 188);
        if ( v11 < *(_DWORD *)(v1 + 180) && v2 < *(_DWORD *)(v1 + 176) )
        {
          *(_DWORD *)(v1 + 188) = v11 + 1;
          KeCancelTimer((PKTIMER)(v1 + 8));
          HalpCmciRevertToPolledMode = 0;
          HalpCmcPollingStarted = 0;
          *((_BYTE *)HalpCmcErrorSource + 48) = 5;
          HalpCmciInit();
          v12 = *(_DWORD *)(v1 + 180);
          v13 = *(_DWORD *)(v1 + 188) < v12;
          LODWORD(v18) = *(_DWORD *)(v1 + 188);
          *(_DWORD *)(v1 + 184) = 0;
          *(_QWORD *)&Src = 0x1674C6857LL;
          DWORD1(v17) = -v13 - 2147483620;
          HIDWORD(v18) = *(_DWORD *)(v1 + 176);
          *((_QWORD *)&Src + 1) = 48LL;
          LODWORD(v17) = 541868360;
          *((_QWORD *)&v17 + 1) = 0x1000000002LL;
          *(_QWORD *)((char *)&v18 + 4) = __PAIR64__(v2, v12);
          WheaLogInternalEvent(&Src);
        }
      }
    }
  }
  KeRevertToUserGroupAffinityThread(&PreviousAffinity);
  _InterlockedExchange((volatile __int32 *)(v1 + 168), 0);
}
