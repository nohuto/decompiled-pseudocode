/*
 * XREFs of _RtlCopySidAndAttributesArray@28 @ 0x4B346110
 * Callers:
 *     <none>
 * Callees:
 *     _RtlCopySid@12 @ 0x4B2D6820 (_RtlCopySid@12.c)
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
  ULONG v9; // edi
  DWORD *p_Attributes; // ecx
  unsigned int v11; // edx
  unsigned int v13; // [esp+Ch] [ebp-Ch]
  DWORD *v14; // [esp+14h] [ebp-4h]

  v9 = 0;
  if ( Count )
  {
    p_Attributes = &Dest->Attributes;
    v14 = &Dest->Attributes;
    while ( 1 )
    {
      v11 = 4 * *((unsigned __int8 *)Src[v9].Sid + 1) + 8;
      v13 = v11;
      if ( v11 > SidAreaSize )
        return -1073741789;
      SidAreaSize -= v11;
      *(p_Attributes - 1) = (DWORD)SidArea;
      *p_Attributes = *(DWORD *)((char *)p_Attributes + (char *)Src - (char *)Dest);
      RtlCopySid(v11, SidArea, Src[v9].Sid);
      SidArea = (char *)SidArea + v13;
      ++v9;
      p_Attributes = v14 + 2;
      v14 += 2;
      if ( v9 >= Count )
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
