/*
 * XREFs of KiTpWriteBreakpoint @ 0x140517FB8
 * Callers:
 *     KiTpHandleTrap @ 0x140517D20 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x1408B8E70 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x14051804C (KiTpWriteMemory.c)
 *     MmWriteSystemImageTracepoint @ 0x14053A228 (MmWriteSystemImageTracepoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // di
  __int64 result; // rax
  __int64 v6; // r8
  __int64 v7; // rcx
  int *v8; // r9
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a2;
  if ( *(_BYTE *)(a1 + 50) || !VslVsmEnabled )
    goto LABEL_12;
  if ( !(_BYTE)a2 || *(_BYTE *)(a1 + 49) )
    a2 = 0LL;
  else
    LOBYTE(a2) = 1;
  LOBYTE(a3) = v3;
  result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8), a2, a3);
  if ( !*(_BYTE *)(a1 + 49) && (int)result >= 0 )
    *(_BYTE *)(a1 + 49) = 1;
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
  {
LABEL_12:
    v6 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 50);
    v7 = *(_QWORD *)(a1 + 16);
    if ( v3 )
    {
      v9 = 204;
      v8 = &v9;
    }
    else
    {
      v8 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v7, a2, v6, v8);
  }
  return result;
}
