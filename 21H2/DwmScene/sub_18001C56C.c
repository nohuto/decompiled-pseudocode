/*
 * XREFs of sub_18001C56C @ 0x18001C56C
 * Callers:
 *     pfnti @ 0x1800162A0 (pfnti.c)
 *     sub_180016360 @ 0x180016360 (sub_180016360.c)
 *     sub_18001950C @ 0x18001950C (sub_18001950C.c)
 *     sub_180131270 @ 0x180131270 (sub_180131270.c)
 * Callees:
 *     sub_180021CA8 @ 0x180021CA8 (sub_180021CA8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 (__fastcall *__fastcall sub_18001C56C(__int64 a1))(_QWORD, __int64, _QWORD, _QWORD)
{
  unsigned int *v1; // rdi
  unsigned int *v3; // rbx
  __int64 (__fastcall *result)(_QWORD, __int64, _QWORD, _QWORD); // rax

  v1 = *(unsigned int **)(a1 + 56);
  v3 = *(unsigned int **)(a1 + 48);
  result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))((char *)v1 - (char *)v3);
  if ( (unsigned __int64)((char *)v1 - (char *)v3) >= 0x10 )
  {
    while ( v3 != v1 )
    {
      sub_180021CA8(*v3, *((_QWORD *)v3 + 1), sub_180020300);
      v3 += 4;
    }
    *(_QWORD *)(a1 + 56) = *(_QWORD *)(a1 + 48);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18021F8B8;
    if ( qword_18021F8B8 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
    result = (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))qword_18021F8C0;
    if ( qword_18021F8C0 )
      return (__int64 (__fastcall *)(_QWORD, __int64, _QWORD, _QWORD))result(0LL, 254LL, 0LL, 0LL);
  }
  return result;
}
