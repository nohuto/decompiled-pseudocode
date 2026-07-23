/*
 * XREFs of PnpBuildCmResourceList @ 0x140751340
 * Callers:
 *     PnpBuildCmResourceLists @ 0x14074F70C (PnpBuildCmResourceLists.c)
 *     IopAllocateBootResourcesInternal @ 0x1407B5FF0 (IopAllocateBootResourcesInternal.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x1402539E0 (RtlAppendUnicodeToString.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     ObQueryNameStringMode @ 0x1406C7460 (ObQueryNameStringMode.c)
 *     IopCreateRegistryKeyEx @ 0x14073FF04 (IopCreateRegistryKeyEx.c)
 *     IopChildToRootTranslation @ 0x1407517D4 (IopChildToRootTranslation.c)
 *     IopParentToRawTranslation @ 0x140751988 (IopParentToRawTranslation.c)
 *     IopWriteResourceList @ 0x14075272C (IopWriteResourceList.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

int __fastcall PnpBuildCmResourceList(__int64 a1, int a2)
{
  __int64 v2; // r12
  _DWORD *v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r8
  _DWORD *PoolWithTag; // rax
  _DWORD *v11; // r15
  _DWORD *v12; // rax
  _DWORD *v13; // r13
  __int64 v14; // rcx
  _DWORD *v15; // r14
  int v16; // eax
  _DWORD *v17; // r12
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  _DWORD *v23; // rcx
  int v24; // eax
  _WORD *v25; // rsi
  int v26; // edi
  __int16 v27; // ax
  char *v28; // rsi
  int v29; // eax
  HANDLE v30; // rsi
  char *v31; // rax
  int v32; // r14d
  __int64 v33; // rax
  int v34; // eax
  int v36; // [rsp+38h] [rbp-D0h]
  int v37; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v38; // [rsp+40h] [rbp-C8h]
  _QWORD Destination[3]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v40; // [rsp+60h] [rbp-A8h]
  _QWORD v41[2]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v42[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID P; // [rsp+88h] [rbp-80h] BYREF
  HANDLE Handle; // [rsp+90h] [rbp-78h] BYREF
  __int128 v45; // [rsp+98h] [rbp-70h] BYREF
  char v46; // [rsp+A8h] [rbp-60h] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0LL;
  v4 = a1;
  v42[0] = a1;
  v37 = a2;
  v5 = 0;
  Handle = 0LL;
  v7 = *(_QWORD *)(v2 + 16);
  P = 0LL;
  v6 = *(_QWORD *)v7;
  Destination[0] = v6;
  LODWORD(v7) = *(_DWORD *)(v6 + 20);
  if ( !(_DWORD)v7 )
    goto LABEL_42;
  v8 = (__int64 *)(v6 + 24);
  v9 = (unsigned int)v7;
  do
  {
    v7 = *v8++;
    v5 += *(_DWORD *)(v7 + 276) + 1;
    --v9;
  }
  while ( v9 );
  if ( !v5 )
  {
LABEL_42:
    *(_DWORD *)(v4 + 56) = -1073741595;
    goto LABEL_43;
  }
  LODWORD(v40) = 20 * (v5 + 1);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)v40, 0x20207050u);
  Destination[1] = PoolWithTag;
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_37:
    LODWORD(v7) = -1073741670;
    *(_DWORD *)(v4 + 56) = -1073741670;
LABEL_43:
    *(_QWORD *)(v4 + 48) = 0LL;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, (unsigned int)v40);
  v12 = ExAllocatePoolWithTag(PagedPool, (unsigned int)v40, 0x20207050u);
  v13 = v12;
  if ( !v12 )
  {
    ExFreePoolWithTag(v11, 0);
    goto LABEL_37;
  }
  memset(v12, 0, (unsigned int)v40);
  v14 = Destination[0];
  v15 = v11 + 5;
  *v11 = 1;
  v11[1] = *(_DWORD *)v2;
  v11[2] = *(_DWORD *)(v2 + 4);
  v11[3] = 65537;
  v11[4] = v5;
  *v13 = 1;
  v13[1] = *(_DWORD *)v2;
  v16 = *(_DWORD *)(v2 + 4);
  v17 = v13 + 5;
  v13[2] = v16;
  v7 = 0LL;
  v13[3] = 65537;
  v13[4] = v5;
  LODWORD(v38) = 0;
  if ( !*(_DWORD *)(v14 + 20) )
  {
LABEL_19:
    if ( v37 )
    {
      v28 = *(char **)v4;
      LODWORD(v7) = IopCreateRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineHardwareResourceMapName, 0x2001Fu, 1u, 0LL);
      if ( (int)v7 >= 0 )
      {
        v37 = 0;
        v41[1] = L"PnP Manager";
        v41[0] = 1572886LL;
        v42[1] = L"PnpManager";
        v42[0] = 1441812LL;
        *(_OWORD *)&Destination[1] = 0LL;
        v29 = ObQueryNameStringMode(v28, (__int64)&v45, 0x200u, &v37, 0);
        v30 = Handle;
        if ( v29 >= 0 )
        {
          WORD1(v45) = 496;
          v31 = &v46;
          if ( (_WORD)v45 )
            v31 = (char *)*((_QWORD *)&v45 + 1);
          *((_QWORD *)&v45 + 1) = v31;
          *(_OWORD *)&Destination[1] = v45;
          RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Raw");
          v32 = v40;
          if ( (int)IopWriteResourceList(v30, v41, v42, &Destination[1], v13, v40) >= 0 )
          {
            *(_OWORD *)&Destination[1] = v45;
            RtlAppendUnicodeToString((PUNICODE_STRING)&Destination[1], L".Translated");
            IopWriteResourceList(v30, v41, v42, &Destination[1], v11, v32);
          }
        }
        LODWORD(v7) = ZwClose(v30);
      }
    }
    *(_QWORD *)(v4 + 48) = v11;
    v3 = v13;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(v14 + 8 * v7 + 24);
    if ( !*(_BYTE *)(v18 + 8) )
    {
      *(_OWORD *)v17 = *(_OWORD *)(v18 + 136);
      v17[4] = *(_DWORD *)(v18 + 152);
      *(_OWORD *)v15 = *(_OWORD *)(v18 + 136);
      v34 = *(_DWORD *)(v18 + 152);
      goto LABEL_33;
    }
    v19 = *(_QWORD *)(v18 + 32);
    v41[0] = v19;
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v20 = *(_QWORD *)(v19 + 112);
    }
    else
    {
      v36 = IopParentToRawTranslation();
      if ( v36 < 0 )
        break;
      v20 = *(_QWORD *)(v18 + 112);
      v19 = v41[0];
    }
    *(_OWORD *)v17 = *(_OWORD *)v20;
    v17[4] = *(_DWORD *)(v20 + 16);
    if ( *(_DWORD *)(v19 + 128) == 2 )
    {
      v33 = *(_QWORD *)(v19 + 112);
      v14 = Destination[0];
      *(_OWORD *)v15 = *(_OWORD *)v33;
      v34 = *(_DWORD *)(v33 + 16);
LABEL_33:
      v15[4] = v34;
      goto LABEL_17;
    }
    v21 = *(_QWORD *)(v18 + 72);
    if ( v21 )
      v22 = *(_QWORD *)(*(_QWORD *)(v21 + 312) + 40LL);
    else
      LODWORD(v22) = 0;
    v36 = IopChildToRootTranslation(
            v22,
            *(_DWORD *)v18,
            *(_DWORD *)(v18 + 4),
            *(_DWORD *)(v18 + 80),
            v18 + 136,
            (__int64)&P);
    if ( v36 < 0 )
      break;
    v23 = P;
    *(_OWORD *)v15 = *(_OWORD *)P;
    v15[4] = v23[4];
    ExFreePoolWithTag(v23, 0);
    v14 = Destination[0];
LABEL_17:
    v24 = *(_DWORD *)(v18 + 276);
    v17 += 5;
    v15 += 5;
    if ( v24 )
    {
      v25 = (_WORD *)(*(_QWORD *)(v18 + 280) + 8LL);
      v26 = v24;
      do
      {
        *(_BYTE *)v17 = -127;
        *(_BYTE *)v15 = -127;
        *((_BYTE *)v17 + 1) = 1;
        *((_BYTE *)v15 + 1) = 1;
        v27 = *(v25 - 2);
        *((_WORD *)v17 + 1) = v27;
        *((_WORD *)v15 + 1) = v27;
        memmove(v17 + 1, v25, 0xCuLL);
        memmove(v15 + 1, v25, 0xCuLL);
        v25 += 16;
        v17 += 5;
        v15 += 5;
        --v26;
      }
      while ( v26 );
      v4 = v42[0];
      v11 = (_DWORD *)Destination[1];
      v14 = Destination[0];
    }
    v7 = (unsigned int)(v38 + 1);
    LODWORD(v38) = v7;
    if ( (unsigned int)v7 >= *(_DWORD *)(v14 + 20) )
      goto LABEL_19;
  }
  ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag(v13, 0);
  LODWORD(v7) = -1073741670;
  if ( v36 == -1073741267 )
    LODWORD(v7) = -1073741267;
  *(_DWORD *)(v4 + 56) = v7;
LABEL_21:
  *(_QWORD *)(v4 + 40) = v3;
  return v7;
}
