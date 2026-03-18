/*
 * XREFs of ?AddMessageToFilter@@YGHPAPAPAXIPAH@Z @ 0x80026
 * Callers:
 *     __ChangeWindowMessageFilter@8 @ 0x7FB78 (__ChangeWindowMessageFilter@8.c)
 *     __ChangeWindowMessageFilterEx@16 @ 0x7FD26 (__ChangeWindowMessageFilterEx@16.c)
 * Callees:
 *     ?MsgLookupTableAlloc@@YGPAXI@Z @ 0x80126 (-MsgLookupTableAlloc@@YGPAXI@Z.c)
 */

BOOL __userpurge AddMessageToFilter@<eax>(
        unsigned int a1@<edx>,
        _DWORD *a2@<ecx>,
        unsigned int a3@<edi>,
        void ***a4,
        unsigned int a5,
        int *a6)
{
  _BYTE *v6; // ebx
  _DWORD *v7; // esi
  _DWORD *v8; // edi
  int v9; // eax
  void **v10; // ecx
  unsigned int v12; // [esp-4h] [ebp-24h]
  unsigned int v13; // [esp+0h] [ebp-20h]
  int v14; // [esp+8h] [ebp-18h]
  unsigned int v16; // [esp+10h] [ebp-10h]
  int v17; // [esp+14h] [ebp-Ch]
  unsigned int v18; // [esp+1Ch] [ebp-4h]
  int v19; // [esp+1Ch] [ebp-4h]

  v18 = a1;
  v6 = 0;
  v7 = (_DWORD *)*a2;
  if ( !*a2 )
  {
    v7 = MsgLookupTableAlloc(v13);
    if ( !v7 )
      return v6 != 0;
    a1 = v18;
  }
  v12 = a3;
  v16 = a1 >> 13;
  v8 = (_DWORD *)v7[a1 >> 13];
  if ( !v8 )
  {
    v8 = MsgLookupTableAlloc(v12);
    if ( !v8 )
      goto LABEL_23;
    a1 = v18;
  }
  v17 = (a1 >> 9) & 0xF;
  v6 = (_BYTE *)v8[v17];
  if ( v6 )
  {
LABEL_4:
    v9 = v17;
    v14 = (a1 >> 3) & 0x3F;
    v19 = (unsigned __int8)v6[v14];
    v10 = (void **)(v19 & (1 << (a1 & 7)));
    if ( !v10 )
    {
      v6[v14] = v19 | (1 << (a1 & 7));
      v9 = v17;
    }
    if ( a4 )
      *a4 = v10;
    if ( v6 != (_BYTE *)v8[v9] )
      v8[v9] = v6;
    if ( v8 != (_DWORD *)v7[v16] )
      v7[v16] = v8;
    if ( v7 != (_DWORD *)*a2 )
      *a2 = v7;
    return v6 != 0;
  }
  v6 = MsgLookupTableAlloc(v12);
  if ( v6 )
  {
    a1 = v18;
    goto LABEL_4;
  }
  if ( v8 != (_DWORD *)v7[v16] )
    Win32FreePool(v8);
LABEL_23:
  if ( v7 && v7 != (_DWORD *)*a2 )
    Win32FreePool(v7);
  return v6 != 0;
}
