/*
 * XREFs of sub_180016BFC @ 0x180016BFC
 * Callers:
 *     sub_180015834 @ 0x180015834 (sub_180015834.c)
 * Callees:
 *     sub_180016CD4 @ 0x180016CD4 (sub_180016CD4.c)
 *     sub_18001A330 @ 0x18001A330 (sub_18001A330.c)
 */

void __fastcall sub_180016BFC(__int64 a1)
{
  _QWORD *v2; // rdi
  char *v3; // rsi
  __int64 v4; // rbp
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  sub_180016CD4(a1);
  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)(a1 + 568);
  sub_18001A330(&lpCriticalSection);
  v2 = (_QWORD *)(a1 + 608);
  v3 = *(char **)(a1 + 608);
  if ( ((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *(_QWORD *)(a1 + 184);
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v3);
      SetLastError(LastError);
    }
    *v2 = 0LL;
    NtAcquireProcessActivityReference(v2, v4, 0LL);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
