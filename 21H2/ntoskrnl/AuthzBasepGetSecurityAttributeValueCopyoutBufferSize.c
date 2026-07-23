/*
 * XREFs of AuthzBasepGetSecurityAttributeValueCopyoutBufferSize @ 0x1402F350C
 * Callers:
 *     AuthzBasepGetSecurityAttributesCopyoutBufferSize @ 0x1402F3190 (AuthzBasepGetSecurityAttributesCopyoutBufferSize.c)
 * Callees:
 *     RtlULongLongMult @ 0x1402F35E8 (RtlULongLongMult.c)
 */

NTSTATUS __fastcall AuthzBasepGetSecurityAttributeValueCopyoutBufferSize(__int64 a1, unsigned __int64 *a2)
{
  unsigned __int16 v2; // ax
  unsigned __int64 v3; // r8
  NTSTATUS result; // eax
  ULONGLONG v6; // r10
  unsigned __int64 v7; // rcx
  ULONGLONG v8; // r10
  __int64 v9; // r11
  __int64 ***v10; // r11
  __int64 **v11; // rdx
  unsigned __int64 v12; // r8
  ULONGLONG v13; // r10
  __int64 v14; // r11
  __int64 ***v15; // r11
  __int64 **v16; // rdx
  unsigned __int64 v17; // r8
  ULONGLONG v18; // r10
  __int64 v19; // r11
  __int64 ***v20; // r11
  __int64 **v21; // rdx
  unsigned __int64 v22; // r8
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_WORD *)(a1 + 48);
  v3 = *a2;
  pullResult = 0LL;
  if ( !v2 )
    return -1073741811;
  if ( v2 <= 2u )
  {
LABEL_3:
    if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) >= v3 )
    {
      result = RtlULongLongMult(8uLL, *(unsigned int *)(a1 + 60), &pullResult);
      if ( result < 0 )
        return result;
      v7 = v6 + pullResult;
      if ( v6 + pullResult >= v6 )
        goto LABEL_6;
    }
    return -1073741675;
  }
  if ( v2 == 3 )
  {
    if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
      return -1073741675;
    result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
    if ( result >= 0 )
    {
      v7 = v8 + pullResult;
      if ( v8 + pullResult < v8 )
        return -1073741675;
      v10 = (__int64 ***)(v9 + 72);
      v11 = *v10;
      while ( v11 != (__int64 **)v10 )
      {
        v12 = v7 + *((unsigned __int16 *)v11 + 20);
        if ( v12 < v7 )
          return -1073741675;
        v11 = (__int64 **)*v11;
        v7 = v12;
      }
LABEL_6:
      *a2 = v7;
      return 0;
    }
    return result;
  }
  if ( v2 == 4 )
  {
    if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
      return -1073741675;
    result = RtlULongLongMult(0x18uLL, *(unsigned int *)(a1 + 60), &pullResult);
    if ( result >= 0 )
    {
      v7 = v18 + pullResult;
      if ( v18 + pullResult < v18 )
        return -1073741675;
      v20 = (__int64 ***)(v19 + 72);
      v21 = *v20;
      while ( v21 != (__int64 **)v20 )
      {
        v22 = v7 + *((unsigned __int16 *)v21 + 24);
        if ( v22 < v7 )
          return -1073741675;
        v21 = (__int64 **)*v21;
        v7 = v22;
      }
      goto LABEL_6;
    }
    return result;
  }
  if ( v2 != 5 )
  {
    if ( v2 == 6 )
      goto LABEL_3;
    if ( v2 != 16 )
      return -1073741811;
  }
  if ( ((v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL) < v3 )
    return -1073741675;
  result = RtlULongLongMult(0x10uLL, *(unsigned int *)(a1 + 60), &pullResult);
  if ( result >= 0 )
  {
    v7 = v13 + pullResult;
    if ( v13 + pullResult < v13 )
      return -1073741675;
    v15 = (__int64 ***)(v14 + 72);
    v16 = *v15;
    while ( v16 != (__int64 **)v15 )
    {
      v17 = v7 + *((unsigned int *)v16 + 12);
      if ( v17 < v7 )
        return -1073741675;
      v16 = (__int64 **)*v16;
      v7 = v17;
    }
    goto LABEL_6;
  }
  return result;
}
