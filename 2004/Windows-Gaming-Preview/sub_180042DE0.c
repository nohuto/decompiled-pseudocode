/*
 * XREFs of sub_180042DE0 @ 0x180042DE0
 * Callers:
 *     sub_18003D03C @ 0x18003D03C (sub_18003D03C.c)
 *     sub_18003DDD8 @ 0x18003DDD8 (sub_18003DDD8.c)
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180042DE0(
        int a1,
        unsigned int a2,
        unsigned int *a3,
        int a4,
        int *a5,
        unsigned __int64 *a6,
        int *a7,
        bool *a8,
        _BYTE *a9)
{
  int v9; // edx
  unsigned int v11; // r10d
  unsigned int v12; // ebp
  int v13; // r15d
  unsigned __int64 v14; // rdi
  char v15; // r14
  char v16; // al
  char v17; // r11
  int v23; // r9d
  unsigned int v24; // edx
  unsigned int v25; // ebx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  int v29; // ecx
  int v30; // eax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rdi
  int v34; // [rsp+20h] [rbp-68h]
  __int64 retaddr; // [rsp+88h] [rbp+0h]
  unsigned int v37; // [rsp+98h] [rbp+10h]
  unsigned int *v38; // [rsp+A0h] [rbp+18h]

  v38 = a3;
  if ( (a2 & 3) != 0 )
  {
    v9 = 86;
LABEL_3:
    sub_180003268(
      retaddr,
      v9,
      (__int64)"onecoreuap\\shell\\twinui\\broadcastdvrcomponent\\kgl\\lib\\autogameprofile.cpp",
      -2147024809);
    return 2147942487LL;
  }
  v11 = 0;
  if ( !a3 )
  {
    v9 = 87;
    goto LABEL_3;
  }
  if ( !a5 )
  {
    v9 = 88;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v9 = 89;
    goto LABEL_3;
  }
  if ( !a7 )
  {
    v9 = 90;
    goto LABEL_3;
  }
  if ( !a8 )
  {
    v9 = 91;
    goto LABEL_3;
  }
  if ( !a9 )
  {
    v9 = 92;
    goto LABEL_3;
  }
  if ( !a4 )
  {
    v9 = 93;
    goto LABEL_3;
  }
  *a5 = 0;
  *a6 = 0LL;
  *a7 = 0;
  v12 = a2 >> 2;
  *a8 = 0;
  *a9 = 0;
  if ( !(a2 >> 2) )
  {
    v9 = 104;
    goto LABEL_3;
  }
  v13 = 0;
  v34 = 0;
  v14 = 0LL;
  v15 = 0;
  if ( qword_18005AE08 )
  {
    v16 = (**(__int64 (__fastcall ***)(__int64))qword_18005AE08)(qword_18005AE08);
    a3 = v38;
    v11 = 0;
    v17 = v16;
  }
  else
  {
    _RAX = 0LL;
    __asm { cpuid }
    if ( (_DWORD)_RBX != 1752462657 || (_DWORD)_RCX != 1145913699 || (v17 = 1, (_DWORD)_RDX != 1769238117) )
      v17 = 0;
  }
  v23 = -1;
  v37 = 0;
  do
  {
    v24 = *a3;
    v25 = *a3 >> 28;
    if ( v25 == 12 )
    {
      if ( (v24 & 0xFE00000) >= 0xC800000
        || (v26 = (v24 >> 14) & 0x7F, v26 >= 0x64)
        || (v27 = (v24 >> 7) & 0x7F, v27 >= 0x64)
        || (v28 = *a3 & 0x7F, v28 >= 0x64)
        || v26 + v28 + v27 > 0x64 )
      {
        v9 = 130;
        goto LABEL_3;
      }
      *a9 = 1;
      a3 = v38;
      v13 = v28 | (2 * (v24 & 0x3F80 | (2 * ((2 * (v24 & 0xFE00000)) | v24 & 0x1FC000))));
      goto LABEL_34;
    }
    if ( a1 == 2 )
    {
      v29 = (v24 >> 21) & 0x3F;
      if ( v29 == 63 )
        v14 = -1LL;
      v30 = v11;
      if ( v29 != 63 )
        v30 = v23;
      v23 = v30;
    }
    else
    {
      v29 = (v24 >> 20) & 0x7F;
      if ( v29 == 127 )
      {
        v14 = -1LL;
        v23 = v11;
      }
    }
    if ( v15 && (v29 != a4 || v37 != v25) )
      v15 = 0;
    if ( v29 != a4 || *a9 && !v15 )
      goto LABEL_34;
    if ( a1 == 2 )
    {
      v34 = HIWORD(v24) & 0x1F;
      *a8 = ((*a3 >> 28) & 2) != 0;
    }
    if ( (v25 & 1) != 0 )
    {
      if ( v17 && !v15 )
      {
        v14 = 0LL;
LABEL_64:
        *a9 = 1;
        v23 = -1;
        goto LABEL_69;
      }
      if ( v23 != -1 && v17 && v15 )
      {
        v14 = 0LL;
        v15 = 0;
        goto LABEL_64;
      }
LABEL_66:
      v23 = v11;
      goto LABEL_69;
    }
    if ( v17 )
      goto LABEL_66;
    *a9 = 1;
    if ( v23 != -1 )
      v14 &= -(__int64)(v15 != 0);
LABEL_69:
    if ( (v25 & 4) != 0 )
    {
      v31 = *a3;
      v32 = 0LL;
      if ( v14 != -1LL )
        v32 = v14;
      v33 = v32;
      if ( (v31 & 0x8000000) != 0 )
      {
        v15 = 1;
        v37 = v25;
        v33 = v32 << 16;
LABEL_74:
        v14 = (unsigned __int16)v31 | v33;
        goto LABEL_34;
      }
      if ( a1 == 2 )
        goto LABEL_74;
      v14 = v31 & ((-(__int64)(v15 != 0) & 0xFFFFFFFFFFF10000uLL) + 0xFFFFF) | v32;
    }
    else if ( (v25 & 0xFFFFFFFD) != 0 && (v25 & 8) != 0 )
    {
      v14 = -1LL;
    }
LABEL_34:
    ++a3;
    ++v11;
    v38 = a3;
  }
  while ( v11 < v12 );
  if ( *a9 || v23 != -1 )
  {
    *a5 = v13;
    *a6 = v14;
    *a7 = v34;
  }
  return 0LL;
}
