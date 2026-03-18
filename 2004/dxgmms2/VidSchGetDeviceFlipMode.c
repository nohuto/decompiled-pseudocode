/*
 * XREFs of VidSchGetDeviceFlipMode @ 0x1C00853E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchGetDeviceFlipMode(__int64 a1, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // rbp
  int v6; // eax
  int v7; // edi
  __int64 v9; // rax

  v3 = *(_DWORD *)(a1 + 960);
  v4 = *(_QWORD *)(a1 + 32);
  v5 = (unsigned int)a2;
  if ( v3 == 1 )
  {
    *a3 = 0;
  }
  else
  {
    if ( v3 == 2 )
    {
      *a3 = 1;
      v6 = 1;
    }
    else
    {
      v6 = *a3;
    }
    if ( v6 )
    {
      if ( (unsigned int)(v6 - 1) > 3 )
        return 0LL;
      if ( *(int *)(v4 + 2456) < 4 && !*(_BYTE *)(v4 + 148) )
        return *(unsigned int *)(v4 + 2456);
      if ( (unsigned int)a2 >= *(_DWORD *)(v4 + 40) )
      {
        v9 = WdLogNewEntry5_WdAssertion(1LL, a2, a3);
        *(_QWORD *)(v9 + 24) = v5;
        WdLogEvent5_WdAssertion(v9);
      }
      else
      {
        ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1072), 1u);
        v7 = *(_DWORD *)(v4 + 2128);
        ExReleaseResourceLite((PERESOURCE)(v4 + 1072));
        if ( _bittest(&v7, v5) )
          return *(unsigned int *)(v4 + 2456);
      }
    }
  }
  return *(unsigned int *)(v4 + 2452);
}
