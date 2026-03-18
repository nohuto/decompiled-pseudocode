/*
 * XREFs of xxxSetClassData @ 0x1C010CC4C
 * Callers:
 *     xxxSetClassLongPtr @ 0x1C010CB8C (xxxSetClassLongPtr.c)
 *     xxxSetClassLong @ 0x1C0153AEC (xxxSetClassLong.c)
 * Callees:
 *     DwmGetClassStyle @ 0x1C000ECB8 (DwmGetClassStyle.c)
 *     MapClientNeuterToClientPfn @ 0x1C001D7C4 (MapClientNeuterToClientPfn.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0021424 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x1C003109C (HMValidateHandleNoRip.c)
 *     GetCPD @ 0x1C008DF74 (GetCPD.c)
 *     MapClientToServerPfn @ 0x1C008ED7C (MapClientToServerPfn.c)
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     DwmAsyncChildStyleChange @ 0x1C00A27E0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C00A3960 (DirtyVisRgnTrackers.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ClassLock @ 0x1C00FC6D0 (ClassLock.c)
 *     xxxClientWOWGetProcModule @ 0x1C0102900 (xxxClientWOWGetProcModule.c)
 *     ?ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z @ 0x1C0106AF0 (-ClassUnlockWorker@@YAPEAUtagCLS@@PEAU1@@Z.c)
 *     AllocateUnicodeString @ 0x1C011A11C (AllocateUnicodeString.c)
 *     MapServerToClientPfn @ 0x1C01531EC (MapServerToClientPfn.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z @ 0x1C0158ED4 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@PEAUtagCLS@@@Z.c)
 *     ?xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z @ 0x1C01E925C (-xxxSetClassCursor@@YA_KPEAUtagWND@@PEAUtagCLS@@K_K@Z.c)
 */

unsigned __int64 __fastcall xxxSetClassData(struct tagWND *a1, int a2, unsigned __int64 a3, unsigned int a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdi
  __int64 v11; // r14
  _DWORD *v12; // rax
  char v13; // cl
  __int64 v14; // r15
  __int64 v15; // rbx
  unsigned __int64 v16; // r12
  __int64 v18; // rcx
  int v19; // r11d
  __int64 v20; // rax
  __int64 v21; // rcx
  int ClassStyle; // ebx
  __int64 v23; // rcx
  void *v24; // rax
  _DWORD *v25; // rax
  char v26; // cl
  __int64 v27; // rbx
  __int64 v28; // rbx
  const WCHAR *v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rax
  __int64 v37; // r8
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r11
  unsigned int v40; // r9d
  _DWORD *v41; // r10
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 CPD; // rax
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // rsi
  __int64 v52; // rdx
  __int64 v53; // r8
  struct _CALLPROCDATA **v54; // rbx
  __int64 ThreadWin32Thread; // rax
  struct _CALLPROCDATA **v56; // rbx
  __int64 v57; // rax
  _QWORD v58[4]; // [rsp+20h] [rbp-A8h] BYREF
  unsigned __int64 v59; // [rsp+40h] [rbp-88h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-80h] BYREF
  __int128 v61; // [rsp+58h] [rbp-70h] BYREF
  __int128 v62; // [rsp+68h] [rbp-60h] BYREF
  __int64 v63; // [rsp+78h] [rbp-50h]
  __int128 v64; // [rsp+80h] [rbp-48h] BYREF
  __int64 v65; // [rsp+90h] [rbp-38h]

  v6 = a2;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v58, *((_QWORD *)a1 + 17));
  v10 = 0LL;
  v64 = 0LL;
  v65 = 0LL;
  v61 = 0LL;
  DestinationString = 0LL;
  switch ( (_DWORD)v6 )
  {
    case 0xFFFFFFE8:
      v18 = *(_QWORD *)v58[0];
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) & 1) != 0 )
      {
        v14 = MapServerToClientPfn(*(_QWORD *)(*(_QWORD *)(v18 + 8) + 32LL), a4, v9);
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) &= ~1u;
        if ( a4 )
          *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) |= 2u;
      }
      else
      {
        v14 = MapClientNeuterToClientPfn(v18, 0LL, a4);
        if ( v14 == *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 32LL)
          && a4 != ((*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) >> 1) & 1) )
        {
          v19 = 2 - (a4 != 0);
        }
      }
      if ( v19 )
      {
        CPD = GetCPD(*(_QWORD *)v58[0], v19 | 0x10u, v14);
        if ( CPD )
          v14 = CPD;
      }
      if ( (a3 & 0xFFFF0000) == 0xFFFF0000 )
      {
        v48 = HMValidateHandleNoRip(a3, 7);
        if ( v48 )
          a3 = *(_QWORD *)(*(_QWORD *)(v48 + 40) + 16LL);
      }
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 32LL) = a3;
      v20 = MapClientToServerPfn(a3);
      if ( v20 )
      {
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 32LL) = v20;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) |= 1u;
      }
      else if ( a4 )
      {
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) |= 2u;
LABEL_37:
        if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) & 8) != 0 )
        {
          v49 = *(int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 12LL);
          v50 = *(_QWORD *)(*(_QWORD *)v58[0] + 8LL);
          v62 = 0LL;
          v63 = 0LL;
          if ( (unsigned int)ClassLock(*(_QWORD *)v58[0], &v62) )
          {
            if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) & 1) == 0 )
              LOWORD(v10) = xxxClientWOWGetProcModule(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 32LL));
            *(_WORD *)(v49 + v50 + 94) = v10;
            v54 = *(struct _CALLPROCDATA ***)v58[0];
            ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
            *(_QWORD *)(ThreadWin32Thread + 16) = v62;
            ClassUnlockWorker(v54);
          }
          else
          {
            UserSetLastError(5LL, v52, v53);
            *(_WORD *)(v49 + v50 + 94) = 0;
          }
        }
        goto LABEL_24;
      }
      *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) &= ~2u;
      goto LABEL_37;
    case 0xFFFFFFDE:
