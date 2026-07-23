/*
 * XREFs of ApiSetQuerySchemaInfo @ 0x1800690C4
 * Callers:
 *     ApiSetQueryApiSetPresenceEx @ 0x1800690A0 (ApiSetQueryApiSetPresenceEx.c)
 * Callees:
 *     RtlCompareUnicodeString @ 0x180016090 (RtlCompareUnicodeString.c)
 *     ApiSetpSearchForApiSet @ 0x18001D6F0 (ApiSetpSearchForApiSet.c)
 */

__int64 __fastcall ApiSetQuerySchemaInfo(_DWORD *a1, unsigned __int16 *a2, bool *a3, bool *a4)
{
  __int64 v4; // rdi
  unsigned int v5; // ebx
  bool v9; // bp
  bool v10; // r14
  char v11; // r10
  unsigned __int64 v12; // r9
  const WCHAR *v13; // rsi
  _WORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // edx
  unsigned int v17; // edi
  unsigned int v18; // eax
  _WORD *v19; // r9
  int v20; // r10d
  int v21; // eax
  unsigned int *v22; // rax
  unsigned int *v23; // rdx
  unsigned int v24; // r10d
  unsigned int v25; // r9d
  _WORD *v26; // r8
  _WORD *v27; // r8
  int v28; // r9d
  int v30; // eax
  _UNICODE_STRING String2; // [rsp+20h] [rbp-48h] BYREF
  _UNICODE_STRING String1; // [rsp+30h] [rbp-38h] BYREF

  v4 = *a2;
  v5 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( (unsigned int)v4 >= 8 )
  {
    v12 = **((_QWORD **)a2 + 1) & 0xFFFFFFDFFFDFFFDFuLL;
    if ( v12 == 0x2D004900500041LL || v12 == 0x2D005400580045LL )
      v11 = 1;
  }
  v13 = (const WCHAR *)*((_QWORD *)a2 + 1);
  if ( !v11 )
  {
    String1.Buffer = (wchar_t *)*((_QWORD *)a2 + 1);
    String2.Buffer = L"SchemaExt-";
    *(_DWORD *)&String1.Length = 1310740;
    *(_DWORD *)&String2.Length = 1310740;
    if ( !RtlCompareUnicodeString(&String1, &String2, 1u) )
    {
      v9 = ApiSetpSearchForApiSet(a1, v13, (unsigned __int16)v4 >> 1) != 0;
      v10 = v9;
      goto LABEL_23;
    }
    return (unsigned int)-1073741811;
  }
  v14 = (_WORD *)((char *)v13 + v4);
  v15 = *a2;
  v16 = v15;
  if ( (unsigned int)v4 > 1 )
  {
    do
    {
      v16 -= 2;
      --v14;
    }
    while ( *v14 != 45 && v16 > 1 );
  }
  if ( !((unsigned __int16)v16 >> 1) )
    return (unsigned int)-1073741811;
  v17 = 0;
  v18 = (v15 - (unsigned __int16)v16) >> 1;
  if ( !v18 )
    return (unsigned int)-1073741811;
  if ( *(const WCHAR *)((char *)v13 + (unsigned __int16)v16) != 45 )
    return (unsigned int)-1073741811;
  v19 = (_WORD *)((char *)v13 + (unsigned __int16)v16 + 2);
  v20 = v18 - 1;
  if ( v18 == 1 )
    return (unsigned int)-1073741811;
  if ( (int)(v18 - 1) > 0 )
  {
    while ( (unsigned __int16)(*v19 - 48) <= 9u )
    {
      v21 = (unsigned __int16)*v19++;
      --v20;
      v17 = v21 + 2 * (5 * v17 - 24);
      if ( v20 <= 0 )
        goto LABEL_15;
    }
    return (unsigned int)-1073741811;
  }
LABEL_15:
  v22 = (unsigned int *)ApiSetpSearchForApiSet(a1, v13, (unsigned __int16)v16 >> 1);
  v23 = v22;
  if ( v22 )
  {
    v24 = 0;
    v25 = (v22[2] - v22[3]) >> 1;
    if ( v25 )
    {
      v26 = (_WORD *)((char *)a1 + v22[1] + v22[3]);
      if ( *v26 == 45 )
      {
        v27 = v26 + 1;
        v28 = v25 - 1;
        if ( v28 )
        {
          while ( v28 > 0 )
          {
            if ( (unsigned __int16)(*v27 - 48) > 9u )
              goto LABEL_23;
            v30 = (unsigned __int16)*v27++;
            --v28;
            v24 = v30 + 2 * (5 * v24 - 24);
          }
          if ( v17 <= v24 )
          {
            v9 = 1;
            if ( v23[5] )
              v10 = *(_DWORD *)((char *)a1 + v23[4] + 16) != 0;
          }
        }
      }
    }
  }
LABEL_23:
  *a3 = v9;
  *a4 = v10;
  return v5;
}
