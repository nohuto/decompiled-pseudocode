/*
 * XREFs of KiTpWriteBreakpoint @ 0x14051B988
 * Callers:
 *     KiTpHandleTrap @ 0x14051B6F0 (KiTpHandleTrap.c)
 *     KeSetTracepoint @ 0x1408BEBD0 (KeSetTracepoint.c)
 * Callees:
 *     KiTpWriteMemory @ 0x14051BA1C (KiTpWriteMemory.c)
 *     MmWriteSystemImageTracepoint @ 0x14053DBF8 (MmWriteSystemImageTracepoint.c)
 */

__int64 __fastcall KiTpWriteBreakpoint(__int64 a1, __int64 a2)
{
  char v2; // di
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  int *v7; // r9
  int v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a2;
  if ( *(_BYTE *)(a1 + 50) || !VslVsmEnabled )
    goto LABEL_8;
  result = MmWriteSystemImageTracepoint(*(_QWORD *)(a1 + 8));
  if ( !*(_BYTE *)(a1 + 49) && (int)result >= 0 )
    *(_BYTE *)(a1 + 49) = 1;
  if ( (_DWORD)result == -1073741637 || (_DWORD)result == -1073741667 )
  {
LABEL_8:
    v5 = *(_QWORD *)(a1 + 8);
    LOBYTE(a2) = *(_BYTE *)(a1 + 50);
    v6 = *(_QWORD *)(a1 + 16);
    if ( v2 )
    {
      v8 = 204;
      v7 = &v8;
    }
    else
    {
      v7 = (int *)(a1 + 51);
    }
    return KiTpWriteMemory(v6, a2, v5, v7);
  }
  return result;
}
