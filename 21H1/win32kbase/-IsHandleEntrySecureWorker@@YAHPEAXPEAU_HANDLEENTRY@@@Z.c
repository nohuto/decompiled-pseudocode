/*
 * XREFs of ?IsHandleEntrySecureWorker@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C0121B0C
 * Callers:
 *     HMIsHandleEntrySecureWorker @ 0x1C0121E50 (HMIsHandleEntrySecureWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsHandleEntrySecureWorker(void *a1, struct _HANDLEENTRY *a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rbx
  __int64 CurrentProcessWin32Process; // r9
  unsigned int v7; // r8d
  __int16 v8; // cx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  void **v12; // rax
  unsigned int v13; // r9d
  unsigned int v14; // ecx

  v2 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - qword_1C0250D48) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = 1;
  if ( !CurrentProcessWin32Process )
    return v7;
  v8 = *((_WORD *)&unk_1C020B6DC + 12 * *((unsigned __int8 *)a2 + 24));
  if ( (v8 & 2) != 0 )
  {
    v9 = v2[v5 + 1];
  }
  else
  {
    if ( (v8 & 1) == 0 )
      return 0LL;
    v10 = v2[v5 + 1];
    if ( !v10 )
      return 0LL;
    v9 = *(_QWORD *)(v10 + 416);
  }
  if ( v9 )
  {
    if ( *(PVOID *)v9 != gpepCSRSS )
    {
      v11 = *(_QWORD *)(CurrentProcessWin32Process + 768);
      if ( *(_QWORD *)(v9 + 768) != v11 )
      {
        v12 = *(void ***)(v11 + 56);
        if ( v12 && (v13 = *(_DWORD *)(v11 + 48), v14 = 0, v13) )
        {
          while ( *v12 != a1 )
          {
            ++v14;
            ++v12;
            if ( v14 >= v13 )
              return 0;
          }
        }
        else
        {
          return 0;
        }
      }
    }
    return v7;
  }
  return 0LL;
}
