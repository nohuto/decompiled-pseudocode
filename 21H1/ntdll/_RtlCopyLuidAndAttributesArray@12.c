/*
 * XREFs of _RtlCopyLuidAndAttributesArray@12 @ 0x4B3460D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __cdecl RtlCopyLuidAndAttributesArray(ULONG Count, PLUID_AND_ATTRIBUTES Src, PLUID_AND_ATTRIBUTES Dest)
{
  ULONG v3; // ecx
  PLUID_AND_ATTRIBUTES v4; // eax
  _DWORD *p_LowPart; // edi
  _DWORD *v6; // esi

  v3 = Count;
  if ( Count )
  {
    v4 = Dest;
    do
    {
      p_LowPart = &v4->Luid.LowPart;
      v6 = (unsigned int *)((char *)&v4->Luid.LowPart + (char *)Src - (char *)Dest);
      ++v4;
      *p_LowPart = *v6++;
      *++p_LowPart = *v6;
      p_LowPart[1] = v6[1];
      --v3;
    }
    while ( v3 );
  }
}
