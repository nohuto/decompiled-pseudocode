/*
 * XREFs of _AssociateInputContextEx@12 @ 0xAE640
 * Callers:
 *     _NtUserAssociateInputContext@12 @ 0xAE5CC (_NtUserAssociateInputContext@12.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AssociateInputContext@8 @ 0xAE6F0 (_AssociateInputContext@8.c)
 */

int __fastcall AssociateInputContextEx(_DWORD *a1, int *a2, char a3)
{
  _DWORD *v3; // edi
  int v5; // ebx
  _DWORD *v6; // edx
  int v7; // eax
  int v8; // ecx
  int v10; // eax
  int v11; // eax
  unsigned int *v12; // ebx
  unsigned int v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // eax
  struct tagBWL *v17; // [esp+Ch] [ebp-14h]
  _DWORD *v19; // [esp+14h] [ebp-Ch]
  int v20; // [esp+18h] [ebp-8h]
  int v21; // [esp+1Ch] [ebp-4h]
  int v22; // [esp+28h] [ebp+8h]

  v3 = a1;
  v5 = 0;
  v21 = 0;
  v6 = (_DWORD *)a1[2];
  v19 = *(_DWORD **)(v6[59] + 60);
  v20 = a3 & 0x20;
  if ( (a3 & 0x10) != 0 )
  {
    a2 = (int *)v6[110];
  }
  else if ( a2 && (_DWORD *)a2[2] != v6 )
  {
    goto LABEL_18;
  }
  if ( v6[58] != *(_DWORD *)(_gptiCurrent + 232) || a2 && a2[3] != a1[3] )
  {
LABEL_18:
    UserSetLastError((struct _NT_TIB *)5);
    return 2;
  }
  if ( (a3 & 1) != 0 )
  {
    v10 = a1[15];
    if ( v10 )
    {
      v11 = BuildHwndList(v10, 3, v6);
      v17 = (struct tagBWL *)v11;
      if ( v11 )
      {
        v12 = (unsigned int *)(v11 + 16);
        v13 = *(_DWORD *)(v11 + 16);
        if ( v13 != 1 )
        {
          do
          {
            v14 = HMValidateHandleNoSecure(v13, 1);
            v22 = v14;
            if ( v14 )
            {
              v15 = a2 ? *a2 : 0;
              v16 = *(_DWORD *)(*(_DWORD *)(v14 + 20) + 132);
              if ( v16 != v15 && (v16 || !v20) )
              {
                AssociateInputContext(v22, a2);
                if ( (_DWORD *)v22 == v19 )
                  v21 = 1;
              }
            }
            v13 = *++v12;
          }
          while ( *v12 != 1 );
          v3 = a1;
        }
        FreeHwndList(v17);
        v5 = v21;
      }
    }
  }
  v7 = *(_DWORD *)(v3[5] + 132);
  if ( v7 || !v20 )
  {
    if ( a2 )
      v8 = *a2;
    else
      v8 = 0;
    if ( v7 != v8 )
    {
      AssociateInputContext(v3, a2);
      if ( v3 == v19 )
        return 1;
    }
  }
  return v5;
}
