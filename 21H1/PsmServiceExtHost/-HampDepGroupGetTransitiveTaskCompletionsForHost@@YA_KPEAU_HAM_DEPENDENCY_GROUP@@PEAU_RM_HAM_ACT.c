/*
 * XREFs of ?HampDepGroupGetTransitiveTaskCompletionsForHost@@YA_KPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E664
 * Callers:
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007D9F0 (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000367C (-HampHostGetAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x1800331AC (-HampDepHostStackCompareHosts@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 *     ?HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18007E4D4 (-HampDepGroupFindFirstDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU_HAM_DEPENDENCY_GROUP@@.c)
 *     ?HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z @ 0x18007E630 (-HampDepGroupGetNextDependencyForHost@@YAPEAU_HAM_HOST_DEPENDENCY@@PEAU1@@Z.c)
 *     ?HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z @ 0x18007F16C (-HampDepHostStackPop@@YAPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_DEP_HOST_STACK@@@Z.c)
 *     ?HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z @ 0x180081A40 (-HampTerminateDepShouldInvalidate@@YAKPEAU_HAM_TERMINATE_DEPENDENCY@@@Z.c)
 */

__int64 __fastcall HampDepGroupGetTransitiveTaskCompletionsForHost(
        struct _HAM_DEPENDENCY_GROUP *a1,
        struct _RM_HAM_ACTIVITY_HOST *a2)
{
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  struct _RM_HAM_ACTIVITY_HOST *v6; // rax
  struct _RM_HAM_ACTIVITY_HOST *v7; // r9
  struct _RTL_BALANCED_NODE **i; // rax
  __int64 v9; // r8
  struct _RTL_BALANCED_NODE *v10; // r15
  int v11; // eax
  unsigned int v12; // eax
  unsigned __int64 v13; // rbx
  void *v14; // r14
  int v15; // esi
  unsigned __int64 v16; // rax
  struct _RTL_BALANCED_NODE **v17; // rdi
  struct _RTL_BALANCED_NODE *v19; // [rsp+20h] [rbp-10h] BYREF
  __int64 v20; // [rsp+28h] [rbp-8h]

  v19 = 0LL;
  v20 = 0LL;
  RtlRbInsertNodeEx(&v19, 0LL, 0LL, (char *)a2 + 744);
  *((_DWORD *)a2 + 192) |= 2u;
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (unsigned __int64)v19;
    if ( (v20 & 1) != 0 )
    {
      if ( !v19 )
        return v4;
      v5 = (unsigned __int64)&v19 ^ (unsigned __int64)v19;
    }
    if ( !v5 )
      return v4;
    v6 = HampDepHostStackPop((struct _HAM_DEP_HOST_STACK *)&v19);
    v4 |= HampHostGetAppliedTaskCompletions(v6);
    for ( i = HampDepGroupFindFirstDependencyForHost(a1, v7);
          ;
          i = (struct _RTL_BALANCED_NODE **)HampDepGroupGetNextDependencyForHost((struct _HAM_HOST_DEPENDENCY *)v17) )
    {
      v17 = i;
      if ( !i )
        break;
      if ( *((_BYTE *)i + 40) == 3 && !HampTerminateDepShouldInvalidate((struct _HAM_TERMINATE_DEPENDENCY *)i) )
      {
        v10 = v17[7];
        v11 = (int)v10[32].Children[0];
        if ( (v11 & 2) == 0 )
        {
          v12 = v11 | 2;
          LODWORD(v10[32].Children[0]) = v12;
          v13 = (unsigned __int64)v19;
          v14 = (void *)((v12 >> 2) & 3);
          if ( (v20 & 1) != 0 )
          {
            if ( v19 )
              v13 = (unsigned __int64)&v19 ^ (unsigned __int64)v19;
          }
          LOBYTE(v9) = 0;
          v15 = v20 & 1;
          if ( v13 )
          {
            while ( 1 )
            {
              if ( (int)HampDepHostStackCompareHosts(v14, (struct _RTL_BALANCED_NODE *)v13) < 0 )
              {
                v16 = *(_QWORD *)v13;
                if ( v15 )
                {
                  if ( !v16 )
                    goto LABEL_25;
                  v16 ^= v13;
                }
                if ( !v16 )
                {
LABEL_25:
                  LOBYTE(v9) = 0;
                  break;
                }
              }
              else
              {
                v16 = *(_QWORD *)(v13 + 8);
                if ( v15 )
                {
                  if ( !v16 )
                    goto LABEL_19;
                  v16 ^= v13;
                }
                if ( !v16 )
                {
LABEL_19:
                  LOBYTE(v9) = 1;
                  break;
                }
              }
              v13 = v16;
            }
          }
          RtlRbInsertNodeEx(&v19, v13, v9, &v10[31]);
        }
      }
    }
  }
}
