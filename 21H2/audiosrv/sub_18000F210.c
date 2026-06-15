/*
 * XREFs of sub_18000F210 @ 0x18000F210
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F690 @ 0x18000F690 (sub_18000F690.c)
 *     sub_18004BD84 @ 0x18004BD84 (sub_18004BD84.c)
 *     sub_180053914 @ 0x180053914 (sub_180053914.c)
 *     atexit @ 0x18006A128 (atexit.c)
 */

__int64 __fastcall sub_18000F210(__int64 a1, unsigned int a2, unsigned int a3, unsigned int *a4)
{
  unsigned int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // r14
  DWORD CurrentThreadId; // eax
  struct _TP_TIMER *ThreadpoolTimer; // rax
  bool v12; // zf
  __int64 *v14; // [rsp+20h] [rbp-68h] BYREF
  struct _FILETIME pftDueTime; // [rsp+28h] [rbp-60h] BYREF
  _QWORD pv[2]; // [rsp+30h] [rbp-58h] BYREF
  DWORD v17; // [rsp+40h] [rbp-48h]
  const wchar_t *v18; // [rsp+48h] [rbp-40h]
  __int64 v19; // [rsp+50h] [rbp-38h]
  char v20; // [rsp+58h] [rbp-30h]
  __int64 v21; // [rsp+5Ch] [rbp-2Ch]
  void *retaddr; // [rsp+88h] [rbp+0h]
  WINBOOL v23; // [rsp+98h] [rbp+10h] BYREF

  v7 = 0;
  v14 = 0LL;
  if ( InitOnceBeginInitialize(&InitOnce, 0, &v23, (LPVOID *)&v14) && v23 )
  {
    v14 = &qword_18019E828;
    qword_18019E828 = (__int64)off_1801462A0;
    qword_18019E840 = (__int64)&unk_18019C388;
    atexit(sub_1800B6240);
    sub_180053914(&qword_18019E828, qword_18019E840, sub_1800DAE90);
    InitOnceComplete(&InitOnce, 0, &qword_18019E828);
  }
  v8 = qword_18019E5F0;
  v9 = (unsigned int)dword_18019D9F4;
  pv[1] = v14[1];
  pv[0] = 0LL;
  CurrentThreadId = GetCurrentThreadId();
  v19 = v8;
  v17 = CurrentThreadId;
  v18 = L"AudioServerDeriveStreamCategory";
  v20 = 0;
  v21 = 0LL;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(pfnti, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  if ( a2 > 0xB || a3 > 0x14 )
    goto LABEL_16;
  v12 = a2 == 0;
  if ( a2 )
  {
    if ( !a3 )
    {
      v12 = a2 == 0;
      goto LABEL_10;
    }
LABEL_16:
    sub_18004BD84(retaddr, 4532LL, "avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp", 2147942487LL);
    v7 = -2147024809;
    goto LABEL_13;
  }
LABEL_10:
  if ( !v12 )
    a3 = a2;
  *a4 = a3;
LABEL_13:
  sub_18000F690(pv);
  return v7;
}
