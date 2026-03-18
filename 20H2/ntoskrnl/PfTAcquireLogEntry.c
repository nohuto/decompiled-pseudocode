/*
 * XREFs of PfTAcquireLogEntry @ 0x14064C200
 * Callers:
 *     PfpCopyEvent @ 0x14064B5D0 (PfpCopyEvent.c)
 *     PfpFlushBuffers @ 0x14064B810 (PfpFlushBuffers.c)
 * Callees:
 *     PfTReplaceCurrentBuffer @ 0x14064C284 (PfTReplaceCurrentBuffer.c)
 */

__int64 __fastcall PfTAcquireLogEntry(__int64 a1, _DWORD *a2, int a3)
{
  __int64 result; // rax
  int v7; // edx

  result = *(_QWORD *)(a1 + 24);
  if ( (unsigned int)(a3 + *(_DWORD *)(result + 16)) > *(_DWORD *)(result + 20) )
  {
    while ( (unsigned int)PfTReplaceCurrentBuffer(a1) != -1073741823 )
    {
      result = *(_QWORD *)(a1 + 24);
      if ( (unsigned int)(a3 + *(_DWORD *)(result + 16)) <= *(_DWORD *)(result + 20) )
        goto LABEL_2;
    }
    result = 0LL;
    *a2 = 0xFFFF;
  }
  else
  {
LABEL_2:
    v7 = *(_DWORD *)(result + 16);
    *a2 = v7;
    *(_DWORD *)(result + 16) = v7 + a3;
  }
  return result;
}
