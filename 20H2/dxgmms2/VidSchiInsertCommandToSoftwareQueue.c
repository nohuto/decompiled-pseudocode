/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C0007630
 * Callers:
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C00064F0 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C00069E0 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiUpdatePriorityTables @ 0x1C0032450 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C0005EE0 (VidSchiUpdateContextStatus.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C002CFD0 (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // ecx
  _QWORD *v9; // rax
  int v10; // r8d
  __int64 v11; // rcx
  __int64 *v12; // rdx
  __int64 result; // rax
  __int64 v14; // r9
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  int v18; // edx
  unsigned int v19; // edx
  int v20; // eax
  __int64 v21; // rax
  char v22; // [rsp+60h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 716));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2876));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1580));
  v8 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v8 - 4) > 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1584));
    v8 = *(_DWORD *)(a1 + 48);
  }
  if ( !v8 && (*(_DWORD *)(a1 + 72) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *(unsigned int *)(a1 + 160) + 3104) + 2348LL),
      1u);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 784));
  ++*(_DWORD *)(v2 + 780);
  ++*(_DWORD *)(v5 + 2872);
  ++*(_DWORD *)(v7 + 712);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  v9 = (_QWORD *)WdLogNewEntry5_WdEvent();
  v9[3] = a1;
  v9[4] = *(_QWORD *)(a1 + 112);
  v9[5] = v2;
  v9[6] = *(_QWORD *)(v2 + 144);
  v9[7] = *(_QWORD *)(v2 + 160);
  WdLogEvent5_WdEvent(v9);
  v11 = v2 + 664;
  v12 = *(__int64 **)(v2 + 672);
  result = a1 + 32;
  if ( *v12 != v2 + 664 )
    __fastfail(3u);
  *(_QWORD *)result = v11;
  *(_QWORD *)(a1 + 40) = v12;
  *v12 = result;
  *(_QWORD *)(v2 + 672) = result;
  if ( *(_DWORD *)(v2 + 780) == 1 )
  {
    v10 = 0;
    *(_QWORD *)(v2 + 648) = a1;
    v15 = ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1) | *(_DWORD *)(v2 + 644) & 0xFFFFFFFE;
    v16 = 0;
    *(_DWORD *)(v2 + 644) = v15;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v16 = 2;
    v17 = v15 & 0xFFFFFFFD | v16;
    v18 = 0;
    *(_DWORD *)(v2 + 644) = v17;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v18 = 4;
    v19 = v17 & 0xFFFFFFFB | v18;
    v20 = 0;
    *(_DWORD *)(v2 + 644) = v19;
    LODWORD(v11) = 8;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v20 = 8;
    LODWORD(v12) = v19 & 0xFFFFFFF7;
    *(_DWORD *)(v2 + 644) = (unsigned int)v12 | v20;
    result = *(unsigned int *)(v2 + 184);
    if ( (result & 0x200) == 0 )
    {
      result = *(unsigned int *)(v2 + 184);
      if ( (result & 8) == 0 )
      {
        result = *(unsigned int *)(v2 + 184);
        if ( (result & 4) == 0 )
        {
          result = *(unsigned int *)(v2 + 184);
          if ( (result & 0x10) == 0 )
          {
            result = *(unsigned int *)(v2 + 184);
            if ( (result & 0x40) == 0 )
            {
              result = *(unsigned int *)(v2 + 184);
              if ( (result & 0x80u) == 0LL )
              {
                result = *(unsigned int *)(v2 + 184);
                if ( (result & 0x100) == 0 )
                {
                  result = *(unsigned int *)(v2 + 184);
                  if ( (result & 0x20) == 0 )
                  {
                    if ( !*(_DWORD *)(v2 + 184)
                      && _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 436), 0, 0) >= 2 )
                    {
                      v21 = *(_QWORD *)(v2 + 96);
                      v22 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v21 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v21 + 24) + 32LL),
                        &v22);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5uLL, 15022LL);
                    *a2 = result;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ( bTracingEnabled )
  {
    v14 = *(_QWORD *)(v2 + 56);
    if ( !v14 || (*(_DWORD *)(v2 + 112) & 0x40) != 0 )
      LODWORD(v14) = v2;
    result = (unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0LL )
      return McTemplateK0piixqq_EtwWriteTransfer(
               v11,
               (_DWORD)v12,
               v10,
               v14,
               *(_QWORD *)(v2 + 448),
               *(_QWORD *)(v2 + 440),
               *(_QWORD *)(v5 + 2008),
               *(_DWORD *)(v2 + 436),
               3);
  }
  return result;
}
