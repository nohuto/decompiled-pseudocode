/*
 * XREFs of MiCopyTopLevelMappings @ 0x14032861C
 * Callers:
 *     MiCreateNewProcessTopLevelMappings @ 0x1403285AC (MiCreateNewProcessTopLevelMappings.c)
 *     MiUpdateSystemPdes @ 0x140526EC0 (MiUpdateSystemPdes.c)
 * Callees:
 *     MiShadowTopLevelPxes @ 0x1403286F4 (MiShadowTopLevelPxes.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 */

__int64 __fastcall MiCopyTopLevelMappings(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx

  memmove(
    (void *)(a2 + 2048),
    (const void *)0xFFFFF6FB7DBED800LL,
    8 * ((((unsigned __int64)qword_140C4FA78 >> 39) & 0x1FF) - 256));
  MiShadowTopLevelPxes(a1, 0xFFFFF6FB7DBED800uLL, 256LL);
  v4 = (((unsigned __int64)qword_140C4E2A8 >> 39) & 0x1FF) + 1;
  memmove((void *)(a2 + 8 * v4), (const void *)(8 * v4 - 0x90482413000LL), 8LL * (unsigned int)(512 - v4));
  result = 0LL;
  v6 = *(_QWORD *)(a1 + 1368);
  if ( v6 )
    result = *(_QWORD *)(v6 + 816);
  *(_QWORD *)(a2 + 8 * (((unsigned __int64)qword_140C4DD18 >> 39) & 0x1FF)) = result;
  return result;
}
