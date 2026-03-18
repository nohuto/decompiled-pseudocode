/*
 * XREFs of _InternalRegisterClassEx@16 @ 0x46B9C
 * Callers:
 *     __RegisterClassEx@20 @ 0x47B74 (__RegisterClassEx@20.c)
 *     _RegisterDefaultClass@4 @ 0x70420 (_RegisterDefaultClass@4.c)
 *     _RegisterIconTitleClass@0 @ 0x82F88 (_RegisterIconTitleClass@0.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x2A3EA (--0-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     ?ULongAdd@@YGJKKPAK@Z @ 0x4591A (-ULongAdd@@YGJKKPAK@Z.c)
 *     ??1?$SmartObjStackRef@UtagCLS@@@@QAE@XZ @ 0x46B96 (--1-$SmartObjStackRef@UtagCLS@@@@QAE@XZ.c)
 *     ?ValidateAndLockCursor@@YGHPAPAUtagCURSOR@@H@Z @ 0x47118 (-ValidateAndLockCursor@@YGHPAPAUtagCURSOR@@H@Z.c)
 *     __InnerGetClassPtr@12 @ 0x47482 (__InnerGetClassPtr@12.c)
 *     ?ClassAllocString@@YGPAXQAUtagDESKTOP@@KK@Z @ 0x474CE (-ClassAllocString@@YGPAXQAUtagDESKTOP@@KK@Z.c)
 *     ?LockPointer@@YG?AU_LOCKASSIGNPAIR@@PAV?$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCLS@@PAX@Z @ 0x474F0 (-LockPointer@@YG-AU_LOCKASSIGNPAIR@@PAV-$SharedUserObjPoolPointerFieldspicnSm@UtagCURSOR@@@tagCL.c)
 *     ?CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z @ 0x4750A (-CLSAllocAndInitStackRef@@YGPAUtagCLS@@PAUtagDESKTOP@@KK@Z.c)
 *     ??4?$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QAEPADPAD@Z @ 0x475E6 (--4-$SharedPointerFieldlpszAnsiClassName@D@tagCLS@@QAEPADPAD@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z @ 0x479A8 (-ClassFree@@YGXPAUtagDESKTOP@@PAUtagCLS@@@Z.c)
 *     ?ClassFree@@YGXPAUtagDESKTOP@@PAD@Z @ 0x479F2 (-ClassFree@@YGXPAUtagDESKTOP@@PAD@Z.c)
 *     _MapClientToServerPfn@4 @ 0x47FDC (_MapClientToServerPfn@4.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ??4?$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z @ 0x983B8 (--4-$SmartObjStackRefBase@UtagCLS@@@@IAEAAV0@QAUtagCLS@@@Z.c)
 *     ?ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z @ 0xA6982 (-ValidateClassAtomForRegisterClass@@YGGPAUtagPROCESSINFO@@G@Z.c)
 *     _AllocateUnicodeString@8 @ 0xAB0D2 (_AllocateUnicodeString@8.c)
 *     ??4?$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z @ 0xACF20 (--4-$SharedPoolPointerFieldlpszMenuName@G@tagCLS@@QAEPAGPAG@Z.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 */

