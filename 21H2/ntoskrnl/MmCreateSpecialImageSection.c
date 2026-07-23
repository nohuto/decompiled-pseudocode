/*
 * XREFs of MmCreateSpecialImageSection @ 0x140698234
 * Callers:
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspLocateSystemDll @ 0x140798D78 (PspLocateSystemDll.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140278A00 (KeDelayExecutionThread.c)
 *     MiSectionControlArea @ 0x14031FFB0 (MiSectionControlArea.c)
 *     MiReferenceControlAreaFile @ 0x140327C00 (MiReferenceControlAreaFile.c)
 *     MmGetSessionIdEx @ 0x140355BB0 (MmGetSessionIdEx.c)
 *     CcZeroEndOfLastPage @ 0x140361E4C (CcZeroEndOfLastPage.c)
 *     MiDereferenceControlAreaFile @ 0x140361F34 (MiDereferenceControlAreaFile.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     MiCreateSection @ 0x14071CAF0 (MiCreateSection.c)
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
  for ( result = MiCreateSection((unsigned int)&DmaAdapter, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, SessionId, 0LL);
        (int)result < 0;
        result = MiCreateSection((unsigned int)&DmaAdapter, a2, 0, 16, v12, v10, a3, a4, a5, 0LL, 0, SessionId, 0LL) )
  {
    if ( (_DWORD)result != -1073741740 )
      return result;
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiHalfSecond);
  }
  v16 = MiSectionControlArea((__int64)DmaAdapter);
  v17 = (struct _FILE_OBJECT *)MiReferenceControlAreaFile(v16);
  CcZeroEndOfLastPage(v17);
  MiDereferenceControlAreaFile(v16, (unsigned __int64)v17);
  result = ObInsertObjectEx(DmaAdapter, 0LL, 0, 0LL, (__int64)&v19);
  if ( (int)result >= 0 )
    *a1 = v19;
  return result;
}
