/*
 * XREFs of RtlStringLengthWorkerW_0 @ 0x14350C
 * Callers:
 *     ?RtlStringCchCatW@@YGJPAGIPBG@Z @ 0x14346B (-RtlStringCchCatW@@YGJPAGIPBG@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringLengthWorkerW_0(STRSAFE_PCNZWCH psz, size_t cchMax, size_t *pcchLength)
{
  int v3; // edx
  _WORD *v4; // ecx
  int i; // esi
  NTSTATUS result; // eax

  for ( i = v3; v3; --v3 )
  {
    if ( !*v4 )
      break;
    ++v4;
  }
  result = v3 != 0 ? 0 : -1073741811;
  if ( psz )
  {
    if ( v3 )
      *(_DWORD *)psz = i - v3;
    else
      *(_DWORD *)psz = 0;
  }
  return result;
}
