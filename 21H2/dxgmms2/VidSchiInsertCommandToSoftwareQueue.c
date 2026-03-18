/*
 * XREFs of VidSchiInsertCommandToSoftwareQueue @ 0x1C0006CD0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x1C0005C90 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0006900 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiUpdatePriorityTables @ 0x1C001C0A0 (VidSchiUpdatePriorityTables.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1C000D200 (VidSchiUpdateContextStatus.c)
 *     McTemplateK0piixqq_EtwWriteTransfer @ 0x1C00366DC (McTemplateK0piixqq_EtwWriteTransfer.c)
 */

__int64 __fastcall VidSchiInsertCommandToSoftwareQueue(__int64 a1, _DWORD *a2)
{
  __int64 v2; // rbx
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // r8
  int v8; // ecx
  __int64 *v9; // rdx
  __int64 result; // rax
  __int64 v11; // r9
  unsigned int v12; // eax
  int v13; // ecx
  unsigned int v14; // ecx
  int v15; // edx
  int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rax
  char v19; // [rsp+70h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD *)(v2 + 96);
  v6 = *(_QWORD *)(v2 + 104);
  v7 = *(_QWORD *)(v5 + 24);
  _InterlockedIncrement((volatile signed __int32 *)(v7 + 724));
  _InterlockedIncrement((volatile signed __int32 *)(v5 + 2892));
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 1580));
  v8 = *(_DWORD *)(a1 + 48);
  if ( (unsigned int)(v8 - 4) > 1 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 1584));
    v8 = *(_DWORD *)(a1 + 48);
  }
  if ( !v8 && (*(_DWORD *)(a1 + 72) & 4) != 0 )
    _InterlockedExchangeAdd(
      (volatile signed __int32 *)(*(_QWORD *)(v7 + 8LL * *(unsigned int *)(a1 + 160) + 3200) + 2996LL),
      1u);
  _InterlockedIncrement((volatile signed __int32 *)(v2 + 784));
  ++*(_DWORD *)(v2 + 780);
  ++*(_DWORD *)(v5 + 2888);
  ++*(_DWORD *)(v7 + 720);
  *(_QWORD *)(a1 + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(a1 + 52) = 6;
  WdLogSingleEntry5(4LL, a1, *(_QWORD *)(a1 + 112), v2, *(_QWORD *)(v2 + 144), *(_QWORD *)(v2 + 160));
  v9 = *(__int64 **)(v2 + 672);
  result = a1 + 32;
  if ( *v9 != v2 + 664 )
    __fastfail(3u);
  *(_QWORD *)result = v2 + 664;
  *(_QWORD *)(a1 + 40) = v9;
  *v9 = result;
  *(_QWORD *)(v2 + 672) = result;
  if ( *(_DWORD *)(v2 + 780) == 1 )
  {
    *(_QWORD *)(v2 + 648) = a1;
    v12 = ((unsigned int)(*(_DWORD *)(a1 + 48) - 4) <= 1) | *(_DWORD *)(v2 + 644) & 0xFFFFFFFE;
    v13 = 0;
    *(_DWORD *)(v2 + 644) = v12;
    if ( *(_DWORD *)(a1 + 48) == 3 )
      v13 = 2;
    v14 = v12 & 0xFFFFFFFD | v13;
    v15 = 0;
    *(_DWORD *)(v2 + 644) = v14;
    v16 = 0;
    if ( *(_DWORD *)(a1 + 48) == 7 )
      v15 = 4;
    v17 = v14 & 0xFFFFFFFB | v15;
    *(_DWORD *)(v2 + 644) = v17;
    if ( *(_DWORD *)(a1 + 48) == 6 )
      v16 = 8;
    LODWORD(v9) = v17 & 0xFFFFFFF7;
    *(_DWORD *)(v2 + 644) = (unsigned int)v9 | v16;
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
                      v18 = *(_QWORD *)(v2 + 96);
                      v19 = 0;
                      DpSynchronizeExecution(
                        *(_QWORD *)(*(_QWORD *)(v18 + 24) + 24LL),
                        VidSchiResetContextQuantumAtISR,
                        v2,
                        *(unsigned int *)(*(_QWORD *)(v18 + 24) + 32LL),
                        &v19);
                    }
                    result = VidSchiUpdateContextStatus(v2, 5LL, 15803LL);
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
    v11 = *(_QWORD *)(v2 + 56);
    result = *(_QWORD *)(v2 + 440);
    if ( !v11 || (LODWORD(v9) = *(_DWORD *)(v2 + 112), ((unsigned __int8)v9 & 0x40) != 0) )
      LODWORD(v11) = v2;
    if ( (byte_1C006E941 & 2) != 0 )
      return McTemplateK0piixqq_EtwWriteTransfer(
               *(_QWORD *)(v2 + 448),
               (_DWORD)v9,
               *(_QWORD *)(v5 + 2016),
               v11,
               *(_QWORD *)(v2 + 448),
               result,
               *(_QWORD *)(v5 + 2016),
               *(_DWORD *)(v2 + 436),
               3);
  }
  return result;
}
