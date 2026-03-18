/*
 * XREFs of MmCreateSpecialImageSection @ 0x14068FA78
 * Callers:
 *     NtCreateUserProcess @ 0x140690C20 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140794454 (PspLocateSystemDll.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140220F10 (MmGetSessionIdEx.c)
 *     MiSectionControlArea @ 0x14022C010 (MiSectionControlArea.c)
 *     CcZeroEndOfLastPage @ 0x14029F7A8 (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x1402A039C (MiDereferenceControlAreaFile.c)
 *     MiReferenceControlAreaFile @ 0x1402A0600 (MiReferenceControlAreaFile.c)
 *     KeDelayExecutionThread @ 0x1402DA450 (KeDelayExecutionThread.c)
 *     ObInsertObjectEx @ 0x140601DC0 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14067F4D0 (MiCreateSection.c)
 */

__int64 __fastcall MmCreateSpecialImageSection(__int64 *a1, int a2, __int64 a3, char a4, __int64 a5, char a6)
{
  int v6; // r11d
  int v10; // edi
  _KPROCESS *Process; // rcx
  int v12; // ebx
  int SessionId; // r12d
  __int64 result; // rax
  unsigned __int64 v16; // rdi
  struct _FILE_OBJECT *v17; // rbx
  PADAPTER_OBJECT DmaAdapter; // [rsp+70h] [rbp-38h] BYREF
  __int64 v19; // [rsp+78h] [rbp-30h] BYREF

  v19 = 0LL;
  v6 = a6 & 1;
  DmaAdapter = 0LL;
  v10 = v6 | 8;
  Process = KeGetCurrentThread()->ApcState.Process;
  v12 = v6 != 0 ? 0x1000000 : 37748736;
  if ( (a6 & 4) == 0 )
    v10 = a6 & 1;
  SessionId = MmGetSessionIdEx((__int64)Process);
  for ( result = MiCreateSection(&DmaAdapter, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, SessionId, 0LL);
        (int)result < 0;
        result = MiCreateSection(&DmaAdapter, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, SessionId, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v16 = MiSectionControlArea((__int64)DmaAdapter);
  v17 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
  CcZeroEndOfLastPage(v17);
  MiDereferenceControlAreaFile(v16, (unsigned __int64)v17);
  result = ObInsertObjectEx(DmaAdapter, 0LL, 0xF001Fu, 0, 0, 0LL, &v19);
  if ( (int)result >= 0 )
    *a1 = v19;
  return result;
}
