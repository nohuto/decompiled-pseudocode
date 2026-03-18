/*
 * XREFs of InternalRegisterClassEx @ 0x1C00D237C
 * Callers:
 *     RegisterDefaultClass @ 0x1C00CFCF0 (RegisterDefaultClass.c)
 *     _RegisterClassEx @ 0x1C00D077C (_RegisterClassEx.c)
 *     RegisterIconTitleClass @ 0x1C011018C (RegisterIconTitleClass.c)
 * Callees:
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C0091348 (--1-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z @ 0x1C00D2B9C (-ValidateAndLockCursor@@YAHPEAPEAUtagCURSOR@@H@Z.c)
 *     _InnerGetClassPtr @ 0x1C00D2BFC (_InnerGetClassPtr.c)
 *     ??$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z @ 0x1C00D35F4 (--$InitLookAsideRef@UtagCLS@@@@YAEPEAUtagCLS@@@Z.c)
 *     ?ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z @ 0x1C00D3654 (-ClassAlloc@@YAPEAXPEAUtagDESKTOP@@KK@Z.c)
 *     MapClientToServerPfn @ 0x1C00D4040 (MapClientToServerPfn.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z @ 0x1C00D40A8 (-ClassFree@@YAXPEAUtagDESKTOP@@PEAUtagCLS@@@Z.c)
 *     UserSetLastError @ 0x1C00D60E0 (UserSetLastError.c)
 *     ?ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z @ 0x1C01111B4 (-ValidateClassAtomForRegisterClass@@YAGPEAUtagPROCESSINFO@@G@Z.c)
 *     AllocateUnicodeString @ 0x1C011B1B8 (AllocateUnicodeString.c)
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QEAA@XZ @ 0x1C015BAE8 (--0-$SmartObjStackRef@UtagCLS@@@@QEAA@XZ.c)
 *     ?ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z @ 0x1C01E858C (-ClassFree@@YAXPEAUtagDESKTOP@@PEAD@Z.c)
 */

