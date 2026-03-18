/*
 * XREFs of GetGestureConfigSettings @ 0x1C0228028
 * Callers:
 *     NtUserGetGestureConfig @ 0x1C01FA140 (NtUserGetGestureConfig.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C006EA50 (_IsTopLevelWindow.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     ?GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z @ 0x1C0121180 (-GetGCData@@YAPEAUtagVWPLGESTUREDATA@@PEAUtagWND@@@Z.c)
 *     ?IsBitSet@@YAHPEAEI@Z @ 0x1C0121274 (-IsBitSet@@YAHPEAEI@Z.c)
 *     ?GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z @ 0x1C01212A4 (-GetWindowGCList@@YAPEAPEAXPEAUtagWND@@@Z.c)
 *     ?FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z @ 0x1C0227E54 (-FindGID@@YAHPEAPEAUtagGESTURECONFIGLIST@@I0@Z.c)
 */

__int64 __fastcall GetGestureConfigSettings(struct tagWND *a1, __int64 a2, __int64 a3, unsigned int *a4, _DWORD *a5)
{
  __int64 v5; // rsi
  int v6; // ebp
  __int64 v7; // r15
  __int64 v8; // rdx
  struct tagWND *v9; // rbx
  _DWORD *v10; // rcx
  struct tagVWPLGESTUREDATA *GCData; // r14
  void **WindowGCList; // rax
  _DWORD *v13; // rdi
  __int64 v14; // r13
  unsigned __int8 *v15; // rbp
  struct tagGESTURECONFIGLIST **v16; // rbx
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r11
  struct tagGESTURECONFIGLIST *v20; // rcx
  int v21; // eax
  int v23; // eax
  _DWORD *v24; // rax
  __int64 v25; // rcx
  struct tagVWPLGESTUREDATA *v26; // r14
  struct tagGESTURECONFIGLIST **v27; // r12
  unsigned __int8 *v28; // r13
  unsigned int v29; // ebp
  int *v30; // rdi
  __int64 v31; // r9
  struct tagGESTURECONFIGLIST *v32; // r9
  int v33; // r8d
  int v34; // r10d
  int v35; // ecx
  int v36; // edx
  int v37; // eax
  int v39; // [rsp+80h] [rbp+18h]
  struct tagGESTURECONFIGLIST *v40; // [rsp+88h] [rbp+20h] BYREF

  v40 = 0LL;
  v5 = *a4;
  v6 = a3 & 1;
  v7 = (__int64)a5;
  v8 = 0LL;
  v39 = v6;
  v9 = a1;
  if ( !(_DWORD)v5 )
  {
LABEL_5:
    GCData = GetGCData(v9);
    WindowGCList = GetWindowGCList(v9);
    if ( GCData )
    {
      if ( (_DWORD)v5 )
      {
        v13 = (_DWORD *)(v7 + 8);
        v14 = v5;
        v15 = *(unsigned __int8 **)GCData;
        v16 = (struct tagGESTURECONFIGLIST **)WindowGCList;
        while ( 1 )
        {
          if ( (unsigned int)IsBitSet(v15, *(v13 - 2)) )
          {
            if ( (unsigned int)FindGID(v16, v17, &v40) )
            {
              v20 = v40;
              *(v13 - 1) = *((_DWORD *)v40 + 3);
              v21 = *((_DWORD *)v20 + 4);
LABEL_16:
              *v13 = v21;
            }
          }
          else
          {
            if ( !*((_DWORD *)GCData + 2) )
            {
              v23 = *((_DWORD *)GCData + 3);
              *(v13 - 1) = 0;
              if ( !v23 )
              {
                *v13 = 0;
                goto LABEL_18;
              }
              v21 = *(_DWORD *)(v19 + 4 * v17);
              goto LABEL_16;
            }
            *(v13 - 1) = *(_DWORD *)(v19 + 4 * v17);
            *(_DWORD *)((char *)v13 + v18 - v7 - 8) = *((_DWORD *)GCData + 3);
          }
LABEL_18:
          v13 += 3;
          if ( !--v14 )
          {
            v9 = a1;
            v6 = v39;
            break;
          }
        }
      }
    }
    else if ( (_DWORD)v5 )
    {
      v24 = (_DWORD *)(v7 + 8);
      v25 = v5;
      do
      {
        *(v24 - 1) = 0;
        *v24 = 0;
        v24 += 3;
        --v25;
      }
      while ( v25 );
    }
    if ( !v6 || (unsigned int)IsTopLevelWindow((__int64)v9) || !v9 )
      return 1LL;
    while ( 1 )
    {
      v9 = (struct tagWND *)*((_QWORD *)v9 + 13);
      if ( !v9 )
        return 1LL;
      v26 = GetGCData(v9);
      v27 = (struct tagGESTURECONFIGLIST **)GetWindowGCList(v9);
      if ( v26 )
      {
        v28 = *(unsigned __int8 **)v26;
        v29 = 0;
        if ( (_DWORD)v5 )
          break;
      }
LABEL_41:
      if ( (unsigned int)IsTopLevelWindow((__int64)v9) )
        return 1LL;
    }
    v30 = (int *)(v7 + 8);
    while ( 1 )
    {
      if ( (unsigned int)IsBitSet(v28, *(v30 - 2)) )
      {
        if ( (unsigned int)FindGID(v27, v31, &v40) )
        {
          v32 = v40;
          v33 = *(v30 - 1);
          v34 = *v30;
          v35 = *((_DWORD *)v40 + 3);
          v36 = (v33 | *v30) ^ (v35 | *((_DWORD *)v40 + 4));
          *(v30 - 1) = v33 | v36 & v35;
          v37 = v34 | v36 & *((_DWORD *)v32 + 4);
LABEL_37:
          *v30 = v37;
        }
      }
      else
      {
        if ( !*((_DWORD *)v26 + 2) )
        {
          if ( !*((_DWORD *)v26 + 3) )
          {
            if ( !v27 )
              goto LABEL_40;
            goto LABEL_39;
          }
          v37 = ~*(v30 - 1) & dword_1C02EAD60[v31];
          goto LABEL_37;
        }
        *(v30 - 1) = ~*v30 & dword_1C02EAD60[v31];
      }
LABEL_39:
      ++v29;
      v30 += 3;
      if ( v29 >= (unsigned int)v5 )
      {
LABEL_40:
        v7 = (__int64)a5;
        goto LABEL_41;
      }
    }
  }
  v10 = a5;
  while ( (unsigned int)(*v10 - 1) <= 6 )
  {
    v8 = (unsigned int)(v8 + 1);
    v10 += 3;
    if ( (unsigned int)v8 >= (unsigned int)v5 )
      goto LABEL_5;
  }
  UserSetLastError(87LL, v8, a3);
  return 0LL;
}
