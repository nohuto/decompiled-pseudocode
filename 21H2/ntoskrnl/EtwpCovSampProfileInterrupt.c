/*
 * XREFs of EtwpCovSampProfileInterrupt @ 0x1405AF7F0
 * Callers:
 *     <none>
 * Callees:
 *     EtwpCovSampCaptureSample @ 0x1405AF408 (EtwpCovSampCaptureSample.c)
 */

__int64 __fastcall EtwpCovSampProfileInterrupt(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 result; // rax
  unsigned __int64 v5; // r8
  unsigned int v6; // eax
  unsigned int v7; // ecx
  __int64 v8; // r8
  __int64 v9; // r10
  int v10; // r9d
  int v11; // ebx
  int v12; // ecx
  int v13; // r11d
  unsigned int v14; // r11d
  unsigned int v15; // r11d
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // ecx
  unsigned __int64 v19; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  result = (__int64)KeGetCurrentThread();
  if ( (_KTHREAD *)result != CurrentPrcb->IdleThread || CurrentPrcb->NestingLevel > 1u )
  {
    v5 = *(_QWORD *)(a2 + 8);
    v6 = ((unsigned int)v5 >> 13) & 0x3FFFF;
    _BitScanReverse(&v7, v6);
    v8 = (v5 >> 4) & 0x1FF;
    v9 = *(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v7 - 2) + 8LL * (v6 ^ (1 << v7)) + 8);
    if ( !*(_DWORD *)(v9 + 8 * v8 + 144) )
    {
LABEL_13:
      v19 = *(_QWORD *)(a1 + 360);
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 8 * v8 + 320));
      return EtwpCovSampCaptureSample(v19, 0x50000002u);
    }
    v10 = MEMORY[0xFFFFF78000000320];
    result = (unsigned int)(MEMORY[0xFFFFF78000000320] - *(_DWORD *)(v9 + 8 * v8 + 148));
    if ( (unsigned int)result > *(_DWORD *)(v9 + 8 * v8 + 152) )
    {
      v11 = *(_DWORD *)(v9 + 8 * v8 + 144);
      *(_DWORD *)(v9 + 8 * v8 + 164) += v11;
      v12 = *(_DWORD *)(v9 + 8 * v8 + 164);
      v13 = *(_DWORD *)(v9 + 8 * v8 + 160);
      result = (unsigned int)(2 * v11);
      if ( v12 > *(_DWORD *)(v9 + 8 * v8 + 156) )
        v12 = *(_DWORD *)(v9 + 8 * v8 + 156);
      *(_DWORD *)(v9 + 8 * v8 + 148) = v10;
      v14 = *(_DWORD *)(v9 + 8 * v8 + 172) + v13;
      *(_DWORD *)(v9 + 8 * v8 + 160) = 0;
      v15 = v14 >> 1;
      *(_DWORD *)(v9 + 8 * v8 + 164) = v12;
      *(_DWORD *)(v9 + 8 * v8 + 172) = v15;
      if ( v15 >= (unsigned int)result )
      {
        v16 = v15 / (v11 + 1);
        v17 = 16777619 * (*(_DWORD *)(v9 + 8 * v8 + 180) ^ v10);
        *(_DWORD *)(v9 + 8 * v8 + 176) = v16;
        result = v17 & (2 * v16);
        *(_DWORD *)(v9 + 8 * v8 + 180) = v17;
        *(_DWORD *)(v9 + 8 * v8 + 168) = result;
      }
      else
      {
        *(_DWORD *)(v9 + 8 * v8 + 176) = 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = 1;
      }
    }
    ++*(_DWORD *)(v9 + 8 * v8 + 160);
    v18 = *(_DWORD *)(v9 + 8 * v8 + 164);
    if ( v18 > 0 )
    {
      result = (unsigned int)--*(_DWORD *)(v9 + 8 * v8 + 168);
      if ( (int)result <= 0 )
      {
        *(_DWORD *)(v9 + 8 * v8 + 164) = v18 - 1;
        *(_DWORD *)(v9 + 8 * v8 + 168) = *(_DWORD *)(v9 + 8 * v8 + 176);
        goto LABEL_13;
      }
    }
  }
  return result;
}
