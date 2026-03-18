/*
 * XREFs of ??0CTDR_DUMP_BUFFER@@QEAA@GPEAXK@Z @ 0x1C03046E4
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03052F0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 * Callees:
 *     <none>
 */

CTDR_DUMP_BUFFER *__fastcall CTDR_DUMP_BUFFER::CTDR_DUMP_BUFFER(CTDR_DUMP_BUFFER *this, __int64 a2, _DWORD *a3)
{
  unsigned __int16 v3; // r9
  __int64 v5; // rcx
  int v6; // ecx

  *(_DWORD *)this = 39;
  *((_WORD *)this + 10) = 0;
  v3 = 0;
  *((_QWORD *)this + 1) = a3;
  *((_DWORD *)this + 4) = 2488324;
  do
  {
    v5 = v3++;
    *(_DWORD *)(*((_QWORD *)this + 1) + 8 * v5 + 8) = 0;
    *(_DWORD *)(*((_QWORD *)this + 1) + 8 * v5 + 12) = 0;
    v6 = *(_DWORD *)this;
  }
  while ( (unsigned int)v3 < *(_DWORD *)this );
  if ( *((_DWORD *)this + 4) >= 4u )
  {
    *a3 = v6;
    v6 = *(_DWORD *)this;
  }
  *((_DWORD *)this + 6) = 8 * v6 + 8;
  return this;
}
