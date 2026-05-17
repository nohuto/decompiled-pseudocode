/*
 * XREFs of RtlCaptureImageExceptionValues @ 0x180013FF4
 * Callers:
 *     RtlInsertInvertedFunctionTable @ 0x1800108F0 (RtlInsertInvertedFunctionTable.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 */

__int64 __fastcall RtlCaptureImageExceptionValues(int a1, _QWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // rdi
  _QWORD *v4; // rbx
  int v5; // r9d
  int v6; // eax
  __int64 v7; // rcx
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  v3 = a3;
  v4 = a2;
  v5 = (int)a3;
  LOBYTE(a2) = 1;
  LOWORD(a3) = 3;
  v6 = RtlpImageDirectoryEntryToDataEx(a1, (_DWORD)a2, (_DWORD)a3, v5, (__int64)&v9);
  v7 = v9;
  if ( v6 < 0 )
    v7 = 0LL;
  *v4 = v7;
  if ( !v7 )
    *v3 = 0;
  return 0LL;
}
