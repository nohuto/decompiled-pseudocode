/*
 * XREFs of EtwpCoverageSamplerReadyThread @ 0x1405B02C4
 * Callers:
 *     EtwTraceReadyThread @ 0x1405A81A0 (EtwTraceReadyThread.c)
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 */

__int64 __fastcall EtwpCoverageSamplerReadyThread(__int64 a1)
{
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  __int64 v3; // r8
  unsigned int v4; // eax
  unsigned int v5; // ecx
  __int64 v6; // r10
  int v7; // r9d
  int v8; // ebx
  int v9; // ecx
  int v10; // r11d
  unsigned int v11; // r11d
  unsigned int v12; // r11d
  unsigned int v13; // eax
  int v14; // ecx
  int v15; // ecx

  result = (__int64)KeGetCurrentThread();
  if ( *(_QWORD *)qword_140C198C8 != result && *(_QWORD *)qword_140C198C8 != a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = (__int64)KeGetCurrentThread();
    if ( (_KTHREAD *)result != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
    {
      v3 = (*(_QWORD *)(qword_140C198C8 + 8) >> 4) & 0x1FFLL;
      v4 = ((unsigned int)*(_QWORD *)(qword_140C198C8 + 8) >> 13) & 0x3FFFF;
      _BitScanReverse(&v5, v4);
      v6 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v5 - 2) + 8LL * (v4 ^ (1 << v5)) + 8);
      if ( !*(_DWORD *)(v6 + 8 * v3 + 224) )
      {
LABEL_15:
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 8 * v3 + 328));
        return EtwpCovSampCaptureSample(0LL, 0x30000008u);
      }
      v7 = MEMORY[0xFFFFF78000000320];
      result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v6 + 8 * v3 + 228));
      if ( (unsigned int)result > *(_DWORD *)(v6 + 8 * v3 + 232) )
      {
        v8 = *(_DWORD *)(v6 + 8 * v3 + 224);
        *(_DWORD *)(v6 + 8 * v3 + 244) += v8;
        v9 = *(_DWORD *)(v6 + 8 * v3 + 244);
        v10 = *(_DWORD *)(v6 + 8 * v3 + 240);
        result = (unsigned int)(2 * v8);
        if ( v9 > *(_DWORD *)(v6 + 8 * v3 + 236) )
          v9 = *(_DWORD *)(v6 + 8 * v3 + 236);
        *(_DWORD *)(v6 + 8 * v3 + 228) = v7;
        v11 = *(_DWORD *)(v6 + 8 * v3 + 252) + v10;
        *(_DWORD *)(v6 + 8 * v3 + 240) = 0;
        v12 = v11 >> 1;
        *(_DWORD *)(v6 + 8 * v3 + 244) = v9;
        *(_DWORD *)(v6 + 8 * v3 + 252) = v12;
        if ( v12 >= (unsigned int)result )
        {
          v13 = v12 / (v8 + 1);
          v14 = 16777619 * (*(_DWORD *)(v6 + 8 * v3 + 260) ^ v7);
          *(_DWORD *)(v6 + 8 * v3 + 256) = v13;
          result = v14 & (2 * v13);
          *(_DWORD *)(v6 + 8 * v3 + 260) = v14;
          *(_DWORD *)(v6 + 8 * v3 + 248) = result;
        }
        else
        {
          *(_DWORD *)(v6 + 8 * v3 + 256) = 1;
          *(_DWORD *)(v6 + 8 * v3 + 248) = 1;
        }
      }
      ++*(_DWORD *)(v6 + 8 * v3 + 240);
      v15 = *(_DWORD *)(v6 + 8 * v3 + 244);
      if ( v15 > 0 )
      {
        result = (unsigned int)--*(_DWORD *)(v6 + 8 * v3 + 248);
        if ( (int)result <= 0 )
        {
          *(_DWORD *)(v6 + 8 * v3 + 244) = v15 - 1;
          *(_DWORD *)(v6 + 8 * v3 + 248) = *(_DWORD *)(v6 + 8 * v3 + 256);
          goto LABEL_15;
        }
      }
    }
  }
  return result;
}