LABEL_114:
      if ( (unsigned int)ClassLock(*(_QWORD *)v58[0], &v64) )
      {
        v10 = xxxSetClassCursor(a1, *(struct tagCLS **)v58[0], v6, a3);
        v56 = *(struct _CALLPROCDATA ***)v58[0];
        v57 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(v57 + 16) = v64;
        ClassUnlockWorker(v56);
        goto LABEL_25;
      }
LABEL_116:
      v46 = 5LL;
      goto LABEL_117;
    case 0xFFFFFFE3:
      if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) & 8) != 0 )
        *(_DWORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 88LL) = a3;
      goto LABEL_118;
  }
  if ( (_DWORD)v6 != -20 )
  {
    if ( (_DWORD)v6 == -18 )
    {
      v39 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 80LL)
                         + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 84LL));
      v40 = 0;
      v41 = &gDefaultServerClasses;
      while ( 1 )
      {
        v9 = (*v41 >> 3) & 0x1F;
        if ( **(_WORD **)(*(_QWORD *)v58[0] + 8LL) == *(_WORD *)(gpsi + 2 * v9 + 868) )
          break;
        ++v40;
        v41 += 12;
        if ( v40 >= 8 )
          goto LABEL_92;
      }
      v8 = *((unsigned int *)&gDefaultServerClasses + 12 * v40 + 6);
      v42 = *(_QWORD *)(*(_QWORD *)v58[0] + 8LL);
      if ( a3 >= v8 )
      {
        *(_DWORD *)(v42 + 84) = v8;
        LODWORD(a3) = a3 - *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 84LL);
      }
      else
      {
        if ( (*(_WORD *)(v42 + 6) & 0x200) != 0 )
          goto LABEL_116;
        *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 84LL) = 0;
      }