int __fastcall InternalRegisterClassEx(_DWORD *a1, __int16 a2, __int16 a3, _DWORD *a4)
{
  int v5; // ebx
  int v6; // edx
  int v7; // eax
  int *v8; // edi
  struct tagDESKTOP *v9; // ecx
  struct tagCLS *inited; // eax
  int v11; // ecx
  _DWORD *v12; // esi
  _DWORD *v13; // edi
  _DWORD *v14; // esi
  __int16 v15; // cx
  int v16; // edx
  int v17; // ecx
  int v18; // eax
  unsigned __int16 v19; // ax
  int v20; // edi
  int v21; // eax
  unsigned __int16 v22; // ax
  struct tagDESKTOP *v23; // ecx
  int v24; // eax
  void *v25; // eax
  const WCHAR *v26; // eax
  int v27; // esi
  int v29; // eax
  int v30; // eax
  int v31; // ecx
  int v32; // edi
  unsigned int v33; // edx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // [esp-8h] [ebp-78h]
  unsigned int v37; // [esp+0h] [ebp-70h]
  unsigned int v38; // [esp+0h] [ebp-70h]
  struct tagCURSOR **v39; // [esp+0h] [ebp-70h]
  struct tagCURSOR **v40; // [esp+0h] [ebp-70h]
  struct tagCURSOR **v41; // [esp+0h] [ebp-70h]
  unsigned int *v42; // [esp+4h] [ebp-6Ch]
  unsigned int v43; // [esp+4h] [ebp-6Ch]
  int v44; // [esp+4h] [ebp-6Ch]
  int v45; // [esp+4h] [ebp-6Ch]
  int v46; // [esp+4h] [ebp-6Ch]
  int v47; // [esp+10h] [ebp-60h] BYREF
  int v48; // [esp+14h] [ebp-5Ch]
  _STRING v49; // [esp+18h] [ebp-58h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+20h] [ebp-50h] BYREF
  _DWORD v51[2]; // [esp+28h] [ebp-48h] BYREF
  _DWORD *v52; // [esp+34h] [ebp-3Ch]
  int *v53; // [esp+38h] [ebp-38h] BYREF
  int v54; // [esp+3Ch] [ebp-34h]
  int v55; // [esp+40h] [ebp-30h]
  int v56; // [esp+44h] [ebp-2Ch]
  int v57; // [esp+48h] [ebp-28h]
  unsigned int v58; // [esp+4Ch] [ebp-24h] BYREF
  int *ClassPtr; // [esp+50h] [ebp-20h]
  __int16 v60; // [esp+56h] [ebp-1Ah]
  CPPEH_RECORD ms_exc; // [esp+58h] [ebp-18h]
  int v62; // [esp+78h] [ebp+8h]

  v60 = a2;
  v52 = a1;
  SmartObjStackRef<tagCLS>::SmartObjStackRef<tagCLS>(v51);
  v5 = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  *(_DWORD *)&v49.Length = 0;
  v49.Buffer = 0;
  v54 = 0;
  v55 = 0;
  v57 = _gptiCurrent;
  ClassPtr = (int *)a1[5];
  v6 = a3 & 1;
  v56 = v6;
  if ( (a3 & 1) == 0 && ClassPtr == (int *)_hModuleWin && *(_WORD *)(_gptiCurrent + 340) >= 0x400u )
  {
LABEL_65:
    v31 = 87;
    goto LABEL_51;
  }
  v7 = a1[12];
  if ( (v7 & 0xFFFF0000) != 0 )
  {
    LOWORD(v7) = UserFindAtom(a1[12]);
    v6 = v56;
  }
  v58 = (unsigned __int16)v7;
  if ( a4 )
    *a4 = 0;
  if ( (_WORD)v7 && !v6 )
  {
    v53 = *(int **)(_gptiCurrent + 232);
    ClassPtr = (int *)_InnerGetClassPtr(ClassPtr);
    if ( ClassPtr )
    {
      if ( PsGetWin32KFilterSet() == 5 )
      {
        if ( a4 )
          *a4 = 1;
        v5 = *ClassPtr;
        goto LABEL_52;
      }
    }
    else
    {
      if ( (a1[1] & 0x4000) == 0 )
        goto LABEL_12;
      v53 = (int *)_InnerGetClassPtr(0);
      if ( !v53 )
        goto LABEL_12;
      if ( PsGetWin32KFilterSet() == 5 )
      {
        if ( a4 )
          *a4 = 1;
        v5 = *v53;
        goto LABEL_52;
      }
    }
    v31 = 1410;
LABEL_51:
    UserSetLastError(v31);
    goto LABEL_52;
  }
LABEL_12:
  if ( (*(_BYTE *)(_gptiCurrent + 264) & 4) != 0 )
  {
    v8 = 0;
    ClassPtr = 0;
  }
  else
  {
    v8 = *(int **)(_gptiCurrent + 248);
    ClassPtr = v8;
  }
  v58 = 8 * ((a3 & 8) != 0) + 56;
  if ( (ULongAdd(a1[3], v58, (int *)&v58, v37, v42) & 0x80000000) != 0 )
    goto LABEL_65;
  inited = CLSAllocAndInitStackRef(v9, v38, v43);
  SmartObjStackRefBase<tagCLS>::operator=(inited);
  if ( !*(_DWORD *)v51[0] )
  {
LABEL_52:
    SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v51);
    return v5;
  }
  LockObjectAssignment(*(_DWORD *)v51[0] + 20, v8);
  *(_DWORD *)(*(_DWORD *)v51[0] + 32) = *(_DWORD *)v51[0];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 8) = a1[1];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 24) = a1[2];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 12) = a1[3];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 48) = a1[4];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 40) = a1[5];
  v11 = *(_DWORD *)v51[0];
  *(_DWORD *)(v11 + 48) = a1[6];
  *(_DWORD *)(v11 + 52) = a1[7];
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 44) = a1[8];
  v12 = a1 + 9;
  v13 = (_DWORD *)(*(_DWORD *)v51[0] + 56);
  *v13 = *v12++;
  *++v13 = *v12;
  v13[1] = v12[1];
  v14 = v52;
  *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 52) = v52[13];
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 6) = a3;
  v15 = v60;
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 4) = v60;
  if ( v15 )
  {
    v29 = *(_DWORD *)(*(_DWORD *)v51[0] + 4);
    if ( v14[14] == 1 )
      v30 = *(_DWORD *)(v29 + 52);
    else
      v30 = *(_DWORD *)(v29 + 48);
    *(_WORD *)(_gpsi + 2 * (v15 & 0x3FFF) - 1168) = v30 + 204;
  }
  if ( (*(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 6) & 1) == 0 )
  {
    v16 = MapClientToServerPfn(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 24));
    if ( v16 )
    {
      v32 = 0;
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 6) |= 1u;
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 6) &= ~2u;
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 24) = v16;
      v33 = 0;
      while ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 24) != dword_24CC54[v33] )
      {
        ++v32;
        v33 += 7;
        if ( v33 >= 56 )
          goto LABEL_19;
      }
      v34 = dword_24CC58[7 * v32];
      if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 48) >= v34 )
      {
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 52) = v34;
        *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 48) -= dword_24CC58[7 * v32];
      }
    }
  }
