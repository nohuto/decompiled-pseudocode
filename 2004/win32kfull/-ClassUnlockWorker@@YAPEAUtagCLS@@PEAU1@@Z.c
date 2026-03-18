/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00A8C10 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C010CC4C (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E925C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C01E96C4 (ClassUnlock.c)
 *     xxxRecreateSmallIcons @ 0x1C02441FC (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C008DD2C (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1)
{
  struct _CALLPROCDATA *v1; // rax
  struct _CALLPROCDATA ***v3; // rbx
  struct _CALLPROCDATA **i; // rdx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v1 = a1[7];
  if ( a1 == (struct _CALLPROCDATA **)v1 )
    return a1;
  --*((_DWORD *)v1 + 18);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v3 = (struct _CALLPROCDATA ***)((char *)a1[7] + 64);
  for ( i = *v3; i != a1; i = (struct _CALLPROCDATA **)*i )
    v3 = (struct _CALLPROCDATA ***)i;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1);
  DestroyClass(CurrentProcessWin32Process, v3);
  return 0LL;
}