LABEL_92:
      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 80LL) = a3;
      v10 = v39;
      goto LABEL_25;
    }
    if ( (_DWORD)v6 != -14 && (_DWORD)v6 != -12 )
    {
      if ( (_DWORD)v6 != -8 )
      {
        if ( (_DWORD)v6 == -32 )
        {
          v21 = 87LL;
        }
        else
        {
          if ( (int)v6 + 34 >= 0 )
          {
            _mm_lfence();
            v8 = v6;
            v59 = v6;
            v9 = 0x1C0000000uLL;
            if ( *((_BYTE *)&dword_1C02EBC54[23] + v6 + 2) )
            {
              v11 = *(_QWORD *)(*(_QWORD *)v58[0] + 56LL);
              if ( v11 != *(_QWORD *)v58[0] )
              {
                if ( v58[0] != gSmartObjNullRef && !--*(_DWORD *)(v58[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v58[0] + 12LL) )
                  {
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
                    v8 = v6;
                  }
                }
                if ( v11 )
                {
                  v58[0] = *(_QWORD *)(v11 + 128);
                  ++*(_DWORD *)(v58[0] + 8LL);
                }
                else
                {
                  v58[0] = gSmartObjNullRef;
                }
              }
              v12 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + *((unsigned __int8 *)&dword_1C02EBC54[23] + v8 + 2));
              v13 = byte_1C02EBCDA[v8];
              if ( v13 == 4 )
              {
                v14 = (unsigned int)*v12;
                *v12 = a3;
                if ( (_DWORD)v14 != (_DWORD)a3 && (_DWORD)v6 == -26 && (unsigned int)IsWindowDesktopComposed(a1) )
                {
                  DirtyVisRgnTrackers(a1);
                  ClassStyle = DwmGetClassStyle((__int64)a1);
                  v24 = (void *)ReferenceDwmApiPort(v23);
                  DwmAsyncChildStyleChange(v24, *(_QWORD *)a1, -26, ClassStyle);
                }
              }
              else if ( v13 == 8 )
              {
                v14 = *(_QWORD *)v12;
                *(_QWORD *)v12 = a3;
              }
              else
              {
                v14 = *(unsigned __int16 *)v12;
                *(_WORD *)v12 = a3;
              }
              v15 = *(_QWORD *)(*(_QWORD *)v58[0] + 64LL);
              if ( v15 != *(_QWORD *)v58[0] )
              {
                if ( v58[0] != gSmartObjNullRef && !--*(_DWORD *)(v58[0] + 8LL) )
                {
                  if ( *(_BYTE *)(v58[0] + 12LL) )
                    Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
                }
                if ( v15 )
                {
                  v58[0] = *(_QWORD *)(v15 + 128);
                  ++*(_DWORD *)(v58[0] + 8LL);
                }
                else
                {
                  v58[0] = gSmartObjNullRef;
                }
              }
              v16 = v59;
              while ( *(_QWORD *)v58[0] )
              {
                v25 = (_DWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL)
                               + *((unsigned __int8 *)&dword_1C02EBC54[23] + v16 + 2));
                v26 = byte_1C02EBCDA[v16];
                if ( v26 == 4 )
                {
                  v14 = (unsigned int)*v25;
                  *v25 = a3;
                }
                else if ( v26 == 8 )
                {
                  v14 = *(_QWORD *)v25;
                  *(_QWORD *)v25 = a3;
                }
                else
                {
                  v14 = *(unsigned __int16 *)v25;
                  *(_WORD *)v25 = a3;
                }
                v27 = **(_QWORD **)v58[0];
                if ( v27 != *(_QWORD *)v58[0] )
                {
                  if ( v58[0] != gSmartObjNullRef && !--*(_DWORD *)(v58[0] + 8LL) )
                  {
                    if ( *(_BYTE *)(v58[0] + 12LL) )
                      Win32FreeToPagedLookasideList(gpStackRefLookAside, v58[0]);
                  }
                  if ( v27 )
                  {
                    v58[0] = *(_QWORD *)(v27 + 128);
                    ++*(_DWORD *)(v58[0] + 8LL);
                  }
                  else
                  {
                    v58[0] = gSmartObjNullRef;
                  }
                }
              }
LABEL_24:
              v10 = v14;
LABEL_25:
              SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v58);
              return v10;
            }
          }
          v21 = 1413LL;
        }
        UserSetLastError(v21, v8, v9);
        goto LABEL_25;
      }
      v28 = *(_QWORD *)(*(_QWORD *)v58[0] + 96LL);
      v29 = *(const WCHAR **)(*(_QWORD *)(a3 + 16) + 8LL);
      if ( ((unsigned __int64)v29 & 0xFFFFFFFFFFFF0000uLL) == 0 )
      {
        v34 = *(_QWORD *)v58[0];
        v35 = *(_QWORD *)(*(_QWORD *)(a3 + 16) + 8LL);
        v36 = v35;
        if ( (v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v36 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 40LL) = v36;
        *(_QWORD *)(v34 + 96) = v35;
        goto LABEL_79;
      }
      RtlInitUnicodeString(&DestinationString, v29);
      if ( !DestinationString.Length )
      {
        v30 = *(_QWORD *)v58[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v30 + 96) = 0LL;
LABEL_79:
        *(_QWORD *)(a3 + 16) = 0LL;
        if ( (v28 & 0xFFFFFFFFFFFF0000uLL) != 0 )
          Win32FreePool(v28);
        v37 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 16LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 16LL) = *(_QWORD *)a3;
        *(_QWORD *)a3 = v37;
        v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 24LL);
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 24LL) = *(_QWORD *)(a3 + 8);
        *(_QWORD *)(a3 + 8) = v38;
        if ( a4 )
          v10 = *(_QWORD *)a3;
        else
          v10 = v38;
        goto LABEL_25;
      }
      if ( (unsigned int)AllocateUnicodeString(&v61, &DestinationString) )
      {
        v31 = *(_QWORD *)v58[0];
        v32 = *((_QWORD *)&v61 + 1);
        v33 = *((_QWORD *)&v61 + 1);
        if ( (*((_QWORD *)&v61 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
          v33 = -1LL;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 40LL) = v33;
        *(_QWORD *)(v31 + 96) = v32;
        goto LABEL_79;
      }
      *(_QWORD *)(a3 + 16) = 0LL;
      goto LABEL_118;
    }
    goto LABEL_114;
  }
  if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) & 8) == 0 )
  {
    v46 = 87LL;
LABEL_117:
    UserSetLastError(v46, v8, v9);
LABEL_118:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v58);
    return 0LL;
  }
  v43 = *(int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 12LL);
  v44 = *(_QWORD *)(*(_QWORD *)v58[0] + 8LL);
  if ( (*(_BYTE *)(v44 + 6) & 0x10) != 0 )
  {
    v10 = *(unsigned __int16 *)(v43 + v44 + 92);
    *(_WORD *)(*(int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 12LL) + *(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 92LL) = a3;
    goto LABEL_25;
  }
  *(_WORD *)(v43 + v44 + 92) = a3;
  *(_WORD *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 6LL) |= 0x10u;
  v45 = *(int *)(*(_QWORD *)(*(_QWORD *)v58[0] + 8LL) + 12LL);
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v58);
  return v45;
}
