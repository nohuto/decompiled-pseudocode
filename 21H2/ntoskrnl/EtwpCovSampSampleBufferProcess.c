/*
 * XREFs of EtwpCovSampSampleBufferProcess @ 0x140945D14
 * Callers:
 *     EtwpCovSampCaptureWorkerThread @ 0x140942C90 (EtwpCovSampCaptureWorkerThread.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x14026A490 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x140356100 (KeLeaveCriticalRegion.c)
 *     EtwpCovSampAcquireSamplerRundown @ 0x140942064 (EtwpCovSampAcquireSamplerRundown.c)
 *     EtwpCovSampContextAddAddresses @ 0x140942EC0 (EtwpCovSampContextAddAddresses.c)
 *     EtwpCovSampContextAddSamples @ 0x140942FBC (EtwpCovSampContextAddSamples.c)
 *     EtwpCovSampStackHashCheck @ 0x140945EE4 (EtwpCovSampStackHashCheck.c)
 */

void __fastcall EtwpCovSampSampleBufferProcess(__int64 a1, _DWORD *a2)
{
  int v4; // ebp
  _DWORD *v5; // rsi
  int v6; // r15d
  ULONG_PTR v7; // rdi
  int v8; // ecx
  __int64 v9; // r9
  int v10; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( (int)EtwpCovSampAcquireSamplerRundown(&BugCheckParameter2) < 0
    || (v4 = 0, v5 = a2 + 18, v6 = 0, (int)a2[14] <= 0) )
  {
    v7 = BugCheckParameter2;
  }
  else
  {
    v7 = BugCheckParameter2;
    do
    {
      if ( v4 + 16 > a2[16] )
        break;
      v8 = v5[1];
      v9 = HIWORD(v8) & 0x7FFF;
      if ( *v5 != v4
        || (unsigned __int16)v8 < (unsigned int)(8 * v9)
        || (unsigned int)(unsigned __int16)v8 + *v5 > a2[15] )
      {
        break;
      }
      if ( v8 >= 0 )
      {
        if ( !(unsigned int)EtwpCovSampStackHashCheck(a1, (unsigned __int16)v8, v5 + 2, v9) )
        {
          v7 = BugCheckParameter2;
          EtwpCovSampContextAddAddresses(
            BugCheckParameter2,
            (__int64)KeGetCurrentThread()->ApcState.Process,
            (_QWORD *)v5 + 1,
            *((_WORD *)v5 + 3) & 0x7FFF);
        }
      }
      else
      {
        EtwpCovSampContextAddSamples(v7, (__int64)(v5 + 2), v9);
      }
      v10 = v5[1];
      ++v6;
      v4 += (unsigned __int16)v10;
      v5 = (_DWORD *)((char *)v5 + (unsigned __int16)v10);
    }
    while ( v6 < a2[14] );
  }
  if ( v7 )
  {
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&stru_140C198C0);
    KeLeaveCriticalRegion();
  }
}
