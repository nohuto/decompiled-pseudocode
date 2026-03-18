/*
 * XREFs of ?_StringCompare@CCD_SET_STRING_ID@@CAHAEBU_STRING@@0@Z @ 0x1C012BB4C
 * Callers:
 *     ?IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C012BB84 (-IsEnabledSetEqual@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z @ 0x1C012D41C (-IsSubsetOf@CCD_SET_STRING_ID@@QEBA_NAEBV1@@Z.c)
 *     ?FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z @ 0x1C02EF65C (-FindPathByMonitorId@CCD_SET_STRING_ID@@QEBAJAEBU_STRING@@PEAI@Z.c)
 * Callees:
 *     memcmp @ 0x1C0026FF0 (memcmp.c)
 */

int __fastcall CCD_SET_STRING_ID::_StringCompare(const struct _STRING *a1, const struct _STRING *a2)
{
  if ( a1->Length > a2->Length )
    return 1;
  if ( a1->Length < a2->Length )
    return -1;
  return memcmp(a1->Buffer, a2->Buffer, a2->Length);
}
