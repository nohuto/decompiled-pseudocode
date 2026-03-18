/*
 * XREFs of ?CopyDebugHookLParam@@YGHIPAT_DEBUGLPARAM@@PAUtagDEBUGHOOKINFO@@@Z @ 0xF4402
 * Callers:
 *     _fnHkINLPDEBUGHOOKSTRUCT@20 @ 0x192C0B (_fnHkINLPDEBUGHOOKSTRUCT@20.c)
 * Callees:
 *     <none>
 */

int __userpurge CopyDebugHookLParam@<eax>(
        int *a1@<edx>,
        unsigned int a2@<ecx>,
        unsigned int a3,
        union _DEBUGLPARAM *a4,
        struct tagDEBUGHOOKINFO *a5)
{
  int *v5; // esi
  int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int *v10; // esi
  int *v11; // esi
  unsigned int v12; // eax
  int v13; // eax
  unsigned int v14; // eax

  v5 = *(int **)(a3 + 8);
  v6 = 1;
  if ( !v5 )
    return 0;
  if ( a2 > 6 )
  {
    if ( a2 == 7 )
    {
LABEL_12:
      qmemcpy(a1, v5, 0x18u);
      return v6;
    }
    if ( a2 == 10 )
    {
      if ( *(_DWORD *)(a3 + 16) != 5 )
        return 0;
      goto LABEL_14;
    }
    if ( a2 != 12 )
    {
      if ( a2 != -1 )
        return 0;
      goto LABEL_23;
    }
    qmemcpy(a1, v5, 0x14u);
    v13 = a1[3];
LABEL_27:
    if ( (unsigned __int16)v13 < 0x400u && (MessageTable[(unsigned __int16)v13] & 0x100) != 0 )
      a1[1] = 0;
    return v6;
  }
  if ( a2 == 6 )
  {
LABEL_23:
    qmemcpy(a1, v5, 0x1Cu);
    v14 = (unsigned __int16)a1[1];
    if ( v14 < 0x400 && (MessageTable[v14] & 0x100) != 0 )
      a1[3] = 0;
    return v6;
  }
  if ( a2 <= 1 )
  {
    qmemcpy(a1, v5, 0x14u);
    v13 = *a1;
    goto LABEL_27;
  }
  if ( a2 == 3 )
    goto LABEL_23;
  if ( a2 != 4 )
  {
    if ( a2 != 5 )
      return 0;
    v7 = *(_DWORD *)(a3 + 16);
    if ( v7 )
    {
      v8 = v7 - 3;
      if ( !v8 || (v9 = v8 - 2) == 0 )
      {
        *a1 = *v5;
        a1[1] = v5[1];
        return v6;
      }
      if ( v9 == 1 )
        goto LABEL_12;
      return 0;
    }
LABEL_14:
    *a1 = *v5;
    v10 = v5 + 1;
    a1[1] = *v10++;
    a1[2] = *v10;
    a1[3] = v10[1];
    return v6;
  }
  *a1 = *v5;
  v11 = v5 + 1;
  a1[1] = *v11++;
  a1[2] = *v11;
  a1[3] = v11[1];
  v12 = (unsigned __int16)a1[2];
  if ( v12 < 0x400 && (MessageTable[v12] & 0x100) != 0 )
    *a1 = 0;
  return v6;
}
