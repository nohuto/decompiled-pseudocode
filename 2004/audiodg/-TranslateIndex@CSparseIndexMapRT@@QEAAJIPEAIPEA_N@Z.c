/*
 * XREFs of ?TranslateIndex@CSparseIndexMapRT@@QEAAJIPEAIPEA_N@Z @ 0x140064220
 * Callers:
 *     ?GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140063950 (-GetObjectMetadata@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z @ 0x140063A20 (-GetObjectProperties@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAXPEAI@Z.c)
 *     ?GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z @ 0x140063AF0 (-GetObjectSampleBuffer@CSpatialCrossProcessClientOutputEndpoint@@UEAAJIPEAPEAMPEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSparseIndexMapRT::TranslateIndex(
        CSparseIndexMapRT *this,
        unsigned int a2,
        unsigned int *a3,
        bool *a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  __int64 v6; // rdx

  result = 2147942487LL;
  *a4 = 0;
  if ( a2 < *(_DWORD *)this )
  {
    v5 = a2;
    v6 = *((_QWORD *)this + 3);
    if ( !*(_DWORD *)(v6 + 4 * v5) )
    {
      *(_DWORD *)(v6 + 4 * v5) = ++*((_DWORD *)this + 1);
      v6 = *((_QWORD *)this + 3);
      *a4 = 1;
    }
    *a3 = *(_DWORD *)(v6 + 4 * v5) - 1;
    return 0LL;
  }
  return result;
}
