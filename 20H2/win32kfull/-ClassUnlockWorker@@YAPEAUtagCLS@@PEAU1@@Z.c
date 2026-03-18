/*
 * XREFs of ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106D80
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxSetClassData @ 0x1C010EA44 (xxxSetClassData.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E85CC (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 *     ClassUnlock @ 0x1C01E8A34 (ClassUnlock.c)
 *     xxxRecreateSmallIcons @ 0x1C0242F5C (xxxRecreateSmallIcons.c)
 * Callees:
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 */

struct _CALLPROCDATA **__fastcall ClassUnlockWorker(struct _CALLPROCDATA **a1, __int64 a2, __int64 a3)
{
  struct _CALLPROCDATA *v3; // rax
  struct _CALLPROCDATA ***v5; // rbx
  struct _CALLPROCDATA **i; // rdx
  struct tagPROCESSINFO *CurrentProcessWin32Process; // rax

  --*((_DWORD *)a1 + 18);
  v3 = a1[7];
  if ( a1 == (struct _CALLPROCDATA **)v3 )
    return a1;
  --*((_DWORD *)v3 + 18);
  if ( *((_DWORD *)a1 + 18) )
    return a1;
  v5 = (struct _CALLPROCDATA ***)((char *)a1[7] + 64);
  for ( i = *v5; i != a1; i = (struct _CALLPROCDATA **)*i )
    v5 = (struct _CALLPROCDATA ***)i;
  CurrentProcessWin32Process = (struct tagPROCESSINFO *)PsGetCurrentProcessWin32Process(a1, i, a3);
  DestroyClass(CurrentProcessWin32Process, v5);
  return 0LL;
}
