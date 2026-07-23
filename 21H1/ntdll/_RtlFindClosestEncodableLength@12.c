/*
 * XREFs of _RtlFindClosestEncodableLength@12 @ 0x4B356360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlFindClosestEncodableLength(ULONGLONG SourceLength, PULONGLONG TargetLength)
{
  int v2; // ecx
  unsigned int v3; // edx
  unsigned int v4; // edi
  unsigned int v5; // edi

  v2 = HIDWORD(SourceLength);
  v3 = SourceLength;
  if ( !HIDWORD(SourceLength) )
    goto LABEL_4;
  if ( SourceLength <= 0xFFFFFFFF00LL )
  {
    v4 = SourceLength & 0xFFFFFF00;
    if ( (_DWORD)SourceLength == (SourceLength & 0xFFFFFF00) )
    {
LABEL_4:
      *TargetLength = SourceLength;
      return 0;
    }
    v3 = v4 + 256;
    *(_DWORD *)TargetLength = v4 + 256;
    v2 = __CFADD__(v4, 256) + HIDWORD(SourceLength);
    *((_DWORD *)TargetLength + 1) = v2;
    if ( __PAIR64__(HIDWORD(SourceLength), v4) + 256 <= 0xFFFFFFFF00LL )
      return 0;
  }
  if ( __PAIR64__(v2, v3) <= 0xFFFFFFFF0000LL )
  {
    v5 = v3 & 0xFFFF0000;
    if ( v3 == (v3 & 0xFFFF0000) )
      goto LABEL_8;
    v3 = v5 + 0x10000;
    *(_DWORD *)TargetLength = v5 + 0x10000;
    v2 += __CFADD__(v5, 0x10000);
    *((_DWORD *)TargetLength + 1) = v2;
    if ( __PAIR64__(v2, v5) + 0x10000 <= 0xFFFFFFFF0000LL )
      return 0;
  }
  if ( __PAIR64__(v2, v3) <= 0xFFFFFFFF00000000uLL )
  {
    if ( v3 )
    {
      *(_DWORD *)TargetLength = 0;
      ++v2;
      goto LABEL_9;
    }
LABEL_8:
    *(_DWORD *)TargetLength = v3;
LABEL_9:
    *((_DWORD *)TargetLength + 1) = v2;
    return 0;
  }
  *TargetLength = 0LL;
  return -1073741823;
}
