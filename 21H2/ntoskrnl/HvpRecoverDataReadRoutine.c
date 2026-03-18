/*
 * XREFs of HvpRecoverDataReadRoutine @ 0x14091B2F0
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmpAllocateTransientPoolWithTag @ 0x14024AC60 (CmpAllocateTransientPoolWithTag.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HvpRecoverDataReadRoutine(
        unsigned int *a1,
        unsigned int a2,
        unsigned int a3,
        struct _LOOKASIDE_LIST_EX *a4)
{
  unsigned int v4; // ebx
  struct _PRIVILEGE_SET *TransientPoolWithTag; // rdi
  __int64 v8; // r13
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // r12d
  unsigned int v12; // ebp
  struct _PRIVILEGE_SET *v13; // rcx
  unsigned int v14; // r14d
  int v15; // ebp

  v4 = 0;
  TransientPoolWithTag = 0LL;
  if ( a2 + a3 < a2 && a2 + a3 )
    return (unsigned int)-1073741811;
  v8 = *(_QWORD *)a1;
  v9 = *(_DWORD *)(*(_QWORD *)a1 + 136LL) << 9;
  v10 = ~(v9 - 1);
  v11 = a2 & v10;
  v12 = (v10 & (a2 + v9 + a3 - 1)) - (a2 & v10);
  if ( v12 < a3 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v13 = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
    v14 = v12;
    if ( v12 < 0x10000 )
      v14 = 0x10000;
    if ( !v13 )
      goto LABEL_12;
    if ( a1[4] < v14 )
    {
      CmSiFreeMemory(v13);
    }
    else
    {
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)*((_QWORD *)a1 + 1);
      v14 = a1[4];
    }
    *((_QWORD *)a1 + 1) = 0LL;
    a1[4] = 0;
    if ( !TransientPoolWithTag )
    {
LABEL_12:
      TransientPoolWithTag = (struct _PRIVILEGE_SET *)CmpAllocateTransientPoolWithTag(PagedPool, v12, 0x6F494D43u, a4);
      if ( !TransientPoolWithTag )
        return (unsigned int)-1073741801;
      v14 = v12;
    }
    v15 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct _PRIVILEGE_SET *, unsigned int))(v8 + 48))(
            v8,
            a1[5],
            v11,
            TransientPoolWithTag,
            v12);
    if ( v15 < 0 )
    {
      CmSiFreeMemory(TransientPoolWithTag);
      return (unsigned int)v15;
    }
    else
    {
      *((_QWORD *)a1 + 1) = TransientPoolWithTag;
      a1[4] = v14;
      a4->L.ListHead.Alignment = (unsigned __int64)TransientPoolWithTag + a2 % (*(_DWORD *)(v8 + 136) << 9);
    }
  }
  return v4;
}
