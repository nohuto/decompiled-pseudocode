/*
 * XREFs of RtlStringLengthWorkerW @ 0xE454A
 * Callers:
 *     ?RtlStringCbCatW@@YGJPAGIPBG@Z @ 0xE44C0 (-RtlStringCbCatW@@YGJPAGIPBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  _WORD *v3; // ecx
  int v4; // edx
  NTSTATUS result; // eax

  v4 = 130;
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v4;
  }
  while ( v4 );
  result = v4 != 0 ? 0 : -1073741811;
  if ( psz )
  {
    if ( v4 )
      *(_DWORD *)psz = 130 - v4;
    else
      *(_DWORD *)psz = 0;
  }
  return result;
}
