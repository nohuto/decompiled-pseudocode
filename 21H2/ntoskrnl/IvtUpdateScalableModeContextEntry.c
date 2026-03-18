/*
 * XREFs of IvtUpdateScalableModeContextEntry @ 0x14052FEA0
 * Callers:
 *     IvtUpdateScalableModeTranslationStructures @ 0x1405300A8 (IvtUpdateScalableModeTranslationStructures.c)
 * Callees:
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     IvtBuildScalableModeContextEntry @ 0x14052E208 (IvtBuildScalableModeContextEntry.c)
 *     IvtGetScalableModePasidTables @ 0x14052EA60 (IvtGetScalableModePasidTables.c)
 *     IvtInvalidateContextEntry @ 0x14052F224 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x14052F29C (IvtInvalidateScalableModePasidCache.c)
 *     IvtSetScalableModeContextEntry @ 0x14052F7C0 (IvtSetScalableModeContextEntry.c)
 */

__int64 __fastcall IvtUpdateScalableModeContextEntry(
        __int64 a1,
        unsigned int a2,
        __int64 *ScalableModePasidTables,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8)
{
  unsigned __int8 v10; // cl
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  bool v14; // zf
  _QWORD *v15; // rcx
  char v16; // bl
  __int64 *v17; // rdi
  __int64 v18; // rax
  char v19; // r14
  __int64 v20; // rcx
  __int64 result; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // r9
  int v25; // [rsp+20h] [rbp-98h]
  _OWORD v26[2]; // [rsp+60h] [rbp-58h] BYREF

  v10 = a2;
  v12 = *(_QWORD *)(a1 + 32);
  v13 = 2 * ((unsigned __int64)a2 >> 8);
  v14 = *(_BYTE *)(a1 + 320) == 0;
  memset(v26, 0, sizeof(v26));
  if ( v14 )
    v15 = (_QWORD *)(v12 + 8 * v13);
  else
    v15 = (_QWORD *)(v12 + 8 * (v13 + ((unsigned __int8)(v10 >> 3) >= 0x10u)));
  v16 = 0;
  v17 = (__int64 *)(*v15 + 32 * (a2 & 7 | (8LL * ((a2 >> 3) & 0xF))));
  v18 = *v17;
  if ( (*v17 & 1) == 0 || a8 )
  {
    v19 = 0;
    LOBYTE(a4) = 0;
  }
  else
  {
    v19 = 1;
    LOBYTE(a4) = (v18 & 4) != 0;
    v16 = (v18 & 8) != 0;
  }
  if ( !ScalableModePasidTables )
    ScalableModePasidTables = IvtGetScalableModePasidTables(a1, a2);
  IvtBuildScalableModeContextEntry((__int64)v15, (__int64)ScalableModePasidTables, a4, a4, v25, (__int64 *)v26);
  result = IvtSetScalableModeContextEntry(v20, v26, v17);
  if ( v19 )
  {
    IvtInvalidateContextEntry(a1, a2, 0, v22, 0);
    return IvtInvalidateScalableModePasidCache(a1, a2, v23, v24, 1u, 1, v16);
  }
  return result;
}
