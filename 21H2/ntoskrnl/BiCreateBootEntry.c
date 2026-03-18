/*
 * XREFs of BiCreateBootEntry @ 0x140A1EE84
 * Callers:
 *     BiCreateEfiEntry @ 0x140A1F234 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x1403E5D20 (swprintf_s.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     BiGetKeyName @ 0x140813564 (BiGetKeyName.c)
 *     BiLogMessage @ 0x1408138F0 (BiLogMessage.c)
 *     BiGetElement @ 0x140A1D4A4 (BiGetElement.c)
 *     BiTranslateFilePath @ 0x140A20C90 (BiTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(void *a1, void **a2)
{
  GUID *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r12
  char *v6; // r15
  int Element; // eax
  int v9; // ebx
  int v10; // eax
  int v11; // eax
  __int64 v12; // r13
  __int64 v13; // rax
  int v14; // edx
  __int64 v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  unsigned int v18; // ebx
  char *PoolWithTag; // rax
  __int64 v20; // rbx
  size_t v21; // r8
  int KeyName; // eax
  int v23; // ebx
  int v24; // r8d
  unsigned int v25; // ecx
  _DWORD *v26; // rax
  _DWORD *v27; // rdx
  size_t v28; // r8
  int v29; // eax
  int v30; // ecx
  __int64 v31; // rax
  char *v32; // rbx
  char *v33; // rax
  size_t v35; // [rsp+30h] [rbp-38h] BYREF
  void *v36; // [rsp+38h] [rbp-30h] BYREF
  void *Src; // [rsp+40h] [rbp-28h] BYREF
  GUID *v38; // [rsp+48h] [rbp-20h] BYREF
  void *v39; // [rsp+50h] [rbp-18h] BYREF
  PVOID P; // [rsp+58h] [rbp-10h] BYREF
  size_t v43; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v43) = 0;
  LODWORD(Size) = 0;
  LODWORD(v35) = 0;
  v2 = 0LL;
  P = 0LL;
  v3 = 0LL;
  v38 = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  Element = BiGetElement((__int64)a1, 0x12000004u, (GUID **)&P, &v43);
  v9 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_25;
  }
  v10 = BiGetElement((__int64)a1, 0x11000001u, &v38, &Size);
  v9 = v10;
  if ( v10 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application device. Status: %x",
      (unsigned int)v10);
    v2 = v38;
    goto LABEL_25;
  }
  v11 = BiGetElement((__int64)a1, 0x12000002u, (GUID **)&Src, &v35);
  v9 = v11;
  if ( v11 < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application path. Status: %x",
      (unsigned int)v11);
    v2 = v38;
    v3 = Src;
    goto LABEL_25;
  }
  v2 = v38;
  v3 = Src;
  if ( v38->Data1 != 2 )
  {
    v9 = -1073741637;
    goto LABEL_25;
  }
  v12 = -1LL;
  v13 = -1LL;
  do
    ++v13;
  while ( *((_WORD *)Src + v13) );
  v14 = 2 * v13 + 2;
  v15 = -1LL;
  LODWORD(v35) = v14;
  do
    ++v15;
  while ( *(&v38[1].Data2 + v15) );
  v16 = 2 * v15 + 2;
  v17 = v14 + v16;
  LODWORD(Size) = v16;
  if ( v14 + v16 < v16 )
    goto LABEL_24;
  v18 = v17 + 12;
  if ( v17 + 12 < v17 )
    goto LABEL_24;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_16:
    v9 = -1073741670;
    goto LABEL_25;
  }
  *((_DWORD *)PoolWithTag + 1) = v18;
  v20 = (unsigned int)Size;
  v21 = (unsigned int)Size;
  *(_DWORD *)PoolWithTag = 1;
  *((_DWORD *)PoolWithTag + 2) = 3;
  memmove(PoolWithTag + 12, &v2[1].Data2, v21);
  memmove(&v6[v20 + 12], v3, (unsigned int)v35);
  v9 = BiTranslateFilePath(v6, 4LL, &v36);
  if ( v9 < 0 || (KeyName = BiGetKeyName(a1, &v39), v5 = v39, v9 = KeyName, KeyName < 0) )
  {
    v4 = (unsigned int *)v36;
    goto LABEL_25;
  }
  do
    ++v12;
  while ( *((_WORD *)v39 + v12) );
  v4 = (unsigned int *)v36;
  LODWORD(v38) = (2 * v12 + 45) & 0xFFFFFFFC;
  v23 = (_DWORD)v38 + 16;
  LODWORD(Src) = (_DWORD)v38 + 16;
  v24 = *((_DWORD *)v36 + 1);
  v25 = ((_DWORD)v38 + 47) & 0xFFFFFFFC;
  LODWORD(v39) = v25;
  if ( (unsigned int)v43 + v25 + v24 + 4 < (unsigned int)v43 )
  {
LABEL_24:
    v9 = -1073741675;
  }
  else
  {
    LODWORD(Size) = (v25 + v43 + 3) & 0xFFFFFFFC;
    LODWORD(v35) = v24 + Size;
    v26 = ExAllocatePoolWithTag(PagedPool, (unsigned int)(v24 + Size), 0x4B444342u);
    v36 = v26;
    v27 = v26;
    if ( !v26 )
      goto LABEL_16;
    v26[2] = -1;
    v28 = (unsigned int)v43;
    *v26 = 1;
    v29 = v35;
    v27[3] = 1;
    v30 = Size;
    v27[1] = v29;
    v31 = (unsigned int)v39;
    v27[5] = v30;
    v27[4] = v31;
    v27[6] = v23;
    memmove((char *)v27 + v31, P, v28);
    v32 = (char *)v36;
    memmove((char *)v36 + (unsigned int)Size, v4, v4[1]);
    v32 += 28;
    *(_QWORD *)v32 = 0x53574F444E4957LL;
    *((_DWORD *)v32 + 3) = (_DWORD)Src;
    *((_DWORD *)v32 + 4) = (_DWORD)v38;
    *((_DWORD *)v32 + 2) = 1;
    swprintf_s((wchar_t *)v32 + 10, (unsigned int)v12 + 11LL, L"%s%s", L"BCDOBJECT=", v5);
    v33 = &v32[*((unsigned int *)v32 + 4)];
    v9 = 0;
    *(_DWORD *)v33 = 1;
    *((_DWORD *)v33 + 1) = 16;
    *((_DWORD *)v33 + 2) = 4;
    *((_DWORD *)v33 + 3) = 327551;
    *a2 = v36;
  }
LABEL_25:
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x4B444342u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x4B444342u);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x4B444342u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  return (unsigned int)v9;
}