LABEL_19:
  if ( !ValidateAndLockCursor(v39, v44) )
  {
LABEL_84:
    v53 = *(int **)(*(_DWORD *)v51[0] + 20);
    *(_DWORD *)(*(_DWORD *)v51[0] + 20) = 0;
    ClassFree((struct tagDESKTOP *)v36, (struct tagCLS *)HIDWORD(v36));
    UnlockObjectAssignment(&v53);
    goto LABEL_52;
  }
  if ( !ValidateAndLockCursor(v40, v45) )
  {
LABEL_83:
    HMAssignmentUnlock(*(_DWORD *)v51[0] + 52);
    goto LABEL_84;
  }
  if ( !ValidateAndLockCursor(v41, v46) )
  {
LABEL_82:
    HMAssignmentUnlock(*(_DWORD *)v51[0] + 48);
    goto LABEL_83;
  }
  v36 = LockPointer(*(_DWORD *)v51[0] + 64, *(_DWORD *)(*(_DWORD *)v51[0] + 64));
  HMAssignmentLock(v17, HIDWORD(v36));
  v18 = v14[10];
  if ( (v18 & 0xFFFF0000) != 0 )
  {
    v54 = 1;
    v19 = UserAddAtomEx(v18, 0, 2);
    v20 = v57;
  }
  else
  {
    v20 = v57;
    v19 = ValidateClassAtomForRegisterClass((struct tagPROCESSINFO *)v36, WORD2(v36));
  }
  if ( !v19 )
  {
LABEL_81:
    v35 = *(_DWORD *)v51[0] + 64;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 36) = 0;
    HMAssignmentUnlock(v35);
    goto LABEL_82;
  }
  *(_WORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 2) = v19;
  v21 = v14[12];
  if ( (v21 & 0xFFFF0000) != 0 )
  {
    v55 = 1;
    v22 = UserAddAtomEx(v21, 0, 2);
  }
  else
  {
    v22 = ValidateClassAtomForRegisterClass((struct tagPROCESSINFO *)v36, WORD2(v36));
  }
  if ( !v22 )
  {
LABEL_79:
    if ( v54 )
      UserDeleteAtom(*(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 2));
    goto LABEL_81;
  }
  v23 = *(struct tagDESKTOP **)(*(_DWORD *)v51[0] + 4);
  *(_WORD *)v23 = v22;
  if ( (v14[10] & 0xFFFF0000) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v14[10]);
    v24 = DestinationString.Length + 1;
  }
  else
  {
    v24 = 7;
  }
  v62 = v24;
  v25 = ClassAllocString(v23, v36, HIDWORD(v36));
  if ( !v25 )
  {
LABEL_77:
    if ( v55 )
      UserDeleteAtom(**(unsigned __int16 **)(*(_DWORD *)v51[0] + 4));
    goto LABEL_79;
  }
  if ( ClassPtr )
  {
    tagCLS::SharedPointerFieldlpszAnsiClassName<char>::operator=(v25);
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)v51[0] + 60) = v25;
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 32) = 0;
  }
  if ( (v14[10] & 0xFFFF0000) != 0 )
  {
    v49.MaximumLength = v62;
    v49.Buffer = *(PCHAR *)(*(_DWORD *)v51[0] + 60);
    RtlUnicodeStringToAnsiString(&v49, &DestinationString, 0);
  }
  else
  {
    **(_BYTE **)(*(_DWORD *)v51[0] + 60) = 35;
    RtlIntegerToChar(*((unsigned __int16 *)v14 + 20), 0xAu, v62 - 1, (PCHAR)(*(_DWORD *)(*(_DWORD *)v51[0] + 60) + 1));
  }
  v26 = *(const WCHAR **)(*(_DWORD *)v51[0] + 56);
  if ( v26 && ((unsigned int)v26 & 0xFFFF0000) != 0 )
  {
    ms_exc.registration.TryLevel = 0;
    RtlInitUnicodeString(&DestinationString, v26);
    ms_exc.registration.TryLevel = -2;
    if ( DestinationString.Length )
    {
      v47 = 0;
      v48 = 0;
      if ( AllocateUnicodeString(&v47, &DestinationString) )
      {
        tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(v48);
        goto LABEL_36;
      }
      ClassFree((struct tagDESKTOP *)v36, (char *)HIDWORD(v36));
      goto LABEL_77;
    }
    tagCLS::SharedPoolPointerFieldlpszMenuName<unsigned short>::operator=(0);
  }
LABEL_36:
  if ( v56 || (*(_DWORD *)(*(_DWORD *)(*(_DWORD *)v51[0] + 4) + 8) & 0x4000) != 0 )
  {
    **(_DWORD **)v51[0] = *(_DWORD *)(*(_DWORD *)(v20 + 232) + 196);
    *(_DWORD *)(*(_DWORD *)(v20 + 232) + 196) = *(_DWORD *)v51[0];
  }
  else
  {
    **(_DWORD **)v51[0] = *(_DWORD *)(*(_DWORD *)(v20 + 232) + 192);
    *(_DWORD *)(*(_DWORD *)(v20 + 232) + 192) = *(_DWORD *)v51[0];
  }
  v27 = *(_DWORD *)v51[0];
  SmartObjStackRef<tagCLS>::~SmartObjStackRef<tagCLS>(v51);
  return v27;
}
