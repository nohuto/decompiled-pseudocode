/*
 * XREFs of AslEnvExpandStrings2 @ 0x140753DF0
 * Callers:
 *     SdbpResolveMatchingFile @ 0x140753B9C (SdbpResolveMatchingFile.c)
 * Callees:
 *     AslpEnvResolveVars @ 0x140753F84 (AslpEnvResolveVars.c)
 *     AslEnvExpandStrings @ 0x1407541AC (AslEnvExpandStrings.c)
 *     AslLogCallPrintf @ 0x140756124 (AslLogCallPrintf.c)
 *     AslAlloc @ 0x14075B258 (AslAlloc.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AslEnvExpandStrings2(
        int a1,
        const wchar_t *a2,
        _WORD *a3,
        __int64 a4,
        _QWORD *a5,
        __int16 a6,
        __int16 a7)
{
  int v7; // r12d
  __int64 v8; // rbp
  __int64 v9; // rbx
  const wchar_t *v10; // rsi
  wchar_t *v11; // rdi
  int v12; // ebx
  __int64 v13; // r15
  __int16 v14; // r13
  __int64 v15; // rcx
  __int64 v16; // rax
  int v17; // ebx
  const char *v19; // r9
  int v20; // r8d
  const char *v21; // r9
  int v22; // r8d
  __int64 v24; // [rsp+88h] [rbp+10h] BYREF
  __int64 v25; // [rsp+98h] [rbp+20h]

  v25 = a4;
  v7 = (int)a3;
  v8 = -1LL;
  LODWORD(v24) = 0;
  v9 = -1LL;
  v10 = a2;
  v11 = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  v12 = v9 + 1;
  if ( a3 )
    *a3 = 0;
  v13 = (__int64)a5;
  if ( a5 )
    *a5 = 0LL;
  v14 = a7;
  if ( (unsigned int)AslpEnvResolveVars(a2, a6, a7, (__int64)&v24) != -1073741789 )
  {
    v17 = -1073741595;
    v19 = "AslpEnvResolveVars failed to fail properly for null buffer";
    v20 = 775;
LABEL_23:
    AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v20, (_DWORD)v19);
    return (unsigned int)v17;
  }
  if ( v12 == (_DWORD)v24 )
    goto LABEL_14;
  v11 = (wchar_t *)AslAlloc(v15, 2LL * (unsigned int)v24);
  if ( !v11 )
  {
    v17 = -1073741801;
    v19 = "Out of memory";
    v20 = 783;
    goto LABEL_23;
  }
  v16 = -1LL;
  do
    ++v16;
  while ( v10[v16] );
  v17 = AslpEnvResolveVars(v10, a6, v14, (__int64)&v24);
  if ( v17 < 0 )
  {
    v21 = "AslpEnvResolveVars failed [%x]";
    v22 = 795;
    goto LABEL_26;
  }
  v10 = v11;
  do
LABEL_14:
    ++v8;
  while ( v10[v8] );
  v17 = AslEnvExpandStrings(a1, (_DWORD)v10, v8, v7, v25, v13);
  if ( (int)(v17 + 0x80000000) < 0 || v17 == -1073741789 )
    goto LABEL_16;
  v21 = "AslEnvExpandStrings failed [%x]";
  v22 = 810;
LABEL_26:
  AslLogCallPrintf(1, (unsigned int)"AslEnvExpandStrings2", v22, (_DWORD)v21);
LABEL_16:
  if ( v11 )
    ExFreePoolWithTag(v11, 0x74705041u);
  return (unsigned int)v17;
}
