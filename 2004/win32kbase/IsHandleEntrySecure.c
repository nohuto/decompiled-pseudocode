/*
 * XREFs of IsHandleEntrySecure @ 0x1C003D94C
 * Callers:
 *     ValidateHwndEx @ 0x1C0091FF0 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C0094C80 (ValidateHandleSecure.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v11; // r8d
  __int16 v12; // cx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rdx
  _QWORD *v17; // rax
  unsigned int v18; // ecx
  __int64 v19; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)&v19);
  v4 = gpKernelHandleTable;
  v5 = 3LL * (unsigned int)((a2 - (__int64)qword_1C024AD48) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7, v6, v8, v9);
  v11 = 0;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v12 = *((_WORD *)&unk_1C02056CC + 12 * *(unsigned __int8 *)(a2 + 24));
  if ( (v12 & 2) != 0 )
  {
    v14 = v4[v5 + 1];
  }
  else
  {
    if ( (v12 & 1) == 0 )
      return 0LL;
    v13 = v4[v5 + 1];
    if ( !v13 )
      return 0LL;
    v14 = *(_QWORD *)(v13 + 416);
  }
  if ( v14 )
  {
    if ( *(PVOID *)v14 == gpepCSRSS )
      return 1LL;
    v15 = *(_QWORD *)(CurrentProcessWin32Process + 768);
    if ( *(_QWORD *)(v14 + 768) == v15 )
      return 1LL;
    v17 = *(_QWORD **)(v15 + 56);
    if ( v17 )
    {
      v18 = *(_DWORD *)(v15 + 48);
      if ( v18 )
      {
        while ( *v17 != a1 )
        {
          ++v11;
          ++v17;
          if ( v11 >= v18 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
