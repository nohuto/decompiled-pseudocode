/*
 * XREFs of FsRtlpHeatUnregisterVolume @ 0x14088D3C0
 * Callers:
 *     FsRtlHeatUninit @ 0x14088D210 (FsRtlHeatUninit.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpHeatUnregisterVolume(_QWORD *a1)
{
  __int64 *i; // rcx
  __int64 v3; // rdx
  __int64 *v5; // rax
  __int64 **v6; // rdx

  ExAcquireResourceExclusiveLite(&Resource, 1u);
  for ( i = (__int64 *)FsRtlTieringHeatData; i != &FsRtlTieringHeatData; i = (__int64 *)*i )
  {
    v3 = *(__int64 *)((char *)i + 20) - *a1;
    if ( !v3 )
      v3 = *(__int64 *)((char *)i + 28) - a1[1];
    if ( !v3 )
    {
      if ( (*((_DWORD *)i + 4))-- == 1 )
      {
        v5 = (__int64 *)*i;
        if ( *(__int64 **)(*i + 8) != i || (v6 = (__int64 **)i[1], *v6 != i) )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = (__int64)v6;
        ExFreePoolWithTag(i, 0x68745346u);
      }
      break;
    }
  }
  ExReleaseResourceLite(&Resource);
}
