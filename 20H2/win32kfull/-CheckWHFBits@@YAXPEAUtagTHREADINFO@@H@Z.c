/*
 * XREFs of ?CheckWHFBits@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0074CC4
 * Callers:
 *     FreeHook @ 0x1C0074BD0 (FreeHook.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0074E6C (PhkFirstValid.c)
 *     PhkFirstGlobalValid @ 0x1C00D7DDC (PhkFirstGlobalValid.c)
 */

void __fastcall CheckWHFBits(struct tagTHREADINFO *a1, __int64 a2)
{
  unsigned int v2; // r14d
  BOOL v4; // esi
  __int64 Valid; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // r9d
  PRKPROCESS *v9; // r15
  int v10; // edx

  v2 = a2;
  v4 = 1;
  Valid = PhkFirstValid(a1, a2);
  if ( Valid )
    v4 = (*(_DWORD *)(Valid + 64) & 1) == 0 && PhkFirstGlobalValid(a1, v2) == 0;
  if ( v8 )
  {
    *((_DWORD *)a1 + 170) &= ~(1 << (v2 + 1));
    if ( *((_QWORD *)a1 + 60) )
    {
      v9 = (PRKPROCESS *)*((_QWORD *)a1 + 53);
      if ( v9 == (PRKPROCESS *)PsGetCurrentProcessWin32Process(v2 + 1, v6, v7) )
      {
        v10 = 0;
      }
      else
      {
        KeAttachProcess(*v9);
        v10 = 1;
      }
      *(_DWORD *)(*((_QWORD *)a1 + 60) + 56LL) = *((_DWORD *)a1 + 170);
      if ( v10 )
        KeDetachProcess();
    }
  }
  if ( v4 )
    *(_DWORD *)(**((_QWORD **)a1 + 58) + 16LL) &= ~(1 << (v2 + 1));
}
