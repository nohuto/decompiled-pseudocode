/*
 * XREFs of ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0035F60
 * Callers:
 *     VidSchSubmitWaitToHwQueue @ 0x1C003A710 (VidSchSubmitWaitToHwQueue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAcquireSyncObjectForHwQueue(
        struct _VIDSCH_SYNC_OBJECT *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        __int64 a3)
{
  __int64 v3; // r11
  char v4; // r10
  char v5; // si
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rax
  int v10; // eax
  unsigned __int64 v11; // r9
  unsigned __int64 *v12; // rax
  char *v13; // rdx
  char *v14; // rax
  char **v15; // r9
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r9
  int v20; // r9d
  int v21; // eax
  __int64 v22; // rax
  __int64 v23; // rax

  v3 = *((_QWORD *)a2 + 12);
  v4 = 0;
  v5 = 0;
  v6 = *(_QWORD *)(*(_QWORD *)(v3 + 40) + 8LL);
  v7 = *(_QWORD *)(v6 + 32);
  if ( *((_DWORD *)a1 + 8) == 0x7FFFFFFF )
    goto LABEL_2;
  v10 = *((_DWORD *)a1 + 11);
  if ( !v10 )
  {
    if ( *((_QWORD *)a1 + 8) )
      goto LABEL_2;
    if ( !*((_QWORD *)a1 + 7) )
    {
      v22 = *((_QWORD *)a2 + 11);
      if ( !v22 )
        v22 = *((_QWORD *)a2 + 12);
      *((_QWORD *)a1 + 7) = v22;
      v4 = 1;
    }
    v23 = *((_QWORD *)a2 + 11);
    if ( !v23 )
      v23 = *((_QWORD *)a2 + 12);
    *((_QWORD *)a1 + 8) = v23;
    goto LABEL_51;
  }
  a3 = 1LL;
  if ( v10 == 1 )
  {
    v20 = *((_DWORD *)a1 + 16);
    if ( !v20 )
      goto LABEL_2;
    v21 = *((_DWORD *)a1 + 14);
    if ( v21 )
    {
      v4 = 1;
      *((_DWORD *)a1 + 14) = v21 - 1;
    }
    *((_DWORD *)a1 + 16) = v20 - 1;
LABEL_51:
    if ( !v4 )
      goto LABEL_14;
    goto LABEL_52;
  }
  if ( v10 == 2 )
  {
    if ( *((_BYTE *)a1 + 27) )
      v17 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
    else
      v17 = *((_QWORD *)a1 + 8);
    v18 = *((_QWORD *)a2 + 38);
    if ( v17 >= v18 )
    {
      if ( *((_BYTE *)a1 + 27) )
      {
        v19 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 32LL);
        v18 = *((_QWORD *)a2 + 38);
      }
      else
      {
        v19 = *((_QWORD *)a1 + 9);
      }
      if ( v19 >= v18 )
        goto LABEL_52;
LABEL_14:
      v13 = (char *)a2 + 288;
      if ( (unsigned int)(*((_DWORD *)a1 + 11) - 4) <= 1 )
      {
        v14 = (char *)(v7 + 816);
      }
      else if ( v5 )
      {
        v14 = (char *)a1 + 112;
      }
      else
      {
        v14 = (char *)a1 + 96;
      }
      v15 = (char **)*((_QWORD *)v14 + 1);
      if ( *v15 != v14 )
        __fastfail(3u);
      *(_QWORD *)v13 = v14;
      *((_QWORD *)v13 + 1) = v15;
      *v15 = v13;
      *((_QWORD *)v14 + 1) = v13;
      _InterlockedAdd((volatile signed __int32 *)a1 + 8, 1u);
      return 0LL;
    }
    if ( *((_BYTE *)a1 + 25) )
      goto LABEL_27;
LABEL_2:
    v8 = WdLogNewEntry5_WdAssertion(a1, a2, a3);
    WdLogEvent5_WdAssertion(v8);
    return 3221225473LL;
  }
  if ( (unsigned int)(v10 - 4) > 1 )
    goto LABEL_14;
  v11 = *((_QWORD *)a2 + 38);
  if ( !*((_BYTE *)a1 + 28) )
  {
    v12 = (unsigned __int64 *)*((_QWORD *)a1 + 8);
    if ( *((_BYTE *)a1 + 29) )
    {
      if ( *v12 >= v11 )
        goto LABEL_52;
      goto LABEL_12;
    }
    if ( *(_DWORD *)v12 - (int)v11 < 0 )
    {
LABEL_12:
      if ( *((_QWORD *)a1 + 10) )
      {
        ++*(_DWORD *)(v7 + 812);
        *((_DWORD *)a2 + 68) |= 8u;
        goto LABEL_14;
      }
      if ( *((_BYTE *)a1 + 30) )
      {
        if ( *((_BYTE *)a1 + 27) )
          v16 = *(_QWORD *)(*((_QWORD *)a1 + 26) + 40LL);
        else
          v16 = *((_DWORD *)a1 + 11) == 2 ? *((_QWORD *)a1 + 8) : *((_QWORD *)a1 + 11);
        if ( *((_QWORD *)a2 + 38) <= v16 )
          goto LABEL_14;
      }
LABEL_27:
      ++*((_DWORD *)a1 + 9);
      v5 = 1;
      ++*(_DWORD *)(v3 + 156);
      ++*(_DWORD *)(v6 + 1588);
      ++*(_DWORD *)(v7 + 808);
      *((_DWORD *)a2 + 68) |= 4u;
      goto LABEL_14;
    }
  }
LABEL_52:
  *((_DWORD *)a2 + 68) |= 1u;
  return 0LL;
}
