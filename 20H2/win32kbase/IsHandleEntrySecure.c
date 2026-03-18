/*
 * XREFs of IsHandleEntrySecure @ 0x1C00A0D6C
 * Callers:
 *     ValidateHwndEx @ 0x1C004C330 (ValidateHwndEx.c)
 *     ValidateHandleSecure @ 0x1C00563A0 (ValidateHandleSecure.c)
 * Callees:
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C005219C (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 */

__int64 __fastcall IsHandleEntrySecure(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int v10; // r8d
  __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v16; // rax
  unsigned int v17; // ecx
  __int64 v18; // [rsp+20h] [rbp-18h] BYREF

  CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(
    (__int64)&v18,
    a2,
    a3,
    a4);
  v6 = gpKernelHandleTable;
  v7 = 3LL * (unsigned int)((a2 - (__int64)qword_1C0248D48) >> 5);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
  v10 = 0;
  if ( !CurrentProcessWin32Process )
    return 1LL;
  v11 = *((_WORD *)&unk_1C020365C + 12 * *(unsigned __int8 *)(a2 + 24));
  if ( (v11 & 2) != 0 )
  {
    v13 = v6[v7 + 1];
  }
  else
  {
    if ( (v11 & 1) == 0 )
      return 0LL;
    v12 = v6[v7 + 1];
    if ( !v12 )
      return 0LL;
    v13 = *(_QWORD *)(v12 + 424);
  }
  if ( v13 )
  {
    if ( *(PVOID *)v13 == gpepCSRSS )
      return 1LL;
    v14 = *(_QWORD *)(CurrentProcessWin32Process + 768);
    if ( *(_QWORD *)(v13 + 768) == v14 )
      return 1LL;
    v16 = *(_QWORD **)(v14 + 56);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v14 + 48);
      if ( v17 )
      {
        while ( *v16 != a1 )
        {
          ++v10;
          ++v16;
          if ( v10 >= v17 )
            return 0LL;
        }
        return 1LL;
      }
    }
  }
  return 0LL;
}
