/*
 * XREFs of ?DCETopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010DBCC
 * Callers:
 *     ?TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C010DB5C (-TopLevelSpeedHitTest@@YAPEAUtagWND@@PEAUtagDESKTOP@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 * Callees:
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C0069000 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ??0UserAtomicCheck@@QEAA@XZ @ 0x1C0069054 (--0UserAtomicCheck@@QEAA@XZ.c)
 *     ?DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z @ 0x1C00B2104 (-DCEIsWindowHit@@YAHPEAUtagWND@@PEAUtagPOINT@@PEBU_SUBPIXELS@@@Z.c)
 */

struct tagWND *__fastcall DCETopLevelSpeedHitTest(
        struct tagDESKTOP *a1,
        struct tagPOINT *a2,
        const struct _SUBPIXELS *a3)
{
  __int64 v4; // rdi
  __int64 i; // rbx
  char v9; // [rsp+40h] [rbp+8h] BYREF

  v4 = 0LL;
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v9);
  for ( i = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 1) + 24LL) + 112LL); i; i = *(_QWORD *)(i + 88) )
  {
    if ( (unsigned int)DCEIsWindowHit((struct tagWND *)i, a2, a3) )
    {
      v4 = i;
      if ( *(char *)(*(_QWORD *)(i + 40) + 19LL) < 0 )
        v4 = 0LL;
      break;
    }
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v9);
  return (struct tagWND *)v4;
}
