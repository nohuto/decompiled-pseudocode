/*
 * XREFs of sub_1800E7048 @ 0x1800E7048
 * Callers:
 *     sub_180143284 @ 0x180143284 (sub_180143284.c)
 *     sub_180143490 @ 0x180143490 (sub_180143490.c)
 * Callees:
 *     sub_1800ED08C @ 0x1800ED08C (sub_1800ED08C.c)
 */

void __fastcall sub_1800E7048(__int64 *a1, __int64 a2)
{
  __int64 v2; // rsi
  DWORD LastError; // ebx

  v2 = *a1;
  if ( *a1 )
  {
    LastError = GetLastError();
    sub_1800ED08C(v2);
    SetLastError(LastError);
  }
  *a1 = a2;
}
