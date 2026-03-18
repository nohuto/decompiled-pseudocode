/*
 * XREFs of PpmPerfGetCurrentState @ 0x140313FA8
 * Callers:
 *     PoGetPerfStateAndParkingInfo @ 0x140313E68 (PoGetPerfStateAndParkingInfo.c)
 *     PpmTracePerfIdleRundown @ 0x140571720 (PpmTracePerfIdleRundown.c)
 *     PopProcessorInformation @ 0x14076BECC (PopProcessorInformation.c)
 *     PpmWmiGetAllData @ 0x1408ED0EC (PpmWmiGetAllData.c)
 * Callees:
 *     PpmPerfGetCurrentFrequency @ 0x140314070 (PpmPerfGetCurrentFrequency.c)
 */

__int64 __fastcall PpmPerfGetCurrentState(
        __int64 a1,
        unsigned __int64 a2,
        _DWORD *a3,
        unsigned __int64 a4,
        _DWORD *a5,
        _DWORD *a6)
{
  _DWORD *v6; // rbx
  _DWORD *v7; // rdi
  _DWORD *v8; // r10
  __int64 result; // rax
  unsigned int v11; // ecx

  v6 = *(_DWORD **)(a1 + 33128);
  v7 = (_DWORD *)a4;
  v8 = *(_DWORD **)(a1 + 33136);
  if ( v6 && v8 )
  {
    a4 = (unsigned int)v8[18];
    result = (unsigned int)v6[92];
    if ( (unsigned int)a4 >= (unsigned int)result )
      a4 = (unsigned int)result;
    if ( a2 )
    {
      result = (unsigned int)v8[19];
      *(_DWORD *)a2 = result;
    }
    if ( a3 )
    {
      v11 = v6[92] * v6[79];
      result = 1374389535 * v11;
      a2 = v11 / 0x64;
      *a3 = a2;
    }
    if ( a5 )
    {
      result = (unsigned int)((unsigned int)a4 < v6[81]) + 1;
      *a5 = result;
    }
    if ( a6 )
    {
      result = (unsigned int)v8[8];
      *a6 = result;
      if ( v8[7] < 0x64u )
      {
        result = (unsigned int)result | 4;
        *a6 = result;
      }
    }
  }
  else
  {
    if ( a2 )
      *(_DWORD *)a2 = *(_DWORD *)(a1 + 68);
    if ( a3 )
      *a3 = *(_DWORD *)(a1 + 68);
    if ( a5 )
      *a5 = 0;
    result = (__int64)a6;
    if ( a6 )
      *a6 = 0;
  }
  if ( v7 )
  {
    LOBYTE(a2) = 1;
    result = PpmPerfGetCurrentFrequency(a1, a2, a3, a4);
    *v7 = result;
  }
  return result;
}
