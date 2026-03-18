/*
 * XREFs of sub_1C0049D90 @ 0x1C0049D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_1C001D080 @ 0x1C001D080 (sub_1C001D080.c)
 *     sub_1C001D340 @ 0x1C001D340 (sub_1C001D340.c)
 */

__int64 __fastcall sub_1C0049D90(__int64 a1, char **a2)
{
  SIZE_T v3; // rdx
  __m128 *PoolWithTag; // rax
  __int64 result; // rax

  v3 = (unsigned __int16)(*(_WORD *)a2 + 2);
  word_1C006B422 = v3;
  word_1C006B420 = *(_WORD *)a2;
  PoolWithTag = (__m128 *)ExAllocatePoolWithTag(PagedPool, v3, 0x42554855u);
  P = PoolWithTag;
  if ( PoolWithTag )
    sub_1C001D340(PoolWithTag, 0, (unsigned __int16)word_1C006B422);
  if ( !P )
    return 3221225626LL;
  sub_1C001D080((char *)P, a2[1], *(unsigned __int16 *)a2);
  dword_1C006B3CC = 0;
  dword_1C006B3DC = 0;
  dword_1C006B3EC = 0;
  dword_1C006B3FC = 0;
  dword_1C006B40C = 0;
  dword_1C006B44C = 0;
  dword_1C006B45C = 0;
  dword_1C006B46C = 0;
  qword_1C006B3C0 = (__int64)&stru_1C0062780;
  qword_1C006B3D0 = (__int64)&stru_1C0062780;
  qword_1C006B3E0 = (__int64)&unk_1C0062858;
  qword_1C006B3F0 = (__int64)&unk_1C0062A60;
  qword_1C006B410 = (__int64)&Guid;
  qword_1C006B440 = (__int64)&unk_1C0062700;
  qword_1C006B450 = (__int64)&unk_1C00629D8;
  result = 0LL;
  dword_1C006B3C8 = 1;
  dword_1C006B3D8 = 1;
  dword_1C006B3E8 = 1;
  dword_1C006B3F8 = 1;
  qword_1C006B400 = (__int64)&unk_1C0062B78;
  dword_1C006B408 = 1;
  dword_1C006B418 = 1;
  dword_1C006B41C = 64;
  dword_1C006B448 = 1;
  dword_1C006B458 = 1;
  qword_1C006B460 = (__int64)&unk_1C0062B78;
  dword_1C006B468 = 1;
  byte_1C006B768 = 1;
  return result;
}
