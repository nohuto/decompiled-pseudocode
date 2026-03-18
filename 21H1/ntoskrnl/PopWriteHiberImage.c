/*
 * XREFs of PopWriteHiberImage @ 0x14098FEB4
 * Callers:
 *     PopSaveHiberContext @ 0x14098F9E0 (PopSaveHiberContext.c)
 * Callees:
 *     PopGetNextTable @ 0x140380B50 (PopGetNextTable.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     memset @ 0x140408F80 (memset.c)
 *     PopRequestWrite @ 0x14098FFF4 (PopRequestWrite.c)
 *     PopAddPagesToCompressedPageSet @ 0x140990634 (PopAddPagesToCompressedPageSet.c)
 *     PopCountDataAsProduced @ 0x14099075C (PopCountDataAsProduced.c)
 *     PopHiberCheckForDebugBreak @ 0x140990A5C (PopHiberCheckForDebugBreak.c)
 */

__int64 __fastcall PopWriteHiberImage(ULONG_PTR BugCheckParameter3, char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbp
  int v6; // esi
  __int64 v7; // rdi
  char v8; // r15
  __int64 result; // rax
  int v10; // [rsp+20h] [rbp-198h]
  _DWORD v11[4]; // [rsp+40h] [rbp-178h] BYREF
  _QWORD v12[22]; // [rsp+50h] [rbp-168h] BYREF
  _BYTE v13[128]; // [rsp+100h] [rbp-B8h] BYREF

  memset(v12, 0, sizeof(v12));
  v5 = *(_QWORD *)(BugCheckParameter3 + 264);
  v6 = 0;
  v11[0] = 0;
  v7 = 0LL;
  do
  {
    PopHiberCheckForDebugBreak(v4);
    v8 = PopRequestWrite(BugCheckParameter3);
    if ( !v7 )
    {
      result = PopGetNextTable(
                 BugCheckParameter3,
                 (unsigned __int64)v11,
                 (__int64)v13,
                 (__int64)v12,
                 a2,
                 *(_QWORD *)(v5 + 8));
      v6 = result;
      if ( !result )
        continue;
      *(_QWORD *)(v5 + 56) += result;
      LOBYTE(v10) = a2;
      v7 = PopAddPagesToCompressedPageSet(BugCheckParameter3, v5, v11, v12[3], v10, result, PopCompressCallback);
    }
    result = PopCountDataAsProduced(v5, v7, v11, v13, v6, 1);
    v4 = 0LL;
    if ( (_BYTE)result )
      v7 = 0LL;
  }
  while ( !v8 );
  return result;
}