__int64 __fastcall InternalRegisterClassEx(__int64 a1, __int16 a2, unsigned int a3, _DWORD *a4)
{
  unsigned int v7; // r8d
  __int64 v8; // rbx
  __int64 v9; // r13
  int v10; // edx
  __int64 v11; // rcx
  unsigned __int16 Atom; // r12
  __int64 *ClassPtr; // r13
  __int64 v14; // rsi
  unsigned int v15; // ecx
  unsigned int v16; // edx
  struct tagCLS *v17; // rax
  struct tagCLS *v18; // r13
  int v19; // r12d
  __int64 v20; // rcx
  __int64 v21; // r9
  int v22; // r15d
  __int64 *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rcx
  int v27; // r13d
  unsigned __int16 v28; // ax
  __int64 v29; // rcx
  unsigned __int16 v30; // ax
  const WCHAR *v31; // rdx
  unsigned int v32; // r15d
  char *Heap; // rax
  __int64 v34; // r8
  const WCHAR *v35; // rdx
  __int64 *v37; // r12
  __int64 v38; // rax
  int v39; // r8d
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned int v44; // r8d
  _QWORD *v45; // r9
  __int64 v46; // r8
  int v47; // edx
  __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD v50[2]; // [rsp+20h] [rbp-C8h] BYREF
  int v51; // [rsp+30h] [rbp-B8h]
  int v52; // [rsp+34h] [rbp-B4h]
  struct tagDESKTOP *v53; // [rsp+38h] [rbp-B0h]
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-A0h] BYREF
  unsigned int v55; // [rsp+58h] [rbp-90h]
  __int64 v56; // [rsp+60h] [rbp-88h] BYREF
  struct _STRING v57; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v58[2]; // [rsp+80h] [rbp-68h] BYREF
  __int128 v59; // [rsp+90h] [rbp-58h] BYREF

  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v50);
  DestinationString = 0LL;
  v57 = 0LL;
  v8 = 0LL;
  v51 = 0;
  v9 = *(_QWORD *)(a1 + 24);
  v10 = a3 & 1;
  v52 = v10;
  if ( (a3 & 1) == 0 && v9 == hModuleWin && *(_WORD *)(gptiCurrent + 632LL) >= 0x400u )
  {
LABEL_87:
    v40 = 87LL;
    goto LABEL_71;
  }
  v11 = *(_QWORD *)(a1 + 80);
  if ( (v11 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    Atom = UserFindAtom(v11);
    v10 = v52;
  }
  else
  {
    Atom = *(_QWORD *)(a1 + 80);
  }
  if ( a4 )
    *a4 = 0;
  if ( Atom && !v10 )
  {
    v53 = *(struct tagDESKTOP **)(gptiCurrent + 424LL);
    ClassPtr = (__int64 *)InnerGetClassPtr(Atom, (char *)v53 + 344, v9);
    if ( ClassPtr )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() != 5 )
        goto LABEL_70;
      if ( a4 )
        *a4 = 1;
      v8 = *ClassPtr;
      goto LABEL_50;
    }
    if ( (*(_DWORD *)(a1 + 4) & 0x4000) != 0 )
    {
      v37 = (__int64 *)InnerGetClassPtr(Atom, (char *)v53 + 352, 0LL);
      if ( v37 )
      {
        if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
        {
          if ( a4 )
            *a4 = 1;
          v8 = *v37;
          goto LABEL_50;
        }
LABEL_70:
        v40 = 1410LL;
LABEL_71:
        UserSetLastError(v40);
        goto LABEL_50;
      }
    }
  }
  v14 = 0LL;
  if ( (*(_DWORD *)(gptiCurrent + 488LL) & 4) == 0 )
    v14 = *(_QWORD *)(gptiCurrent + 456LL);
  v53 = (struct tagDESKTOP *)v14;
  v15 = (a3 & 8) != 0 ? 96 : 88;
  v16 = v15 + *(_DWORD *)(a1 + 16);
  if ( v16 < v15 )
    goto LABEL_87;
  v55 = v15 + *(_DWORD *)(a1 + 16);
  v17 = (struct tagCLS *)ClassAlloc((struct tagDESKTOP *)v14, v16, v7);
  v18 = v17;
  if ( v17 && !(unsigned __int8)InitLookAsideRef<tagCLS>(v17) )
  {
    ClassFree((struct tagDESKTOP *)v14, v18);
    v18 = 0LL;
  }
  if ( v18 == *(struct tagCLS **)v50[0] )
  {
    v19 = 1;
  }
  else
  {
    if ( v50[0] != gSmartObjNullRef && !--*(_DWORD *)(v50[0] + 8LL) )
    {
      if ( *(_BYTE *)(v50[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v50[0]);
    }
    v19 = 1;
    if ( v18 )
    {
      v50[0] = *((_QWORD *)v18 + 16);
      ++*(_DWORD *)(v50[0] + 8LL);
    }
    else
    {
      v50[0] = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v50[0] )
  {
    LockObjectAssignment(*(_QWORD *)v50[0] + 32LL, v14);
    *(_QWORD *)(*(_QWORD *)v50[0] + 56LL) = *(_QWORD *)v50[0];
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 8LL) = *(_DWORD *)(a1 + 4);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 12LL) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) = *(_DWORD *)(a1 + 20);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 64LL) = *(_QWORD *)(a1 + 24);
    *(_OWORD *)(*(_QWORD *)v50[0] + 80LL) = *(_OWORD *)(a1 + 32);
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 72LL) = *(_QWORD *)(a1 + 48);
    v20 = *(_QWORD *)v50[0];
    *(_OWORD *)(v20 + 96) = *(_OWORD *)(a1 + 56);
    *(_QWORD *)(v20 + 112) = *(_QWORD *)(a1 + 72);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL) = *(_DWORD *)(a1 + 88);
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) = a3;
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 4LL) = a2;
    if ( a2 )
    {
      v38 = *(_QWORD *)(*(_QWORD *)v50[0] + 8LL);
      if ( *(_DWORD *)(a1 + 92) == 1 )
        v39 = *(_DWORD *)(v38 + 84);
      else
        v39 = *(_DWORD *)(v38 + 80);
      *(_WORD *)(gpsi + 2LL * ((a2 & 0x2FFFu) - 666) + 328) = v39 + 320;
    }
    if ( (*(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) & 1) == 0 )
    {
      v21 = MapClientToServerPfn(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL));
      if ( v21 )
      {
        v44 = 0;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) |= 1u;
        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 6LL) &= ~2u;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) = v21;
        v45 = &unk_1C02DFC50;
        while ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 32LL) != *v45 )
        {
          ++v44;
          v45 += 6;
          if ( v44 >= 8 )
            goto LABEL_25;
        }
        v46 = 6LL * v44;
        v47 = dword_1C02DFC58[2 * v46];
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) >= v47 )
        {
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 84LL) = v47;
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 80LL) -= dword_1C02DFC58[2 * v46];
        }
      }
    }
