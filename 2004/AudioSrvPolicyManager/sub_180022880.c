/*
 * XREFs of sub_180022880 @ 0x180022880
 * Callers:
 *     <none>
 * Callees:
 *     sub_180001A78 @ 0x180001A78 (sub_180001A78.c)
 *     sub_180003AB0 @ 0x180003AB0 (sub_180003AB0.c)
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_1800055CC @ 0x1800055CC (sub_1800055CC.c)
 *     sub_180005724 @ 0x180005724 (sub_180005724.c)
 *     sub_18001B6E8 @ 0x18001B6E8 (sub_18001B6E8.c)
 *     sub_18002C060 @ 0x18002C060 (sub_18002C060.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180022880(__int64 a1, __int64 a2, int a3, int a4, __int64 a5)
{
  int v5; // esi
  int v6; // r15d
  __int64 v7; // r14
  __int64 v8; // r13
  _QWORD *v9; // rsi
  HANDLE ProcessHeap; // rax
  _QWORD *v11; // rdi
  int v12; // ebx
  __int64 v13; // rcx
  int v14; // edx
  _QWORD *v16; // rsi
  HANDLE v17; // rax
  _QWORD *v18; // rdi
  __int64 v19; // rax
  _DWORD *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // [rsp+58h] [rbp-21h] BYREF
  __int64 v27; // [rsp+60h] [rbp-19h] BYREF
  __int64 v28; // [rsp+68h] [rbp-11h] BYREF
  __int64 v29; // [rsp+70h] [rbp-9h] BYREF
  __int64 v30; // [rsp+78h] [rbp-1h] BYREF
  __int64 v31; // [rsp+80h] [rbp+7h] BYREF
  __int64 retaddr; // [rsp+D0h] [rbp+57h]
  __int64 v33; // [rsp+D8h] [rbp+5Fh] BYREF
  __int64 v34; // [rsp+E0h] [rbp+67h]
  int v35; // [rsp+E8h] [rbp+6Fh]
  int v36; // [rsp+F0h] [rbp+77h]

  v36 = a4;
  v35 = a3;
  v34 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( !*(_DWORD *)(a1 + 8) )
  {
    v8 = a5;
    if ( a4 == 1 )
    {
      v9 = 0LL;
      ProcessHeap = GetProcessHeap();
      v11 = HeapAlloc(ProcessHeap, 0, 0x20uLL);
      if ( v11 )
      {
        v11[1] = 0LL;
        *v11 = off_18003F4C0;
        v11[2] = 0LL;
        v11[3] = 0LL;
      }
      else
      {
        v11 = 0LL;
      }
      if ( v11 )
      {
        v11[1] = v8;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
        v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v11[1] + 32LL))(v11[1], v11 + 2);
        if ( v12 < 0 || (v12 = sub_18001B6E8(v13, v8, (__int64)(v11 + 3)), v12 < 0) )
        {
          if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
            && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
            && *((_BYTE *)off_18004F000 + 25) >= 2u )
          {
            sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xBu, &stru_180045198, v12);
          }
          sub_180005724("CStreamStartedWorkItem::Initialize", 97, v12);
        }
        if ( v12 >= 0 )
        {
          v9 = v11;
          v11 = 0LL;
        }
      }
      else
      {
        v12 = -2147024882;
      }
      if ( v11 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v11 + 8LL))(v11, 1LL);
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 16LL))(v9);
        if ( v12 >= 0 )
          v9 = 0LL;
      }
      else
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xAu, &stru_180045198, v12);
        }
        sub_180005724("CStreamStartedWorkItem::CreateInstance", 69, v12);
      }
      if ( v9 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v9 + 8LL))(v9, 1LL);
      if ( v12 < 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xCu, &stru_180044908, v12);
        }
        sub_180005724("CPlaybackManager::QueueStreamStartedWorkItem", 207, v12);
        v14 = 139;
LABEL_35:
        sub_180003AB0(
          retaddr,
          v14,
          (__int64)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\playbackmanager.cpp",
          v12);
        return (unsigned int)v12;
      }
    }
    else
    {
      if ( a4 )
        goto LABEL_63;
      v16 = 0LL;
      v17 = GetProcessHeap();
      v18 = HeapAlloc(v17, 0, 0x20uLL);
      if ( v18 )
      {
        v18[1] = 0LL;
        *v18 = off_18003F4A8;
        v18[2] = 0LL;
        v18[3] = 0LL;
      }
      else
      {
        v18 = 0LL;
      }
      if ( v18 )
      {
        v12 = sub_18002C060(v18, v8);
        if ( v12 >= 0 )
        {
          v16 = v18;
          v18 = 0LL;
        }
      }
      else
      {
        v12 = -2147024882;
      }
      if ( v18 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v18 + 8LL))(v18, 1LL);
      if ( v12 >= 0 )
      {
        v12 = (*(__int64 (__fastcall **)(_QWORD *))(*v16 + 16LL))(v16);
        if ( v12 >= 0 )
          v16 = 0LL;
      }
      else
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xEu, &stru_180045198, v12);
        }
        sub_180005724("CStreamStoppedWorkItem::CreateInstance", 297, v12);
      }
      if ( v16 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*v16 + 8LL))(v16, 1LL);
      if ( v12 < 0 )
      {
        if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
          && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
          && *((_BYTE *)off_18004F000 + 25) >= 2u )
        {
          sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0xDu, &stru_180044908, v12);
        }
        sub_180005724("CPlaybackManager::QueueStreamStoppedWorkItem", 235, v12);
        v14 = 143;
        goto LABEL_35;
      }
    }
    v6 = v35;
    v7 = v34;
    v5 = v36;
LABEL_63:
    v19 = *(_QWORD *)v8;
    v27 = 0LL;
    if ( (*(int (__fastcall **)(__int64, __int64 *))(v19 + 24))(v8, &v27) >= 0 )
    {
      v20 = (_DWORD *)*((_QWORD *)sub_1800055CC() + 1);
      if ( *v20 > 4u )
      {
        v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 80LL))(v8);
        v22 = v27;
        v28 = v21;
        v23 = *(_QWORD *)v8;
        LODWORD(v33) = v5;
        LODWORD(v26) = v6;
        v29 = (__int64)off_18003F8D0[(*(unsigned int (__fastcall **)(__int64))(v23 + 48))(v8)];
        v30 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 72LL))(v22);
        v31 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 72LL))(v7);
        sub_180001A78(
          (__int64)v20,
          (unsigned __int8 *)dword_1800463E1,
          v24,
          v25,
          (void **)&v31,
          (void **)&v30,
          (void **)&v29,
          (__int64)&v26,
          (__int64)&v33,
          (__int64)&v28);
      }
    }
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  return 0LL;
}
