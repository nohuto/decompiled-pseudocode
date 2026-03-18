/*
 * XREFs of ?bInit@PFEMEMOBJ@@QEAAHPEAVPFF@@KPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@2HPEAU_UNIVERSAL_FONT_ID@@H@Z @ 0x1C00111D4
 * Callers:
 *     ?bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_EUDCLOAD@@@Z @ 0x1C0010FD4 (-bAddEntry@PFFMEMOBJ@@QEAAHKPEAU_FD_GLYPHSET@@_KPEAU_IFIMETRICS@@1PEAU_UNIVERSAL_FONT_ID@@PEAU_E.c)
 * Callees:
 *     ?bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z @ 0x1C0011618 (-bComputeGISET@@YAHPEAU_IFIMETRICS@@PEAVPFE@@PEAPEAU_GISET@@@Z.c)
 *     ?dpNtmi@PFEOBJ@@QEAAKXZ @ 0x1C0011834 (-dpNtmi@PFEOBJ@@QEAAKXZ.c)
 *     IsAnyCharsetDbcs @ 0x1C0011890 (IsAnyCharsetDbcs.c)
 *     ?lfOrientation@IFIOBJ@@QEAAJXZ @ 0x1C00A124C (-lfOrientation@IFIOBJ@@QEAAJXZ.c)
 *     cCapString @ 0x1C00D9C0C (cCapString.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall PFEMEMOBJ::bInit(
        PFEMEMOBJ *this,
        struct PFF *a2,
        int a3,
        struct _FD_GLYPHSET *a4,
        unsigned __int64 a5,
        struct _IFIMETRICS *a6,
        unsigned __int64 a7,
        int a8,
        struct _UNIVERSAL_FONT_ID *a9,
        int a10)
{
  unsigned int v10; // esi
  __int64 v13; // r15
  __int64 v14; // r10
  __int64 v15; // rax
  _WORD *v16; // rcx
  const wchar_t *v17; // r14
  int v18; // eax
  __int64 v19; // r15
  unsigned int v20; // ecx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // ebx
  char *v24; // r14
  char *v25; // rbx
  __int16 v26; // r8
  _BYTE *v27; // r9
  _WORD *v28; // rax
  __int16 v30; // cx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int *v35; // [rsp+30h] [rbp-91h]
  __int64 v36; // [rsp+38h] [rbp-89h] BYREF
  _OWORD v37[2]; // [rsp+48h] [rbp-79h] BYREF
  _WORD v38[32]; // [rsp+68h] [rbp-59h] BYREF
  char v39; // [rsp+A9h] [rbp-18h] BYREF

  v10 = 0;
  if ( a6->fwdWinAscender + a6->fwdWinDescender == 0 || a6->fwdUnitsPerEm == 0 )
    return 0LL;
  **(_QWORD **)this = a2;
  *(_DWORD *)(*(_QWORD *)this + 8LL) = a3;
  *(_QWORD *)(*(_QWORD *)this + 16LL) = a4;
  *(_QWORD *)(*(_QWORD *)this + 24LL) = a5;
  *(_QWORD *)(*(_QWORD *)this + 32LL) = a6;
  *(_QWORD *)(*(_QWORD *)this + 40LL) = a7;
  *(_QWORD *)(*(_QWORD *)this + 48LL) = 0LL;
  *(_QWORD *)(*(_QWORD *)this + 56LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 64LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 12LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 92LL) = 0;
  *(_QWORD *)(*(_QWORD *)this + 96LL) = 0LL;
  *(_DWORD *)(*(_QWORD *)this + 136LL) = 0;
  v13 = *(_QWORD *)(*(_QWORD *)this + 32LL);
  v36 = v13;
  if ( (unsigned int)IsAnyCharsetDbcs(v13) )
  {
    *(_DWORD *)(v14 + 12) |= 0x80u;
    v14 = *(_QWORD *)this;
  }
  v35 = (int *)(v13 + 8);
  if ( *(_WORD *)(*(int *)(v13 + 8) + v13) == 64 )
    *(_DWORD *)(v14 + 12) |= 0x100u;
  *(_DWORD *)(*(_QWORD *)this + 128LL) = (PFEOBJ::dpNtmi(this) + 119) & 0xFFFFFFFC;
  if ( (a6->flInfo & 0x4000) != 0 && a6->cjIfiExtra > 0x10 )
    *(_DWORD *)(*(_QWORD *)this + 128LL) += 40 * *(ULONG *)((char *)&a6->cjIfiExtra + a6[1].dpwszFaceName);
  if ( a8 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 1u;
  }
  else
  {
    v15 = *((_QWORD *)a2 + 25);
    if ( v15 && !*(_QWORD *)(*(_QWORD *)v15 + 80LL) )
    {
      v31 = *(_DWORD *)(*(_QWORD *)this + 12LL);
      if ( (*((_DWORD *)a2 + 13) & 0x10) != 0 )
        v32 = v31 | 0x40;
      else
        v32 = v31 | 4;
      *(_DWORD *)(*(_QWORD *)this + 12LL) = v32;
      *(_DWORD *)(*(_QWORD *)this + 92LL) = (unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC;
      v13 = v36;
      *(_QWORD *)(*(_QWORD *)this + 96LL) = KeGetCurrentThread();
    }
  }
  if ( a9 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x20u;
  if ( a10 )
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 8u;
  v16 = (_WORD *)(v13 + *(int *)(v13 + 16));
  v17 = v16 + 1;
  if ( *v16 != 64 )
    v17 = (const wchar_t *)(v13 + *(int *)(v13 + 16));
  if ( !_wcsicmp(v17, L"SYSTEM")
    || !_wcsicmp(v17, L"FIXEDSYS")
    || !_wcsicmp(v17, L"TERMINAL")
    || !_wcsicmp(v17, L"SMALL FONTS") && *(_BYTE *)(v13 + 44) == 0x80 )
  {
    *(_DWORD *)(*(_QWORD *)this + 12LL) |= 0x10u;
  }
  *(_QWORD *)(*(_QWORD *)this + 112LL) = 0LL;
  *(_WORD *)(*(_QWORD *)this + 104LL) = 1;
  *(_WORD *)(*(_QWORD *)this + 106LL) = 0;
  *(_DWORD *)(*(_QWORD *)this + 80LL) = _InterlockedIncrement(&dword_1C033C768);
  v18 = IFIOBJ::lfOrientation((IFIOBJ *)&v36);
  v19 = v36;
  *(_DWORD *)(*(_QWORD *)this + 68LL) = v18;
  v20 = *(_DWORD *)(v19 + 4);
  if ( v20 < 4 )
    v21 = 0;
  else
    v21 = *(_DWORD *)(v19 + 192);
  if ( v21 )
  {
    if ( v20 < 4 )
      v33 = 0;
    else
      v33 = *(_DWORD *)(v19 + 192);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = v33;
    *(_DWORD *)(*(_QWORD *)this + 84LL) = 1;
  }
  else
  {
    *(_DWORD *)(*(_QWORD *)this + 84LL) = *((_DWORD *)a2 + 34);
    *(_DWORD *)(*(_QWORD *)this + 88LL) = a3;
    if ( a9 )
      *(_DWORD *)(*(_QWORD *)this + 88LL) += (*((_DWORD *)a9 + 1) - 1) & 0xFFFFFFFE;
  }
  v22 = *(_QWORD *)this;
  memset(v37, 0, sizeof(v37));
  PushThreadGuardedObject(v37, v22, vDeletePFE);
  v23 = bComputeGISET(a6, *(struct PFE **)this, (struct _GISET **)(*(_QWORD *)this + 72LL));
  PopThreadGuardedObject(v37);
  if ( v23 )
  {
    *(_DWORD *)(*(_QWORD *)this + 132LL) = 0;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)this + 32LL) + 40LL) )
    {
      v24 = (char *)gpfsTable;
      v25 = (char *)gpfsTable + 196 * gcfsTable;
      cCapString(v38, v19 + *v35, 32LL);
      if ( v24 < v25 )
      {
        v26 = v38[0];
        v27 = v24 + 195;
        do
        {
          if ( !(*v27 | *(v27 - 66)) )
          {
            v28 = v38;
            if ( v26 == *(_WORD *)(v27 - 65) )
            {
              v30 = v26;
              while ( v30 )
              {
                v30 = *++v28;
                if ( *v28 != *(_WORD *)((char *)v28 + v27 - &v39) )
                  goto LABEL_31;
              }
              *(_BYTE *)((unsigned int)(*(_DWORD *)(*(_QWORD *)this + 132LL))++ + *(_QWORD *)this + 140LL) = (v27 - (_BYTE *)gpfsTable - 195) / 196;
              v26 = v38[0];
            }
          }
LABEL_31:
          v27 += 196;
        }
        while ( v27 - 195 < v25 );
      }
    }
    return 1;
  }
  return v10;
}
