/*
 * XREFs of PfSnFindPrefetchVolumeInfoInList @ 0x140677B7C
 * Callers:
 *     PfSnPrefetchMetadata @ 0x140676A74 (PfSnPrefetchMetadata.c)
 *     PfSnPopulateReadList @ 0x140677260 (PfSnPopulateReadList.c)
 * Callees:
 *     wcsncmp @ 0x1403D41B0 (wcsncmp.c)
 */

_QWORD *__fastcall PfSnFindPrefetchVolumeInfoInList(wchar_t *Str1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdi
  wchar_t v8; // cx

  v3 = (_QWORD *)*a2;
  v4 = 0LL;
  if ( (_QWORD *)*a2 != a2 )
  {
    while ( 1 )
    {
      if ( !wcsncmp(Str1, (const wchar_t *)v3[2], *((unsigned int *)v3 + 6)) )
      {
        v8 = Str1[*((unsigned int *)v3 + 6)];
        if ( a3 ? v8 == 0 : v8 == 92 )
          break;
      }
      v3 = (_QWORD *)*v3;
      if ( v3 == a2 )
        return (_QWORD *)v4;
    }
    return v3;
  }
  return (_QWORD *)v4;
}
