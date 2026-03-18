/*
 * XREFs of _GetGestureConfigSettings@24 @ 0x1887F4
 * Callers:
 *     _NtUserGetGestureConfig@24 @ 0x162A22 (_NtUserGetGestureConfig@24.c)
 * Callees:
 *     __IsTopLevelWindow@4 @ 0x38178 (__IsTopLevelWindow@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z @ 0xE353A (-GetGCData@@YGPAUtagVWPLGESTUREDATA@@PAUtagWND@@@Z.c)
 *     ?IsBitSet@@YGHPAEI@Z @ 0xE35D2 (-IsBitSet@@YGHPAEI@Z.c)
 *     ?GetWindowGCList@@YGPAPAXPAUtagWND@@@Z @ 0xE35F0 (-GetWindowGCList@@YGPAPAXPAUtagWND@@@Z.c)
 *     ?FindGID@@YGHPAPAUtagGESTURECONFIGLIST@@I0@Z @ 0x18868C (-FindGID@@YGHPAPAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

int __userpurge GetGestureConfigSettings@<eax>(
        _DWORD *a1@<ecx>,
        unsigned int a2@<esi>,
        char a3,
        unsigned int *a4,
        _DWORD *a5,
        int a6)
{
  unsigned int v6; // edx
  unsigned int v7; // edi
  _DWORD *v8; // ebx
  _DWORD *v9; // ecx
  struct tagVWPLGESTUREDATA *GCData; // esi
  struct tagVWPLGESTUREDATA *v11; // edi
  int *v12; // esi
  struct tagGESTURECONFIGLIST *v13; // ecx
  int v14; // eax
  int v16; // eax
  unsigned int v17; // ecx
  _DWORD *v18; // eax
  struct tagVWPLGESTUREDATA *v19; // esi
  int v20; // ecx
  int *v21; // esi
  unsigned int v22; // ebx
  struct tagGESTURECONFIGLIST *v23; // edi
  int v24; // ebx
  int v25; // esi
  int v26; // ecx
  int v27; // edx
  int v28; // ecx
  int v29; // eax
  unsigned int v30; // [esp-4h] [ebp-28h]
  struct tagGESTURECONFIGLIST **v31; // [esp+0h] [ebp-24h]
  int v32; // [esp+8h] [ebp-1Ch]
  struct tagVWPLGESTUREDATA *v33; // [esp+8h] [ebp-1Ch]
  int v34; // [esp+Ch] [ebp-18h]
  void **WindowGCList; // [esp+10h] [ebp-14h]
  int v36; // [esp+14h] [ebp-10h]
  int *v37; // [esp+14h] [ebp-10h]
  unsigned int v38; // [esp+18h] [ebp-Ch]
  _DWORD *v40; // [esp+1Ch] [ebp-8h]
  struct tagGESTURECONFIGLIST *v41; // [esp+20h] [ebp-4h] BYREF
  unsigned int v42; // [esp+2Ch] [ebp+8h]
  unsigned int v43; // [esp+2Ch] [ebp+8h]
  unsigned int v44; // [esp+30h] [ebp+Ch]
  void **v45; // [esp+30h] [ebp+Ch]

  v6 = 0;
  v41 = 0;
  v7 = *a4;
  v8 = a1;
  v32 = a3 & 1;
  v38 = *a4;
  if ( !*a4 )
  {
LABEL_5:
    v30 = a2;
    GCData = GetGCData(v8);
    WindowGCList = GetWindowGCList(v8);
    if ( GCData )
    {
      v36 = *(_DWORD *)GCData;
      if ( v7 )
      {
        v42 = v7;
        v11 = GCData;
        v12 = a5 + 2;
        while ( 1 )
        {
          v44 = *(v12 - 2);
          if ( IsBitSet(v36, v44) )
          {
            if ( FindGID(v44, (int)WindowGCList, &v41, v30, v31) )
            {
              v13 = v41;
              *(v12 - 1) = *((_DWORD *)v41 + 2);
              v14 = *((_DWORD *)v13 + 3);
LABEL_16:
              *v12 = v14;
            }
          }
          else
          {
            if ( !*((_DWORD *)v11 + 1) )
            {
              v16 = *((_DWORD *)v11 + 2);
              *(v12 - 1) = 0;
              if ( !v16 )
              {
                *v12 = 0;
                goto LABEL_18;
              }
              v14 = dword_2533A4[v44];
              goto LABEL_16;
            }
            *(v12 - 1) = dword_2533A4[v44];
            *v12 = *((_DWORD *)v11 + 2);
          }
LABEL_18:
          v12 += 3;
          if ( !--v42 )
          {
            v8 = a1;
            v7 = v38;
            break;
          }
        }
      }
    }
    else if ( v7 )
    {
      v17 = v7;
      v18 = a5 + 2;
      do
      {
        *(v18 - 1) = 0;
        *v18 = 0;
        v18 += 3;
        --v17;
      }
      while ( v17 );
    }
    if ( v32 && !_IsTopLevelWindow(v8) && v8 )
    {
      do
      {
        v8 = (_DWORD *)v8[14];
        v40 = v8;
        if ( !v8 )
          break;
        v19 = GetGCData(v8);
        v33 = v19;
        v45 = GetWindowGCList(v8);
        if ( v19 )
        {
          v43 = 0;
          v20 = *(_DWORD *)v19;
          v34 = *(_DWORD *)v19;
          if ( v7 )
          {
            v21 = a5 + 2;
            v37 = a5 + 2;
            do
            {
              v22 = *(v21 - 2);
              if ( IsBitSet(v20, v22) )
              {
                if ( FindGID(v22, (int)v45, &v41, v30, v31) )
                {
                  v23 = v41;
                  v24 = *v21;
                  v25 = *(v21 - 1);
                  v26 = *((_DWORD *)v41 + 2);
                  v27 = (v24 | v25) ^ (v26 | *((_DWORD *)v41 + 3));
                  v28 = v25 | v27 & v26;
                  v21 = v37;
                  *(v37 - 1) = v28;
                  v29 = *((_DWORD *)v23 + 3);
                  v7 = v38;
                  *v37 = v24 | v27 & v29;
                }
              }
              else if ( *((_DWORD *)v33 + 1) )
              {
                *(v21 - 1) = ~*v21 & dword_2533A4[v22];
              }
              else if ( *((_DWORD *)v33 + 2) )
              {
                *v21 = ~*(v21 - 1) & dword_2533A4[v22];
              }
              else if ( !v45 )
              {
                break;
              }
              v21 += 3;
              v20 = v34;
              ++v43;
              v37 = v21;
            }
            while ( v43 < v7 );
            v8 = v40;
          }
        }
      }
      while ( !_IsTopLevelWindow(v8) );
    }
    return 1;
  }
  v9 = a5;
  while ( (unsigned int)(*v9 - 1) <= 6 )
  {
    ++v6;
    v9 += 3;
    if ( v6 >= v7 )
      goto LABEL_5;
  }
  UserSetLastError((struct _NT_TIB *)0x57);
  return 0;
}
