/*
 * XREFs of sub_1800B817C @ 0x1800B817C
 * Callers:
 *     sub_1800BA940 @ 0x1800BA940 (sub_1800BA940.c)
 * Callees:
 *     sub_18005262C @ 0x18005262C (sub_18005262C.c)
 *     sub_18006A148 @ 0x18006A148 (sub_18006A148.c)
 */

char *__fastcall sub_1800B817C(char *lpCriticalSection)
{
  char *v2; // rcx

  sub_18005262C((void **)lpCriticalSection + 15);
  sub_18005262C((void **)lpCriticalSection + 14);
  v2 = (char *)*((_QWORD *)lpCriticalSection + 11);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    CloseHandle(v2);
  DeleteCriticalSection((LPCRITICAL_SECTION)(lpCriticalSection + 48));
  DeleteCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  sub_18006A148(lpCriticalSection);
  return lpCriticalSection;
}
