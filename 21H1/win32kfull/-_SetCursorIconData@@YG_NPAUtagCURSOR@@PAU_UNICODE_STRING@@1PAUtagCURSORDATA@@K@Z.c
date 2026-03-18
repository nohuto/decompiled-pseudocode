/*
 * XREFs of ?_SetCursorIconData@@YG_NPAUtagCURSOR@@PAU_UNICODE_STRING@@1PAUtagCURSORDATA@@K@Z @ 0x775F8
 * Callers:
 *     _NtUserSetCursorIconData@16 @ 0x77412 (_NtUserSetCursorIconData@16.c)
 *     ?_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z @ 0xC4B12 (-_DuplicateCursor@@YGPAUtagCURSOR@@PAU1@_N@Z.c)
 * Callees:
 *     _GreDereferenceObject@8 @ 0x206B0 (_GreDereferenceObject@8.c)
 *     _GreReferenceObject@4 @ 0x20BD0 (_GreReferenceObject@4.c)
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     _GetDpiForSystem@0 @ 0x3D2A0 (_GetDpiForSystem@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     ?RtlStringCchCopyW@@YGJPAGIPBG@Z @ 0x48774 (-RtlStringCchCopyW@@YGJPAGIPBG@Z.c)
 *     _GreExtGetObjectW@12 @ 0x4B144 (_GreExtGetObjectW@12.c)
 *     _GetDpiDependentMetric@8 @ 0x6E48A (_GetDpiDependentMetric@8.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?LinkCursor@@YGXPAUtagCURSOR@@@Z @ 0x77AC2 (-LinkCursor@@YGXPAUtagCURSOR@@@Z.c)
 *     ?ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z @ 0x77B00 (-ProcessAlphaBitmap@@YGPAUHBITMAP__@@PAU1@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _AllocateUnicodeString@8 @ 0xAB0D2 (_AllocateUnicodeString@8.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 */

