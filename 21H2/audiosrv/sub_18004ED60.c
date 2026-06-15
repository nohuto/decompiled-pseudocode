/*
 * XREFs of sub_18004ED60 @ 0x18004ED60
 * Callers:
 *     <none>
 * Callees:
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800D8E60 @ 0x1800D8E60 (sub_1800D8E60.c)
 *     sub_180105324 @ 0x180105324 (sub_180105324.c)
 *     sub_180108408 @ 0x180108408 (sub_180108408.c)
 *     sub_180108504 @ 0x180108504 (sub_180108504.c)
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_18010A4EC @ 0x18010A4EC (sub_18010A4EC.c)
 */

void __fastcall sub_18004ED60(__int64 a1, void (__fastcall ***a2)(_QWORD, void *, __int64 *))
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v5; // r14
  __int64 v6; // r9
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // r15d
  __int128 v13; // xmm0
  char v14; // r14
  std::_Ref_count_base *v15; // rcx
  int v16; // eax
  int v17; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v18; // [rsp+54h] [rbp-ACh] BYREF
  int v19; // [rsp+58h] [rbp-A8h] BYREF
  int v20; // [rsp+5Ch] [rbp-A4h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h] BYREF
  __int64 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 *v25; // [rsp+88h] [rbp-78h] BYREF
  __int64 v26; // [rsp+90h] [rbp-70h] BYREF
  __int64 (__fastcall **v27)(); // [rsp+98h] [rbp-68h] BYREF
  EVENT_DESCRIPTOR v28; // [rsp+A0h] [rbp-60h]
  __int64 (__fastcall ***v29)(); // [rsp+D0h] [rbp-30h]
  __int128 v30; // [rsp+D8h] [rbp-28h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+F0h] [rbp-10h] BYREF
  void *v32; // [rsp+100h] [rbp+0h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  const char *v35; // [rsp+110h] [rbp+10h]
  __int64 v36; // [rsp+118h] [rbp+18h]
  int *v37; // [rsp+120h] [rbp+20h]
  __int64 v38; // [rsp+128h] [rbp+28h]
  void *retaddr; // [rsp+168h] [rbp+68h]

  v2 = (struct _RTL_CRITICAL_SECTION *)(a1 + 64);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 64));
  if ( (unsigned int)CallbackContext > 5 )
  {
    v19 = 413;
    v37 = &v19;
    v38 = 4LL;
    v35 = "Sarm::CSpatialAudioResourceManager::OnStreamDisconnectedFromSaDevice";
    *(_DWORD *)&EventDescriptor.Level = 5;
    UserData.Ptr = (ULONGLONG)off_18019C358;
    v36 = 69LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    EventDescriptor.Keyword = 0LL;
    UserData.Size = *(unsigned __int16 *)off_18019C358;
    v32 = &unk_18016926D;
    UserData.Reserved = 2;
    v33 = 21;
    v34 = 1;
    v18 = (unsigned int)&unk_18016D102 - (unsigned int)&unk_180165C78;
    EventWriteTransfer(qword_18019C370, &EventDescriptor, 0LL, 0LL, 4u, &UserData);
  }
  v23 = 0LL;
  v5 = 0LL;
  if ( a2 )
  {
    (**a2)(a2, &unk_18015C150, &v23);
    if ( v23 )
    {
      v6 = *(_QWORD *)(a1 + 232);
      if ( v6 )
      {
        v10 = *(_QWORD *)(v6 + 8LL * ((unsigned int)v23 % *(_DWORD *)(a1 + 248)));
        if ( v10 )
        {
          while ( *(_DWORD *)(v10 + 112) != (_DWORD)v23 || *(_QWORD *)v10 != v23 )
          {
            v10 = *(_QWORD *)(v10 + 104);
            if ( !v10 )
              goto LABEL_6;
          }
          v5 = v10 + 8;
        }
      }
LABEL_6:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v5 )
      {
        v11 = *(_QWORD *)(v5 + 8);
        if ( !v11 )
        {
          sub_1800D8E60(
            retaddr,
            423LL,
            "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp");
          __debugbreak();
        }
        v12 = *(_DWORD *)(v5 + 52);
        if ( (unsigned int)CallbackContext > 4 )
        {
          v13 = *(_OWORD *)(v5 + 16);
          v21 = *(_DWORD *)(v5 + 80);
          v18 = *(_DWORD *)(v5 + 84);
          v25 = &v30;
          v26 = *(_QWORD *)(v5 + 40);
          v24 = v11;
          v20 = v12;
          v30 = v13;
          sub_180105324(
            v7,
            (unsigned int)&unk_180168F30,
            v8,
            v9,
            (__int64)&v26,
            (__int64)&v25,
            (__int64)&v18,
            (__int64)&v21,
            (__int64)&v20,
            (__int64)&v24);
        }
        sub_180108504(a1, v5);
        v14 = *(_BYTE *)(v11 + 8);
        v17 = 0;
        sub_18010A4EC(v11, &v17);
        if ( *(_DWORD *)(v11 + 12) )
          goto LABEL_34;
        if ( *(_QWORD *)v11 )
          sub_180108408(a1 + 152);
        if ( *(_QWORD *)(a1 + 160) )
        {
LABEL_34:
          if ( *(_QWORD *)(a1 + 240) )
          {
            if ( v14 )
            {
              if ( v17 )
              {
                *(_QWORD *)&EventDescriptor.Id = a1;
                v27 = off_1801558E0;
                LODWORD(EventDescriptor.Keyword) = v12;
                v29 = &v27;
                v28 = EventDescriptor;
                v16 = sub_180108708(a1 + 344, &v27);
                if ( v16 < 0 )
                  sub_18006D26C(
                    retaddr,
                    464LL,
                    "avcore\\audiocore\\server\\audiosrv\\spatialaudioresourcemanager\\spatialaudioresourcemanager.cpp",
                    (unsigned int)v16);
              }
            }
          }
        }
        else
        {
          v15 = qword_18019EB00;
          qword_18019EAF8 = 0LL;
          qword_18019EB00 = 0LL;
          if ( v15 )
            sub_180052600(v15);
        }
      }
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
}
