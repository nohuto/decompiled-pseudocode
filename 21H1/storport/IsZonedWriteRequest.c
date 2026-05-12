/*
 * XREFs of IsZonedWriteRequest @ 0x1C0012590
 * Callers:
 *     RaidAdapterPostScatterGatherExecute @ 0x1C0005C20 (RaidAdapterPostScatterGatherExecute.c)
 *     RaidUnitCompleteRequest @ 0x1C00083F0 (RaidUnitCompleteRequest.c)
 *     RaUnitAsyncError @ 0x1C000BE48 (RaUnitAsyncError.c)
 *     RaidUpdateZoneIoReceiveWithStatus @ 0x1C0033700 (RaidUpdateZoneIoReceiveWithStatus.c)
 *     RaidUpdateZoneIoSubmission @ 0x1C0033934 (RaidUpdateZoneIoSubmission.c)
 * Callees:
 *     PortSrbGetLbaFromCdb @ 0x1C0057DEC (PortSrbGetLbaFromCdb.c)
 */

char __fastcall IsZonedWriteRequest(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rdx
  char v9; // bp
  _BYTE *v11; // rdi
  char v12; // r11
  unsigned int v13; // ebx
  __int64 v14; // r10
  __int64 v15; // rcx
  unsigned __int64 v16; // r9
  __int64 v17; // r8
  int v18; // ecx
  int v19; // ecx
  _BYTE *v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int8 v22; // r9
  char v23; // bl
  unsigned int v24; // r14d
  __int64 v25; // r11
  __int64 v26; // rcx
  unsigned __int64 v27; // r10
  __int64 v28; // r8
  int v29; // ecx
  int v30; // ecx
  unsigned __int64 v31; // rcx
  int v32; // eax

  if ( a3 )
    a2 = *(_QWORD *)(a3 + 160);
  if ( !a2 )
    return 0;
  if ( !a1 )
    return 0;
  if ( !*(_BYTE *)(a1 + 129) )
    return 0;
  v7 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v7 != 15 )
    return 0;
  v8 = *(_QWORD *)(v7 + 8);
  v9 = *(_BYTE *)(v8 + 2);
  if ( v9 == 40 ? *(_DWORD *)(v8 + 20) : *(unsigned __int8 *)(v8 + 2) )
    return 0;
  if ( v9 != 40 )
  {
    v11 = (_BYTE *)(v8 + 72);
    goto LABEL_33;
  }
  v11 = 0LL;
  v12 = 0;
  if ( !*(_DWORD *)(v8 + 20) )
  {
    v13 = *(_DWORD *)(v8 + 56);
    v14 = 0LL;
    if ( v13 )
    {
      while ( 1 )
      {
        v15 = *(unsigned int *)(v8 + 4 * v14 + 120);
        if ( (unsigned int)v15 >= 0x80 )
        {
          v16 = *(unsigned int *)(v8 + 16);
          if ( (unsigned int)v15 < (unsigned int)v16 )
            break;
        }
LABEL_30:
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_33;
      }
      v17 = (unsigned int)v15;
      v18 = *(_DWORD *)(v15 + v8) - 64;
      if ( v18 )
      {
        v19 = v18 - 1;
        if ( v19 )
        {
          if ( v19 == 1 && v17 + 40 <= v16 )
          {
            v20 = (_BYTE *)(v17 + v8 + 32);
            if ( !*(_DWORD *)(v17 + v8 + 12) )
              v20 = v11;
            v11 = v20;
            goto LABEL_33;
          }
          goto LABEL_29;
        }
        v21 = v17 + 56;
      }
      else
      {
        v21 = v17 + 40;
      }
      if ( v21 <= v16 )
      {
        v12 = 1;
        if ( !*(_BYTE *)(v17 + v8 + 10) )
          goto LABEL_33;
        v11 = (_BYTE *)(v17 + v8 + 24);
      }
LABEL_29:
      if ( v12 )
        goto LABEL_33;
      goto LABEL_30;
    }
  }
LABEL_33:
  v22 = 0;
  if ( v9 == 40 )
  {
    v23 = 0;
    if ( !*(_DWORD *)(v8 + 20) )
    {
      v24 = *(_DWORD *)(v8 + 56);
      v25 = 0LL;
      if ( v24 )
      {
        while ( 1 )
        {
          v26 = *(unsigned int *)(v8 + 4 * v25 + 120);
          if ( (unsigned int)v26 >= 0x80 )
          {
            v27 = *(unsigned int *)(v8 + 16);
            if ( (unsigned int)v26 < (unsigned int)v27 )
              break;
          }
LABEL_48:
          v25 = (unsigned int)(v25 + 1);
          if ( (unsigned int)v25 >= v24 )
            goto LABEL_51;
        }
        v28 = (unsigned int)v26;
        v29 = *(_DWORD *)(v26 + v8) - 64;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            if ( v30 == 1 && v28 + 40 <= v27 )
              goto LABEL_51;
            goto LABEL_47;
          }
          v31 = v28 + 56;
        }
        else
        {
          v31 = v28 + 40;
        }
        if ( v31 <= v27 )
        {
          v22 = *(_BYTE *)(v28 + v8 + 10);
          v23 = 1;
        }
LABEL_47:
        if ( v23 )
          goto LABEL_51;
        goto LABEL_48;
      }
    }
  }
  else
  {
    v22 = *(_BYTE *)(v8 + 10);
  }
LABEL_51:
  if ( !v11 || ((*v11 - 10) & 0x5F) != 0 || !*(_DWORD *)(a1 + 812) )
    return 0;
  v32 = v9 == 40 ? *(_DWORD *)(v8 + 24) : *(_DWORD *)(v8 + 12);
  if ( (v32 & 0x1000) == 0 || !*(_QWORD *)(a1 + 3288) )
    return 0;
  if ( a4 )
    *a4 = (unsigned __int64)*(unsigned int *)(a1 + 812) * PortSrbGetLbaFromCdb(v11, v22) / *(_QWORD *)(a1 + 3264);
  return 1;
}
