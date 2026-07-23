/*
 * XREFs of PsspCaptureVaSpaceInformation2 @ 0x1801154CC
 * Callers:
 *     PsspCaptureVaSpaceInformation @ 0x1801153DC (PsspCaptureVaSpaceInformation.c)
 * Callees:
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwMapViewOfSection @ 0x18009DB00 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x18009DB40 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x18009DF40 (NtCreateSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1120 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 *     memset @ 0x1800A4740 (memset.c)
 *     PsspCaptureImageInformation @ 0x1801152D4 (PsspCaptureImageInformation.c)
 */

NTSTATUS __fastcall PsspCaptureVaSpaceInformation2(
        __int64 a1,
        void *a2,
        int (__fastcall *a3)(__int64, unsigned __int64, __int64, __int128 *, __int64, __int64 *),
        __int64 a4,
        __int16 a5)
{
  unsigned __int64 v7; // rdi
  unsigned int v8; // esi
  unsigned int v9; // r14d
  unsigned __int64 v10; // rbx
  char v11; // r15
  unsigned __int64 v12; // rcx
  int v13; // edx
  int v14; // eax
  __int64 v15; // rdx
  int v16; // eax
  unsigned __int64 v17; // rcx
  NTSTATUS result; // eax
  NTSTATUS v19; // edi
  unsigned int v20; // r12d
  unsigned __int64 v21; // r14
  unsigned __int16 *v22; // rsi
  int v23; // r13d
  unsigned int v24; // r15d
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned __int16 *v27; // rdi
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int16 v30; // ax
  int v31; // eax
  size_t v32; // r8
  unsigned __int16 v33; // r14
  char v34; // [rsp+58h] [rbp-61h]
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  __int128 v36; // [rsp+68h] [rbp-51h] BYREF
  __int128 v37; // [rsp+78h] [rbp-41h]
  __int128 v38; // [rsp+88h] [rbp-31h]
  PVOID BaseAddress; // [rsp+98h] [rbp-21h] BYREF
  HANDLE SectionHandle; // [rsp+A0h] [rbp-19h] BYREF
  ULONG_PTR ViewSize; // [rsp+A8h] [rbp-11h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+B0h] [rbp-9h] BYREF
  __int128 v43[5]; // [rsp+B8h] [rbp-1h] BYREF

  v7 = 0LL;
  v34 = 0;
  v8 = 0;
  v9 = 0;
  LODWORD(v10) = 0;
  v11 = 0;
  do
  {
    v36 = 0LL;
    v37 = 0LL;
    v38 = 0LL;
    if ( a3(a4, v7, 0LL, &v36, 48LL, 0LL) < 0 )
      break;
    v12 = v36;
    if ( (_QWORD)v36 != v7 )
      return -1073741503;
    if ( DWORD2(v38) == 0x1000000 || (v13 = 0, DWORD2(v38) == 0x40000) )
      v13 = 1;
    v9 += v13;
    if ( (a5 & 0x1000) != 0 && !v11 && (DWORD2(v38) == 0x1000000 || DWORD2(v38) == 0x40000) )
    {
      v35 = 0LL;
      v43[0] = 0LL;
      v14 = a3(a4, v7, 2LL, v43, 16LL, &v35);
      if ( v14 >= 0 || v14 == -1073741820 || v14 == -1073741789 || v14 == -2147483643 )
      {
        v15 = v35;
        if ( HIDWORD(v35) )
          v15 = 0LL;
        v35 = v15;
      }
      else
      {
        LODWORD(v15) = v35;
      }
      if ( (unsigned int)v15 > 0x10 && (v14 >= 0 || v14 == -1073741820 || v14 == -1073741789 || v14 == -2147483643) )
        v16 = (v15 - 5) & 0xFFFFFFF8;
      else
        v16 = 8;
      if ( v16 + (int)v10 < (unsigned int)v10 )
      {
        v11 = 1;
        LODWORD(v10) = -1;
        v34 = 1;
      }
      else
      {
        LODWORD(v10) = v16 + v10;
      }
      v12 = v36;
    }
    ++v8;
    v7 = v12 + *((_QWORD *)&v37 + 1);
  }
  while ( v12 + *((_QWORD *)&v37 + 1) >= v12 );
  v17 = 72LL * v8;
  if ( v17 > 0xFFFFFFFF )
    return -1073741675;
  if ( v11 )
  {
    v10 = 8LL * v9;
    if ( v10 > 0xFFFFFFFF )
      return -1073741675;
  }
  else if ( (a5 & 0x1000) != 0 )
  {
    if ( (int)v10 + 16 < (unsigned int)v10 )
      return -1073741675;
    LODWORD(v10) = v10 + 16;
  }
  if ( (_DWORD)v10 )
  {
    if ( (int)v17 + (int)v10 < (unsigned int)v17 )
      return -1073741675;
    LODWORD(v17) = v17 + v10;
  }
  MaximumSize.QuadPart = (unsigned int)v17;
  result = NtCreateSection(
             &SectionHandle,
             0xF0007u,
             (POBJECT_ATTRIBUTES)&stru_18013FEF8,
             &MaximumSize,
             4u,
             0x8000000u,
             0LL);
  if ( result >= 0 )
  {
    BaseAddress = 0LL;
    ViewSize = 0LL;
    v19 = ZwMapViewOfSection(
            SectionHandle,
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            0LL,
            0LL,
            &ViewSize,
            ViewShare,
            0,
            4u);
    if ( v19 < 0 )
    {
      NtClose(SectionHandle);
      return v19;
    }
    v20 = ViewSize;
    v21 = 0LL;
    v22 = (unsigned __int16 *)BaseAddress;
    v23 = 0;
    v24 = 0;
    while ( 1 )
    {
      if ( v24 + 72 < v24 || v24 + 72 > v20 || (v36 = 0LL, v37 = 0LL, v38 = 0LL, a3(a4, v21, 0LL, &v36, 48LL, 0LL) < 0) )
      {
LABEL_54:
        NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        *(_QWORD *)(a1 + 920) = SectionHandle;
        *(_DWORD *)(a1 + 912) = v23;
        *(_DWORD *)(a1 + 916) = v24;
        *(_QWORD *)(a1 + 928) = MEMORY[0x7FFE0014];
        return 0;
      }
      if ( (_QWORD)v36 != v21 )
        return -1073741503;
      memset(v22, 0, 0x48uLL);
      v25 = 72;
      *(_OWORD *)v22 = v36;
      *((_DWORD *)v22 + 4) = v37;
      *((_QWORD *)v22 + 3) = *((_QWORD *)&v37 + 1);
      *((_QWORD *)v22 + 4) = v38;
      *((_DWORD *)v22 + 10) = DWORD2(v38);
      if ( (a5 & 0x1000) != 0 )
      {
        if ( DWORD2(v38) == 0x1000000 )
        {
          PsspCaptureImageInformation((__int64)(v22 + 24), a2, *((char **)&v36 + 1));
LABEL_56:
          if ( v24 + 76 < v24 || v24 + 76 > v20 )
            goto LABEL_54;
          if ( v34 )
            goto LABEL_72;
          v26 = v24 + 92;
          if ( v24 + 92 < v24 + 76 || v26 > v20 )
          {
            v34 = 1;
            goto LABEL_72;
          }
          v27 = v22 + 36;
          v34 = 0;
          v22[36] = 0;
          v28 = v20 - v26;
          if ( v20 - v26 >= (unsigned int)v10 )
            v28 = v10;
          v29 = v28;
          v30 = -1;
          if ( (unsigned int)v29 < 0xFFFF )
            v30 = v29;
          v22[37] = v30;
          *((_QWORD *)v22 + 10) = v22 + 44;
          v35 = 0LL;
          v31 = a3(a4, v21, 2LL, (__int128 *)(v22 + 36), v29, &v35);
          if ( v31 >= 0 || v31 == -1073741820 || v31 == -1073741789 || v31 == -2147483643 )
          {
            if ( HIDWORD(v35) )
            {
LABEL_72:
              v31 = -1073741675;
              v27 = 0LL;
            }
          }
          if ( v31 < 0 )
          {
            v22[36] = 0;
            LODWORD(v10) = v10 - 2;
            v25 = 80;
          }
          else
          {
            v32 = *v27;
            if ( v32 + 2 > 0xFFFF )
            {
              v33 = 0;
            }
            else
            {
              v33 = v32 + 2;
              memmove(v27 + 1, *((const void **)v27 + 1), v32);
              *(unsigned __int16 *)((char *)v27 + *v27 + 2) = 0;
            }
            *v27 = v33;
            LODWORD(v10) = v10 - ((v33 + 9) & 0xFFFFFFF8);
            v25 = (v33 + 81) & 0xFFFFFFF8;
          }
          goto LABEL_53;
        }
        if ( DWORD2(v38) == 0x40000 )
          goto LABEL_56;
      }
LABEL_53:
      v24 += v25;
      v21 = v36 + *((_QWORD *)&v37 + 1);
      ++v23;
      v22 = (unsigned __int16 *)((char *)v22 + v25);
      if ( (_QWORD)v36 + *((_QWORD *)&v37 + 1) < (unsigned __int64)v36 )
        goto LABEL_54;
    }
  }
  return result;
}
