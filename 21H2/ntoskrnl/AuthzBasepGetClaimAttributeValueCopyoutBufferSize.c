/*
 * XREFs of AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x14096CDC4
 * Callers:
 *     AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x14096CFB0 (AuthzBasepGetClaimAttributesCopyoutBufferSize.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 */

NTSTATUS __fastcall AuthzBasepGetClaimAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v3; // r8
  NTSTATUS result; // eax
  ULONGLONG v6; // r10
  __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 ***v9; // r11
  __int64 **v10; // rdx
  unsigned __int64 v11; // r8
  ULONGLONG v12; // r10
  __int64 v13; // r11
  __int64 ***v14; // r11
  __int64 **j; // rdx
  unsigned __int64 v16; // r8
  ULONGLONG v17; // r10
  __int64 v18; // r11
  __int64 ***v19; // r11
  __int64 **i; // rdx
  unsigned __int64 v21; // r8
  ULONGLONG v22; // r10
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 48);
  v3 = *a2;
  pullResult = 0LL;
  if ( !v2 )
    return -1073741811;
  if ( v2 <= 2u )
    goto LABEL_35;
  switch ( v2 )
  {
    case 3u:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v8 = v17 + pullResult;
      if ( v17 + pullResult < v17 )
        return -1073741675;
      v19 = (__int64 ***)(v18 + 72);
      for ( i = *v19; i != (__int64 **)v19; i = (__int64 **)*i )
      {
        v21 = v8 + *((unsigned __int16 *)i + 20);
        if ( v21 < v8 )
          return -1073741675;
        v8 = v21 + 2;
        if ( v21 + 2 < v21 )
          return -1073741675;
      }
      goto LABEL_38;
    case 4u:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v8 = v12 + pullResult;
      if ( v12 + pullResult < v12 )
        return -1073741675;
      v14 = (__int64 ***)(v13 + 72);
      for ( j = *v14; j != (__int64 **)v14; j = (__int64 **)*j )
      {
        v16 = v8 + *((unsigned __int16 *)j + 24);
        if ( v16 < v8 )
          return -1073741675;
        v8 = v16 + 2;
        if ( v16 + 2 < v16 )
          return -1073741675;
      }
LABEL_38:
      *a2 = v8;
      return 0;
    case 5u:
      goto LABEL_8;
    case 6u:
LABEL_35:
      if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
        return -1073741675;
      result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v8 = v22 + pullResult;
      if ( v22 + pullResult < v22 )
        return -1073741675;
      goto LABEL_38;
  }
  if ( v2 != 16 )
    return -1073741811;
LABEL_8:
  if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
    return -1073741675;
  result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
  if ( result >= 0 )
  {
    v8 = v6 + pullResult;
    if ( v6 + pullResult < v6 )
      return -1073741675;
    v9 = (__int64 ***)(v7 + 72);
    v10 = *v9;
    while ( v10 != (__int64 **)v9 )
    {
      v11 = v8 + *((unsigned int *)v10 + 12);
      if ( v11 < v8 )
        return -1073741675;
      v10 = (__int64 **)*v10;
      v8 = v11;
    }
    goto LABEL_38;
  }
  return result;
}
