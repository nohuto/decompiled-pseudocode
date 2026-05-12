/*
 * XREFs of RaidUpdateZoneIoSubmission @ 0x1C0034D34
 * Callers:
 *     RaidUpdateZoneIoMetadata @ 0x1C001D968 (RaidUpdateZoneIoMetadata.c)
 * Callees:
 *     IsZonedWriteRequest @ 0x1C00159B0 (IsZonedWriteRequest.c)
 *     PortSrbGetLbaFromCdb @ 0x1C00593DC (PortSrbGetLbaFromCdb.c)
 */

void __fastcall RaidUpdateZoneIoSubmission(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r13
  __int64 v6; // rdx
  int v7; // r12d
  int v8; // ebp
  __int64 v9; // r14
  char v10; // r11
  unsigned int v11; // ebx
  __int64 v12; // r10
  __int64 v13; // rcx
  unsigned __int64 v14; // r9
  __int64 v15; // r8
  int v16; // ecx
  int v17; // ecx
  __int64 v18; // rcx
  unsigned __int8 v19; // di
  char v20; // r11
  unsigned int v21; // ebx
  __int64 v22; // r10
  __int64 v23; // rcx
  unsigned __int64 v24; // r9
  __int64 v25; // r8
  int v26; // ecx
  int v27; // ecx
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rcx
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // r8
  char v33; // tt
  __int64 v34; // rdx
  signed __int8 v35; // al

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return;
  v5 = *(_QWORD *)(a2 + 184);
  v6 = *(_QWORD *)(v5 + 8);
  v7 = *(_DWORD *)(v6 + 12);
  if ( *(_BYTE *)(v6 + 2) != 40 )
  {
    v19 = *(_BYTE *)(v6 + 10);
    v9 = v6 + 72;
    goto LABEL_41;
  }
  v8 = *(_DWORD *)(v6 + 20);
  v9 = 0LL;
  v10 = 0;
  if ( v8 )
    goto LABEL_16;
  v11 = *(_DWORD *)(v6 + 56);
  v12 = 0LL;
  if ( !v11 )
    goto LABEL_16;
  while ( 1 )
  {
    v13 = *(unsigned int *)(v6 + 4 * v12 + 120);
    if ( (unsigned int)v13 >= 0x80 )
    {
      v14 = *(unsigned int *)(v6 + 16);
      if ( (unsigned int)v13 < (unsigned int)v14 )
        break;
    }
LABEL_31:
    v12 = (unsigned int)(v12 + 1);
    if ( (unsigned int)v12 >= v11 )
      goto LABEL_16;
  }
  v15 = (unsigned int)v13;
  v16 = *(_DWORD *)(v13 + v6) - 64;
  if ( !v16 )
  {
    v28 = v15 + 40;
LABEL_27:
    if ( v28 <= v14 )
    {
      v10 = 1;
      if ( !*(_BYTE *)(v15 + v6 + 10) )
        goto LABEL_16;
      v9 = v15 + v6 + 24;
    }
LABEL_30:
    if ( v10 )
      goto LABEL_16;
    goto LABEL_31;
  }
  v17 = v16 - 1;
  if ( !v17 )
  {
    v28 = v15 + 56;
    goto LABEL_27;
  }
  if ( v17 != 1 || v15 + 40 > v14 )
    goto LABEL_30;
  v18 = v15 + v6 + 32;
  if ( !*(_DWORD *)(v15 + v6 + 12) )
    v18 = v9;
  v9 = v18;
LABEL_16:
  v19 = 0;
  v20 = 0;
  if ( !v8 )
  {
    v21 = *(_DWORD *)(v6 + 56);
    v22 = 0LL;
    if ( v21 )
    {
      while ( 2 )
      {
        v23 = *(unsigned int *)(v6 + 4 * v22 + 120);
        if ( (unsigned int)v23 < 0x80 )
          goto LABEL_38;
        v24 = *(unsigned int *)(v6 + 16);
        if ( (unsigned int)v23 >= (unsigned int)v24 )
          goto LABEL_38;
        v25 = (unsigned int)v23;
        v26 = *(_DWORD *)(v23 + v6) - 64;
        if ( v26 )
        {
          v27 = v26 - 1;
          if ( v27 )
          {
            if ( v27 == 1 && v25 + 40 <= v24 )
              goto LABEL_41;
LABEL_37:
            if ( v20 )
              goto LABEL_41;
LABEL_38:
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= v21 )
              goto LABEL_41;
            continue;
          }
          v29 = v25 + 56;
        }
        else
        {
          v29 = v25 + 40;
        }
        break;
      }
      if ( v29 <= v24 )
      {
        v19 = *(_BYTE *)(v25 + v6 + 10);
        v20 = 1;
      }
      goto LABEL_37;
    }
  }
LABEL_41:
  v30 = *(_QWORD *)(*(_QWORD *)(v5 + 40) + 64LL);
  if ( IsZonedWriteRequest(v30, a2, 0LL, 0LL) )
  {
    v31 = (unsigned __int64)*(unsigned int *)(v30 + 812) * PortSrbGetLbaFromCdb(v9, v19) / *(_QWORD *)(v30 + 3264);
    if ( (v7 & 0x1000000) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(a1 + 128));
    }
    else
    {
      v32 = (unsigned int)v31;
      do
      {
        v34 = *(_QWORD *)(v30 + 3288);
        v35 = *(_BYTE *)(v34 + v32);
        if ( !v35 )
          break;
        v33 = *(_BYTE *)(v34 + v32);
      }
      while ( v33 != _InterlockedCompareExchange8((volatile signed __int8 *)(v32 + v34), v35 - 1, v35) );
    }
  }
}