LABEL_25:
    v22 = (a3 >> 6) & 1;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 88LL), v22) )
      goto LABEL_103;
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 80LL), v22) )
    {
LABEL_102:
      HMAssignmentUnlock(*(_QWORD *)v50[0] + 88LL);
LABEL_103:
      v56 = *(_QWORD *)(*(_QWORD *)v50[0] + 32LL);
      *(_QWORD *)(*(_QWORD *)v50[0] + 32LL) = 0LL;
      ClassFree((struct tagDESKTOP *)v14, *(struct tagCLS **)v50[0]);
      UnlockObjectAssignment(&v56);
      goto LABEL_50;
    }
    if ( !(unsigned int)ValidateAndLockCursor((struct tagCURSOR **)(*(_QWORD *)v50[0] + 112LL), v22) )
    {
LABEL_101:
      HMAssignmentUnlock(*(_QWORD *)v50[0] + 80LL);
      goto LABEL_102;
    }
    v23 = *(__int64 **)(*(_QWORD *)v50[0] + 112LL);
    v24 = *(_QWORD *)v50[0] + 112LL;
    if ( v23 )
      v25 = *v23;
    else
      v25 = 0LL;
    *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 56LL) = v25;
    v58[0] = v24;
    v58[1] = v23;
    HMAssignmentLock(v58);
    v26 = *(_QWORD *)(a1 + 64);
    if ( (v26 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v27 = 1;
      v28 = UserAddAtomEx(v26, 0LL, 2LL);
    }
    else
    {
      v28 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v26);
      v27 = 0;
    }
    if ( !v28 )
    {
LABEL_100:
      v49 = *(_QWORD *)v50[0] + 112LL;
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 56LL) = 0LL;
      HMAssignmentUnlock(v49);
      goto LABEL_101;
    }
    *(_WORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 2LL) = v28;
    v29 = *(_QWORD *)(a1 + 80);
    if ( (v29 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      v51 = 1;
      v30 = UserAddAtomEx(v29, 0LL, 2LL);
    }
    else
    {
      v30 = ValidateClassAtomForRegisterClass(*(struct tagPROCESSINFO **)(gptiCurrent + 424LL), v29);
      v19 = 0;
    }
    if ( !v30 )
    {
LABEL_98:
      if ( v27 )
        UserDeleteAtom(*(unsigned __int16 *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 2LL));
      goto LABEL_100;
    }
    **(_WORD **)(*(_QWORD *)v50[0] + 8LL) = v30;
    v31 = *(const WCHAR **)(a1 + 64);
    if ( ((unsigned __int64)v31 & 0xFFFFFFFFFFFF0000uLL) != 0 )
    {
      RtlInitUnicodeString(&DestinationString, v31);
      v32 = DestinationString.Length + 1;
    }
    else
    {
      v32 = 7;
    }
    if ( v14 )
      Heap = (char *)RtlAllocateHeap(*(PVOID *)(v14 + 128), 0, v32);
    else
      Heap = (char *)Win32AllocPoolZInit(v32, 1818456917LL);
    if ( Heap )
    {
      if ( v14 )
      {
        v34 = *(_QWORD *)v50[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 48LL) = &Heap[-(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL)
                                                                         - *(_QWORD *)(*(_QWORD *)v50[0] + 16LL))];
        *(_QWORD *)(v34 + 104) = Heap;
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)v50[0] + 104LL) = Heap;
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 48LL) = 0LL;
      }
      if ( (*(_QWORD *)(a1 + 64) & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        v57.MaximumLength = v32;
        v57.Buffer = *(PCHAR *)(*(_QWORD *)v50[0] + 104LL);
        RtlUnicodeStringToAnsiString(&v57, &DestinationString, 0);
      }
      else
      {
        **(_BYTE **)(*(_QWORD *)v50[0] + 104LL) = 35;
        RtlIntegerToChar(
          *(unsigned __int16 *)(a1 + 64),
          0xAu,
          v32 - 1,
          (PCHAR)(*(_QWORD *)(*(_QWORD *)v50[0] + 104LL) + 1LL));
      }
      v35 = *(const WCHAR **)(*(_QWORD *)v50[0] + 96LL);
      if ( v35 && ((unsigned __int64)v35 & 0xFFFFFFFFFFFF0000uLL) != 0 )
      {
        RtlInitUnicodeString(&DestinationString, v35);
        if ( DestinationString.Length )
        {
          v59 = 0LL;
          if ( (unsigned int)AllocateUnicodeString(&v59, &DestinationString) )
          {
            v41 = *(_QWORD *)v50[0];
            v42 = *((_QWORD *)&v59 + 1);
            v43 = *((_QWORD *)&v59 + 1);
            if ( (*((_QWORD *)&v59 + 1) & 0xFFFFFFFFFFFF0000uLL) != 0 )
              v43 = -1LL;
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = v43;
            *(_QWORD *)(v41 + 96) = v42;
            goto LABEL_46;
          }
          ClassFree((struct tagDESKTOP *)v14, *(char **)(*(_QWORD *)v50[0] + 104LL));
          goto LABEL_96;
        }
        v48 = *(_QWORD *)v50[0];
        *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 40LL) = 0LL;
        *(_QWORD *)(v48 + 96) = 0LL;
      }
LABEL_46:
      if ( v52 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v50[0] + 8LL) + 8LL) & 0x4000) != 0 )
      {
        **(_QWORD **)v50[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 352LL) = *(_QWORD *)v50[0];
      }
      else
      {
        **(_QWORD **)v50[0] = *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL);
        *(_QWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 344LL) = *(_QWORD *)v50[0];
      }
      v8 = *(_QWORD *)v50[0];
      goto LABEL_50;
    }
LABEL_96:
    if ( v19 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_QWORD *)v50[0] + 8LL));
    goto LABEL_98;
  }
LABEL_50:
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>((__int64)v50);
  return v8;
}
