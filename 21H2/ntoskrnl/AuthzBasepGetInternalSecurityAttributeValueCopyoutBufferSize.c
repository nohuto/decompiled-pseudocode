/*
 * XREFs of AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x1402A7314
 * Callers:
 *     AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x1406CBD50 (AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned int *a2)
{
  unsigned int v4; // r8d
  unsigned __int64 v5; // rax
  unsigned int v6; // ecx
  unsigned __int16 v7; // dx
  __int64 result; // rax
  __int64 ***v9; // r9
  __int64 **v10; // rdx
  unsigned int v11; // r8d
  __int64 **v12; // r9
  __int64 *v13; // rdx
  unsigned int v14; // r8d
  __int64 ***v15; // r9
  __int64 **v16; // rdx
  unsigned int v17; // r8d

  v4 = (*a2 + 7) & 0xFFFFFFF8;
  if ( v4 < *a2 )
    return 3221225621LL;
  v5 = (unsigned __int64)*(unsigned int *)(a1 + 60) << 6;
  if ( v5 > 0xFFFFFFFF )
    return 3221225621LL;
  v6 = v4 + v5;
  if ( v4 + (unsigned int)v5 < v4 )
    return 3221225621LL;
  v7 = *(_WORD *)(a1 + 48);
  result = 0LL;
  if ( !v7 )
  {
LABEL_15:
    result = 3221225485LL;
    goto LABEL_6;
  }
  if ( v7 <= 2u )
    goto LABEL_6;
  switch ( v7 )
  {
    case 3u:
      v9 = (__int64 ***)(a1 + 72);
      v10 = *v9;
      while ( v10 != (__int64 **)v9 )
      {
        v11 = v6 + *((unsigned __int16 *)v10 + 20);
        if ( v11 < v6 )
          return 3221225621LL;
        v10 = (__int64 **)*v10;
        v6 = v11;
      }
      goto LABEL_6;
    case 4u:
      v15 = (__int64 ***)(a1 + 72);
      v16 = *v15;
      while ( v16 != (__int64 **)v15 )
      {
        v17 = v6 + *((unsigned __int16 *)v16 + 24);
        if ( v17 < v6 )
          return 3221225621LL;
        v16 = (__int64 **)*v16;
        v6 = v17;
      }
      goto LABEL_6;
    case 5u:
LABEL_20:
      v12 = (__int64 **)(a1 + 72);
      v13 = *v12;
      while ( v13 != (__int64 *)v12 )
      {
        v14 = v6 + *((_DWORD *)v13 + 12);
        if ( v14 < v6 )
          return 3221225621LL;
        v13 = (__int64 *)*v13;
        v6 = v14;
      }
      goto LABEL_6;
  }
  if ( v7 != 6 )
  {
    if ( v7 == 16 )
      goto LABEL_20;
    goto LABEL_15;
  }
LABEL_6:
  if ( (int)result >= 0 )
    *a2 = v6;
  return result;
}
