/*
 * XREFs of CcCopyWriteEx @ 0x1402D0830
 * Callers:
 *     CcCopyWrite @ 0x1404EA250 (CcCopyWrite.c)
 *     CcFastCopyWrite @ 0x1404EA500 (CcFastCopyWrite.c)
 * Callees:
 *     PsGetBaseIoPriorityThread @ 0x1402D0980 (PsGetBaseIoPriorityThread.c)
 *     CcMapAndCopyInToCache @ 0x14033C9C0 (CcMapAndCopyInToCache.c)
 */

char __fastcall CcCopyWriteEx(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, __int64 a6)
{
  int BaseIoPriorityThread; // eax
  __int64 *v8; // rdx
  unsigned int v9; // r8d
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r9d
  __int64 v13; // r11
  __int64 v14; // rax
  int v15; // edx
  int v16; // ecx
  __int64 v18; // [rsp+50h] [rbp-28h]
  __int64 v19; // [rsp+58h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+60h] [rbp-18h] BYREF

  v19 = 0LL;
  BaseIoPriorityThread = PsGetBaseIoPriorityThread(KeGetCurrentThread(), a2);
  if ( ((BaseIoPriorityThread >= 2 || (struct _KTHREAD *)v11 != KeGetCurrentThread() || !*(_DWORD *)(v11 + 1360))
     && BaseIoPriorityThread <= 0
     || (*(_DWORD *)(v10 + 80) & 0x10) != 0)
    && !a4 )
  {
    return 0;
  }
  v12 = 2;
  v13 = *(_QWORD *)(*(_QWORD *)(v10 + 40) + 8LL);
  v14 = *v8;
  v19 = v14;
  if ( (v14 & 0xFFF) == 0 && v9 >= 0x1000 )
    v12 = 3;
  HIDWORD(v18) = HIDWORD(v14);
  v15 = v12 | 4;
  if ( (((_WORD)v14 + (_WORD)v9) & 0xFFF) != 0 )
    v15 = v12;
  LODWORD(v18) = v14 & 0xFFFFF000;
  v20[0] = *(_QWORD *)(*(_QWORD *)(v10 + 24) + 40LL);
  if ( v20[0] - v18 > 0 )
  {
    v16 = v15;
    if ( (unsigned __int64)(v20[0] - v18) <= 0x1000 )
      v16 = v15 | 6;
  }
  else
  {
    v16 = 7;
  }
  return CcMapAndCopyInToCache(v13, a5, (unsigned int)&v19, v9, v16, v10, (__int64)v20, a4, a6);
}