char __userpurge _SetCursorIconData@<al>(
        int a1@<edx>,
        int a2@<ecx>,
        struct tagCURSOR *a3,
        struct _UNICODE_STRING *a4,
        size_t MaxCount,
        struct tagCURSORDATA *a6,
        unsigned int a7)
{
  PWSTR Buffer; // edx
  __int16 v9; // ax
  INT DpiForSystem; // eax
  void *v11; // eax
  int v12; // ecx
  char *v13; // edi
  int v14; // eax
  int v15; // edx
  int v16; // ecx
  int i; // ecx
  int v18; // ecx
  int v19; // edi
  int v20; // eax
  int v21; // eax
  PKTHREAD CurrentThread; // eax
  _DWORD *ThreadWin32Thread; // eax
  PWSTR v24; // ecx
  HSURF v25; // ecx
  PWSTR v26; // ecx
  struct HLFONT__ *v27; // ecx
  int v28; // eax
  int v29; // eax
  PWSTR v31; // ecx
  struct tagCURSOR *v32; // [esp-8h] [ebp-8Ch]
  HBITMAP v33; // [esp+0h] [ebp-84h]
  const unsigned __int16 *v34; // [esp+4h] [ebp-80h]
  _DWORD v35[6]; // [esp+10h] [ebp-74h] BYREF
  _DWORD v36[7]; // [esp+28h] [ebp-5Ch] BYREF
  WCHAR *v37; // [esp+44h] [ebp-40h]
  struct _UNICODE_STRING v38; // [esp+48h] [ebp-3Ch] BYREF
  int v39; // [esp+58h] [ebp-2Ch]
  int v40; // [esp+5Ch] [ebp-28h]
  void *v41; // [esp+60h] [ebp-24h]
  int v42; // [esp+64h] [ebp-20h]
  CPPEH_RECORD ms_exc; // [esp+6Ch] [ebp-18h]
  struct _UNICODE_STRING *v44; // [esp+90h] [ebp+Ch]
  struct _UNICODE_STRING *v45; // [esp+90h] [ebp+Ch]
  size_t MaxCounta; // [esp+94h] [ebp+10h]

  v40 = a1;
  v39 = a2;
  v41 = 0;
  memset(v36, 0, 0x18u);
  memset(v35, 0, sizeof(v35));
  *(_DWORD *)(a2 + 44) &= ~0x800u;
  Buffer = a4[1].Buffer;
  v42 = *(_DWORD *)(a2 + 44) | (unsigned int)Buffer;
  if ( ((unsigned __int8)Buffer & 8) != 0 && *(_DWORD *)(a2 + 56) )
    return 0;
  if ( !*(_WORD *)a3 )
  {
    *(_DWORD *)(a2 + 28) = *(_DWORD *)a3;
    *(_DWORD *)(a2 + 32) = *((_DWORD *)a3 + 1);
    goto LABEL_12;
  }
  if ( AllocateUnicodeString(a2 + 28, a3) )
  {
LABEL_12:
    if ( *(_DWORD *)(v40 + 4) )
    {
      UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)&v38);
      ms_exc.registration.TryLevel = 0;
      v9 = RtlStringCchCopyW(256, gawchAtomScratch, *(unsigned __int16 **)(v40 + 4), (unsigned int)v33, v34) < 0
         ? 0
         : UserAddAtomEx(gawchAtomScratch, 0, 2);
      *(_WORD *)(a2 + 36) = v9;
      ms_exc.registration.TryLevel = -2;
      UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v38);
      if ( !*(_WORD *)(a2 + 36) )
      {
        if ( (v42 & 8) == 0 )
        {
          if ( a4[2].Buffer )
            GreDeleteObject(a4[2].Buffer);
          if ( *(_DWORD *)&a4[3].Length )
            GreDeleteObject(*(_DWORD *)&a4[3].Length);
        }
        if ( !*(_WORD *)(a2 + 28) )
          return 0;
        Win32FreePool(*(_DWORD *)(a2 + 32));
        *(_DWORD *)(a2 + 28) = 0;
        goto LABEL_24;
      }
    }
    if ( (v42 & 8) != 0 )
    {
      if ( MaxCount )
        v41 = (void *)Win32AllocPoolWithQuota(MaxCount, 1969451861);
      if ( !v41 )
      {
        if ( *(_WORD *)(a2 + 28) )
        {
          Win32FreePool(*(_DWORD *)(a2 + 32));
          *(_DWORD *)(a2 + 32) = 0;
          *(_DWORD *)(a2 + 28) = 0;
        }
        if ( *(_WORD *)(a2 + 36) )
        {
          UserDeleteAtom(*(unsigned __int16 *)(a2 + 36));
          *(_WORD *)(a2 + 36) = 0;
        }
        return 0;
      }
    }
    *(_DWORD *)(a2 + 44) |= (unsigned int)a4[1].Buffer;
    *(_WORD *)(a2 + 38) = a4[1].Length;
    DpiForSystem = GetDpiForSystem();
    *(_DWORD *)(a2 + 40) = GetDpiDependentMetric(7, DpiForSystem);
    if ( (*(_BYTE *)(a2 + 44) & 8) != 0 )
    {
      qmemcpy((void *)(a2 + 48), &a4[8], 0x18u);
      v11 = v41;
      *(_DWORD *)(a2 + 56) = v41;
      ms_exc.registration.TryLevel = 1;
      memcpy(v11, *(const void **)&a4[9].Length, MaxCount);
      v12 = *(_DWORD *)(a2 + 56);
      v13 = (char *)a4[9].Buffer + v12;
      *(_DWORD *)(a2 + 60) = v13;
      v44 = (struct _UNICODE_STRING *)(v12 + *(_DWORD *)&a4[10].Length);
      *(_DWORD *)(a2 + 64) = v44;
      ms_exc.registration.TryLevel = -2;
      v14 = 0;
      v15 = *(_DWORD *)(a2 + 52);
      if ( v15 > 0 )
      {
        do
        {
          v16 = *(_DWORD *)&v13[4 * v14];
          if ( v16 < 0 || v16 >= *(_DWORD *)(a2 + 48) )
            goto LABEL_42;
        }
        while ( ++v14 < v15 );
      }
      for ( i = 0; i < v15; ++i )
      {
        if ( (unsigned int)(100 * *((_DWORD *)&v44->Length + i)) >= 6 )
          break;
      }
      if ( i == v15 )
      {
LABEL_42:
        v18 = 87;
LABEL_43:
        UserSetLastError(v18);
        Win32FreePool(*(_DWORD *)(a2 + 56));
        *(_DWORD *)(a2 + 56) = 0;
        *(_DWORD *)(a2 + 60) = 0;
        *(_DWORD *)(a2 + 64) = 0;
        *(_DWORD *)(a2 + 48) = 0;
        *(_DWORD *)(a2 + 52) = 0;
        *(_DWORD *)(a2 + 68) = 0;
        return 0;
      }
      v19 = 0;
      if ( *(int *)(a2 + 48) > 0 )
      {
        while ( 1 )
        {
          v20 = HMValidateHandle(*(_DWORD *)(*(_DWORD *)(a2 + 56) + 4 * v19), 3);
          v45 = (struct _UNICODE_STRING *)v20;
          if ( !v20 )
            break;
          v21 = *(_DWORD *)(v20 + 44);
          if ( (v21 & 8) != 0 || (v21 & 0x40) == 0 || PsGetCurrentProcess() != _gpepCSRSS && !v45[1].Buffer )
            break;
          *(_DWORD *)(4 * v19 + *(_DWORD *)(a2 + 56)) = 0;
          v32 = (struct tagCURSOR *)(4 * v19 + *(_DWORD *)(a2 + 56));
          HMAssignmentLock(v45, 4 * v19++);
          if ( v19 >= *(_DWORD *)(a2 + 48) )
            goto LABEL_77;
        }
        while ( --v19 >= 0 )
          HMAssignmentUnlock(*(_DWORD *)(a2 + 56) + 4 * v19);
        v18 = 1402;
        goto LABEL_43;
      }
LABEL_77:
      LinkCursor(v32);
      return 1;
    }
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = (_DWORD *)W32GetThreadWin32Thread(CurrentThread);
    if ( (ThreadWin32Thread[172] & 0x8000000) != 0 )
      ThreadWin32Thread = (_DWORD *)ThreadWin32Thread[212];
    MaxCounta = ThreadWin32Thread[58];
    a4[3].Buffer = 0;
    v36[6] = 0;
    v37 = 0;
    v38 = 0LL;
    *(_DWORD *)&a4[4].Length = 0;
    a4[4].Buffer = v37;
    a4[5] = v38;
    qmemcpy((void *)(a2 + 48), &a4[2], 0x30u);
    *(_DWORD *)(a2 + 52) = 0;
    *(_DWORD *)(a2 + 56) = 0;
    v24 = a4[2].Buffer;
    if ( v24 && GreReferenceObject((HSURF)v24) < 0 )
    {
      GreDeleteObject(a4[2].Buffer);
      if ( *(_DWORD *)&a4[3].Length )
        GreDeleteObject(*(_DWORD *)&a4[3].Length);
      return 0;
    }
    v25 = *(HSURF *)&a4[3].Length;
    if ( v25 && GreReferenceObject(v25) < 0 )
    {
      GreDeleteObject(*(_DWORD *)&a4[3].Length);
      v26 = a4[2].Buffer;
    }
    else
    {
      if ( *(_DWORD *)(a2 + 88) )
      {
        if ( *(_DWORD *)(a2 + 92) )
        {
          v27 = (struct HLFONT__ *)a4[2].Buffer;
          if ( v27 )
          {
            if ( !*(_DWORD *)&a4[3].Length
              || GreExtGetObjectW(v27, 24, v36)
              && GreExtGetObjectW(*(struct HLFONT__ **)&a4[3].Length, 24, v35)
              && (v35[2] == v36[2] >> 1 || v35[2] == v36[2])
              && v35[1] >= v36[1] )
            {
              *(_DWORD *)(a2 + 52) = a4[2].Buffer;
              *(_DWORD *)(a2 + 56) = *(_DWORD *)&a4[3].Length;
              *(_DWORD *)(a2 + 80) = ProcessAlphaBitmap(v33);
              GreSetBitmapOwner(*(_DWORD *)(a2 + 52), 0);
              GreIncQuotaCount(MaxCounta);
              v28 = *(_DWORD *)(a2 + 56);
              if ( v28 )
              {
                GreSetBitmapOwner(v28, 0);
                GreIncQuotaCount(MaxCounta);
              }
              v29 = *(_DWORD *)(a2 + 80);
              if ( v29 )
              {
                GreSetBitmapOwner(v29, 0);
                GreIncQuotaCount(MaxCounta);
              }
              goto LABEL_77;
            }
          }
        }
      }
      UserSetLastError(87);
      v31 = a4[2].Buffer;
      if ( v31 )
        GreDereferenceObject((HSURF)v31, 0);
      v26 = *(PWSTR *)&a4[3].Length;
    }
    if ( v26 )
      GreDereferenceObject((HSURF)v26, 0);
    return 0;
  }
  if ( (v42 & 8) == 0 )
  {
    if ( a4[2].Buffer )
      GreDeleteObject(a4[2].Buffer);
    if ( *(_DWORD *)&a4[3].Length )
      GreDeleteObject(*(_DWORD *)&a4[3].Length);
  }
  *(_DWORD *)(a2 + 28) = 0;
LABEL_24:
  *(_DWORD *)(a2 + 32) = 0;
  return 0;
}
