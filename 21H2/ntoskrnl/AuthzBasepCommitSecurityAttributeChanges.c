/*
 * XREFs of AuthzBasepCommitSecurityAttributeChanges @ 0x1403611E0
 * Callers:
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140361170 (AuthzBasepFinaliseSecurityAttributesList.c)
 * Callees:
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140248094 (AuthzBasepFreeSecurityAttributeValues.c)
 *     AuthzBasepRemoveSecurityAttributeFromLists @ 0x14024EC7C (AuthzBasepRemoveSecurityAttributeFromLists.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepCommitSecurityAttributeChanges(__int64 a1, __int64 a2)
{
  int v2; // eax
  unsigned __int8 v3; // si
  __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // r8
  __int64 *v8; // rdx
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  int v11; // edx
  _QWORD *v12; // rcx
  bool v13; // r9
  __int64 v14; // r8
  _QWORD *v15; // rdx
  int v16; // edx
  _QWORD *v17; // rdx
  __int64 v18; // r8
  __int64 v20; // rax
  _QWORD *v21; // rdx

  v2 = *(_DWORD *)(a2 + 56);
  v3 = 0;
  if ( (v2 & 2) != 0 )
  {
    v5 = a2 + 16;
    v6 = *(_QWORD *)(a2 + 16);
    if ( *(_QWORD *)(v6 + 8) != v5 )
      goto LABEL_28;
    v7 = *(_QWORD **)(v5 + 8);
    if ( *v7 != v5 )
      goto LABEL_28;
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_DWORD *)(a2 + 56) &= ~2u;
    v2 = *(_DWORD *)(a2 + 56);
    if ( a1 )
    {
      --*(_DWORD *)(a1 + 24);
      v2 = *(_DWORD *)(a2 + 56);
    }
  }
  if ( (v2 & 4) != 0 )
  {
    AuthzBasepRemoveSecurityAttributeFromLists((_DWORD *)a1, (__int64 *)a2, 1, 0);
    AuthzBasepFreeSecurityAttributeValues(a2, 0, v18);
    return 1;
  }
  if ( (v2 & 1) == 0 )
  {
    v8 = *(__int64 **)(a1 + 16);
    if ( *v8 == a1 + 8 )
    {
      *(_QWORD *)a2 = a1 + 8;
      *(_QWORD *)(a2 + 8) = v8;
      *v8 = a2;
      *(_QWORD *)(a1 + 16) = a2;
      *(_DWORD *)(a2 + 56) |= 1u;
      ++*(_DWORD *)a1;
      goto LABEL_10;
    }
LABEL_28:
    __fastfail(3u);
  }
LABEL_10:
  v9 = (_QWORD *)(a2 + 96);
  while ( 1 )
  {
    v10 = (_QWORD *)*v9;
    if ( (_QWORD *)*v9 == v9 )
      return v3;
    v11 = *((_DWORD *)v10 + 4);
    v12 = v10 - 2;
    v13 = (v11 & 4) != 0;
    if ( (v11 & 2) != 0 )
    {
      v14 = *v10;
      if ( *(_QWORD **)(*v10 + 8LL) != v10 )
        goto LABEL_28;
      v15 = (_QWORD *)v10[1];
      if ( (_QWORD *)*v15 != v10 )
        goto LABEL_28;
      *v15 = v14;
      *(_QWORD *)(v14 + 8) = v15;
      *((_DWORD *)v12 + 8) &= ~2u;
      --*(_DWORD *)(a2 + 88);
      v11 = *((_DWORD *)v12 + 8);
    }
    v16 = v11 & 1;
    if ( v13 )
    {
      if ( v16 )
      {
        v20 = *v12;
        if ( *(_QWORD **)(*v12 + 8LL) != v12 )
          goto LABEL_28;
        v21 = (_QWORD *)v12[1];
        if ( (_QWORD *)*v21 != v12 )
          goto LABEL_28;
        *v21 = v20;
        *(_QWORD *)(v20 + 8) = v21;
        *((_DWORD *)v12 + 8) &= ~1u;
        --*(_DWORD *)(a2 + 60);
        if ( (v12[4] & 4) != 0 )
          --*(_DWORD *)(a2 + 64);
      }
      ExFreePoolWithTag(v12, 0);
    }
    else if ( !v16 )
    {
      v17 = *(_QWORD **)(a2 + 80);
      if ( *v17 != a2 + 72 )
        goto LABEL_28;
      *v12 = a2 + 72;
      v12[1] = v17;
      *v17 = v12;
      *(_QWORD *)(a2 + 80) = v12;
      *((_DWORD *)v12 + 8) |= 1u;
      ++*(_DWORD *)(a2 + 60);
    }
  }
}
