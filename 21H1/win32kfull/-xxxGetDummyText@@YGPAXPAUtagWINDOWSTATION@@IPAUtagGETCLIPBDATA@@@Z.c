/*
 * XREFs of ?xxxGetDummyText@@YGPAXPAUtagWINDOWSTATION@@IPAUtagGETCLIPBDATA@@@Z @ 0x182A3B
 * Callers:
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 * Callees:
 *     ?FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z @ 0x115FE (-FindClipFormat@@YGPAUtagCLIP@@PAUtagWINDOWSTATION@@IK@Z.c)
 *     _xxxGetClipboardData@12 @ 0x18310B (_xxxGetClipboardData@12.c)
 */

int __userpurge xxxGetDummyText@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagWINDOWSTATION *a3,
        unsigned int a4,
        struct tagGETCLIPBDATA *a5)
{
  int v6; // edx
  int v7; // edx
  int v8; // esi
  int v9; // edi
  struct tagCLIP *ClipFormat; // eax
  struct tagWINDOWSTATION *v11; // edi
  struct tagCLIP *v13; // eax
  struct tagCLIP *v14; // eax
  int v15; // esi
  struct tagCLIP *v16; // eax
  int v17; // eax
  unsigned int v18; // [esp+0h] [ebp-Ch]
  unsigned int v19; // [esp+0h] [ebp-Ch]
  unsigned int v20; // [esp+0h] [ebp-Ch]
  unsigned int v21; // [esp+4h] [ebp-8h]
  unsigned int v22; // [esp+4h] [ebp-8h]
  unsigned int v23; // [esp+4h] [ebp-8h]

  v6 = a1 - 1;
  if ( v6 )
  {
    v7 = v6 - 6;
    if ( !v7 )
    {
      v8 = 13;
      v9 = 1;
      goto LABEL_8;
    }
    if ( v7 != 6 )
      return 0;
    v8 = 1;
  }
  else
  {
    v8 = 13;
  }
  v9 = 7;
LABEL_8:
  ClipFormat = FindClipFormat(v8, a2, (struct tagWINDOWSTATION *)1, v18, v21);
  if ( !ClipFormat )
    return 0;
  if ( *((_DWORD *)ClipFormat + 1) == 1 )
  {
    v13 = FindClipFormat(v9, a2, (struct tagWINDOWSTATION *)1, v19, v22);
    if ( !v13 || *((_DWORD *)v13 + 1) == 1 || !xxxGetClipboardData(a2, a3) )
      return 0;
    v8 = v9;
    v11 = a3;
  }
  else
  {
    v11 = a3;
    if ( !xxxGetClipboardData(a2, a3) )
      return 0;
  }
  v14 = FindClipFormat(v8, a2, (struct tagWINDOWSTATION *)1, v19, v22);
  if ( !v14 )
    return 0;
  *(_DWORD *)v11 = *(_DWORD *)v14;
  v15 = *((_DWORD *)v14 + 1);
  v16 = FindClipFormat(16, a2, (struct tagWINDOWSTATION *)1, v20, v23);
  if ( v16 )
    v17 = *((_DWORD *)v16 + 1);
  else
    v17 = 0;
  *((_DWORD *)v11 + 2) = v17;
  return v15;
}
