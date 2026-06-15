/*
 * XREFs of sub_1800EC60C @ 0x1800EC60C
 * Callers:
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 * Callees:
 *     sub_18005E8F8 @ 0x18005E8F8 (sub_18005E8F8.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800BB4E0 @ 0x1800BB4E0 (sub_1800BB4E0.c)
 *     sub_1800BB524 @ 0x1800BB524 (sub_1800BB524.c)
 *     sub_1800ED584 @ 0x1800ED584 (sub_1800ED584.c)
 */

__int64 __fastcall sub_1800EC60C(
        __int64 a1,
        __int64 a2,
        const wchar_t **a3,
        unsigned int a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v15; // ebx
  int v16; // ecx

  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB524(*((_QWORD *)off_18019C348 + 2), 0xEu, (__int64)&unk_18015E5F0, *a3);
  }
  v15 = (*(__int64 (__fastcall **)(__int64, __int64, const wchar_t **, _QWORD, int, __int64, __int64, __int64, __int64))(*(_QWORD *)qword_18019EE48 + 24LL))(
          qword_18019EE48,
          a2,
          a3,
          a4,
          a5,
          a6,
          a10,
          a11,
          a12);
  if ( off_18019C348 != (_UNKNOWN *)&off_18019C348
    && (*((_DWORD *)off_18019C348 + 7) & 0x100) != 0
    && *((_BYTE *)off_18019C348 + 25) >= 4u )
  {
    sub_1800BB4E0(*((_QWORD *)off_18019C348 + 2), 0xFu, (__int64)&unk_18015E5F0, v15);
  }
  if ( v15 == -2005139364 )
  {
    if ( !(*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a8 + 96LL))(a8) )
    {
LABEL_13:
      sub_18005E8F8((__int64)"CAudioResourceManager::GetSaDeviceForOffloadedStream", 1771, v15);
      return (unsigned int)v15;
    }
    v15 = sub_1800ED584(v16, a2, (_DWORD)a3, a4, a5, a6, a9, a12);
  }
  if ( v15 < 0 )
    goto LABEL_13;
  return (unsigned int)v15;
}
