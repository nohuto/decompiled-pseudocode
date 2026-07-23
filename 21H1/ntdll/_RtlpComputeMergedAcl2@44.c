/*
 * XREFs of _RtlpComputeMergedAcl2@44 @ 0x4B3478EE
 * Callers:
 *     _RtlpComputeMergedAcl@40 @ 0x4B347AD5 (_RtlpComputeMergedAcl@40.c)
 * Callees:
 *     _RtlCreateAcl@12 @ 0x4B2D7BF0 (_RtlCreateAcl@12.c)
 *     _RtlpCopyAces@56 @ 0x4B2D886D (_RtlpCopyAces@56.c)
 */

int __fastcall RtlpComputeMergedAcl2(
        unsigned __int8 *a1,
        __int16 a2,
        unsigned __int8 *a3,
        __int16 a4,
        unsigned __int8 *a5,
        unsigned __int8 *a6,
        GENERIC_MAPPING *a7,
        int a8,
        ULONG *a9,
        PACL Acl,
        _DWORD *a11)
{
  char v11; // bh
  ULONG *v12; // edi
  char v13; // bl
  int result; // eax
  unsigned int v15; // eax
  ULONG v16; // [esp-8h] [ebp-2Ch]
  int v19; // [esp+14h] [ebp-10h] BYREF
  int v20; // [esp+18h] [ebp-Ch] BYREF
  unsigned int v21; // [esp+1Ch] [ebp-8h]
  bool v22; // [esp+23h] [ebp-1h]

  v20 = 0;
  v19 = 0;
  v11 = 0;
  v12 = a9;
  v13 = 1;
  v16 = *a9;
  v21 = 2;
  RtlCreateAcl(Acl, v16, 2u);
  *a11 = 1024;
  if ( (a4 & 0x1000) != 0 )
  {
    *a11 = 5120;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v21 = *a3;
      result = RtlpCopyAces((int)a3, a7, 2, 16, 1, a5, a6, (int)a5, (int)a6, 1, 0, a8, (unsigned int *)&v20, Acl);
LABEL_6:
      if ( result == -1073741789 )
      {
        v11 = 1;
        result = 0;
      }
      if ( result < 0 )
        return result;
      v13 = 0;
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  if ( (a2 & 0x1000) == 0 )
  {
    v22 = a8 != 1;
    if ( a3 )
    {
      if ( *a3 >= 2u )
        v21 = *a3;
      result = RtlpCopyAces((int)a3, a7, 1, 0, 1, a5, a6, (int)a5, (int)a6, 1, 0, a8, (unsigned int *)&v20, Acl);
      if ( result == -1073741789 )
      {
        v11 = 1;
        result = 0;
      }
      if ( result < 0 )
        return result;
      v13 = *((_WORD *)a3 + 2) != 0 && v22;
    }
    else
    {
      v13 = a8 != 1;
      if ( a8 == 1 )
        return -1073741705;
    }
    if ( a1 )
    {
      if ( v21 <= *a1 )
        v21 = *a1;
      result = RtlpCopyAces((int)a1, a7, 0, 0, 0, 0, 0, 0, 0, 1, 0, a8, (unsigned int *)&v19, Acl);
      if ( result == -1073741789 )
      {
        v11 = 1;
        result = 0;
      }
      if ( result < 0 )
        return result;
    }
    v12 = a9;
    goto LABEL_16;
  }
  if ( a3 )
  {
    if ( *a3 >= 2u )
      v21 = *a3;
    result = RtlpCopyAces((int)a3, a7, 2, 0, 1, a5, a6, (int)a5, (int)a6, 1, 1, a8, (unsigned int *)&v20, Acl);
    goto LABEL_6;
  }
  if ( a8 == 1 )
    return -1073741705;
LABEL_16:
  if ( v19 + v20 || !v13 )
  {
    v15 = v19 + v20 + 8;
    if ( v15 > 0xFFFF )
      return -1073741699;
    *v12 = v15;
    if ( v11 )
      return -1073741789;
    Acl->AclSize = v15;
    Acl->AclRevision = v21;
  }
  else
  {
    *v12 = 0;
  }
  return 0;
}
