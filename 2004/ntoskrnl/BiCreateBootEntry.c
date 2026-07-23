/*
 * XREFs of BiCreateBootEntry @ 0x14096DA38
 * Callers:
 *     BiCreateEfiEntry @ 0x14096DDE8 (BiCreateEfiEntry.c)
 * Callees:
 *     swprintf_s @ 0x1403D32F0 (swprintf_s.c)
 *     memmove @ 0x140409FC0 (memmove.c)
 *     BiGetKeyName @ 0x140772420 (BiGetKeyName.c)
 *     BiLogMessage @ 0x1407729BC (BiLogMessage.c)
 *     BiGetElement @ 0x14096C058 (BiGetElement.c)
 *     BiTranslateFilePath @ 0x14096F840 (BiTranslateFilePath.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall BiCreateBootEntry(HANDLE BcdObjectHandle, void **a2)
{
  _DWORD *v2; // rdi
  void *v3; // rsi
  unsigned int *v4; // r14
  void *v5; // r12
  _FILE_PATH *v6; // r15
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
  _FILE_PATH *PoolWithTag; // rax
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
  void *v36; // [rsp+38h] [rbp-30h]
  void *Src; // [rsp+40h] [rbp-28h] BYREF
  _DWORD *v38; // [rsp+48h] [rbp-20h] BYREF
  void *v39; // [rsp+50h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+58h] [rbp-10h] BYREF
  size_t v43; // [rsp+C0h] [rbp+58h] BYREF
  size_t Size; // [rsp+C8h] [rbp+60h] BYREF

  LODWORD(v43) = 0;
  LODWORD(Size) = 0;
  LODWORD(v35) = 0;
  v2 = 0LL;
  P[0] = 0LL;
  v3 = 0LL;
  v38 = 0LL;
  v4 = 0LL;
  Src = 0LL;
  v5 = 0LL;
  v36 = 0LL;
  v6 = 0LL;
  v39 = 0LL;
  Element = BiGetElement(BcdObjectHandle, 0x12000004u, P, &v43);
  v9 = Element;
  if ( Element < 0 )
  {
    BiLogMessage(
      4LL,
      L"BiCreateBootEntry: Could not retrieve BCD Object application description. Status: %x",
      (unsigned int)Element);
    goto LABEL_25;
  }
  v10 = BiGetElement(BcdObjectHandle, 0x11000001u, &v38, &Size);
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
  v11 = BiGetElement(BcdObjectHandle, 0x12000002u, &Src, &v35);
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
  if ( *v38 != 2 )
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
  while ( *((_WORD *)v38 + v15 + 10) );
  v16 = 2 * v15 + 2;
  v17 = v14 + v16;
  LODWORD(Size) = v16;
  if ( v14 + v16 < v16 )
    goto LABEL_24;
  v18 = v17 + 12;
  if ( v17 + 12 < v17 )
    goto LABEL_24;
  PoolWithTag = (_FILE_PATH *)ExAllocatePoolWithTag(PagedPool, v18, 0x4B444342u);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_16:
    v9 = -1073741670;
    goto LABEL_25;
  }
  PoolWithTag->Length = v18;
  v20 = (unsigned int)Size;
  v21 = (unsigned int)Size;
  PoolWithTag->Version = 1;
  PoolWithTag->Type = 3;
  memmove(PoolWithTag->FilePath, v2 + 5, v21);
  memmove(&v6->FilePath[v20], v3, (unsigned int)v35);
  v9 = BiTranslateFilePath(v6, 4u);
  if ( v9 < 0 || (KeyName = BiGetKeyName(BcdObjectHandle, &v39), v5 = v39, v9 = KeyName, KeyName < 0) )
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
    memmove((char *)v27 + v31, P[0], v28);
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
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0x4B444342u);
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
