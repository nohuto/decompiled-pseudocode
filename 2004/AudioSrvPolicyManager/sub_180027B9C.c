/*
 * XREFs of sub_180027B9C @ 0x180027B9C
 * Callers:
 *     sub_18002880C @ 0x18002880C (sub_18002880C.c)
 *     sub_18002AF48 @ 0x18002AF48 (sub_18002AF48.c)
 * Callees:
 *     sub_1800050FC @ 0x1800050FC (sub_1800050FC.c)
 *     sub_180017BB0 @ 0x180017BB0 (sub_180017BB0.c)
 *     sub_1800256D8 @ 0x1800256D8 (sub_1800256D8.c)
 *     sub_180025854 @ 0x180025854 (sub_180025854.c)
 *     sub_180025BB0 @ 0x180025BB0 (sub_180025BB0.c)
 *     sub_1800277B0 @ 0x1800277B0 (sub_1800277B0.c)
 *     sub_180027A98 @ 0x180027A98 (sub_180027A98.c)
 *     sub_18002B104 @ 0x18002B104 (sub_18002B104.c)
 *     sub_18002B6A8 @ 0x18002B6A8 (sub_18002B6A8.c)
 *     sub_18002D800 @ 0x18002D800 (sub_18002D800.c)
 *     sub_180036708 @ 0x180036708 (sub_180036708.c)
 *     sub_180039D98 @ 0x180039D98 (sub_180039D98.c)
 *     sub_180039DDC @ 0x180039DDC (sub_180039DDC.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=14
__int64 __fastcall sub_180027B9C(DWORD SessionId, _QWORD *a2, _QWORD *a3)
{
  unsigned int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rcx
  void (__fastcall ***v9)(_QWORD, __int64); // rbx
  __int64 *v10; // rdi
  void (__fastcall ***v11)(_QWORD, __int64); // r8
  int v12; // eax
  __int64 v13; // rbx
  __int64 v14; // r8
  HANDLE ProcessHeap; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 v22; // rsi
  bool v23; // bl
  volatile signed __int32 *v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rbx
  bool v28; // bl
  volatile signed __int32 *v29; // rdx
  __int64 v30; // rbx
  __int64 v31; // rax
  __int64 v32; // rbx
  bool v33; // bl
  volatile signed __int32 *v34; // rdx
  __int64 v35; // rbx
  __int64 v36; // rax
  __int64 v37; // rbx
  bool v38; // bl
  volatile signed __int32 *v39; // rdx
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rbx
  bool v43; // bl
  volatile signed __int32 *v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rax
  __int64 v47; // rbx
  bool v48; // bl
  volatile signed __int32 *v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rbx
  bool v53; // bl
  _QWORD *v54; // rdx
  __int64 v55; // rbx
  void *v56; // rbx
  __int128 v58; // [rsp+30h] [rbp-89h] BYREF
  __int128 v59; // [rsp+40h] [rbp-79h] BYREF
  __int128 v60; // [rsp+50h] [rbp-69h] BYREF
  __int128 v61; // [rsp+60h] [rbp-59h] BYREF
  __int128 v62; // [rsp+70h] [rbp-49h] BYREF
  __int128 v63; // [rsp+80h] [rbp-39h] BYREF
  __int128 v64; // [rsp+90h] [rbp-29h] BYREF
  volatile signed __int32 *v65; // [rsp+A0h] [rbp-19h] BYREF
  volatile signed __int32 *v66; // [rsp+A8h] [rbp-11h] BYREF
  volatile signed __int32 *v67; // [rsp+B0h] [rbp-9h] BYREF
  volatile signed __int32 *v68; // [rsp+B8h] [rbp-1h] BYREF
  volatile signed __int32 *v69; // [rsp+C0h] [rbp+7h] BYREF
  volatile signed __int32 *v70; // [rsp+C8h] [rbp+Fh] BYREF
  void *v71[8]; // [rsp+D0h] [rbp+17h] BYREF
  __int64 v72; // [rsp+130h] [rbp+77h] BYREF
  __int64 v73; // [rsp+138h] [rbp+7Fh] BYREF

  v72 = 0LL;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 4u )
  {
    sub_1800050FC(*((_QWORD *)off_18004F000 + 2), 0x11u, &stru_180044DE8, SessionId);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  sub_180025854(SessionId, &v72);
  if ( !v72 )
    return 14;
  if ( SessionId )
    goto LABEL_20;
  v7 = sub_180039DDC(520LL, &unk_18004FFC8);
  if ( v7 )
    v8 = sub_18002D800(v7);
  else
    v8 = 0LL;
  v9 = (void (__fastcall ***)(_QWORD, __int64))v8;
  v73 = v8;
  v10 = (__int64 *)(v72 + 312);
  if ( (__int64 *)(v72 + 312) != &v73 )
  {
    v9 = 0LL;
    v73 = 0LL;
    v11 = (void (__fastcall ***)(_QWORD, __int64))*v10;
    *v10 = v8;
    if ( !v11 )
      goto LABEL_18;
    (**v11)(v11, 1LL);
    v8 = 0LL;
  }
  if ( v8 )
    (**v9)(v9, 1LL);
LABEL_18:
  if ( !*v10 )
  {
    v6 = 14;
    goto LABEL_144;
  }
LABEL_20:
  v12 = sub_180036708(SessionId);
  v13 = v72;
  *(_DWORD *)(v72 + 4) = v12;
  *(_DWORD *)(v13 + 8) = ++dword_180050004;
  v6 = sub_1800277B0(v13);
  if ( v6 )
    goto LABEL_144;
  if ( off_18004F000 != (_UNKNOWN *)&off_18004F000
    && (*((_DWORD *)off_18004F000 + 7) & 0x40000000) != 0
    && *((_BYTE *)off_18004F000 + 25) >= 5u )
  {
    sub_1800256D8(
      *((_QWORD *)off_18004F000 + 2),
      *(_QWORD *)(v13 + 40),
      v14,
      *(_DWORD *)v13,
      *(_QWORD *)(*(_QWORD *)(v13 + 40) + 176LL),
      *(_QWORD *)(*(_QWORD *)(v13 + 40) + 200LL));
  }
  EnterCriticalSection(&CriticalSection);
  ProcessHeap = GetProcessHeap();
  v16 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v17 = v16;
  if ( v16 )
  {
    *v16 = 0LL;
    v16[1] = 0LL;
    v16[2] = 0LL;
  }
  else
  {
    v17 = 0LL;
  }
  if ( !v17 )
  {
    v6 = 14;
    LeaveCriticalSection(&CriticalSection);
    goto LABEL_144;
  }
  v17[2] = v72;
  *v17 = qword_18004FF98;
  v17[1] = 0LL;
  if ( qword_18004FF98 )
    *(_QWORD *)(qword_18004FF98 + 8) = v17;
  else
    qword_18004FFA0 = (__int64)v17;
  qword_18004FF98 = (__int64)v17;
  ++dword_18004FFA8;
  sub_180027A98(v72);
  LeaveCriticalSection(&CriticalSection);
  if ( a2 )
    *a2 = v17;
  *a3 = v72;
  v18 = sub_180039DDC(24LL, &unk_18004FFC8);
  if ( v18 )
  {
    *(_QWORD *)v18 = off_18003ED00;
    *(_DWORD *)(v18 + 8) = -1047527424;
    *(_BYTE *)(v18 + 12) = 0;
    *(_QWORD *)(v18 + 16) = 400000LL;
  }
  else
  {
    v18 = 0LL;
  }
  v59 = 0LL;
  sub_18002B6A8(&v59, v18);
  if ( !(_QWORD)v59 )
  {
    v6 = 14;
    v19 = *((_QWORD *)&v59 + 1);
    if ( !*((_QWORD *)&v59 + 1) )
      goto LABEL_144;
LABEL_39:
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 8), 0xFFFFFFFF) == 1 )
    {
      v20 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v20 + 12), 0xFFFFFFFF) == 1 )
      {
        v21 = *((_QWORD *)&v59 + 1);
LABEL_42:
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
        goto LABEL_144;
      }
    }
    goto LABEL_144;
  }
  sub_180017BB0((void **)&v65, (__int64)L"SR");
  v22 = v72 + 280;
  v23 = (unsigned int)sub_18002B104(v72 + 280, &v65, &v59) == 0;
  v24 = v65 - 6;
  if ( _InterlockedDecrement(v65 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v24 + 8LL))(*(_QWORD *)v24);
  if ( v23 )
  {
    v6 = 14;
    v19 = *((_QWORD *)&v59 + 1);
    if ( !*((_QWORD *)&v59 + 1) )
      goto LABEL_144;
    goto LABEL_39;
  }
  if ( *((_QWORD *)&v59 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v59 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v25 = *((_QWORD *)&v59 + 1);
      (***((void (__fastcall ****)(_QWORD))&v59 + 1))(*((_QWORD *)&v59 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v59 + 1) + 8LL))(*((_QWORD *)&v59 + 1));
    }
  }
  v26 = sub_180039DDC(24LL, &unk_18004FFC8);
  if ( v26 )
  {
    *(_QWORD *)v26 = off_18003ED00;
    *(_DWORD *)(v26 + 8) = -1042284544;
    *(_BYTE *)(v26 + 12) = 1;
    *(_QWORD *)(v26 + 16) = 400000LL;
  }
  else
  {
    v26 = 0LL;
  }
  v60 = 0LL;
  sub_18002B6A8(&v60, v26);
  if ( !(_QWORD)v60 )
    goto LABEL_56;
  sub_180017BB0((void **)&v66, (__int64)L"Comm");
  v28 = (unsigned int)sub_18002B104(v22, &v66, &v60) == 0;
  v29 = v66 - 6;
  if ( _InterlockedDecrement(v66 - 2) <= 0 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v29 + 8LL))(*(_QWORD *)v29);
  if ( v28 )
  {
LABEL_56:
    v6 = 14;
    if ( *((_QWORD *)&v60 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v27 = *((_QWORD *)&v60 + 1);
        (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v27 + 12), 0xFFFFFFFF) == 1 )
        {
          v21 = *((_QWORD *)&v60 + 1);
          goto LABEL_42;
        }
      }
    }
  }
  else
  {
    if ( *((_QWORD *)&v60 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v60 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v30 = *((_QWORD *)&v60 + 1);
        (***((void (__fastcall ****)(_QWORD))&v60 + 1))(*((_QWORD *)&v60 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v30 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v60 + 1) + 8LL))(*((_QWORD *)&v60 + 1));
      }
    }
    v31 = sub_180039DDC(24LL, &unk_18004FFC8);
    if ( v31 )
    {
      *(_QWORD *)v31 = off_18003ED00;
      *(_DWORD *)(v31 + 8) = -1061158912;
      *(_BYTE *)(v31 + 12) = 0;
      *(_QWORD *)(v31 + 16) = 400000LL;
    }
    else
    {
      v31 = 0LL;
    }
    v61 = 0LL;
    sub_18002B6A8(&v61, v31);
    if ( !(_QWORD)v61 )
      goto LABEL_71;
    sub_180017BB0((void **)&v67, (__int64)L"1");
    v33 = (unsigned int)sub_18002B104(v22, &v67, &v61) == 0;
    v34 = v67 - 6;
    if ( _InterlockedDecrement(v67 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v34 + 8LL))(*(_QWORD *)v34);
    if ( v33 )
    {
LABEL_71:
      v6 = 14;
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v32 = *((_QWORD *)&v61 + 1);
          (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v32 + 12), 0xFFFFFFFF) == 1 )
          {
            v21 = *((_QWORD *)&v61 + 1);
            goto LABEL_42;
          }
        }
      }
    }
    else
    {
      if ( *((_QWORD *)&v61 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v61 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v35 = *((_QWORD *)&v61 + 1);
          (***((void (__fastcall ****)(_QWORD))&v61 + 1))(*((_QWORD *)&v61 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v35 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v61 + 1) + 8LL))(*((_QWORD *)&v61 + 1));
        }
      }
      v36 = sub_180039DDC(24LL, &unk_18004FFC8);
      if ( v36 )
      {
        *(_QWORD *)v36 = off_18003ED00;
        *(_DWORD *)(v36 + 8) = -1047527424;
        *(_BYTE *)(v36 + 12) = 0;
        *(_QWORD *)(v36 + 16) = 400000LL;
      }
      else
      {
        v36 = 0LL;
      }
      v62 = 0LL;
      sub_18002B6A8(&v62, v36);
      if ( !(_QWORD)v62 )
        goto LABEL_86;
      sub_180017BB0((void **)&v68, (__int64)L"2");
      v38 = (unsigned int)sub_18002B104(v22, &v68, &v62) == 0;
      v39 = v68 - 6;
      if ( _InterlockedDecrement(v68 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v39 + 8LL))(*(_QWORD *)v39);
      if ( v38 )
      {
LABEL_86:
        v6 = 14;
        if ( *((_QWORD *)&v62 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v37 = *((_QWORD *)&v62 + 1);
            (***((void (__fastcall ****)(_QWORD))&v62 + 1))(*((_QWORD *)&v62 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v37 + 12), 0xFFFFFFFF) == 1 )
            {
              v21 = *((_QWORD *)&v62 + 1);
              goto LABEL_42;
            }
          }
        }
      }
      else
      {
        if ( *((_QWORD *)&v62 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v62 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v40 = *((_QWORD *)&v62 + 1);
            (***((void (__fastcall ****)(_QWORD))&v62 + 1))(*((_QWORD *)&v62 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v62 + 1) + 8LL))(*((_QWORD *)&v62 + 1));
          }
        }
        v41 = sub_180039DDC(24LL, &unk_18004FFC8);
        if ( v41 )
        {
          *(_QWORD *)v41 = off_18003ED00;
          *(_DWORD *)(v41 + 8) = -1042284544;
          *(_BYTE *)(v41 + 12) = 0;
          *(_QWORD *)(v41 + 16) = 400000LL;
        }
        else
        {
          v41 = 0LL;
        }
        v63 = 0LL;
        sub_18002B6A8(&v63, v41);
        if ( !(_QWORD)v63 )
          goto LABEL_101;
        sub_180017BB0((void **)&v69, (__int64)"3");
        v43 = (unsigned int)sub_18002B104(v22, &v69, &v63) == 0;
        v44 = v69 - 6;
        if ( _InterlockedDecrement(v69 - 2) <= 0 )
          (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v44 + 8LL))(*(_QWORD *)v44);
        if ( v43 )
        {
LABEL_101:
          v6 = 14;
          if ( *((_QWORD *)&v63 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v42 = *((_QWORD *)&v63 + 1);
              (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v42 + 12), 0xFFFFFFFF) == 1 )
              {
                v21 = *((_QWORD *)&v63 + 1);
                goto LABEL_42;
              }
            }
          }
        }
        else
        {
          if ( *((_QWORD *)&v63 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v63 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v45 = *((_QWORD *)&v63 + 1);
              (***((void (__fastcall ****)(_QWORD))&v63 + 1))(*((_QWORD *)&v63 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v45 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v63 + 1) + 8LL))(*((_QWORD *)&v63 + 1));
            }
          }
          v46 = sub_180039DDC(24LL, &unk_18004FFC8);
          *(_QWORD *)&v58 = v46;
          if ( v46 )
          {
            *(_QWORD *)v46 = off_18003ED00;
            *(_DWORD *)(v46 + 8) = -8388608;
            *(_BYTE *)(v46 + 12) = 0;
            *(_QWORD *)(v46 + 16) = 400000LL;
          }
          else
          {
            v46 = 0LL;
          }
          v58 = 0LL;
          sub_18002B6A8(&v58, v46);
          if ( !(_QWORD)v58 )
            goto LABEL_116;
          sub_180017BB0((void **)&v70, (__int64)"4");
          v48 = (unsigned int)sub_18002B104(v22, &v70, &v58) == 0;
          v49 = v70 - 6;
          if ( _InterlockedDecrement(v70 - 2) <= 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v49 + 8LL))(*(_QWORD *)v49);
          if ( v48 )
          {
LABEL_116:
            v6 = 14;
            if ( *((_QWORD *)&v58 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v47 = *((_QWORD *)&v58 + 1);
                (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF) == 1 )
                {
                  v21 = *((_QWORD *)&v58 + 1);
                  goto LABEL_42;
                }
              }
            }
          }
          else
          {
            if ( *((_QWORD *)&v58 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v58 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v50 = *((_QWORD *)&v58 + 1);
                (***((void (__fastcall ****)(_QWORD))&v58 + 1))(*((_QWORD *)&v58 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v50 + 12), 0xFFFFFFFF) == 1 )
                  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v58 + 1) + 8LL))(*((_QWORD *)&v58 + 1));
              }
            }
            v51 = sub_180039DDC(24LL, &unk_18004FFC8);
            if ( v51 )
            {
              *(_QWORD *)v51 = off_18003ED00;
              *(_DWORD *)(v51 + 8) = -1042284544;
              *(_BYTE *)(v51 + 12) = 1;
              *(_QWORD *)(v51 + 16) = 400000LL;
            }
            else
            {
              v51 = 0LL;
            }
            v64 = 0LL;
            sub_18002B6A8(&v64, v51);
            if ( (_QWORD)v64 )
            {
              sub_180017BB0(v71, (__int64)L"5");
              v53 = (unsigned int)sub_18002B104(v22, v71, &v64) == 0;
              v54 = (char *)v71[0] - 24;
              if ( _InterlockedDecrement((volatile signed __int32 *)v71[0] - 2) <= 0 )
                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v54 + 8LL))(*v54);
              if ( !v53 )
              {
                if ( *((_QWORD *)&v64 + 1) )
                {
                  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
                  {
                    v55 = *((_QWORD *)&v64 + 1);
                    (***((void (__fastcall ****)(_QWORD))&v64 + 1))(*((_QWORD *)&v64 + 1));
                    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v55 + 12), 0xFFFFFFFF) == 1 )
                      (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v64 + 1) + 8LL))(*((_QWORD *)&v64 + 1));
                  }
                }
                v72 = 0LL;
                v6 = 0;
                goto LABEL_144;
              }
            }
            v6 = 14;
            if ( *((_QWORD *)&v64 + 1) )
            {
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v64 + 1) + 8LL), 0xFFFFFFFF) == 1 )
              {
                v52 = *((_QWORD *)&v64 + 1);
                (***((void (__fastcall ****)(_QWORD))&v64 + 1))(*((_QWORD *)&v64 + 1));
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v52 + 12), 0xFFFFFFFF) == 1 )
                {
                  v21 = *((_QWORD *)&v64 + 1);
                  goto LABEL_42;
                }
              }
            }
          }
        }
      }
    }
  }
LABEL_144:
  v56 = (void *)v72;
  if ( v72 )
  {
    sub_180025BB0(v72);
    sub_180039D98(v56);
  }
  return v6;
}
