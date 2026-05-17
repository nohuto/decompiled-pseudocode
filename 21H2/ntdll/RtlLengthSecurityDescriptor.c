/*
 * XREFs of RtlLengthSecurityDescriptor @ 0x180072420
 * Callers:
 *     RtlNormalizeSecurityDescriptor @ 0x1800E6810 (RtlNormalizeSecurityDescriptor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthSecurityDescriptor(__int64 a1)
{
  __int16 v1; // r8
  unsigned int v2; // edx
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v7; // rax

  v1 = *(_WORD *)(a1 + 2);
  v2 = ((v1 >> 31) & 0xFFFFFFEC) + 40;
  if ( v1 >= 0 )
  {
    v3 = *(_QWORD *)(a1 + 8);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 4) )
      goto LABEL_6;
    v3 = a1 + *(unsigned int *)(a1 + 4);
  }
  if ( v3 )
    v2 += (4 * *(unsigned __int8 *)(v3 + 1) + 11) & 0xFFFFFFFC;
LABEL_6:
  if ( v1 >= 0 )
  {
    v4 = *(_QWORD *)(a1 + 16);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 8) )
      goto LABEL_11;
    v4 = a1 + *(unsigned int *)(a1 + 8);
  }
  if ( v4 )
    v2 += (4 * *(unsigned __int8 *)(v4 + 1) + 11) & 0xFFFFFFFC;
LABEL_11:
  if ( (v1 & 4) == 0 )
    goto LABEL_17;
  if ( v1 >= 0 )
  {
    v5 = *(_QWORD *)(a1 + 32);
  }
  else
  {
    if ( !*(_DWORD *)(a1 + 16) )
      goto LABEL_17;
    v5 = a1 + *(unsigned int *)(a1 + 16);
  }
  if ( v5 )
    v2 += (*(unsigned __int16 *)(v5 + 2) + 3) & 0xFFFFFFFC;
LABEL_17:
  if ( (v1 & 0x10) != 0 )
  {
    if ( v1 >= 0 )
    {
      v7 = *(_QWORD *)(a1 + 24);
    }
    else
    {
      if ( !*(_DWORD *)(a1 + 12) )
        return v2;
      v7 = a1 + *(unsigned int *)(a1 + 12);
    }
    if ( v7 )
      v2 += (*(unsigned __int16 *)(v7 + 2) + 3) & 0xFFFFFFFC;
  }
  return v2;
}
