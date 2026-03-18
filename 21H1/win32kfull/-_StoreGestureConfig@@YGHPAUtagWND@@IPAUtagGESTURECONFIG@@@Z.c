/*
 * XREFs of ?_StoreGestureConfig@@YGHPAUtagWND@@IPAUtagGESTURECONFIG@@@Z @ 0xE3328
 * Callers:
 *     _SetGestureConfigSettings@20 @ 0xE3454 (_SetGestureConfigSettings@20.c)
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?SetBitMask@@YGXPAUtagWND@@IH@Z @ 0xE31BA (-SetBitMask@@YGXPAUtagWND@@IH@Z.c)
 *     ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A (-GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z.c)
 *     ?IsBitSet@@YGHPAEI@Z @ 0xE35D2 (-IsBitSet@@YGHPAEI@Z.c)
 *     ?GetWindowGCList@@YGPAPAXPAUtagWND@@@Z @ 0xE35F0 (-GetWindowGCList@@YGPAPAXPAUtagWND@@@Z.c)
 *     ?FindGID@@YGHPAPAUtagGESTURECONFIGLIST@@I0@Z @ 0x18868C (-FindGID@@YGHPAPAUtagGESTURECONFIGLIST@@I0@Z.c)
 *     ?GCRemoveHashElement@@YGXPAPAUtagGESTURECONFIGLIST@@I@Z @ 0x1886BF (-GCRemoveHashElement@@YGXPAPAUtagGESTURECONFIGLIST@@I@Z.c)
 */

int __userpurge _StoreGestureConfig@<eax>(
        unsigned int a1@<edx>,
        struct tagGESTURECONFIGLIST *a2@<ecx>,
        struct tagWND *a3,
        unsigned int a4,
        struct tagGESTURECONFIG *a5)
{
  void **WindowGCList; // ebx
  int *i; // esi
  struct tagWND *v7; // ecx
  int v8; // edx
  unsigned int v9; // edi
  int v10; // eax
  _DWORD *v11; // eax
  int v12; // ecx
  struct tagGESTURECONFIGLIST *v14; // ecx
  struct tagWND *v15; // [esp+0h] [ebp-20h]
  struct tagWND *v16; // [esp+0h] [ebp-20h]
  struct tagWND *v17; // [esp+0h] [ebp-20h]
  unsigned int v18; // [esp+0h] [ebp-20h]
  unsigned int v19; // [esp+0h] [ebp-20h]
  unsigned int v20; // [esp+4h] [ebp-1Ch]
  struct tagGESTURECONFIGLIST **v21; // [esp+4h] [ebp-1Ch]
  int v22; // [esp+4h] [ebp-1Ch]
  int v24; // [esp+10h] [ebp-10h]
  struct tagGESTURECONFIGLIST *v25[2]; // [esp+14h] [ebp-Ch] BYREF
  struct tagVWPLGESTUREDATA *GCData; // [esp+1Ch] [ebp-4h]
  struct tagWND *v27; // [esp+28h] [ebp+8h]

  v25[0] = 0;
  v25[1] = a2;
  WindowGCList = GetWindowGCList(v15);
  GCData = GetGCData(v16);
  if ( !WindowGCList )
  {
    WindowGCList = (void **)Win32AllocPoolWithQuota(32, 1667724117);
    if ( !WindowGCList )
    {
LABEL_18:
      UserSetLastError((struct _NT_TIB *)0xE);
      return 0;
    }
    memset(WindowGCList, 0, 0x20u);
    *((_DWORD *)GetGCData(v17) + 3) = WindowGCList;
  }
  v24 = 0;
  if ( !a1 )
    return 1;
  for ( i = (int *)((char *)a3 + 4); ; i += 3 )
  {
    v7 = (struct tagWND *)i[1];
    v8 = *i;
    v27 = v7;
    if ( ((unsigned int)v7 & *i) != 0 )
      break;
    v9 = *(i - 1);
    if ( !v9 )
      break;
    if ( v9 > 7 )
      break;
    v10 = ~dword_2533A4[v9];
    if ( (v10 & v8) != 0 || (v10 & (unsigned int)v7) != 0 )
      break;
    if ( v8 || v7 || *((_DWORD *)GCData + 1) || *((_DWORD *)GCData + 2) )
    {
      if ( IsBitSet((unsigned __int8 *)v17, v20) )
      {
        if ( FindGID(v25, v18, v21) )
        {
          v14 = v25[0];
          *((_DWORD *)v25[0] + 3) = v27;
          *((_DWORD *)v14 + 2) = *i;
        }
      }
      else
      {
        v11 = (_DWORD *)Win32AllocPoolWithQuota(16, 1667724117);
        if ( !v11 )
          goto LABEL_18;
        v11[1] = *(i - 1);
        v11[3] = i[1];
        v11[2] = *i;
        v12 = v11[1] & 7;
        *v11 = WindowGCList[v12];
        WindowGCList[v12] = v11;
        SetBitMask(v11[1], (struct tagWND *)1, v18, (int)v21);
      }
    }
    else if ( IsBitSet((unsigned __int8 *)v17, v20) )
    {
      GCRemoveHashElement((struct tagGESTURECONFIGLIST **)v17, v20);
      SetBitMask(*(i - 1), 0, v19, v22);
    }
    if ( ++v24 >= a1 )
      return 1;
  }
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
