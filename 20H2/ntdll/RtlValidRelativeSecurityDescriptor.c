/*
 * XREFs of RtlValidRelativeSecurityDescriptor @ 0x180073C10
 * Callers:
 *     <none>
 * Callees:
 *     RtlValidAcl @ 0x180037760 (RtlValidAcl.c)
 *     RtlpValidateSDOffsetAndSize @ 0x180073D80 (RtlpValidateSDOffsetAndSize.c)
 */

char __fastcall RtlValidRelativeSecurityDescriptor(__int64 a1, __int64 a2, char a3)
{
  char v3; // r10
  unsigned int v4; // edi
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v18; // [rsp+38h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  if ( (unsigned int)a2 < 0x14 || *(_BYTE *)a1 != 1 || *(__int16 *)(a1 + 2) >= 0 )
    return 0;
  v6 = *(unsigned int *)(a1 + 4);
  v7 = 12LL;
  if ( (_DWORD)v6 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v6, a2, 12LL, &v18)
      || *(_BYTE *)(v8 + a1) != 1
      || *(_BYTE *)(v8 + a1 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*(unsigned __int8 *)(v8 + a1 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 1) != 0 )
  {
    return 0;
  }
  v9 = *(unsigned int *)(a1 + 8);
  if ( (_DWORD)v9 )
  {
    if ( !(unsigned __int8)RtlpValidateSDOffsetAndSize(v9, v4, v7, &v18)
      || *(_BYTE *)(v10 + a1) != 1
      || *(_BYTE *)(v10 + a1 + 1) > 0xFu
      || v18 < 4 * (unsigned int)*(unsigned __int8 *)(v10 + a1 + 1) + 8 )
    {
      return 0;
    }
  }
  else if ( (v3 & 2) != 0 )
  {
    return 0;
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) == 0
    || (v11 = *(unsigned int *)(a1 + 16), !(_DWORD)v11)
    || (unsigned __int8)RtlpValidateSDOffsetAndSize(v11, v4, 8LL, &v18)
    && (v13 = a1 + v12, v18 >= *(unsigned __int16 *)(v13 + 2))
    && RtlValidAcl(v13) )
  {
    if ( (*(_BYTE *)(a1 + 2) & 0x10) == 0 )
      return 1;
    v14 = *(unsigned int *)(a1 + 12);
    if ( !(_DWORD)v14 )
      return 1;
    if ( (unsigned __int8)RtlpValidateSDOffsetAndSize(v14, v4, 8LL, &v18) )
    {
      v16 = a1 + v15;
      if ( v18 >= *(unsigned __int16 *)(v16 + 2) )
      {
        if ( RtlValidAcl(v16) )
          return 1;
      }
    }
  }
  return 0;
}
