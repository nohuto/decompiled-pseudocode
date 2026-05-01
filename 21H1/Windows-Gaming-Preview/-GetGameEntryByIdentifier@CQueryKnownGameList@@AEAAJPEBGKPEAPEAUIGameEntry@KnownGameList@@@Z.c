/*
 * XREFs of ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180040754
 * Callers:
 *     ?GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003FAD0 (-GetGameEntryFromPID@CQueryKnownGameList@@UEAAJKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x18003FBB0 (-GetGameEntryFromAppId@CQueryKnownGameList@@UEAAJPEBGPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003268 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041198 (-GetProcessArgsByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x18004132C (-GetProcessWorkingDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z @ 0x180041530 (-GetProcessParentDirectoryByPID@CQueryKnownGameList@@AEAAJKPEAPEBG@Z.c)
 *     ?GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z @ 0x180041748 (-GetTOCIndexByIdentifier@CQueryKnownGameList@@AEAAJPEBGPEAK@Z.c)
 *     ?CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z @ 0x180042418 (-CreateEnumerateEntriesInstance@KnownGameList@@YAJPEAPEAUIEnumerateEntries@1@PEAEK@Z.c)
 *     ?StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z @ 0x180042898 (-StrCmpInsensitive@KnownGameList@@YAHPEBGK0K@Z.c)
 *     ?StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z @ 0x180042968 (-StrStrInsensitive@KnownGameList@@YAPEBGPEBGK0@Z.c)
 *     ??$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJPEAPEAUIGameEntry@KnownGameList@@$$QEAPEAU34@@Z @ 0x180042E3C (--$MakeAndInitialize@VCGameEntry@@UIGameEntry@KnownGameList@@PEAU23@@Details@WRL@Microsoft@@YAJP.c)
 *     __security_check_cookie @ 0x180044200 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800448E8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18004492C (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _alloca_probe @ 0x180045D50 (_alloca_probe.c)
 *     _guard_dispatch_icall_nop @ 0x180045DE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CQueryKnownGameList::GetGameEntryByIdentifier(
        CQueryKnownGameList *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct KnownGameList::IGameEntry **a4)
{
  __int64 v5; // rax
  int TOCIndexByIdentifier; // eax
  unsigned int v7; // ebx
  struct KnownGameList::IEnumerateEntries **v9; // rbx
  struct KnownGameList::IEnumerateEntries **v10; // r12
  int v11; // eax
  const struct std::nothrow_t *v12; // rdx
  unsigned int v13; // r9d
  int ProcessWorkingDirectoryByPID; // r13d
  __int64 v15; // r9
  __int64 v16; // rdx
  struct KnownGameList::IEnumerateEntries **v17; // rax
  int v18; // eax
  int EnumerateEntriesInstance; // eax
  __int64 v20; // r8
  __int64 v21; // r15
  __int64 v22; // r9
  struct std::nothrow_t *v23; // rdx
  struct std::nothrow_t *v24; // rbx
  unsigned __int16 *v25; // rdi
  unsigned __int16 *v26; // rsi
  unsigned __int16 *v27; // r14
  int v28; // eax
  int v29; // eax
  int v30; // eax
  __int64 v31; // rdx
  bool i; // cf
  int v33; // eax
  const unsigned __int16 *v34; // r9
  const struct std::nothrow_t *v35; // rdx
  unsigned __int16 *v36; // r13
  unsigned int v37; // r8d
  const struct std::nothrow_t *v38; // rdx
  unsigned __int16 *v39; // r13
  const struct std::nothrow_t *v40; // rdx
  unsigned __int16 *v41; // r13
  const unsigned __int16 *v42; // rax
  struct std::nothrow_t *v43; // r13
  struct std::nothrow_t *v44; // rcx
  int v45; // eax
  unsigned __int16 *v46; // rcx
  __int64 v47; // rdx
  unsigned __int64 v48; // r9
  struct KnownGameList::IGameEntry **v49; // rcx
  const struct std::nothrow_t *v50; // rdx
  const struct std::nothrow_t *v51; // rdx
  struct std::nothrow_t *v52; // rcx
  unsigned int *v53; // [rsp+20h] [rbp-E0h]
  unsigned int v54; // [rsp+30h] [rbp-D0h] BYREF
  struct std::nothrow_t *v55; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int16 *v56; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v57; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v58; // [rsp+4Ch] [rbp-B4h]
  int v59; // [rsp+50h] [rbp-B0h]
  unsigned int v60; // [rsp+54h] [rbp-ACh] BYREF
  int v61; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v62; // [rsp+5Ch] [rbp-A4h] BYREF
  int v63; // [rsp+60h] [rbp-A0h]
  CQueryKnownGameList *v64; // [rsp+68h] [rbp-98h]
  unsigned int v65[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v66; // [rsp+78h] [rbp-88h] BYREF
  KnownGameList *v67; // [rsp+80h] [rbp-80h] BYREF
  KnownGameList *v68; // [rsp+88h] [rbp-78h] BYREF
  struct KnownGameList::IGameEntry **v69; // [rsp+90h] [rbp-70h]
  struct KnownGameList::IEnumerateEntries **v70; // [rsp+98h] [rbp-68h]
  unsigned __int16 *v71; // [rsp+A0h] [rbp-60h]
  unsigned __int16 *v72; // [rsp+A8h] [rbp-58h]
  unsigned __int16 *v73; // [rsp+B0h] [rbp-50h]
  unsigned __int16 *v74; // [rsp+B8h] [rbp-48h]
  struct std::nothrow_t *v75; // [rsp+C0h] [rbp-40h]
  __int64 v76; // [rsp+C8h] [rbp-38h]
  struct KnownGameList::IEnumerateEntries *v77[512]; // [rsp+D0h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1128h] [rbp+1028h]

  v76 = -2LL;
  v69 = a4;
  v58 = a3;
  *(_QWORD *)v65 = a2;
  v64 = this;
  *a4 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v71 = (unsigned __int16 *)v5;
  TOCIndexByIdentifier = CQueryKnownGameList::GetTOCIndexByIdentifier(this, a2, &v54);
  v7 = TOCIndexByIdentifier;
  if ( TOCIndexByIdentifier < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x285,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)TOCIndexByIdentifier);
    return v7;
  }
  v9 = v77;
  v10 = 0LL;
  v70 = 0LL;
  v57 = 4096;
  v11 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
          this,
          v54,
          v77,
          &v57);
  ProcessWorkingDirectoryByPID = v11;
  if ( v11 )
  {
    if ( v11 != -2147024774 )
    {
      if ( v11 >= 0 )
        goto LABEL_83;
      v15 = (unsigned int)v11;
      v16 = 653LL;
      goto LABEL_13;
    }
    v17 = (struct KnownGameList::IEnumerateEntries **)operator new[](v57, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v17;
    if ( !v17 )
    {
      ProcessWorkingDirectoryByPID = -2147024882;
      v15 = 2147942414LL;
      v16 = 658LL;
      goto LABEL_13;
    }
    v10 = v17;
    v70 = v17;
    v18 = (*(__int64 (__fastcall **)(CQueryKnownGameList *, _QWORD, struct KnownGameList::IEnumerateEntries **, unsigned int *))(*(_QWORD *)this + 96LL))(
            this,
            v54,
            v17,
            &v57);
    ProcessWorkingDirectoryByPID = v18;
    if ( v18 < 0 )
    {
      v15 = (unsigned int)v18;
      v16 = 662LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v16,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v15);
      goto LABEL_83;
    }
  }
  v66 = 0LL;
  EnumerateEntriesInstance = KnownGameList::CreateEnumerateEntriesInstance(
                               (KnownGameList *)&v66,
                               v9,
                               (unsigned __int8 *)v57,
                               v13);
  ProcessWorkingDirectoryByPID = EnumerateEntriesInstance;
  v21 = v66;
  v22 = 0LL;
  if ( EnumerateEntriesInstance < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x29A,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
      (const char *)(unsigned int)EnumerateEntriesInstance);
    goto LABEL_81;
  }
  v23 = 0LL;
  v55 = 0LL;
  v24 = 0LL;
  v75 = 0LL;
  v25 = 0LL;
  v72 = 0LL;
  v26 = 0LL;
  v73 = 0LL;
  v27 = 0LL;
  v74 = 0LL;
  while ( 1 )
  {
    if ( v23 )
    {
      v55 = 0LL;
      (*(void (__fastcall **)(struct std::nothrow_t *, struct std::nothrow_t *, __int64, _QWORD))(*(_QWORD *)v23 + 16LL))(
        v23,
        v23,
        v20,
        0LL);
    }
    v28 = (*(__int64 (__fastcall **)(__int64, struct std::nothrow_t **, __int64, __int64))(*(_QWORD *)v21 + 24LL))(
            v21,
            &v55,
            v20,
            v22);
    v63 = v28;
    if ( v28 )
    {
LABEL_57:
      if ( v24 )
        goto LABEL_58;
      if ( v28 == 1 )
      {
LABEL_76:
        ProcessWorkingDirectoryByPID = -2147023728;
        goto LABEL_77;
      }
      v49 = v69;
LABEL_75:
      ProcessWorkingDirectoryByPID = 0;
      if ( *v49 )
        goto LABEL_77;
      goto LABEL_76;
    }
    v67 = 0LL;
    ProcessWorkingDirectoryByPID = (*(__int64 (__fastcall **)(struct std::nothrow_t *, KnownGameList **, unsigned int *))(*(_QWORD *)v55 + 24LL))(
                                     v55,
                                     &v67,
                                     &v60);
    if ( ProcessWorkingDirectoryByPID < 0 )
    {
      v47 = 680LL;
LABEL_70:
      v48 = (unsigned int)ProcessWorkingDirectoryByPID;
      goto LABEL_71;
    }
    v29 = KnownGameList::StrCmpInsensitive(
            v67,
            (const unsigned __int16 *)v60,
            v65[0],
            (const unsigned __int16 *)(unsigned int)v71,
            (unsigned int)v53);
    v22 = 0LL;
    if ( v29 > 0 )
      break;
    if ( v29 )
      goto LABEL_49;
    v30 = (*(__int64 (__fastcall **)(struct std::nothrow_t *, unsigned int *, __int64, _QWORD))(*(_QWORD *)v55 + 40LL))(
            v55,
            &v54,
            v20,
            0LL);
    ProcessWorkingDirectoryByPID = v30;
    v22 = 0LL;
    if ( v30 < 0 )
    {
      v48 = (unsigned int)v30;
      v47 = 702LL;
LABEL_71:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v47,
        (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
        (const char *)v48);
      goto LABEL_77;
    }
    v20 = (unsigned __int16)v54;
    if ( (_WORD)v54 && !v58 )
    {
LABEL_49:
      v23 = v55;
    }
    else
    {
      v31 = 0LL;
      for ( i = (_WORD)v54 != 0; ; i = (unsigned int)v31 < (unsigned __int16)v54 )
      {
        v59 = v31;
        if ( !i )
          break;
        v68 = 0LL;
        v56 = 0LL;
        v53 = &v62;
        v33 = (*(__int64 (__fastcall **)(struct std::nothrow_t *, __int64, int *, KnownGameList **))(*(_QWORD *)v55 + 56LL))(
                v55,
                v31,
                &v61,
                &v68);
        ProcessWorkingDirectoryByPID = v33;
        if ( v33 < 0 )
        {
          v48 = (unsigned int)v33;
          v47 = 723LL;
          goto LABEL_71;
        }
        if ( v61 )
        {
          if ( v61 == 1 )
          {
            if ( !v26 )
            {
              ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessWorkingDirectoryByPID(
                                               v64,
                                               v58,
                                               (const unsigned __int16 **)&v56);
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
                v47 = 738LL;
                goto LABEL_70;
              }
              v39 = v56;
              if ( v56 )
              {
                operator delete(0LL, v38);
                v26 = v39;
                v73 = v39;
              }
            }
            v37 = (unsigned int)v26;
          }
          else
          {
            if ( v61 != 2 )
            {
              ProcessWorkingDirectoryByPID = -2147418113;
              v47 = 754LL;
              goto LABEL_70;
            }
            if ( !v27 )
            {
              ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessParentDirectoryByPID(
                                               v64,
                                               v58,
                                               (const unsigned __int16 **)&v56);
              if ( ProcessWorkingDirectoryByPID < 0 )
              {
                v47 = 747LL;
                goto LABEL_70;
              }
              v41 = v56;
              if ( v56 )
              {
                operator delete(0LL, v40);
                v27 = v41;
                v74 = v41;
              }
            }
            v37 = (unsigned int)v27;
          }
        }
        else
        {
          if ( !v25 )
          {
            ProcessWorkingDirectoryByPID = CQueryKnownGameList::GetProcessArgsByPID(
                                             v64,
                                             v58,
                                             (const unsigned __int16 **)&v56);
            if ( ProcessWorkingDirectoryByPID < 0 )
            {
              v47 = 729LL;
              goto LABEL_70;
            }
            v36 = v56;
            if ( v56 )
            {
              operator delete(0LL, v35);
              v25 = v36;
              v72 = v36;
            }
          }
          v37 = (unsigned int)v25;
        }
        v42 = KnownGameList::StrStrInsensitive(v68, (const unsigned __int16 *)v62, v37, v34);
        v22 = 0LL;
        if ( !v42 )
          goto LABEL_49;
        v31 = (unsigned int)(v59 + 1);
        v20 = (unsigned __int16)v54;
      }
      v23 = v55;
      if ( v24 != v55 )
      {
        v43 = v55;
        if ( v55 )
        {
          (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v55 + 8LL))(v55);
          v23 = v55;
          v20 = (unsigned __int16)v54;
          v22 = 0LL;
        }
        v44 = v24;
        v24 = v43;
        v75 = v43;
        if ( v44 )
        {
          (*(void (__fastcall **)(struct std::nothrow_t *, struct std::nothrow_t *, __int64, _QWORD))(*(_QWORD *)v44 + 16LL))(
            v44,
            v23,
            v20,
            0LL);
          v23 = v55;
          v20 = (unsigned __int16)v54;
          v22 = 0LL;
        }
      }
      if ( (_WORD)v20 )
      {
        v28 = v63;
        goto LABEL_57;
      }
    }
  }
  if ( !v24 )
    goto LABEL_76;
LABEL_58:
  v56 = 0LL;
  *(_QWORD *)v65 = v24;
  v45 = Microsoft::WRL::Details::MakeAndInitialize<CGameEntry,KnownGameList::IGameEntry,KnownGameList::IGameEntry *>(
          &v56,
          v65);
  ProcessWorkingDirectoryByPID = v45;
  if ( v45 >= 0 )
  {
    v49 = v69;
    *v69 = (struct KnownGameList::IGameEntry *)v56;
    goto LABEL_75;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x314,
    (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\knowngamelist.cpp",
    (const char *)(unsigned int)v45);
  v46 = v56;
  if ( v56 )
  {
    v56 = 0LL;
    (*(void (__fastcall **)(unsigned __int16 *))(*(_QWORD *)v46 + 16LL))(v46);
  }
LABEL_77:
  operator delete(v27, v23);
  operator delete(v26, v50);
  operator delete(v25, v51);
  if ( v24 )
    (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v24 + 16LL))(v24);
  v52 = v55;
  if ( v55 )
  {
    v55 = 0LL;
    (*(void (__fastcall **)(struct std::nothrow_t *))(*(_QWORD *)v52 + 16LL))(v52);
  }
LABEL_81:
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
LABEL_83:
  if ( v10 )
    operator delete(v10, v12);
  return (unsigned int)ProcessWorkingDirectoryByPID;
}
