/*
 * XREFs of RtlCopySidAndAttributesArray @ 0x1800E64B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlCopySid @ 0x180068900 (RtlCopySid.c)
 */

NTSTATUS __cdecl RtlCopySidAndAttributesArray(
        ULONG Count,
        PSID_AND_ATTRIBUTES Src,
        ULONG SidAreaSize,
        PSID_AND_ATTRIBUTES Dest,
        PSID SidArea,
        PSID *RemainingSidArea,
        PULONG RemainingSidAreaSize)
{
  ULONG v8; // r15d
  DWORD *p_Attributes; // rbx
  signed __int64 v12; // rdi
  unsigned int v13; // r14d

  v8 = 0;
  if ( Count )
  {
    p_Attributes = &Dest->Attributes;
    v12 = (char *)Src - (char *)Dest;
    while ( 1 )
    {
      v13 = 4 * *(unsigned __int8 *)(*(_QWORD *)((char *)p_Attributes + v12 - 8) + 1LL) + 8;
      if ( v13 > SidAreaSize )
        return -1073741789;
      *((_QWORD *)p_Attributes - 1) = SidArea;
      *p_Attributes = *(DWORD *)((char *)p_Attributes + v12);
      SidAreaSize -= v13;
      RtlCopySid(v13, SidArea, *(PSID *)((char *)p_Attributes + v12 - 8));
      ++v8;
      SidArea = (char *)SidArea + v13;
      p_Attributes += 4;
      if ( v8 >= Count )
        goto LABEL_5;
    }
  }
  else
  {
LABEL_5:
    *RemainingSidArea = SidArea;
    *RemainingSidAreaSize = SidAreaSize;
    return 0;
  }
}
