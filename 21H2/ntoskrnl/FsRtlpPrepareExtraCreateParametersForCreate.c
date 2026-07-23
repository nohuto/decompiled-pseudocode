/*
 * XREFs of FsRtlpPrepareExtraCreateParametersForCreate @ 0x14069BE44
 * Callers:
 *     IoQueryInformationByName @ 0x1405D8B10 (IoQueryInformationByName.c)
 *     IoCreateFileEx @ 0x14069AD20 (IoCreateFileEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 */

__int64 __fastcall FsRtlpPrepareExtraCreateParametersForCreate(ULONG_PTR BugCheckParameter4)
{
  int v1; // edx
  char v2; // r8
  int v3; // edx
  __int64 *v4; // rax

  v1 = *(_DWORD *)(BugCheckParameter4 + 4);
  if ( (v1 & 9) != 0 )
  {
    v2 = 0;
    if ( (*(_DWORD *)(BugCheckParameter4 + 4) & 0x3F0) == 0x3F0 )
      return 3221226539LL;
    v3 = v1 + 16;
  }
  else
  {
    v2 = 1;
    v3 = v1 | 1;
  }
  *(_DWORD *)(BugCheckParameter4 + 4) = v3;
  v4 = *(__int64 **)(BugCheckParameter4 + 8);
  if ( v4 == (__int64 *)(BugCheckParameter4 + 8) )
    KeBugCheckEx(0x10Cu, 0x15uLL, 0LL, 0LL, BugCheckParameter4);
  do
  {
    if ( v2 )
      *((_DWORD *)v4 + 10) |= 1u;
    v4 = (__int64 *)*v4;
  }
  while ( v4 != (__int64 *)(BugCheckParameter4 + 8) );
  return 0LL;
}
