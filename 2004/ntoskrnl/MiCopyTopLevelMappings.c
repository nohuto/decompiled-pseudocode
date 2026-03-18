/*
 * XREFs of MiCopyTopLevelMappings @ 0x1402E22BC
 * Callers:
 *     MiCreateNewProcessTopLevelMappings @ 0x1402E224C (MiCreateNewProcessTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x140527510 (MiUpdateSystemPdes.c)
 * Callees:
 *     MiShadowTopLevelPxes @ 0x1402E2394 (MiShadowTopLevelPxes.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((((unsigned __int64)qword_140C4F938 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  v4 = (((unsigned __int64)qword_140C4E168 >> 39) & 0x1FF) + 1;
  memmove((void *)(a2 + 8 * v4), (const void *)(8 * v4 - 0x90482413000LL), 8LL * (unsigned int)(512 - v4));
  result = 0LL;
  v6 = *(_QWORD *)(a1 + 1368);
  if ( v6 )
    result = *(_QWORD *)(v6 + 816);
  *(_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140C4DBD8 >> 39) & 0x1FF)) = result;
  return result;
}
